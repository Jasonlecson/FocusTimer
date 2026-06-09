#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
分析音标字符集
"""

import json

def main():
    # 加载词库
    with open('CET6_original.json', 'r', encoding='utf-8') as f:
        vocabulary = json.load(f)

    # 统计音标字符
    us_chars = set()
    uk_chars = set()

    for word in vocabulary:
        if word.get('us'):
            us_chars.update(word['us'])
        if word.get('uk'):
            uk_chars.update(word['uk'])

    all_chars = us_chars | uk_chars

    print('='*60)
    print('音标字符分析报告')
    print('='*60)
    print()

    # 分类字符
    ascii_chars = set()
    ipa_chars = set()
    other_chars = set()

    for c in all_chars:
        if ord(c) < 128:
            ascii_chars.add(c)
        elif ord(c) >= 0x0250 and ord(c) <= 0x02AF:
            ipa_chars.add(c)  # IPA Extensions
        elif ord(c) >= 0x02B0 and ord(c) <= 0x02FF:
            ipa_chars.add(c)  # Spacing Modifier Letters
        elif ord(c) >= 0x0300 and ord(c) <= 0x036F:
            ipa_chars.add(c)  # Combining Diacritical Marks
        elif ord(c) >= 0x1D00 and ord(c) <= 0x1DBF:
            ipa_chars.add(c)  # Phonetic Extensions
        else:
            other_chars.add(c)

    print(f'总字符数: {len(all_chars)}')
    print(f'ASCII 字符: {len(ascii_chars)}')
    print(f'IPA 字符: {len(ipa_chars)}')
    print(f'其他字符: {len(other_chars)}')
    print()

    # 显示ASCII字符
    print('ASCII 字符:')
    print(''.join(sorted(ascii_chars)))
    print()

    # 显示IPA字符及其Unicode编码
    print('IPA 字符 (需要特殊字体):')
    for c in sorted(ipa_chars):
        print(f'  U+{ord(c):04X}  {c}')
    print()

    # 检查当前字体是否支持这些IPA字符
    print('='*60)
    print('字体支持分析')
    print('='*60)
    print()

    # 当前字体覆盖范围
    fonts = {
        'siyuanheiti_20': 'ASCII 32-127 + CJK 汉字',
        'roboto_condensed_3_100': 'ASCII 32-127',
        'roboto_condensed_3_40': '数字 0-9 + 冒号',
        'siyuanheiti_16': '数字 0-9 + 百分号',
    }

    for font_name, coverage in fonts.items():
        print(f'{font_name}: {coverage}')

    print()
    print('结论:')
    if len(ipa_chars) > 0:
        print(f'  ❌ 当前字体不支持 IPA 音标字符')
        print(f'  ❌ 需要新增 IPA 字体才能显示音标')
        print(f'  ❌ 共需要支持 {len(ipa_chars)} 个 IPA 字符')
    else:
        print(f'  ✅ 音标只使用 ASCII 字符，当前字体已支持')

    # 生成需要的IPA字符列表
    print()
    print('='*60)
    print('生成 IPA 字体所需字符')
    print('='*60)
    print()

    # 收集所有需要的IPA字符
    needed_chars = set()
    for word in vocabulary:
        if word.get('us'):
            for c in word['us']:
                if ord(c) > 127:
                    needed_chars.add(c)
        if word.get('uk'):
            for c in word['uk']:
                if ord(c) > 127:
                    needed_chars.add(c)

    print('需要包含在 IPA 字体中的字符:')
    char_list = sorted(needed_chars, key=lambda x: ord(x))
    for c in char_list:
        print(f'  U+{ord(c):04X}  {c}')
    print(f'共 {len(needed_chars)} 个字符')

    # 生成lv_font_conv命令
    print()
    print('生成字体命令:')
    symbols = ''.join(char_list)
    print(f'lv_font_conv --bpp 1 --size 20 --no-compress \\')
    print(f'  --font NotoSans-Regular.ttf \\')
    print(f'  --symbols "{symbols}" \\')
    print(f'  --range 32-127 \\')
    print(f'  --format lvgl \\')
    print(f'  -o ui_font_ipa_20.c')

if __name__ == "__main__":
    main()
