/*
 * CARBON Sequencer Pattern Lookup
 *
 * Written by: Andrew Kilpatrick
 * Copyright 2015: Kilpatrick Audio
 *
 * CARBON is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * CARBON is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with CARBON.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#include "pattern.h"
#include "song.h"
#include "seq_ctrl.h"
#include "../config.h"
#include "../config_store.h"
#include "../util/log.h"
#include "../util/state_change.h"
#include "../util/state_change_events.h"
#include <inttypes.h>

// defines
#define PATTERN_NUM_ROWS 8
#define PATTERN_VALID_TOKEN 0x50415454
#define PATTERN_VALID_TOKEN_OFFSET 64

// ROM patterns used when config data is blank
const uint8_t pattern_rom[][PATTERN_NUM_ROWS] = {
    { 0x28, 0x24, 0x14, 0x0e, 0x0e, 0x54, 0x24, 0x08 },  // Kilpatrick
    { 0x3c, 0x3c, 0xc3, 0xdb, 0xdb, 0xc3, 0x3c, 0x3c },  // Centre Squares
    { 0x18, 0x18, 0x18, 0xe7, 0xe7, 0x18, 0x18, 0x18 },  // Fan
    { 0x6c, 0x6c, 0x6c, 0xe7, 0xe7, 0x36, 0x36, 0x36 },  // Widget
    { 0x3c, 0x3c, 0x3c, 0xe7, 0xe7, 0x3c, 0x3c, 0x3c },  // Second Aid
    { 0xff, 0x99, 0x99, 0xff, 0xff, 0x99, 0x99, 0xff },  // Four Square
    { 0xff, 0xff, 0x99, 0xff, 0xff, 0xbd, 0xc3, 0xff },  // Smiley
    { 0x11, 0x33, 0x66, 0xcc, 0xcc, 0x66, 0x33, 0x11 },  // Shift Right
    { 0x1f, 0x3e, 0x7c, 0xf8, 0xf8, 0x7c, 0x3e, 0x1f },  // Arrow
    { 0xff, 0xfe, 0xfc, 0xf8, 0xf0, 0xe0, 0xc0, 0x80 },  // Slope 2
    { 0x81, 0xc3, 0xe7, 0xff, 0xff, 0xe7, 0xc3, 0x81 },  // Black Tie Event
    { 0xff, 0x81, 0xbd, 0xa5, 0xa5, 0xbd, 0x81, 0xff },  // Target Practice
    { 0x55, 0xaa, 0xaa, 0x55, 0x66, 0x99, 0x66, 0x99 },  // Layout
    { 0x99, 0x3c, 0x66, 0xdb, 0xdb, 0x66, 0x3c, 0x99 },  // Bomb
    { 0xff, 0x22, 0xff, 0x44, 0xff, 0x22, 0xff, 0x44 },  // Stackup
    { 0x99, 0xff, 0x99, 0xbd, 0x42, 0x5a, 0x42, 0xbd },  // Plan View
    { 0xa5, 0x5a, 0xa5, 0x5a, 0x5a, 0xa5, 0x5a, 0xa5 },  // Sakura
    { 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff },  // One Two Three
    { 0xff, 0xff, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00 },  // Pancake
    { 0xff, 0x80, 0xfe, 0x02, 0xbe, 0xa0, 0xbd, 0x85 },  // Maze
    { 0xc7, 0xe3, 0x71, 0x38, 0x1c, 0x8e, 0xc7, 0xe3 },  // Caution
    { 0xc3, 0xe7, 0x7e, 0x3c, 0x3c, 0x7e, 0xe7, 0xc3 },  // EX
    { 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99 },  // Vertical Lines
    { 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33 },  // Vertical Lines 2
    { 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd },  // Vertical Lines 3
    { 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55 },  // Vertical Lines 4
    { 0xd5, 0xd5, 0xd5, 0xd5, 0xab, 0xab, 0xab, 0xab },  // Alternating
    { 0x0f, 0x0f, 0x0f, 0x0f, 0xf0, 0xf0, 0xf0, 0xf0 },  // Feeling Square
    { 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa },  // Checkers 2
    { 0x18, 0x3c, 0x7e, 0xdb, 0xff, 0x24, 0x5a, 0xa5 },  // Invaders
    { 0x00, 0x66, 0xff, 0xff, 0x7e, 0x3c, 0x18, 0x00 },  // LOVE
    { 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff }   // Everything
};

struct pattern_store {
    uint8_t pat[SEQ_NUM_PATTERNS][PATTERN_NUM_ROWS];
};
struct pattern_store patterns;

// local functions
void pattern_load_rom_defaults(void);

// init the pattern lookup
void pattern_init(void) {
    int pattern, row;
    for(pattern = 0; pattern < SEQ_NUM_PATTERNS; pattern ++) {
        for(row = 0; row < PATTERN_NUM_ROWS; row ++) {
            patterns.pat[pattern][row] = 0x55;
        }
    }

    // register for events
    state_change_register(pattern_handle_state_change, SCEC_CONFIG);
}

// handle state change
void pattern_handle_state_change(int event_type, 
        int *data, int data_len) {
    switch(event_type) {
        case SCE_CONFIG_LOADED:
            log_debug("phsc - config loaded");
            pattern_load_patterns();
            break;
        case SCE_CONFIG_CLEARED:
            log_debug("phsc - config cleared");
            pattern_load_rom_defaults();
            break;
    }  
}

// load the patterns from the config store
void pattern_load_patterns(void) {
    int pattern, addr;
    int32_t temp;
    int32_t valid_token;
    // check the valid token first
    valid_token = config_store_get_val(CONFIG_STORE_PATTERN_BANK + 
        PATTERN_VALID_TOKEN_OFFSET);
    // token not found - let's use the ROM patterns and store them back
    if(valid_token != PATTERN_VALID_TOKEN) {
        log_debug("plp - token not found - using ROM patterns");
        pattern_load_rom_defaults();
    }
    // token is valid - let's load the patterns from the config store
    else {
        log_debug("plp - token found - loading from config");
        addr = CONFIG_STORE_PATTERN_BANK;
        for(pattern = 0; pattern < SEQ_NUM_PATTERNS; pattern ++) {
            // get 4 bytes - MSB first order
            temp = config_store_get_val(addr);
            patterns.pat[pattern][0] = (temp >> 24) & 0xff;
            patterns.pat[pattern][1] = (temp >> 16) & 0xff;
            patterns.pat[pattern][2] = (temp >> 8) & 0xff;
            patterns.pat[pattern][3] = temp & 0xff;
            addr ++;
            // get 4 bytes - MSB first order
            temp = config_store_get_val(addr);
            patterns.pat[pattern][4] = (temp >> 24) & 0xff;
            patterns.pat[pattern][5] = (temp >> 16) & 0xff;
            patterns.pat[pattern][6] = (temp >> 8) & 0xff;
            patterns.pat[pattern][7] = temp & 0xff;
            addr ++;
        }        
    }
}

// check whether the current step is enabled on a pattern
int pattern_get_step_enable(int scene, int track, int pattern, int step) {
    if(scene < 0 || scene >= SEQ_NUM_SCENES) {
        return 0;
    }
    if(track < 0 || track >= SEQ_NUM_TRACKS) {
        return 0;
    }
    if(pattern < 0 || pattern >= SEQ_NUM_PATTERNS) {
        return 0;
    }
    if(step < 0 || step >= SEQ_NUM_STEPS) {
        return 0;
    }
    if(pattern == PATTERN_AS_RECORDED) {
        if(song_get_num_step_events(scene, track, step)) {
            return 1;
        }
        return 0;
    }
    else {
        int row = (step >> 3) & 0x07;
        int col = step & 0x07;
        return (patterns.pat[pattern][row] >> col) & 0x01;
    }
}

//
// local functions
//
// local ROM defaults and store them in config store
void pattern_load_rom_defaults(void) {
    int addr, pattern, row;
    int32_t temp;
    
    addr = CONFIG_STORE_PATTERN_BANK;
    // write ROM patterns to config store
    for(pattern = 0; pattern < SEQ_NUM_PATTERNS; pattern ++) {
        // set 4 bytes - MSB first order
        temp = (pattern_rom[pattern][0] << 24) |
            (pattern_rom[pattern][1] << 16) |
            (pattern_rom[pattern][2] << 8) |
            pattern_rom[pattern][3];
        config_store_set_val(addr, temp);
        addr ++;
        // set 4 bytes - MSB first order
        temp = (pattern_rom[pattern][4] << 24) |
            (pattern_rom[pattern][5] << 16) |
            (pattern_rom[pattern][6] << 8) |
            pattern_rom[pattern][7];
        config_store_set_val(addr, temp);
        addr ++;
    }
    config_store_set_val(addr, PATTERN_VALID_TOKEN);
    // populate the pattern struct with the ROM data also
    for(pattern = 0; pattern < SEQ_NUM_PATTERNS; pattern ++) {
        for(row = 0; row < PATTERN_NUM_ROWS; row ++) {
            patterns.pat[pattern][row] = pattern_rom[pattern][row];
        }
    }
}

