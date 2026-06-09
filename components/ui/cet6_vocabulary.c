/**
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
