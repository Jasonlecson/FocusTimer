#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
将六级词库 JSON 转换为嵌入式系统使用的 C 语言数组格式
"""

import json
import os

def load_vocabulary(json_file):
    """加载词库JSON文件"""
    with open(json_file, 'r', encoding='utf-8') as f:
        return json.load(f)

def generate_c_header(vocabulary, output_file):
    """生成C语言头文件"""
    with open(output_file, 'w', encoding='utf-8') as f:
        f.write("""/**
 * @file cet6_vocabulary.h
 * @brief 英语六级词库数据
 *
 * 自动生成，请勿手动修改
 * 单词数量: {count}
 *
 * 数据来源: KyleBing/english-vocabulary
 * GitHub: https://github.com/KyleBing/english-vocabulary
 */

#ifndef CET6_VOCABULARY_H
#define CET6_VOCABULARY_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {{
#endif

""".format(count=len(vocabulary)))

        # 生成单词结构体定义
        f.write("""/**
 * @brief 单词数据结构
 */
typedef struct {{
    const char *word;           /**< 英文单词 */
    const char *phonetic_us;    /**< 美式音标 */
    const char *phonetic_uk;    /**< 英式音标 */
    const char *meaning;        /**< 中文释义 */
    const char *example;        /**< 例句 */
    const char *example_cn;     /**< 例句翻译 */
}} word_entry_t;

""")

        # 生成单词数据数组
        f.write("/**\n * @brief 六级词库数据\n")
        f.write(" * @note 共 {count} 个单词\n".format(count=len(vocabulary)))
        f.write(" */\n")
        f.write("static const word_entry_t cet6_words[] = {\n")

        for i, word_data in enumerate(vocabulary):
            word = word_data.get('word', '')
            us_phonetic = word_data.get('us', '')
            uk_phonetic = word_data.get('uk', '')

            # 获取第一个释义
            translations = word_data.get('translations', [])
            meaning = ''
            if translations:
                meaning = translations[0].get('translation', '')

            # 获取第一个例句
            sentences = word_data.get('sentences', [])
            example = ''
            example_cn = ''
            if sentences:
                example = sentences[0].get('sentence', '')
                example_cn = sentences[0].get('translation', '')

            # 转义特殊字符
            def escape_string(s):
                s = s.replace('\\', '\\\\')
                s = s.replace('"', '\\"')
                s = s.replace('\n', '\\n')
                s = s.replace('\r', '\\r')
                s = s.replace('\t', '\\t')
                return s

            word = escape_string(word)
            us_phonetic = escape_string(us_phonetic)
            uk_phonetic = escape_string(uk_phonetic)
            meaning = escape_string(meaning)
            example = escape_string(example)
            example_cn = escape_string(example_cn)

            # 写入数据
            f.write(f'    {{\n')
            f.write(f'        .word = "{word}",\n')
            f.write(f'        .phonetic_us = "{us_phonetic}",\n')
            f.write(f'        .phonetic_uk = "{uk_phonetic}",\n')
            f.write(f'        .meaning = "{meaning}",\n')
            f.write(f'        .example = "{example}",\n')
            f.write(f'        .example_cn = "{example_cn}"\n')

            if i < len(vocabulary) - 1:
                f.write(f'    }},\n')
            else:
                f.write(f'    }}\n')

        f.write("};\n\n")

        # 生成单词数量常量
        f.write(f"/** @brief 六级词库单词数量 */\n")
        f.write(f"#define CET6_WORD_COUNT {len(vocabulary)}\n\n")

        f.write("#ifdef __cplusplus\n")
        f.write("}\n")
        f.write("#endif\n\n")
        f.write("#endif /* CET6_VOCABULARY_H */\n")

def generate_c_source(output_file):
    """生成C语言源文件（可选）"""
    with open(output_file, 'w', encoding='utf-8') as f:
        f.write("""/**
 * @file cet6_vocabulary.c
 * @brief 英语六级词库访问接口
 *
 * 提供词库查询和访问功能
 */

#include "cet6_vocabulary.h"
#include <string.h>

/**
 * @brief 根据索引获取单词
 *
 * @param index 单词索引 (0 ~ CET6_WORD_COUNT-1)
 * @return 单词数据指针，索引无效返回 NULL
 */
const word_entry_t* cet6_get_word_by_index(uint32_t index)
{
    if (index >= CET6_WORD_COUNT) {
        return NULL;
    }
    return &cet6_words[index];
}

/**
 * @brief 根据英文单词查找
 *
 * @param word 要查找的单词
 * @return 单词数据指针，未找到返回 NULL
 */
const word_entry_t* cet6_find_word(const char *word)
{
    if (word == NULL) {
        return NULL;
    }

    for (uint32_t i = 0; i < CET6_WORD_COUNT; i++) {
        if (strcmp(cet6_words[i].word, word) == 0) {
            return &cet6_words[i];
        }
    }

    return NULL;
}

/**
 * @brief 模糊查找单词（前缀匹配）
 *
 * @param prefix 单词前缀
 * @param result 结果数组
 * @param max_results 最大结果数
 * @return 实际找到的单词数量
 */
uint32_t cet6_search_words(const char *prefix, const word_entry_t **result, uint32_t max_results)
{
    if (prefix == NULL || result == NULL || max_results == 0) {
        return 0;
    }

    uint32_t count = 0;
    size_t prefix_len = strlen(prefix);

    for (uint32_t i = 0; i < CET6_WORD_COUNT && count < max_results; i++) {
        if (strncmp(cet6_words[i].word, prefix, prefix_len) == 0) {
            result[count++] = &cet6_words[i];
        }
    }

    return count;
}
""")

def main():
    # 文件路径
    input_file = "CET6_original.json"
    output_header = "cet6_vocabulary.h"
    output_source = "cet6_vocabulary.c"

    print(f"正在加载词库: {input_file}")
    vocabulary = load_vocabulary(input_file)
    print(f"加载完成，共 {len(vocabulary)} 个单词")

    print(f"正在生成头文件: {output_header}")
    generate_c_header(vocabulary, output_header)
    print(f"头文件生成完成")

    print(f"正在生成源文件: {output_source}")
    generate_c_source(output_source)
    print(f"源文件生成完成")

    # 显示文件大小
    header_size = os.path.getsize(output_header)
    source_size = os.path.getsize(output_source)
    print(f"\n文件大小:")
    print(f"  {output_header}: {header_size / 1024:.1f} KB")
    print(f"  {output_source}: {source_size / 1024:.1f} KB")
    print(f"  总计: {(header_size + source_size) / 1024:.1f} KB")

    # 显示统计信息
    print(f"\n词库统计:")
    print(f"  单词数量: {len(vocabulary)}")

    # 统计有音标的单词
    has_us = sum(1 for w in vocabulary if w.get('us'))
    has_uk = sum(1 for w in vocabulary if w.get('uk'))
    has_example = sum(1 for w in vocabulary if w.get('sentences'))
    print(f"  有美式音标: {has_us}")
    print(f"  有英式音标: {has_uk}")
    print(f"  有例句: {has_example}")

if __name__ == "__main__":
    main()
