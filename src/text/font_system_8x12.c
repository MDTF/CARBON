/*
 * 8x12 Bitmap Font
 *
 * Exported by FontTFTtoBitmap
 *
 * This file is part of CARBON.
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
#include <inttypes.h>

const uint8_t font_system_8x12_bitmap[95][12] = {
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },  // ' '
    { 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x00, 0x0c, 0x0c, 0x00, 0x00, 0x00 },  // '!'
    { 0x12, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },  // '"'
    { 0x12, 0x3f, 0x3f, 0x12, 0x12, 0x12, 0x3f, 0x3f, 0x12, 0x00, 0x00, 0x00 },  // '#'
    { 0x0c, 0x3f, 0x3f, 0x0f, 0x3f, 0x3c, 0x3f, 0x3f, 0x0c, 0x00, 0x00, 0x00 },  // '$'
    { 0x06, 0x0f, 0x3f, 0x36, 0x1e, 0x1b, 0x3f, 0x3c, 0x18, 0x00, 0x00, 0x00 },  // '%'
    { 0x06, 0x0f, 0x0f, 0x0f, 0x3f, 0x3f, 0x1f, 0x3f, 0x36, 0x00, 0x00, 0x00 },  // '&'
    { 0x0c, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },  // '''
    { 0x18, 0x1e, 0x06, 0x06, 0x06, 0x06, 0x06, 0x1e, 0x18, 0x00, 0x00, 0x00 },  // '('
    { 0x06, 0x1e, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1e, 0x06, 0x00, 0x00, 0x00 },  // ')'
    { 0x0c, 0x1e, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },  // '*'
    { 0x00, 0x0c, 0x0c, 0x0c, 0x3f, 0x0c, 0x0c, 0x0c, 0x00, 0x00, 0x00, 0x00 },  // '+'
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x0c, 0x08, 0x04, 0x00 },  // ','
    { 0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },  // '-'
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x0c, 0x00, 0x00, 0x00 },  // '.'
    { 0x00, 0x30, 0x30, 0x18, 0x1e, 0x06, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00 },  // '/'
    { 0x1e, 0x3f, 0x33, 0x3b, 0x3f, 0x37, 0x33, 0x3f, 0x1e, 0x00, 0x00, 0x00 },  // '0'
    { 0x0c, 0x0e, 0x0e, 0x0c, 0x0c, 0x0c, 0x0c, 0x1e, 0x1e, 0x00, 0x00, 0x00 },  // '1'
    { 0x1e, 0x3f, 0x33, 0x30, 0x1c, 0x0e, 0x06, 0x3f, 0x3f, 0x00, 0x00, 0x00 },  // '2'
    { 0x1e, 0x3f, 0x33, 0x30, 0x1c, 0x30, 0x33, 0x3f, 0x1e, 0x00, 0x00, 0x00 },  // '3'
    { 0x18, 0x1e, 0x16, 0x13, 0x3f, 0x3f, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00 },  // '4'
    { 0x3f, 0x3f, 0x03, 0x1f, 0x3f, 0x30, 0x33, 0x3f, 0x1e, 0x00, 0x00, 0x00 },  // '5'
    { 0x1e, 0x3f, 0x03, 0x1f, 0x3f, 0x33, 0x33, 0x3f, 0x1e, 0x00, 0x00, 0x00 },  // '6'
    { 0x3f, 0x3f, 0x10, 0x10, 0x18, 0x0c, 0x0c, 0x0c, 0x0c, 0x00, 0x00, 0x00 },  // '7'
    { 0x1e, 0x3f, 0x33, 0x33, 0x1e, 0x33, 0x33, 0x3f, 0x1e, 0x00, 0x00, 0x00 },  // '8'
    { 0x1e, 0x3f, 0x33, 0x33, 0x3f, 0x3e, 0x30, 0x3f, 0x1e, 0x00, 0x00, 0x00 },  // '9'
    { 0x00, 0x0c, 0x0c, 0x00, 0x00, 0x00, 0x0c, 0x0c, 0x00, 0x00, 0x00, 0x00 },  // ':'
    { 0x00, 0x0c, 0x0c, 0x00, 0x00, 0x00, 0x0c, 0x0c, 0x04, 0x00, 0x00, 0x00 },  // ';'
    { 0x00, 0x30, 0x38, 0x1e, 0x07, 0x1e, 0x38, 0x30, 0x00, 0x00, 0x00, 0x00 },  // '<'
    { 0x00, 0x00, 0x3f, 0x3f, 0x00, 0x3f, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00 },  // '='
    { 0x00, 0x03, 0x07, 0x1e, 0x38, 0x1e, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00 },  // '>'
    { 0x1e, 0x3f, 0x33, 0x30, 0x1c, 0x0c, 0x00, 0x0c, 0x0c, 0x00, 0x00, 0x00 },  // '?'
    { 0x1e, 0x3f, 0x3b, 0x3f, 0x3f, 0x3f, 0x3b, 0x3f, 0x3e, 0x00, 0x00, 0x00 },  // '@'
    { 0x0c, 0x1e, 0x33, 0x33, 0x3f, 0x3f, 0x33, 0x33, 0x33, 0x00, 0x00, 0x00 },  // 'A'
    { 0x1f, 0x3f, 0x33, 0x33, 0x1f, 0x33, 0x33, 0x3f, 0x1f, 0x00, 0x00, 0x00 },  // 'B'
    { 0x1e, 0x3f, 0x33, 0x03, 0x03, 0x03, 0x33, 0x3f, 0x1e, 0x00, 0x00, 0x00 },  // 'C'
    { 0x1f, 0x3f, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3f, 0x1f, 0x00, 0x00, 0x00 },  // 'D'
    { 0x3f, 0x3f, 0x03, 0x03, 0x1f, 0x03, 0x03, 0x3f, 0x3f, 0x00, 0x00, 0x00 },  // 'E'
    { 0x3f, 0x3f, 0x03, 0x03, 0x1f, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00 },  // 'F'
    { 0x1e, 0x3f, 0x33, 0x03, 0x3b, 0x3b, 0x33, 0x3f, 0x1e, 0x00, 0x00, 0x00 },  // 'G'
    { 0x33, 0x33, 0x33, 0x33, 0x3f, 0x33, 0x33, 0x33, 0x33, 0x00, 0x00, 0x00 },  // 'H'
    { 0x1e, 0x1e, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x1e, 0x1e, 0x00, 0x00, 0x00 },  // 'I'
    { 0x3e, 0x3e, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1f, 0x0e, 0x00, 0x00, 0x00 },  // 'J'
    { 0x33, 0x3b, 0x1f, 0x0f, 0x07, 0x0f, 0x1f, 0x3b, 0x33, 0x00, 0x00, 0x00 },  // 'K'
    { 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x3f, 0x3f, 0x00, 0x00, 0x00 },  // 'L'
    { 0x33, 0x3f, 0x3f, 0x3f, 0x3f, 0x33, 0x33, 0x33, 0x33, 0x00, 0x00, 0x00 },  // 'M'
    { 0x33, 0x33, 0x37, 0x37, 0x3f, 0x3b, 0x3b, 0x33, 0x33, 0x00, 0x00, 0x00 },  // 'N'
    { 0x1e, 0x3f, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3f, 0x1e, 0x00, 0x00, 0x00 },  // 'O'
    { 0x1f, 0x3f, 0x33, 0x13, 0x1f, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00 },  // 'P'
    { 0x1e, 0x3f, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3f, 0x1e, 0x1c, 0x38, 0x00 },  // 'Q'
    { 0x1f, 0x3f, 0x33, 0x33, 0x1f, 0x1b, 0x13, 0x33, 0x33, 0x00, 0x00, 0x00 },  // 'R'
    { 0x1e, 0x3f, 0x33, 0x03, 0x1e, 0x30, 0x33, 0x3f, 0x1e, 0x00, 0x00, 0x00 },  // 'S'
    { 0x3f, 0x3f, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x00, 0x00, 0x00 },  // 'T'
    { 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3f, 0x1e, 0x00, 0x00, 0x00 },  // 'U'
    { 0x33, 0x33, 0x33, 0x33, 0x33, 0x12, 0x1e, 0x1e, 0x0c, 0x00, 0x00, 0x00 },  // 'V'
    { 0x33, 0x33, 0x33, 0x33, 0x3f, 0x3f, 0x3f, 0x3f, 0x33, 0x00, 0x00, 0x00 },  // 'W'
    { 0x33, 0x33, 0x33, 0x1e, 0x1e, 0x1e, 0x33, 0x33, 0x33, 0x00, 0x00, 0x00 },  // 'X'
    { 0x33, 0x33, 0x12, 0x12, 0x1e, 0x0c, 0x0c, 0x0c, 0x0c, 0x00, 0x00, 0x00 },  // 'Y'
    { 0x3f, 0x3f, 0x30, 0x18, 0x1e, 0x06, 0x03, 0x3f, 0x3f, 0x00, 0x00, 0x00 },  // 'Z'
    { 0x1e, 0x1e, 0x06, 0x06, 0x06, 0x06, 0x06, 0x1e, 0x1e, 0x00, 0x00, 0x00 },  // '['
    { 0x00, 0x03, 0x03, 0x06, 0x1e, 0x18, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00 },  // '\'
    { 0x1e, 0x1e, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1e, 0x1e, 0x00, 0x00, 0x00 },  // ']'
    { 0x0c, 0x1e, 0x1e, 0x12, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },  // '^'
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x3f, 0x00, 0x00, 0x00 },  // '_'
    { 0x06, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },  // '`'
    { 0x00, 0x00, 0x00, 0x1e, 0x3e, 0x3e, 0x3f, 0x3f, 0x3e, 0x00, 0x00, 0x00 },  // 'a'
    { 0x03, 0x03, 0x03, 0x1f, 0x3f, 0x33, 0x33, 0x3f, 0x1f, 0x00, 0x00, 0x00 },  // 'b'
    { 0x00, 0x00, 0x00, 0x1e, 0x3f, 0x03, 0x03, 0x3f, 0x1e, 0x00, 0x00, 0x00 },  // 'c'
    { 0x30, 0x30, 0x30, 0x3e, 0x3f, 0x33, 0x33, 0x3f, 0x3e, 0x00, 0x00, 0x00 },  // 'd'
    { 0x00, 0x00, 0x00, 0x1e, 0x3f, 0x3f, 0x3f, 0x1f, 0x1e, 0x00, 0x00, 0x00 },  // 'e'
    { 0x18, 0x3e, 0x06, 0x06, 0x1f, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00 },  // 'f'
    { 0x00, 0x00, 0x00, 0x3e, 0x3f, 0x33, 0x33, 0x3f, 0x3e, 0x30, 0x1e, 0x00 },  // 'g'
    { 0x03, 0x03, 0x03, 0x1f, 0x3f, 0x33, 0x33, 0x33, 0x33, 0x00, 0x00, 0x00 },  // 'h'
    { 0x0c, 0x0c, 0x00, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x00, 0x00, 0x00 },  // 'i'
    { 0x10, 0x10, 0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x12, 0x1e, 0x00 },  // 'j'
    { 0x02, 0x02, 0x02, 0x12, 0x1e, 0x0e, 0x0e, 0x1e, 0x12, 0x00, 0x00, 0x00 },  // 'k'
    { 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x1e, 0x1e, 0x00, 0x00, 0x00 },  // 'l'
    { 0x00, 0x00, 0x00, 0x1f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x00, 0x00, 0x00 },  // 'm'
    { 0x00, 0x00, 0x00, 0x1f, 0x3f, 0x33, 0x33, 0x33, 0x33, 0x00, 0x00, 0x00 },  // 'n'
    { 0x00, 0x00, 0x00, 0x1e, 0x3f, 0x33, 0x33, 0x3f, 0x1e, 0x00, 0x00, 0x00 },  // 'o'
    { 0x00, 0x00, 0x00, 0x1f, 0x3f, 0x33, 0x33, 0x3f, 0x1f, 0x03, 0x03, 0x00 },  // 'p'
    { 0x00, 0x00, 0x00, 0x3e, 0x3f, 0x33, 0x33, 0x3f, 0x3e, 0x30, 0x30, 0x00 },  // 'q'
    { 0x00, 0x00, 0x00, 0x1f, 0x3f, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00 },  // 'r'
    { 0x00, 0x00, 0x00, 0x1e, 0x1f, 0x1f, 0x3e, 0x3f, 0x1f, 0x00, 0x00, 0x00 },  // 's'
    { 0x00, 0x06, 0x06, 0x1f, 0x1f, 0x06, 0x06, 0x3e, 0x18, 0x00, 0x00, 0x00 },  // 't'
    { 0x00, 0x00, 0x00, 0x33, 0x33, 0x33, 0x33, 0x3f, 0x3e, 0x00, 0x00, 0x00 },  // 'u'
    { 0x00, 0x00, 0x00, 0x33, 0x33, 0x12, 0x1e, 0x1e, 0x0c, 0x00, 0x00, 0x00 },  // 'v'
    { 0x00, 0x00, 0x00, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x1e, 0x00, 0x00, 0x00 },  // 'w'
    { 0x00, 0x00, 0x00, 0x33, 0x3f, 0x1e, 0x1e, 0x3f, 0x33, 0x00, 0x00, 0x00 },  // 'x'
    { 0x00, 0x00, 0x00, 0x33, 0x33, 0x33, 0x33, 0x3f, 0x3e, 0x30, 0x1e, 0x00 },  // 'y'
    { 0x00, 0x00, 0x00, 0x3f, 0x3f, 0x1c, 0x0e, 0x3f, 0x3f, 0x00, 0x00, 0x00 },  // 'z'
    { 0x18, 0x1c, 0x0c, 0x0c, 0x06, 0x0c, 0x0c, 0x1c, 0x18, 0x00, 0x00, 0x00 },  // '{'
    { 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x00, 0x00, 0x00 },  // '|'
    { 0x06, 0x0e, 0x0c, 0x0c, 0x18, 0x0c, 0x0c, 0x0e, 0x06, 0x00, 0x00, 0x00 },  // '}'
    { 0x00, 0x00, 0x00, 0x32, 0x3f, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }  // '~'
};

/*
 * 8x12 Bitmap Font
 *
 * found here: http://forums.parallax.com/discussion/128596/need-8x12-font
 */
/* 
#include <inttypes.h>
#include <stdio.h>

const uint8_t font_system_8x12_bitmap[95][12] = {
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},  // ' '
    {0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x04, 0x00, 0x00},  // '!'
    {0x00, 0x14, 0x0a, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},  // '"'
    {0x00, 0x00, 0x14, 0x14, 0x3f, 0x14, 0x0a, 0x3f, 0x0a, 0x0a, 0x00, 0x00},  // '#'
    {0x00, 0x04, 0x1e, 0x15, 0x05, 0x06, 0x0c, 0x14, 0x15, 0x0f, 0x04, 0x00},  // '$'
    {0x00, 0x00, 0x12, 0x15, 0x0d, 0x0a, 0x14, 0x2c, 0x2a, 0x12, 0x00, 0x00},  // '%'
    {0x00, 0x00, 0x04, 0x0a, 0x0a, 0x1e, 0x15, 0x15, 0x09, 0x36, 0x00, 0x00},  // '&'
    {0x00, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},  // '''
    {0x00, 0x20, 0x10, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x10, 0x20, 0x00},  // '('
    {0x00, 0x02, 0x04, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x04, 0x02, 0x00},  // ')'
    {0x00, 0x00, 0x00, 0x04, 0x15, 0x0e, 0x0e, 0x15, 0x04, 0x00, 0x00, 0x00},  // '*'
    {0x00, 0x00, 0x04, 0x04, 0x04, 0x1f, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00},  // '+'
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x01},  // ','
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},  // '-'
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00},  // '.'
    {0x00, 0x10, 0x08, 0x08, 0x08, 0x04, 0x04, 0x02, 0x02, 0x02, 0x01, 0x00},  // '/'
    {0x00, 0x00, 0x0e, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e, 0x00, 0x00},  // '0'
    {0x00, 0x00, 0x04, 0x06, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0e, 0x00, 0x00},  // '1'
    {0x00, 0x00, 0x0e, 0x11, 0x11, 0x08, 0x04, 0x02, 0x01, 0x1f, 0x00, 0x00},  // '2'
    {0x00, 0x00, 0x0e, 0x11, 0x10, 0x0c, 0x10, 0x10, 0x11, 0x0e, 0x00, 0x00},  // '3'
    {0x00, 0x00, 0x08, 0x0c, 0x0a, 0x0a, 0x09, 0x1e, 0x08, 0x18, 0x00, 0x00},  // '4'
    {0x00, 0x00, 0x1f, 0x01, 0x01, 0x0f, 0x10, 0x10, 0x11, 0x0e, 0x00, 0x00},  // '5'
    {0x00, 0x00, 0x0e, 0x09, 0x01, 0x0f, 0x11, 0x11, 0x11, 0x0e, 0x00, 0x00},  // '6'
    {0x00, 0x00, 0x1f, 0x09, 0x08, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00},  // '7'
    {0x00, 0x00, 0x0e, 0x11, 0x11, 0x0e, 0x11, 0x11, 0x11, 0x0e, 0x00, 0x00},  // '8'
    {0x00, 0x00, 0x0e, 0x11, 0x11, 0x11, 0x1e, 0x10, 0x12, 0x0e, 0x00, 0x00},  // '9'
    {0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00},  // ':'
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x04, 0x00},  // ';'
    {0x00, 0x20, 0x10, 0x08, 0x04, 0x02, 0x04, 0x08, 0x10, 0x20, 0x00, 0x00},  // '<'
    {0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00},  // '='
    {0x00, 0x02, 0x04, 0x08, 0x10, 0x20, 0x10, 0x08, 0x04, 0x02, 0x00, 0x00},  // '>'
    {0x00, 0x00, 0x0e, 0x11, 0x11, 0x08, 0x04, 0x04, 0x00, 0x04, 0x00, 0x00},  // '?'
    {0x00, 0x00, 0x0e, 0x11, 0x19, 0x15, 0x15, 0x1d, 0x01, 0x1e, 0x00, 0x00},  // '@'
    {0x00, 0x00, 0x04, 0x04, 0x0c, 0x0a, 0x0a, 0x1e, 0x12, 0x33, 0x00, 0x00},  // 'A'
    {0x00, 0x00, 0x0f, 0x12, 0x12, 0x0e, 0x12, 0x12, 0x12, 0x0f, 0x00, 0x00},  // 'B'
    {0x00, 0x00, 0x1e, 0x11, 0x01, 0x01, 0x01, 0x01, 0x11, 0x0e, 0x00, 0x00},  // 'C'
    {0x00, 0x00, 0x0f, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x0f, 0x00, 0x00},  // 'D'
    {0x00, 0x00, 0x1f, 0x12, 0x0a, 0x0e, 0x0a, 0x02, 0x12, 0x1f, 0x00, 0x00},  // 'E'
    {0x00, 0x00, 0x1f, 0x12, 0x0a, 0x0e, 0x0a, 0x02, 0x02, 0x07, 0x00, 0x00},  // 'F'
    {0x00, 0x00, 0x1c, 0x12, 0x01, 0x01, 0x39, 0x11, 0x12, 0x0c, 0x00, 0x00},  // 'G'
    {0x00, 0x00, 0x33, 0x12, 0x12, 0x1e, 0x12, 0x12, 0x12, 0x33, 0x00, 0x00},  // 'H'
    {0x00, 0x00, 0x1f, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x1f, 0x00, 0x00},  // 'I'
    {0x00, 0x00, 0x3e, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x09, 0x07, 0x00},  // 'J'
    {0x00, 0x00, 0x37, 0x12, 0x0a, 0x06, 0x0a, 0x0a, 0x12, 0x37, 0x00, 0x00},  // 'K'
    {0x00, 0x00, 0x07, 0x02, 0x02, 0x02, 0x02, 0x02, 0x22, 0x3f, 0x00, 0x00},  // 'L'
    {0x00, 0x00, 0x1b, 0x1b, 0x1b, 0x1b, 0x15, 0x15, 0x15, 0x15, 0x00, 0x00},  // 'M'
    {0x00, 0x00, 0x3b, 0x12, 0x16, 0x16, 0x1a, 0x1a, 0x12, 0x17, 0x00, 0x00},  // 'N'
    {0x00, 0x00, 0x0e, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e, 0x00, 0x00},  // 'O'
    {0x00, 0x00, 0x0f, 0x12, 0x12, 0x0e, 0x02, 0x02, 0x02, 0x07, 0x00, 0x00},  // 'P'
    {0x00, 0x00, 0x0e, 0x11, 0x11, 0x11, 0x11, 0x17, 0x19, 0x0e, 0x18, 0x00},  // 'Q'
    {0x00, 0x00, 0x0f, 0x12, 0x12, 0x0e, 0x0a, 0x12, 0x12, 0x37, 0x00, 0x00},  // 'R'
    {0x00, 0x00, 0x1e, 0x11, 0x01, 0x06, 0x08, 0x10, 0x11, 0x0f, 0x00, 0x00},  // 'S'
    {0x00, 0x00, 0x1f, 0x15, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0e, 0x00, 0x00},  // 'T'
    {0x00, 0x00, 0x33, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x0c, 0x00, 0x00},  // 'U'
    {0x00, 0x00, 0x33, 0x12, 0x12, 0x0a, 0x0a, 0x0c, 0x04, 0x04, 0x00, 0x00},  // 'V'
    {0x00, 0x00, 0x15, 0x15, 0x15, 0x0e, 0x0a, 0x0a, 0x0a, 0x0a, 0x00, 0x00},  // 'W'
    {0x00, 0x00, 0x1b, 0x0a, 0x0a, 0x04, 0x04, 0x0a, 0x0a, 0x1b, 0x00, 0x00},  // 'X'
    {0x00, 0x00, 0x1b, 0x0a, 0x0a, 0x04, 0x04, 0x04, 0x04, 0x0e, 0x00, 0x00},  // 'Y'
    {0x00, 0x00, 0x1f, 0x09, 0x08, 0x04, 0x04, 0x02, 0x12, 0x1f, 0x00, 0x00},  // 'Z'
    {0x00, 0x1c, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x1c, 0x00},  // '['
    {0x00, 0x02, 0x02, 0x02, 0x04, 0x04, 0x08, 0x08, 0x08, 0x10, 0x00, 0x00},  // '\'
    {0x00, 0x0e, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0e, 0x00},  // ']'
    {0x00, 0x04, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},  // '^'
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f},  // '_'
    {0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},  // '`'
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x12, 0x1c, 0x12, 0x3c, 0x00, 0x00},  // 'a'
    {0x00, 0x00, 0x03, 0x02, 0x02, 0x0e, 0x12, 0x12, 0x12, 0x0e, 0x00, 0x00},  // 'b'
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x12, 0x02, 0x02, 0x1c, 0x00, 0x00},  // 'c'
    {0x00, 0x00, 0x18, 0x10, 0x10, 0x1c, 0x12, 0x12, 0x12, 0x3c, 0x00, 0x00},  // 'd'
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x12, 0x1e, 0x02, 0x1c, 0x00, 0x00},  // 'e'
    {0x00, 0x00, 0x38, 0x04, 0x04, 0x1e, 0x04, 0x04, 0x04, 0x1e, 0x00, 0x00},  // 'f'
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x12, 0x0c, 0x02, 0x1e, 0x22, 0x1c},  // 'g'
    {0x00, 0x00, 0x03, 0x02, 0x02, 0x0e, 0x12, 0x12, 0x12, 0x37, 0x00, 0x00},  // 'h'
    {0x00, 0x00, 0x04, 0x00, 0x00, 0x06, 0x04, 0x04, 0x04, 0x0e, 0x00, 0x00},  // 'i'
    {0x00, 0x00, 0x08, 0x00, 0x00, 0x0c, 0x08, 0x08, 0x08, 0x08, 0x08, 0x07},  // 'j'
    {0x00, 0x00, 0x03, 0x02, 0x02, 0x3a, 0x0a, 0x0e, 0x12, 0x37, 0x00, 0x00},  // 'k'
    {0x00, 0x00, 0x07, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x1f, 0x00, 0x00},  // 'l'
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x15, 0x15, 0x15, 0x15, 0x00, 0x00},  // 'm'
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x12, 0x12, 0x12, 0x37, 0x00, 0x00},  // 'n'
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x12, 0x12, 0x12, 0x0c, 0x00, 0x00},  // 'o'
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x12, 0x12, 0x12, 0x0e, 0x02, 0x07},  // 'p'
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x12, 0x12, 0x12, 0x1c, 0x10, 0x38},  // 'q'
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0x06, 0x02, 0x02, 0x07, 0x00, 0x00},  // 'r'
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x02, 0x0c, 0x10, 0x1e, 0x00, 0x00},  // 's'
    {0x00, 0x00, 0x00, 0x04, 0x04, 0x0e, 0x04, 0x04, 0x04, 0x18, 0x00, 0x00},  // 't'
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0x12, 0x12, 0x12, 0x3c, 0x00, 0x00},  // 'u'
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x37, 0x12, 0x0a, 0x0c, 0x04, 0x00, 0x00},  // 'v'
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x15, 0x0e, 0x0a, 0x0a, 0x00, 0x00},  // 'w'
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0x0a, 0x04, 0x0a, 0x1b, 0x00, 0x00},  // 'x'
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x37, 0x12, 0x0a, 0x0c, 0x04, 0x04, 0x03},  // 'y'
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x08, 0x04, 0x04, 0x1e, 0x00, 0x00},  // 'z'
    {0x00, 0x18, 0x08, 0x08, 0x08, 0x04, 0x08, 0x08, 0x08, 0x08, 0x18, 0x00},  // '{'
    {0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08},  // '|'
    {0x00, 0x06, 0x04, 0x04, 0x04, 0x08, 0x04, 0x04, 0x04, 0x04, 0x06, 0x00},  // '}'
    {0x02, 0x25, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}  // '~'

}; 
*/
/*
uint8_t swap_bits(uint8_t data) {
    int i, in, out = 0;
    in = data;
    for(i = 0; i < 8; i ++) {
        out = out >> 1;
        if(in & 0x80) {
            out |= 0x80;
        }
        in = in << 1;
    }
    return out;
}

int main(void) {
    int i, j;
    for(i = 0; i < 95; i ++) {
        printf("    {");
        for(j = 0; j < 12; j ++) {
            printf("0x%02x", swap_bits(font8x12_bitmap[i][j]));
            if(j < 11) printf(", ");
        }
        if(i < 94) printf("},");
        else printf("}");
        printf("  // '%c'\n", (char)(i + 32));
    }   
}
*/