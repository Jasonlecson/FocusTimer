/**
 * @file ui_font_ipa_20.h
 * @brief IPA 音标字体声明
 *
 * 包含国际音标 (IPA) 字符的字体，用于显示英语音标
 * 字体大小: 20px
 * 颜色深度: 1-bit (单色)
 *
 * 生成命令:
 * lv_font_conv --bpp 1 --size 20 --no-compress \
 *   --font NotoSansSC-VF.ttf \
 *   --symbols "æðŋɑɒɔəɚεɜɝɡɪʃʊʌʒˈˌːθ" \
 *   --range 32-127 \
 *   --format lvgl \
 *   -o ui_font_ipa_20.c
 */

#ifndef UI_FONT_IPA_20_H
#define UI_FONT_IPA_20_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

/**
 * @brief IPA 音标字体
 *
 * 包含以下字符:
 * - ASCII 字符 (32-127)
 * - IPA 扩展字符:
 *   æ (U+00E6) - 如 cat
 *   ð (U+00F0) - 如 this
 *   ŋ (U+014B) - 如 sing
 *   ɑ (U+0251) - 如 father
 *   ɒ (U+0252) - 如 hot
 *   ɔ (U+0254) - 如 door
 *   ə (U+0259) - 如 about
 *   ɚ (U+025A) - 如 water
 *   ε (U+025B) - 如 bed
 *   ɜ (U+025C) - 如 bird
 *   ɝ (U+025D) - 如 bird
 *   ɡ (U+0261) - 如 go
 *   ɪ (U+026A) - 如 bit
 *   ʃ (U+0283) - 如 she
 *   ʊ (U+028A) - 如 put
 *   ʌ (U+028C) - 如 cup
 *   ʒ (U+0292) - 如 measure
 *   ˈ (U+02C8) - 重音符号
 *   ˌ (U+02CC) - 次重音符号
 *   ː (U+02D0) - 长音符号
 *   θ (U+03B8) - 如 think
 */
extern const lv_font_t ui_font_ipa_20;

#ifdef __cplusplus
}
#endif

#endif /* UI_FONT_IPA_20_H */
