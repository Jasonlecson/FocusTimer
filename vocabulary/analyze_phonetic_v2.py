#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
分析音标字符集 - v2 (ASCII输出)
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
    print('Phonetic Character Analysis Report')
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

    print(f'Total characters: {len(all_chars)}')
    print(f'ASCII characters: {len(ascii_chars)}')
    print(f'IPA characters: {len(ipa_chars)}')
    print(f'Other characters: {len(other_chars)}')
    print()

    # 显示ASCII字符
    print('ASCII characters:')
    print(''.join(sorted(ascii_chars)))
    print()

    # 显示IPA字符及其Unicode编码
    print('IPA characters (require special font):')
    for c in sorted(ipa_chars, key=lambda x: ord(x)):
        print(f'  U+{ord(c):04X}')
    print()

    # 检查当前字体是否支持这些IPA字符
    print('='*60)
    print('Font Support Analysis')
    print('='*60)
    print()

    # 当前字体覆盖范围
    print('Current fonts:')
    print('  siyuanheiti_20: ASCII 32-127 + CJK')
    print('  roboto_condensed_3_100: ASCII 32-127')
    print('  roboto_condensed_3_40: digits 0-9 + colon')
    print('  siyuanheiti_16: digits 0-9 + percent')
    print()

    print('Conclusion:')
    if len(ipa_chars) > 0:
        print(f'  X Current fonts do NOT support IPA phonetic characters')
        print(f'  X Need to add IPA font to display phonetics')
        print(f'  X Total {len(ipa_chars)} IPA characters needed')
    else:
        print(f'  OK Phonetic uses only ASCII characters, already supported')

    # 生成需要的IPA字符列表
    print()
    print('='*60)
    print('IPA Characters Needed')
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

    print('Characters to include in IPA font:')
    char_list = sorted(needed_chars, key=lambda x: ord(x))
    for c in char_list:
        print(f'  U+{ord(c):04X}')
    print(f'Total: {len(needed_chars)} characters')

    # 生成lv_font_conv命令
    print()
    print('='*60)
    print('Font Generation Command')
    print('='*60)
    print()

    symbols = ''.join(char_list)
    print('Use this command to generate IPA font:')
    print()
    print('lv_font_conv --bpp 1 --size 20 --no-compress \\')
    print('  --font NotoSans-Regular.ttf \\')
    print(f'  --symbols "{symbols}" \\')
    print('  --range 32-127 \\')
    print('  --format lvgl \\')
    print('  -o ui_font_ipa_20.c')

    # 保存字符列表到文件
    with open('ipa_chars_needed.txt', 'w', encoding='utf-8') as f:
        f.write('# IPA Characters needed for CET6 vocabulary\n')
        f.write(f'# Total: {len(needed_chars)} characters\n')
        f.write('# Unicode Code Points:\n')
        for c in char_list:
            f.write(f'U+{ord(c):04X}\n')
        f.write('\n# Characters as string:\n')
        f.write(''.join(char_list))

    print()
    print('Character list saved to: ipa_chars_needed.txt')

if __name__ == "__main__":
    main()
