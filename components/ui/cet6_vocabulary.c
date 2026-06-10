/**
 * @file cet6_vocabulary.c
 * @brief 英语六级词库访问接口
 *
 * 提供词库查询和访问功能
 */

#include "cet6_vocabulary.h"

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
