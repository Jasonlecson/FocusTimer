/*******************************************************************************
 * Size: 20 px
 * Bpp: 1
 * Opts: --bpp 1 --size 20 --no-compress --font C:/Windows/Fonts/NotoSansSC-VF.ttf --symbols æðŋɑɒɔəɚεɜɝɡɪʃʊʌʒˈˌːθ --range 32-127 --format lvgl -o ui_font_ipa_20.c
 ******************************************************************************/

#include "lvgl.h"

#ifndef UI_FONT_IPA_20
#define UI_FONT_IPA_20 1
#endif

#if UI_FONT_IPA_20

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xe6,

    /* U+0022 "\"" */
    0x99, 0x99,

    /* U+0023 "#" */
    0x22, 0x11, 0x8, 0x84, 0x42, 0x27, 0xfc, 0x88,
    0x44, 0x42, 0x7f, 0x91, 0x8, 0x84, 0x42, 0x21,
    0x10,

    /* U+0024 "$" */
    0x8, 0x8, 0x1c, 0x22, 0x40, 0x40, 0x40, 0x20,
    0x10, 0xc, 0x2, 0x1, 0x1, 0x1, 0x1, 0x42,
    0x3c, 0x8, 0x8,

    /* U+0025 "%" */
    0x78, 0x10, 0x48, 0x10, 0x84, 0x20, 0x84, 0x20,
    0x84, 0x40, 0x84, 0x80, 0x84, 0x9e, 0x49, 0x12,
    0x79, 0x21, 0x2, 0x21, 0x2, 0x21, 0x4, 0x21,
    0x8, 0x21, 0x8, 0x12, 0x10, 0x1e,

    /* U+0026 "&" */
    0x1c, 0x6, 0x40, 0x88, 0x11, 0x2, 0x40, 0x50,
    0x4, 0x1, 0x81, 0x48, 0x50, 0x8a, 0x11, 0x41,
    0x48, 0x10, 0x85, 0xf, 0x18,

    /* U+0027 "'" */
    0xf0,

    /* U+0028 "(" */
    0x22, 0x44, 0x48, 0x88, 0x88, 0x88, 0x88, 0x44,
    0x42, 0x21,

    /* U+0029 ")" */
    0x84, 0x42, 0x22, 0x11, 0x11, 0x11, 0x11, 0x22,
    0x24, 0x48,

    /* U+002A "*" */
    0x21, 0x3e, 0xe5, 0x0,

    /* U+002B "+" */
    0x8, 0x4, 0x2, 0x1, 0xf, 0xf8, 0x40, 0x20,
    0x10, 0x8, 0x4, 0x0,

    /* U+002C "," */
    0x64, 0xa0,

    /* U+002D "-" */
    0xf8,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0x1, 0x2, 0x2, 0x2, 0x4, 0x4, 0x4, 0x8,
    0x8, 0x10, 0x10, 0x10, 0x20, 0x20, 0x20, 0x40,
    0x40, 0x40, 0x80, 0x80,

    /* U+0030 "0" */
    0x3c, 0x66, 0x42, 0xc3, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x81, 0x81, 0xc3, 0x42, 0x66, 0x3c,

    /* U+0031 "1" */
    0x30, 0xa0, 0x40, 0x81, 0x2, 0x4, 0x8, 0x10,
    0x20, 0x40, 0x81, 0x2, 0x3f, 0x80,

    /* U+0032 "2" */
    0x3c, 0x21, 0x20, 0x40, 0x20, 0x10, 0x8, 0x4,
    0x4, 0x4, 0x2, 0x2, 0x2, 0x2, 0x2, 0x3,
    0xfe,

    /* U+0033 "3" */
    0x3c, 0x43, 0x1, 0x1, 0x1, 0x6, 0x38, 0x6,
    0x3, 0x1, 0x1, 0x1, 0x81, 0xc2, 0x3c,

    /* U+0034 "4" */
    0x1, 0x0, 0xc0, 0x50, 0x14, 0x9, 0x2, 0x41,
    0x10, 0x84, 0x41, 0x10, 0x4f, 0xfc, 0x4, 0x1,
    0x0, 0x40, 0x10,

    /* U+0035 "5" */
    0x3f, 0x20, 0x10, 0x8, 0x4, 0x2, 0xf1, 0x8c,
    0x3, 0x0, 0x80, 0x40, 0x20, 0x18, 0x12, 0x18,
    0xf0,

    /* U+0036 "6" */
    0x1e, 0x21, 0x40, 0x40, 0x80, 0x9c, 0xa2, 0xc1,
    0x81, 0x81, 0x81, 0x81, 0x43, 0x62, 0x3c,

    /* U+0037 "7" */
    0xff, 0x80, 0x80, 0x80, 0x40, 0x40, 0x20, 0x20,
    0x10, 0x8, 0x8, 0x4, 0x2, 0x1, 0x0, 0x80,
    0x40,

    /* U+0038 "8" */
    0x1c, 0x11, 0x10, 0x48, 0x24, 0x12, 0x8, 0x88,
    0x78, 0x42, 0x40, 0xa0, 0x30, 0x18, 0xb, 0x8,
    0xf8,

    /* U+0039 "9" */
    0x3c, 0x46, 0x82, 0x81, 0x81, 0x81, 0x81, 0x47,
    0x39, 0x1, 0x1, 0x2, 0x2, 0x44, 0x38,

    /* U+003A ":" */
    0xc0, 0x60,

    /* U+003B ";" */
    0x48, 0x0, 0x0, 0x3, 0x92, 0x80,

    /* U+003C "<" */
    0x1, 0x87, 0xc, 0x18, 0x6, 0x0, 0xe0, 0xc,
    0x1,

    /* U+003D "=" */
    0xff, 0x80, 0x0, 0x0, 0xf, 0xf8,

    /* U+003E ">" */
    0xc0, 0x1c, 0x1, 0x80, 0x30, 0x30, 0xe1, 0x81,
    0x0,

    /* U+003F "?" */
    0x7a, 0x30, 0x41, 0x4, 0x21, 0x4, 0x20, 0x82,
    0x0, 0x0, 0x82, 0x0,

    /* U+0040 "@" */
    0x3, 0xf0, 0xc, 0xc, 0x10, 0x6, 0x20, 0x2,
    0x41, 0xe1, 0x46, 0x21, 0x84, 0x21, 0x88, 0x21,
    0x88, 0x41, 0x88, 0x41, 0x88, 0x42, 0x8c, 0xa6,
    0x47, 0x38, 0x40, 0x0, 0x20, 0x0, 0x18, 0x30,
    0xf, 0xc0,

    /* U+0041 "A" */
    0x4, 0x1, 0x40, 0x28, 0x5, 0x0, 0x90, 0x22,
    0x4, 0x40, 0x84, 0x20, 0x87, 0xf1, 0x1, 0x20,
    0x24, 0x5, 0x0, 0x60, 0x8,

    /* U+0042 "B" */
    0xfe, 0x20, 0x48, 0xa, 0x2, 0x80, 0xa0, 0x28,
    0x33, 0xf8, 0x81, 0xa0, 0x18, 0x6, 0x1, 0x80,
    0xe0, 0x6f, 0xe0,

    /* U+0043 "C" */
    0xf, 0xc, 0x36, 0x1, 0x0, 0xc0, 0x20, 0x8,
    0x2, 0x0, 0x80, 0x20, 0x8, 0x1, 0x0, 0x60,
    0xc, 0x30, 0xf0,

    /* U+0044 "D" */
    0xfc, 0x20, 0xc8, 0x1a, 0x2, 0x80, 0x60, 0x18,
    0x6, 0x1, 0x80, 0x60, 0x18, 0xe, 0x2, 0x81,
    0xa0, 0xcf, 0xc0,

    /* U+0045 "E" */
    0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xfe,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff,

    /* U+0046 "F" */
    0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xfe,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,

    /* U+0047 "G" */
    0xf, 0x86, 0x9, 0x80, 0x20, 0xc, 0x1, 0x0,
    0x20, 0x4, 0x1f, 0x80, 0x30, 0x6, 0x0, 0xa0,
    0x16, 0x2, 0x60, 0xc3, 0xe0,

    /* U+0048 "H" */
    0x80, 0x60, 0x18, 0x6, 0x1, 0x80, 0x60, 0x18,
    0x7, 0xff, 0x80, 0x60, 0x18, 0x6, 0x1, 0x80,
    0x60, 0x18, 0x4,

    /* U+0049 "I" */
    0xff, 0xfe,

    /* U+004A "J" */
    0x2, 0x4, 0x8, 0x10, 0x20, 0x40, 0x81, 0x2,
    0x4, 0x8, 0x18, 0x38, 0x9e, 0x0,

    /* U+004B "K" */
    0x80, 0xa0, 0x48, 0x22, 0x10, 0x84, 0x22, 0x9,
    0x82, 0x90, 0xc4, 0x20, 0x88, 0x22, 0x4, 0x80,
    0xa0, 0x28, 0x4,

    /* U+004C "L" */
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff,

    /* U+004D "M" */
    0xc0, 0x78, 0xf, 0x2, 0xd0, 0x5a, 0xb, 0x42,
    0x64, 0x4c, 0x89, 0x92, 0x31, 0x46, 0x28, 0xc6,
    0x18, 0x43, 0x0, 0x60, 0x8,

    /* U+004E "N" */
    0x80, 0x70, 0x1a, 0x6, 0x81, 0x90, 0x64, 0x18,
    0x86, 0x21, 0x84, 0x60, 0x98, 0x26, 0x5, 0x81,
    0x60, 0x38, 0x4,

    /* U+004F "O" */
    0xf, 0x3, 0xc, 0x60, 0x64, 0x2, 0x80, 0x18,
    0x1, 0x80, 0x18, 0x1, 0x80, 0x18, 0x1, 0x80,
    0x34, 0x2, 0x60, 0x63, 0xc, 0xf, 0x0,

    /* U+0050 "P" */
    0xfe, 0x41, 0xa0, 0x30, 0x18, 0xc, 0x6, 0x7,
    0x6, 0xfe, 0x40, 0x20, 0x10, 0x8, 0x4, 0x2,
    0x0,

    /* U+0051 "Q" */
    0xf, 0x3, 0xc, 0x60, 0x64, 0x2, 0x80, 0x18,
    0x1, 0x80, 0x18, 0x1, 0x80, 0x18, 0x1, 0x80,
    0x14, 0x2, 0x60, 0x63, 0xc, 0xf, 0x0, 0x20,
    0x1, 0x0, 0xf,

    /* U+0052 "R" */
    0xfe, 0x40, 0xa0, 0x30, 0x18, 0xc, 0x6, 0xd,
    0xfc, 0x88, 0x42, 0x20, 0x90, 0x48, 0x14, 0xa,
    0x2,

    /* U+0053 "S" */
    0x1e, 0x8, 0x64, 0x1, 0x0, 0x40, 0x8, 0x1,
    0x80, 0x18, 0x1, 0x80, 0x10, 0x4, 0x1, 0x80,
    0x58, 0x61, 0xf0,

    /* U+0054 "T" */
    0xff, 0xe0, 0x80, 0x10, 0x2, 0x0, 0x40, 0x8,
    0x1, 0x0, 0x20, 0x4, 0x0, 0x80, 0x10, 0x2,
    0x0, 0x40, 0x8, 0x1, 0x0,

    /* U+0055 "U" */
    0x80, 0x60, 0x18, 0x6, 0x1, 0x80, 0x60, 0x18,
    0x6, 0x1, 0x80, 0x60, 0x18, 0x6, 0x1, 0x40,
    0x98, 0x61, 0xe0,

    /* U+0056 "V" */
    0x80, 0x50, 0x9, 0x1, 0x20, 0x44, 0x8, 0x41,
    0x8, 0x41, 0x8, 0x11, 0x2, 0x40, 0x48, 0x9,
    0x0, 0xa0, 0x18, 0x1, 0x0,

    /* U+0057 "W" */
    0x81, 0x3, 0x6, 0x6, 0xc, 0xc, 0x14, 0x28,
    0x28, 0x48, 0x90, 0x91, 0x11, 0x22, 0x24, 0x48,
    0x48, 0x90, 0x90, 0xa0, 0xa1, 0x41, 0x43, 0x3,
    0x6, 0x6, 0x4, 0x4, 0x0,

    /* U+0058 "X" */
    0x40, 0x90, 0x22, 0x10, 0x84, 0x12, 0x2, 0x80,
    0xc0, 0x10, 0xc, 0x4, 0x81, 0x20, 0x84, 0x20,
    0x90, 0x28, 0x4,

    /* U+0059 "Y" */
    0x80, 0xc0, 0x50, 0x48, 0x22, 0x21, 0x10, 0x50,
    0x28, 0x8, 0x4, 0x2, 0x1, 0x0, 0x80, 0x40,
    0x20,

    /* U+005A "Z" */
    0x7f, 0xc0, 0x20, 0x10, 0x4, 0x2, 0x1, 0x0,
    0x40, 0x20, 0x10, 0x4, 0x2, 0x0, 0x80, 0x40,
    0x20, 0xf, 0xfc,

    /* U+005B "[" */
    0xf8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
    0x88, 0x8f,

    /* U+005C "\\" */
    0x80, 0x80, 0x40, 0x40, 0x40, 0x20, 0x20, 0x20,
    0x10, 0x10, 0x10, 0x8, 0x8, 0x4, 0x4, 0x4,
    0x2, 0x2, 0x2, 0x1,

    /* U+005D "]" */
    0xf1, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x11, 0x1f,

    /* U+005E "^" */
    0x8, 0x18, 0x18, 0x24, 0x24, 0x22, 0x42, 0x42,
    0x81,

    /* U+005F "_" */
    0xff, 0xe0,

    /* U+0060 "`" */
    0x11, 0x10,

    /* U+0061 "a" */
    0x1e, 0x62, 0x1, 0x1, 0x3, 0x3d, 0x41, 0x81,
    0x81, 0xc7, 0x79,

    /* U+0062 "b" */
    0x80, 0x40, 0x20, 0x10, 0x8, 0x4, 0x2, 0x79,
    0x46, 0xc1, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x6,
    0x5, 0x86, 0xbc, 0x0,

    /* U+0063 "c" */
    0x1e, 0x61, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x40, 0x61, 0x1e,

    /* U+0064 "d" */
    0x0, 0x80, 0x40, 0x20, 0x10, 0x8, 0x4, 0x7a,
    0xc3, 0x40, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x5,
    0x2, 0xc7, 0x3c, 0x80,

    /* U+0065 "e" */
    0x1e, 0x31, 0x90, 0x70, 0x18, 0xf, 0xfe, 0x1,
    0x0, 0x40, 0x30, 0x87, 0x80,

    /* U+0066 "f" */
    0x3b, 0x10, 0x84, 0x23, 0xe8, 0x42, 0x10, 0x84,
    0x21, 0x8, 0x40,

    /* U+0067 "g" */
    0x3f, 0xa1, 0x20, 0x50, 0x28, 0x14, 0x9, 0x8,
    0x78, 0x40, 0x20, 0xf, 0xc8, 0x18, 0xc, 0x7,
    0xc, 0x7c,

    /* U+0068 "h" */
    0x80, 0x80, 0x80, 0x80, 0x80, 0x9e, 0xa3, 0xc1,
    0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81,

    /* U+0069 "i" */
    0x8f, 0xfe,

    /* U+006A "j" */
    0x20, 0x2, 0x49, 0x24, 0x92, 0x49, 0x24, 0xe0,

    /* U+006B "k" */
    0x80, 0x80, 0x80, 0x80, 0x80, 0x82, 0x84, 0x88,
    0x88, 0x90, 0xa8, 0xc8, 0x84, 0x84, 0x82, 0x81,

    /* U+006C "l" */
    0xaa, 0xaa, 0xaa, 0xaa, 0xc0,

    /* U+006D "m" */
    0x9c, 0x75, 0x24, 0xf0, 0xc3, 0x4, 0x18, 0x20,
    0xc1, 0x6, 0x8, 0x30, 0x41, 0x82, 0xc, 0x10,
    0x60, 0x82,

    /* U+006E "n" */
    0x9e, 0xa3, 0xc1, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x81, 0x81,

    /* U+006F "o" */
    0x1c, 0x31, 0x90, 0x50, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x41, 0x31, 0x87, 0x80,

    /* U+0070 "p" */
    0x9e, 0x71, 0xa0, 0x70, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x81, 0x61, 0xaf, 0x10, 0x8, 0x4, 0x2,
    0x1, 0x0,

    /* U+0071 "q" */
    0x1e, 0xb0, 0xd0, 0x30, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x40, 0xb1, 0xcf, 0x20, 0x10, 0x8, 0x4,
    0x2, 0x1,

    /* U+0072 "r" */
    0x9d, 0x31, 0x8, 0x42, 0x10, 0x84, 0x20,

    /* U+0073 "s" */
    0x3c, 0x62, 0x40, 0x40, 0x20, 0x1c, 0x2, 0x1,
    0x1, 0x43, 0x3e,

    /* U+0074 "t" */
    0x20, 0x82, 0x3f, 0x20, 0x82, 0x8, 0x20, 0x82,
    0x8, 0x20, 0x70,

    /* U+0075 "u" */
    0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x83, 0xc5, 0x79,

    /* U+0076 "v" */
    0x80, 0xa0, 0x50, 0x48, 0x22, 0x21, 0x10, 0x88,
    0x28, 0x14, 0xa, 0x2, 0x0,

    /* U+0077 "w" */
    0x82, 0xc, 0x30, 0x61, 0x43, 0xa, 0x24, 0x91,
    0x24, 0x89, 0x22, 0x49, 0x14, 0x30, 0xa1, 0x83,
    0x4, 0x10,

    /* U+0078 "x" */
    0x41, 0x42, 0x22, 0x14, 0x18, 0x8, 0x14, 0x24,
    0x22, 0x42, 0x81,

    /* U+0079 "y" */
    0x80, 0xa0, 0x50, 0x48, 0x22, 0x11, 0x10, 0x48,
    0x24, 0x14, 0x6, 0x3, 0x1, 0x0, 0x80, 0x40,
    0x41, 0xc0,

    /* U+007A "z" */
    0x7f, 0x2, 0x4, 0x8, 0x8, 0x10, 0x20, 0x20,
    0x40, 0x80, 0xff,

    /* U+007B "{" */
    0x19, 0x8, 0x42, 0x10, 0x84, 0x21, 0x30, 0x42,
    0x10, 0x84, 0x21, 0x8, 0x30,

    /* U+007C "|" */
    0xff, 0xff, 0xfe,

    /* U+007D "}" */
    0xc1, 0x8, 0x42, 0x10, 0x84, 0x21, 0x6, 0x42,
    0x10, 0x84, 0x21, 0x9, 0x80,

    /* U+007E "~" */
    0x70, 0x4c, 0x81, 0xc0,

    /* U+00E6 "æ" */
    0x1c, 0x38, 0xc4, 0x88, 0x6, 0x8, 0x8, 0x10,
    0x30, 0x27, 0xbf, 0xd0, 0x40, 0x40, 0x80, 0x81,
    0x81, 0x84, 0x89, 0xf0, 0xe0,

    /* U+00F0 "ð" */
    0x10, 0x85, 0x83, 0x2, 0x40, 0x10, 0x8, 0xf2,
    0xc5, 0xc1, 0xc0, 0x60, 0x30, 0x18, 0xa, 0x9,
    0x8c, 0x3c,

    /* U+0251 "ɑ" */
    0x1e, 0x98, 0x64, 0xa, 0x2, 0x80, 0xa0, 0x28,
    0xa, 0x2, 0x40, 0x98, 0xe3, 0xcc,

    /* U+0261 "ɡ" */
    0x1e, 0xb0, 0xd0, 0x30, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x40, 0xb1, 0xcf, 0x20, 0x10, 0x8, 0x5,
    0x4, 0x7c,

    /* U+03B5 "ε" */
    0x7c, 0xc2, 0x80, 0x80, 0x40, 0x38, 0xc0, 0x80,
    0x80, 0xc2, 0x3c,

    /* U+03B8 "θ" */
    0x3c, 0x66, 0x42, 0xc2, 0x81, 0x81, 0x81, 0xff,
    0x81, 0x81, 0x81, 0x81, 0x83, 0x42, 0x66, 0x3c
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 70, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 88, .box_w = 1, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 120, .box_w = 4, .box_h = 4, .ofs_x = 2, .ofs_y = 12},
    {.bitmap_index = 5, .adv_w = 167, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 22, .adv_w = 167, .box_w = 8, .box_h = 19, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 41, .adv_w = 282, .box_w = 16, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 71, .adv_w = 199, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 92, .adv_w = 74, .box_w = 1, .box_h = 4, .ofs_x = 2, .ofs_y = 12},
    {.bitmap_index = 93, .adv_w = 96, .box_w = 4, .box_h = 20, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 103, .adv_w = 96, .box_w = 4, .box_h = 20, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 113, .adv_w = 137, .box_w = 5, .box_h = 5, .ofs_x = 2, .ofs_y = 11},
    {.bitmap_index = 117, .adv_w = 167, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 129, .adv_w = 74, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 131, .adv_w = 104, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 132, .adv_w = 74, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 133, .adv_w = 127, .box_w = 8, .box_h = 20, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 153, .adv_w = 167, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 168, .adv_w = 167, .box_w = 7, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 182, .adv_w = 167, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 199, .adv_w = 167, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 214, .adv_w = 167, .box_w = 10, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 233, .adv_w = 167, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 250, .adv_w = 167, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 265, .adv_w = 167, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 282, .adv_w = 167, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 299, .adv_w = 167, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 314, .adv_w = 74, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 316, .adv_w = 74, .box_w = 3, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 322, .adv_w = 167, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 331, .adv_w = 167, .box_w = 9, .box_h = 5, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 337, .adv_w = 167, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 346, .adv_w = 139, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 358, .adv_w = 283, .box_w = 16, .box_h = 17, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 392, .adv_w = 184, .box_w = 11, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 413, .adv_w = 202, .box_w = 10, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 432, .adv_w = 198, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 451, .adv_w = 212, .box_w = 10, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 470, .adv_w = 180, .box_w = 8, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 485, .adv_w = 166, .box_w = 8, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 500, .adv_w = 212, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 521, .adv_w = 223, .box_w = 10, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 540, .adv_w = 82, .box_w = 1, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 542, .adv_w = 161, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 556, .adv_w = 194, .box_w = 10, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 575, .adv_w = 163, .box_w = 8, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 590, .adv_w = 246, .box_w = 11, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 611, .adv_w = 223, .box_w = 10, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 630, .adv_w = 228, .box_w = 12, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 653, .adv_w = 191, .box_w = 9, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 670, .adv_w = 228, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 697, .adv_w = 188, .box_w = 9, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 714, .adv_w = 182, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 733, .adv_w = 183, .box_w = 11, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 754, .adv_w = 222, .box_w = 10, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 773, .adv_w = 170, .box_w = 11, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 794, .adv_w = 269, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 823, .adv_w = 166, .box_w = 10, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 842, .adv_w = 154, .box_w = 9, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 859, .adv_w = 189, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 878, .adv_w = 96, .box_w = 4, .box_h = 20, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 888, .adv_w = 127, .box_w = 8, .box_h = 20, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 908, .adv_w = 96, .box_w = 4, .box_h = 20, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 918, .adv_w = 167, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 927, .adv_w = 176, .box_w = 11, .box_h = 1, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 929, .adv_w = 188, .box_w = 3, .box_h = 4, .ofs_x = 4, .ofs_y = 13},
    {.bitmap_index = 931, .adv_w = 172, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 942, .adv_w = 190, .box_w = 9, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 962, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 973, .adv_w = 190, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 993, .adv_w = 169, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1006, .adv_w = 89, .box_w = 5, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1017, .adv_w = 170, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 1035, .adv_w = 184, .box_w = 8, .box_h = 16, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1051, .adv_w = 78, .box_w = 1, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1053, .adv_w = 78, .box_w = 3, .box_h = 20, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 1061, .adv_w = 160, .box_w = 8, .box_h = 16, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1077, .adv_w = 81, .box_w = 2, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1082, .adv_w = 284, .box_w = 13, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1100, .adv_w = 186, .box_w = 8, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1111, .adv_w = 188, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1124, .adv_w = 190, .box_w = 9, .box_h = 16, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 1142, .adv_w = 190, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 1160, .adv_w = 108, .box_w = 5, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1167, .adv_w = 141, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1178, .adv_w = 107, .box_w = 6, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1189, .adv_w = 185, .box_w = 8, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1200, .adv_w = 149, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1213, .adv_w = 237, .box_w = 13, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1231, .adv_w = 139, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1242, .adv_w = 150, .box_w = 9, .box_h = 16, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 1260, .adv_w = 140, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1271, .adv_w = 96, .box_w = 5, .box_h = 20, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1284, .adv_w = 78, .box_w = 1, .box_h = 23, .ofs_x = 2, .ofs_y = -6},
    {.bitmap_index = 1287, .adv_w = 96, .box_w = 5, .box_h = 20, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1300, .adv_w = 167, .box_w = 9, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1304, .adv_w = 276, .box_w = 15, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1325, .adv_w = 188, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1343, .adv_w = 193, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1357, .adv_w = 190, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 1375, .adv_w = 152, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1386, .adv_w = 176, .box_w = 8, .box_h = 16, .ofs_x = 1, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_1[] = {
    0x0, 0xa, 0x16b, 0x17b, 0x2cf, 0x2d2
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 230, .range_length = 723, .glyph_id_start = 96,
        .unicode_list = unicode_list_1, .glyph_id_ofs_list = NULL, .list_length = 6, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 0, 1, 0, 0, 0, 0,
    1, 2, 0, 0, 0, 3, 4, 3,
    5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 6, 6, 0, 0, 0,
    0, 0, 7, 8, 9, 10, 11, 12,
    13, 0, 0, 14, 15, 16, 0, 0,
    10, 17, 10, 18, 19, 20, 21, 22,
    23, 24, 25, 26, 2, 27, 0, 0,
    0, 0, 28, 29, 30, 0, 31, 32,
    33, 34, 0, 0, 35, 36, 34, 34,
    29, 29, 37, 38, 39, 40, 37, 41,
    42, 43, 44, 45, 2, 0, 0, 0,
    31, 0, 37, 37, 46, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 1, 2, 0, 0, 0, 0,
    2, 0, 3, 4, 0, 5, 6, 5,
    7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 8, 8, 0, 0, 0,
    9, 0, 10, 0, 11, 0, 0, 0,
    11, 0, 0, 12, 0, 0, 0, 0,
    11, 0, 11, 0, 13, 14, 15, 16,
    17, 18, 19, 20, 0, 21, 3, 0,
    0, 0, 22, 0, 23, 23, 23, 24,
    25, 0, 26, 27, 0, 0, 28, 28,
    23, 28, 23, 28, 29, 30, 31, 32,
    33, 34, 35, 36, 0, 0, 3, 0,
    22, 0, 23, 23, 0, 37
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, 0, -36, 0, 0, 0,
    0, -14, 0, -28, -4, 0, 0, 0,
    0, -4, 0, 0, 0, 0, -14, 0,
    0, 0, 0, 0, -7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 28,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -25, 0, -40, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -35,
    -5, -20, -11, 0, -27, 0, 0, 0,
    -4, 0, 0, 0, 6, 0, 0, -12,
    0, -5, -4, 0, -7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -7, -4, -14, 0, -6, -4,
    -7, -20, -7, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -11, 0, 0, 0,
    -4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -14, -4, -28,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -7, -15, 0, -4, 14, 14, 0,
    0, 7, -7, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -6, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -14,
    0, -36, 0, 0, 0, 0, -6, -4,
    -4, 0, 0, -14, -6, -4, 0, 4,
    -4, -4, -14, 11, 0, -4, 0, 0,
    0, 0, 11, -4, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -11, 0,
    0, 0, 0, 0, 0, 0, -5, -4,
    -7, 0, 0, 0, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, -4, -4, -4, -4, 0, 0,
    0, 0, 0, 0, 0, -6, 0, 0,
    0, 0, -8, -4, -7, -8, -4, 0,
    0, 0, 0, -4, 0, 0, 0, 0,
    -7, 0, 0, 0, 0, -7, -4, -4,
    -4, 0, -4, 0, 0, 0, 0, 0,
    -15, 0, 0, -8, 0, 0, -4, 0,
    -10, 0, -7, 0, -4, -4, -4, -7,
    -7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, 0, 0, -7,
    0, -4, 0, -7, -4, 0, 0, 0,
    0, 0, 0, -20, 0, -30, 0, 0,
    -13, -4, -50, -5, 0, 0, 4, 4,
    -7, 4, -11, 0, -11, -4, 0, -7,
    0, 0, -7, -5, -4, -5, -3, -3,
    -6, -3, -4, 0, 0, 0, 0, -11,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -7, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -7, 0, 0,
    0, 0, 0, 0, -14, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, -14, 0, -4, 0, 0, 0, -4,
    -5, 0, 0, -4, -4, -3, -4, 0,
    -3, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, -7, -6, -3, -3, -3,
    -3, -4, 0, 0, -18, 0, -48, 0,
    -22, 0, 0, -6, 4, -6, 0, -6,
    -42, -8, -26, -19, 0, -24, 0, -28,
    0, -4, -4, 0, 0, 0, 0, 0,
    -5, -4, -8, -11, 0, -8, 0, 0,
    0, 0, 0, 0, -34, -14, -34, 0,
    0, -18, 0, -53, -4, -11, 0, 0,
    0, -7, -4, -35, 0, -18, -9, 0,
    -14, 0, 0, 0, -4, 0, 0, 0,
    0, -4, 0, -7, 0, 0, 0, 0,
    -4, 0, -11, 0, 0, 0, 0, 0,
    -8, -5, -4, 0, 7, 4, 0, 3,
    -4, 0, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -7, 0, 4,
    0, 0, 0, 0, 0, -4, -4, -7,
    0, 0, 0, 0, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -7,
    0, 0, 0, 0, 0, 4, 0, 0,
    0, 0, 0, -35, -28, -37, -7, 0,
    -14, -7, -46, -18, 0, 0, 0, 0,
    -7, -4, -22, 0, -28, -20, -8, -28,
    0, 0, -18, -20, -8, -18, -14, -15,
    -18, -14, -29, 0, 0, 0, 0, 0,
    -3, 0, -15, 0, 0, -7, 0, -14,
    -4, 0, 0, 0, 0, -4, -4, 0,
    0, 0, 0, 0, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -20, -6, -21,
    0, 0, -4, -4, -28, -4, 0, -4,
    4, 0, 0, 0, -6, 0, -4, -4,
    0, -8, 0, 0, -7, -3, 0, -11,
    -3, -3, -4, -3, -10, 0, 0, 0,
    0, 0, -11, -4, -16, 0, 0, 0,
    -4, -28, -4, 0, 0, 0, 0, 0,
    0, -4, 0, -7, 0, 0, -7, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, 0, 0, -4, 0, -4, 0,
    -7, 0, 0, 0, 4, -4, 3, -4,
    -7, -4, 0, 0, 0, 0, 0, 0,
    -4, 0, -3, 0, 0, 0, 0, 0,
    -3, -4, -3, -4, -4, -3, -4, 0,
    0, 0, 0, 0, -26, -20, -28, -6,
    0, -4, -4, -35, -5, -4, -4, 0,
    0, 0, 0, -11, 0, -21, -11, 0,
    -21, 0, 0, -14, -11, -4, -11, -4,
    -7, -11, -4, -14, 0, 0, 0, 0,
    0, 0, -15, 0, 0, 0, -4, -7,
    -14, -11, 0, -4, -4, -4, 0, -4,
    -7, 0, -7, -10, -7, -6, 0, 0,
    0, 0, -4, -11, -7, -7, -7, -7,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -35,
    -14, -21, -14, 0, -28, 0, 0, 0,
    0, 0, 14, 0, 28, 0, 0, 0,
    0, -7, -4, 0, 7, 0, 0, 0,
    0, 0, -22, 0, 0, 0, 0, 1,
    0, 0, 0, 0, -7, 0, -3, 0,
    0, -7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, 0, 0, 0,
    0, 0, 0, 0, 0, -14, 0, -14,
    -4, 4, 0, 0, 1, 0, 0, 0,
    0, -20, 0, -6, 0, 0, -13, 0,
    -6, -6, 0, 0, 0, 0, 0, 0,
    0, -4, 0, 0, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, 0, 0, 0, 0, 0, -7, 0,
    -4, 0, 0, -7, 0, 0, -4, -6,
    0, -4, 0, 0, 0, 0, -4, 0,
    4, 4, 6, 4, 0, 0, 0, 0,
    0, -15, 0, 4, 0, 0, 0, 0,
    0, -7, -7, -7, 0, -3, -4, 0,
    -6, 0, -3, -6, 0, 0, -4, 0,
    0, 0, 0, -4, 0, 5, 5, 0,
    5, 2, 0, 8, 14, 21, 0, -14,
    -4, -8, 0, 11, 0, 0, 0, 0,
    18, 0, 25, 18, 14, 25, 0, 30,
    -7, -4, 0, -6, 0, -4, 0, 0,
    0, 0, 7, 0, 0, 0, -4, 0,
    0, 0, 8, -14, 0, 0, 22, 0,
    -10, 0, 0, 0, 0, -6, 0, 0,
    0, 0, -4, 0, 0, -5, -4, 0,
    0, 0, 11, 0, 0, 0, 0, 0,
    0, 0, 8, -4, 0, 0, 0, 0,
    -15, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -7, 0, -4, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -8, 7, -5,
    0, 7, 1, 0, 0, 0, 0, -7,
    0, 0, 0, 0, -2, 0, 0, -4,
    -4, 0, -4, 0, -4, 0, 0, -4,
    -4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -11,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -7, 0, -4, 0, 0, -11, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -12, -7, -15,
    14, 0, -4, 0, -14, 0, 0, 0,
    0, 0, 0, 0, -4, 7, -7, -4,
    0, -4, 0, 0, 0, 0, 0, 0,
    14, 11, 0, 14, 0, 0, 0, 0,
    0, -23, 0, 4, 0, 0, 0, 0,
    0, 0, 0, -7, 0, -4, 0, 0,
    -7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 7,
    -6, 7, 8, -6, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, 0, 0, 0,
    -8, -4, 0, -4, 0, 0, 0, -4,
    -7, 0, 0, 0, -7, 0, 0, 0,
    0, 0, 0, -4, -5, 0, -7, 0,
    0, -4, 0, -14, 0, -7, 0, -3,
    0, 0, -4, -4, 0, -7, 0, 0,
    0, 0, -4, 0, 0, 0, 0, 0,
    0, 0, 0, -7, 0, 0, 0, 0,
    -4, -3, 0, -4, 0, 0, 0, 0,
    -11, 0, -7, 0, -3, 0, -4, -7,
    0, 0, -4, 0, 0, 0, 0, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, -4, 0, 0, -8, 0, -4,
    0, 0, 0, 0, -4, 0, 0, -14,
    0, -4, 0, -4, -11, 0, 0, -4,
    -4, 0, 0, 0, 0, 0, 0, -7,
    0, 0, 0, 0, 3, 0, 0, 0,
    0, 0, 0, -5, 0, -8, 0, 0,
    0, 0, -14, 0, -7, 0, 0, 0,
    0, 0, 0, 0, -7, 0, 0, 0,
    0, -4, 0, 0, 0, 0, 0, 0,
    -4, 0, -7, 0, 0, 0, 0, 0,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, -11, 0, 0, 0, 0, -14, 0,
    0, -11, -4, 0, -4, 0, 0, 0,
    0, 0, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -4
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 46,
    .right_class_cnt     = 37,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 2,
    .bpp = 1,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_ipa_20 = {
#else
lv_font_t ui_font_ipa_20 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 23,          /*The maximum line height required by the font*/
    .base_line = 6,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_IPA_20*/

