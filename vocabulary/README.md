# 六级词库和 IPA 字体

本目录包含英语六级词库数据和 IPA 音标字体，用于 FocusTimer 的背单词功能。

## 📁 文件清单

| 文件 | 大小 | 说明 |
|------|------|------|
| `CET6_original.json` | 1.5 MB | 原始词库（JSON 格式，保留） |
| `cet6_vocabulary.h` | 595 KB | C 语言头文件（词库数据） |
| `cet6_vocabulary.c` | 1.7 KB | C 语言源文件（查询接口） |
| `ui_font_ipa_20.c` | 31 KB | IPA 音标字体（LVGL 格式） |
| `ui_font_ipa_20.h` | 1.2 KB | IPA 字体头文件 |
| `convert_to_embedded.py` | 6.9 KB | JSON 转 C 数组脚本 |
| `analyze_phonetic_v2.py` | 4.2 KB | 音标字符分析脚本 |
| `ipa_chars_needed.txt` | - | 需要的 IPA 字符列表 |

## 📊 数据统计

### 词库信息
- **来源**: KyleBing/english-vocabulary
- **GitHub**: https://github.com/KyleBing/english-vocabulary
- **单词数量**: 2,078 个
- **格式**: JSON (原始) → C 数组 (转换后)

### 字段说明
每个单词包含：
- `word` - 英文单词
- `phonetic_us` - 美式音标
- `phonetic_uk` - 英式音标
- `meaning` - 中文释义
- `example` - 英文例句
- `example_cn` - 例句中文翻译

### IPA 字体
- **字体大小**: 20px
- **颜色深度**: 1-bit (单色)
- **包含字符**: ASCII (32-127) + 23 个 IPA 字符
- **文件大小**: 31 KB

## 🚀 使用方法

### 1. 集成到项目

将以下文件复制到 `components/ui/` 目录：
```bash
cp vocabulary/cet6_vocabulary.h components/ui/
cp vocabulary/cet6_vocabulary.c components/ui/
cp vocabulary/ui_font_ipa_20.c components/ui/
cp vocabulary/ui_font_ipa_20.h components/ui/
```

### 2. 在代码中使用

```c
#include "cet6_vocabulary.h"
#include "ui_font_ipa_20.h"

// 获取单词
const word_entry_t *word = cet6_get_word_by_index(0);
printf("单词: %s\n", word->word);
printf("音标: %s\n", word->phonetic_us);
printf("释义: %s\n", word->meaning);

// 查找单词
const word_entry_t *found = cet6_find_word("trade");
if (found) {
    printf("找到: %s\n", found->word);
}

// 使用 IPA 字体显示音标
lv_obj_t *label = lv_label_create(parent);
lv_obj_set_style_text_font(label, &ui_font_ipa_20, 0);
lv_label_set_text(label, word->phonetic_us);
```

### 3. 前缀搜索

```c
const word_entry_t *results[10];
uint32_t count = cet6_search_words("tra", results, 10);
for (uint32_t i = 0; i < count; i++) {
    printf("  %s\n", results[i]->word);
}
```

## 💾 Flash 占用

```
词库数据:     ~596 KB
IPA 字体:     ~31 KB
总计:         ~627 KB (Flash 4MB 的 15.3%)

当前固件:     ~943 KB (23%)
+词库+字体:   ~1,570 KB (38.3%)
剩余:         ~2,526 KB (61.7%)

✅ Flash 完全够用！
```

## 🎨 IPA 字符说明

| 字符 | Unicode | 示例单词 | 说明 |
|------|---------|----------|------|
| æ | U+00E6 | cat | 短元音 |
| ð | U+00F0 | this | 浊齿擦音 |
| ŋ | U+014B | sing | 鼻音 |
| ɑ | U+0251 | father | 长元音 |
| ɒ | U+0252 | hot | 短元音 |
| ɔ | U+0254 | door | 长元音 |
| ə | U+0259 | about | 中央元音 |
| ɚ | U+025A | water | 卷舌元音 |
| ε | U+025B | bed | 短元音 |
| ɜ | U+025C | bird | 长元音 |
| ɝ | U+025D | bird | 卷舌长元音 |
| ɡ | U+0261 | go | 浊软腭塞音 |
| ɪ | U+026A | bit | 短元音 |
| ʃ | U+0283 | she | 清龈后擦音 |
| ʊ | U+028A | put | 短元音 |
| ʌ | U+028C | cup | 短元音 |
| ʒ | U+0292 | measure | 浊龈后擦音 |
| ˈ | U+02C8 | - | 主重音 |
| ˌ | U+02CC | - | 次重音 |
| ː | U+02D0 | - | 长音 |
| θ | U+03B8 | think | 清齿擦音 |

## 🔧 重新生成

如果需要修改词库或字体，可以使用以下命令：

### 重新生成词库
```bash
python convert_to_embedded.py
```

### 重新生成 IPA 字体
```bash
lv_font_conv --bpp 1 --size 20 --no-compress \
  --font NotoSansSC-VF.ttf \
  --symbols "æðŋɑɒɔəɚεɜɝɡɪʃʊʌʒˈˌːθ" \
  --range 32-127 \
  --format lvgl \
  -o ui_font_ipa_20.c
```

## 📝 注意事项

1. **字体文件**: `NotoSansSC-VF.ttf` 需要从系统字体目录复制
2. **编码**: 所有文件使用 UTF-8 编码
3. **内存**: 词库数据存储在 Flash 中，不占用 RAM
4. **更新**: 如需更新词库，只需替换 `CET6_original.json` 并重新运行转换脚本

## 📚 数据来源

- **词库**: [KyleBing/english-vocabulary](https://github.com/KyleBing/english-vocabulary)
- **字体**: [Noto Sans](https://fonts.google.com/noto/specimen/Noto+Sans)
- **工具**: [lv_font_conv](https://github.com/lvgl/lv_font_conv)

## ✅ 验证

生成后可以通过以下方式验证：
1. 检查 `cet6_vocabulary.h` 中的单词数量
2. 检查 `ui_font_ipa_20.c` 中是否包含 IPA 字符
3. 在 LVGL 中测试显示音标

---

**词库和字体已准备就绪，可以集成到 FocusTimer 项目中！** 🎉
