/**
 * @file cet6_vocabulary.h
 * @brief 英语六级词库数据
 *
 * 自动生成，请勿手动修改
 * 单词数量: 2078
 *
 * 数据来源: KyleBing/english-vocabulary
 * GitHub: https://github.com/KyleBing/english-vocabulary
 */

#ifndef CET6_VOCABULARY_H
#define CET6_VOCABULARY_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief 单词数据结构
 */
typedef struct {
    const char *word;           /**< 英文单词 */
    const char *phonetic_us;    /**< 美式音标 */
    const char *phonetic_uk;    /**< 英式音标 */
    const char *meaning;        /**< 中文释义 */
    const char *example;        /**< 例句 */
    const char *example_cn;     /**< 例句翻译 */
} word_entry_t;

/**
 * @brief 六级词库数据
 * @note 共 2078 个单词
 */
static const word_entry_t cet6_words[] = {
    {
        .word = "trade",
        .phonetic_us = "tred",
        .phonetic_uk = "treɪd",
        .meaning = "做买卖；交换",
        .example = "They had to travel into town to trade the produce from their farm.",
        .example_cn = "他们不得不到镇上去出售他们农场的产品。"
    },
    {
        .word = "deal",
        .phonetic_us = "dil",
        .phonetic_uk = "diːl",
        .meaning = "买卖毒品",
        .example = "Many users end up dealing to support their habit.",
        .example_cn = "许多吸毒者最后都是靠做毒品买卖来供自己吸毒。"
    },
    {
        .word = "hike",
        .phonetic_us = "haɪk",
        .phonetic_uk = "haɪk",
        .meaning = "作长途徒步旅行",
        .example = "He wants to hike round the world.",
        .example_cn = "他打算徒步旅行环游世界一周。"
    },
    {
        .word = "action",
        .phonetic_us = "'ækʃən",
        .phonetic_uk = "'ækʃ(ə)n",
        .meaning = "行动",
        .example = "The government must take action (=do something) now to stop the rise in violent crime.",
        .example_cn = "政府现在必须采取行动遏止暴力犯罪的上升。"
    },
    {
        .word = "resultant",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "作为结果而发生的",
        .example = "She is still trying to get over the attack and the resultant injuries.",
        .example_cn = "她仍在努力从袭击以及由此造成的伤害中恢复过来。"
    },
    {
        .word = "consequent",
        .phonetic_us = "'kɑnsəkwənt",
        .phonetic_uk = "'kɒnsɪkw(ə)nt",
        .meaning = "作为结果的；必然的",
        .example = "the rise in inflation and consequent fall in demand",
        .example_cn = "通货膨胀的加剧和随之而来的需求下降"
    },
    {
        .word = "composer",
        .phonetic_us = "kəm'pozɚ",
        .phonetic_uk = "kəm'pəʊzə",
        .meaning = "作曲家",
        .example = "...music by Strauss, Mozart, Beethoven, and other great composers.",
        .example_cn = "…施特劳斯、莫扎特、贝多芬及其他伟大作曲家创作的音乐。"
    },
    {
        .word = "slave",
        .phonetic_us = "sleɪv",
        .phonetic_uk = "sleɪv",
        .meaning = "作苦工；奴役",
        .example = "When you're busy all day the last thing you want to do is spend hours slaving over a hot stove.",
        .example_cn = "当你忙碌了一整天后，你最不愿意做的事就是花好几个钟头在灼热的火炉边辛苦地劳作。"
    },
    {
        .word = "grunt",
        .phonetic_us = "ɡrʌnt",
        .phonetic_uk = "grʌnt",
        .meaning = "作呼噜声；咕哝",
        .example = "Grunting with effort, she lifted me up.",
        .example_cn = "她哼哧着费力地把我抱起来。"
    },
    {
        .word = "abide",
        .phonetic_us = "ə'baɪd",
        .phonetic_uk = "ə'baɪd",
        .meaning = "忍受；遵守",
        .example = "I can't abide people with no sense of humour.",
        .example_cn = "我讨厌和没有幽默感的人打交道。"
    },
    {
        .word = "value",
        .phonetic_us = "'vælju",
        .phonetic_uk = "'væljuː",
        .meaning = "尊重，重视；估价",
        .example = "Shelley valued her privacy.",
        .example_cn = "谢利很重视自己的隐私。"
    },
    {
        .word = "dignity",
        .phonetic_us = "'dɪɡnəti",
        .phonetic_uk = "'dɪgnɪtɪ",
        .meaning = "庄重；尊严；体面",
        .example = "We do this because we believe in the dignity and value of every person.",
        .example_cn = "我们这样做是因为我们相信每个人的尊严和价值。"
    },
    {
        .word = "outermost",
        .phonetic_us = "'aʊtɚ'most",
        .phonetic_uk = "'aʊtəməʊst",
        .meaning = "最外面的，最远的",
        .example = "the outermost stars",
        .example_cn = "最远的恒星"
    },
    {
        .word = "optimum",
        .phonetic_us = "'ɑptəməm",
        .phonetic_uk = "'ɒptɪməm",
        .meaning = "最优的，最适宜的",
        .example = "optimum conditions for growth",
        .example_cn = "最适宜生长的条件"
    },
    {
        .word = "initially",
        .phonetic_us = "ɪ'nɪʃəli",
        .phonetic_uk = "ɪ'nɪʃ(ə)lɪ",
        .meaning = "最初，开始",
        .example = "Stan initially wanted to go to medical school.",
        .example_cn = "斯坦最初想进医学院。"
    },
    {
        .word = "makeup",
        .phonetic_us = "'mek,ʌp",
        .phonetic_uk = "meɪkʌp",
        .meaning = "化妆品；性格；构造；组成",
        .example = "Normally she wore little makeup, but this evening was clearly an exception.",
        .example_cn = "通常她很少化妆，可今晚显然是个例外。"
    },
    {
        .word = "integral",
        .phonetic_us = "'ɪntɪɡrəl",
        .phonetic_uk = "ˈɪntɪɡrəl",
        .meaning = "作为组成部分的；内置的",
        .example = "a TV and integral video recorder",
        .example_cn = "内置录像机的电视"
    },
    {
        .word = "composition",
        .phonetic_us = ",kɑmpə'zɪʃən",
        .phonetic_uk = "kɒmpə'zɪʃ(ə)n",
        .meaning = "组成，构成，结构",
        .example = "Some minerals have complex chemical compositions.",
        .example_cn = "有些矿物的化学构成很复杂。"
    },
    {
        .word = "block",
        .phonetic_us = "blɑk",
        .phonetic_uk = "blɒk",
        .meaning = "阻塞；障碍物",
        .example = "a major block to progress",
        .example_cn = "进步的重大阻碍"
    },
    {
        .word = "damn",
        .phonetic_us = "dæm",
        .phonetic_uk = "dæm",
        .meaning = "谴责",
        .example = "...a sensational book in which she damns the ultraright party.",
        .example_cn = "…她谴责极右党派的一本耸人听闻的书。"
    },
    {
        .word = "ample",
        .phonetic_us = "'æmpl",
        .phonetic_uk = "'æmp(ə)l",
        .meaning = "足够的；宽敞的",
        .example = "There'll be ample opportunity to relax, swim and soak up some sun.",
        .example_cn = "将会有充足的机会来放松、游泳和接受一些阳光。"
    },
    {
        .word = "suffice",
        .phonetic_us = "sə'faɪs",
        .phonetic_uk = "sə'faɪs",
        .meaning = "足够",
        .example = "A light lunch will suffice.",
        .example_cn = "简单的午餐就够了。"
    },
    {
        .word = "lease",
        .phonetic_us = "lis",
        .phonetic_uk = "liːs",
        .meaning = "租约，契约，租契",
        .example = "The landlord refused to renew his lease.",
        .example_cn = "房东拒绝和他续签租约。"
    },
    {
        .word = "charter",
        .phonetic_us = "'tʃɑrtɚ",
        .phonetic_uk = "'tʃɑːtə",
        .meaning = "包租（飞机、船等）",
        .example = "We chartered a boat to take us to some of the smaller islands.",
        .example_cn = "我们包了一条船带我们到一些较小的岛上去。"
    },
    {
        .word = "headquarters",
        .phonetic_us = "'hɛdkwɔrtɚz",
        .phonetic_uk = "hed'kwɔːtəz",
        .meaning = "总部",
        .example = "the headquarters of the United Nations",
        .example_cn = "联合国总部"
    },
    {
        .word = "executive",
        .phonetic_us = "ɪɡ'zɛkjətɪv",
        .phonetic_uk = "ɪg'zekjʊtɪv; eg-",
        .meaning = "（机构或公司的）主管，经理",
        .example = "a marketing executive",
        .example_cn = "营销主管"
    },
    {
        .word = "main",
        .phonetic_us = "",
        .phonetic_uk = "meɪn",
        .meaning = "总管道，干线",
        .example = "The report found that many of Yorkshire’s water mains needed replacing.",
        .example_cn = "报告中说约克郡的很多自来水总管道需要更换。"
    },
    {
        .word = "overall",
        .phonetic_us = ",ovə'rɔl",
        .phonetic_uk = "'əʊvərɔːl",
        .meaning = "总的",
        .example = "...the overall rise in unemployment.",
        .example_cn = "…失业人数的总体上升。"
    },
    {
        .word = "conceit",
        .phonetic_us = "kən'sit",
        .phonetic_uk = "kən'siːt",
        .meaning = "自负，自高自大",
        .example = "The conceit of the woman!",
        .example_cn = "这个自负的女人！"
    },
    {
        .word = "ultraviolet",
        .phonetic_us = ",ʌltrə'vaɪələt",
        .phonetic_uk = "ʌltrə'vaɪələt",
        .meaning = "紫外（线）的",
        .example = "The sun's ultraviolet rays are responsible for both tanning and burning.",
        .example_cn = "太阳的紫外线是皮肤晒黑和晒伤的原因。"
    },
    {
        .word = "descendant",
        .phonetic_us = "dɪ'sɛndənt",
        .phonetic_uk = "dɪ'send(ə)nt",
        .meaning = "子孙，后裔",
        .example = "He was a direct descendant of Napoleon Bonaparte.",
        .example_cn = "他是拿破仑·波拿巴的嫡系后裔。"
    },
    {
        .word = "endow",
        .phonetic_us = "ɪn'daʊ",
        .phonetic_uk = "ɪn'daʊ; en-",
        .meaning = "资助；赋予",
        .example = "The ambassador has endowed a $1 million public-service fellowships programme.",
        .example_cn = "大使资助了一个100万美元的公共服务奖学金项目。"
    },
    {
        .word = "datum",
        .phonetic_us = "ˈdetəm ; ˈdætəm ; (also) ˈdɑtəm",
        .phonetic_uk = "ˈdeɪtəm ; ˈdɑːtəm",
        .meaning = "资料；数据；已知数",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "qualification",
        .phonetic_us = ",kwɑlɪfɪ'keʃən",
        .phonetic_uk = ",kwɒlɪfɪ'keɪʃ(ə)n",
        .meaning = "资格；学历",
        .example = "He left school without any qualifications.",
        .example_cn = "他离校时没有拿到任何文凭。"
    },
    {
        .word = "bourgeois",
        .phonetic_us = ",bʊr'ʒwɑ",
        .phonetic_uk = "'bʊəʒwɑː",
        .meaning = "中产阶级的；庸俗的；资产阶级的",
        .example = "She came from a bourgeois family.",
        .example_cn = "她来自一个中产阶级家庭。"
    },
    {
        .word = "woodpecker",
        .phonetic_us = "'wʊdpɛkɚ",
        .phonetic_uk = "'wʊdpekə",
        .meaning = "啄木鸟",
        .example = "A woodcutter and a woodpecker lived in the forest.",
        .example_cn = "森林里居住着一个樵夫和一个啄木鸟。"
    },
    {
        .word = "bump",
        .phonetic_us = "bʌmp",
        .phonetic_uk = "bʌmp",
        .meaning = "撞上",
        .example = "They stopped walking and he almost bumped into them.",
        .example_cn = "他们停下了脚步，这下他几乎撞到他们。"
    },
    {
        .word = "crash",
        .phonetic_us = "kræʃ",
        .phonetic_uk = "kræʃ",
        .meaning = "（发出巨响的） 猛撞",
        .example = "The door swung inwards to crash against a chest of drawers behind it.",
        .example_cn = "门摆向里面，砰的一声猛力撞上了门后的五斗橱。"
    },
    {
        .word = "way",
        .phonetic_us = "we",
        .phonetic_uk = "weɪ",
        .meaning = "（特定的）状态，状况",
        .example = "My family was in a bad way financially.",
        .example_cn = "我家当时经济窘迫。"
    },
    {
        .word = "superb",
        .phonetic_us = "/suːˈpɜːrb/",
        .phonetic_uk = "suː'pɜːb; sjuː-",
        .meaning = "壮丽的；超等的",
        .example = "The food was superb.",
        .example_cn = "食物好吃极了。"
    },
    {
        .word = "ornament",
        .phonetic_us = "'ɔrnəmənt",
        .phonetic_uk = "'ɔːnəm(ə)nt",
        .meaning = "装饰物",
        .example = "a shelf covered with books and ornaments",
        .example_cn = "摆满书籍和装饰品的架子"
    },
    {
        .word = "decorative",
        .phonetic_us = "'dɛkəretɪv",
        .phonetic_uk = "'dek(ə)rətɪv",
        .meaning = "装饰的；可作装饰的",
        .example = "a decorative panel above the door",
        .example_cn = "门楣上的饰板"
    },
    {
        .word = "ornamental",
        .phonetic_us = ",ɔrnə'mɛntl",
        .phonetic_uk = "ɔːnə'ment(ə)l",
        .meaning = "装饰的",
        .example = "...an ornamental fountain.",
        .example_cn = "…一个装饰性喷泉。"
    },
    {
        .word = "mount",
        .phonetic_us = "maʊnt",
        .phonetic_uk = "maʊnt",
        .meaning = "装配",
        .example = "Her husband mounts the work on velour paper and makes the frame.",
        .example_cn = "她丈夫把作品装裱到丝绒纸上，又做了框架。"
    },
    {
        .word = "shipment",
        .phonetic_us = "'ʃɪpmənt",
        .phonetic_uk = "'ʃɪpm(ə)nt",
        .meaning = "装载的货物；装货",
        .example = "The goods are ready for shipment.",
        .example_cn = "货物已经准备好装运。"
    },
    {
        .word = "can",
        .phonetic_us = "kæn",
        .phonetic_uk = "kæn",
        .meaning = "装罐头",
        .example = "...fruits and vegetables that will be canned, skinned, diced, or otherwise processed.",
        .example_cn = "…将要经过装罐、去皮、切块或其他加工程序的水果和蔬菜。"
    },
    {
        .word = "array",
        .phonetic_us = "ə're",
        .phonetic_uk = "ə'reɪ",
        .meaning = "（美观地）排列",
        .example = "make-up arrayed on the bathroom counter",
        .example_cn = "盥洗台上摆放整齐的化妆品"
    },
    {
        .word = "diversion",
        .phonetic_us = "dəˈvɝʒən; dəˈvɝʃən; daɪˈvɝʒən; daɪˈvɝʃən",
        .phonetic_uk = "daɪ'vɜːʃ(ə)n; dɪ-",
        .meaning = "转移；改道；娱乐",
        .example = "A slight diversion in the road is causing major headaches for businesses along El Camino Real.",
        .example_cn = "马路上的一小段绕行道让国王大道沿街的商家十分头疼。"
    },
    {
        .word = "convert",
        .phonetic_us = "kən'vɝt",
        .phonetic_uk = "kən'vɜːt",
        .meaning = "转变，改变，变换",
        .example = "a 19th-century converted barn",
        .example_cn = "由19世纪谷仓改建的房子"
    },
    {
        .word = "transition",
        .phonetic_us = "træn'zɪʃən",
        .phonetic_uk = "træn'zɪʃ(ə)n; trɑːn-; -'sɪʃ-",
        .meaning = "转变，变迁；过渡",
        .example = "Making the transition from youth to adulthood can be very painful.",
        .example_cn = "从青少年过渡到成年有时是一个非常痛苦的过程。"
    },
    {
        .word = "torque",
        .phonetic_us = "tɔrk",
        .phonetic_uk = "tɔːk",
        .meaning = "转（力）矩，扭（力）矩",
        .example = "In rotation, force becomes torque, mass becomes moment of inertia, and acceleration becomes angular acceleration.",
        .example_cn = "在旋转时，力变成力矩，质量变成转动惯量，加速度变成角加速度。"
    },
    {
        .word = "box",
        .phonetic_us = "bɑks",
        .phonetic_uk = "bɒks",
        .meaning = "（法庭的）专席",
        .example = "the jury box",
        .example_cn = "陪审团席"
    },
    {
        .word = "workshop",
        .phonetic_us = "'wɝkʃɑp",
        .phonetic_uk = "'wɜːkʃɒp",
        .meaning = "专题讨论会",
        .example = "Trumpeter Marcus Belgrave ran a jazz workshop for young artists.",
        .example_cn = "鼓手马库斯马贝尔格瑞夫为年轻艺术家们举办了一场爵士乐研讨会。"
    },
    {
        .word = "patent",
        .phonetic_us = "'pætnt",
        .phonetic_uk = "'pæt(ə)nt; 'peɪt(ə)nt",
        .meaning = "专利的",
        .example = "a patent lock",
        .example_cn = "专利锁"
    },
    {
        .word = "clutch",
        .phonetic_us = "klʌtʃ",
        .phonetic_uk = "klʌtʃ",
        .meaning = "抓住，掌握，攫",
        .example = "She was clutching a bottle of champagne.",
        .example_cn = "她手里紧紧抓着一瓶香槟酒。"
    },
    {
        .word = "nest",
        .phonetic_us = "nɛst",
        .phonetic_uk = "nest",
        .meaning = "筑巢，为…筑巢",
        .example = "They say eagles used to nest in those rocks.",
        .example_cn = "他们说以前常有老鹰在那些岩石中筑巢。"
    },
    {
        .word = "coin",
        .phonetic_us = "kɔɪn",
        .phonetic_uk = "kɒɪn",
        .meaning = "铸造（硬币）",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "noted",
        .phonetic_us = "'notɪd",
        .phonetic_uk = "'nəʊtɪd",
        .meaning = "著名的，知名的",
        .example = "a noted author",
        .example_cn = "著名作家"
    },
    {
        .word = "watchful",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "注意的，警惕的",
        .example = "The entrances are guarded by watchful security staff.",
        .example_cn = "入口处由警惕的保安人员把守。"
    },
    {
        .word = "inject",
        .phonetic_us = "ɪn'dʒɛkt",
        .phonetic_uk = "ɪn'dʒekt",
        .meaning = "注射；注满；喷射",
        .example = "His son was injected with strong drugs.",
        .example_cn = "他的儿子被注射了强效的药。"
    },
    {
        .word = "storage",
        .phonetic_us = "'stɔrɪdʒ",
        .phonetic_uk = "'stɔːrɪdʒ",
        .meaning = "贮藏；保管",
        .example = "the storage of highly radioactive material",
        .example_cn = "高放射性材料的存放"
    },
    {
        .word = "position",
        .phonetic_us = "pə'zɪʃən",
        .phonetic_uk = "pə'zɪʃ(ə)n",
        .meaning = "形势；主张，立场",
        .example = "I’m not sure what I would do if I were in your position .",
        .example_cn = "我不知道如果我身在你的处境会怎么办。"
    },
    {
        .word = "metropolitan",
        .phonetic_us = ",mɛtrə'pɑlɪtən",
        .phonetic_uk = "metrə'pɒlɪt(ə)n",
        .meaning = "主要都市的",
        .example = "a metropolitan area of South Australia",
        .example_cn = "南澳大利亚的一个都市区"
    },
    {
        .word = "principally",
        .phonetic_us = "'prɪnsəpli",
        .phonetic_uk = "'prɪnsɪp(ə)lɪ",
        .meaning = "主要，大抵",
        .example = "The money is principally invested in stocks and shares.",
        .example_cn = "这笔钱主要投资于股票。"
    },
    {
        .word = "stalk",
        .phonetic_us = "stɔk",
        .phonetic_uk = "stɔːk",
        .meaning = "主茎，叶柄",
        .example = "celery stalks",
        .example_cn = "芹菜茎"
    },
    {
        .word = "preside",
        .phonetic_us = "prɪ'zaɪd",
        .phonetic_uk = "prɪ'zaɪd",
        .meaning = "主持；主奏",
        .example = "I shall be pleased to preside at your meetings.",
        .example_cn = "我很高兴主持你们的会议。"
    },
    {
        .word = "eject",
        .phonetic_us = "ɪ'dʒɛkt",
        .phonetic_uk = "ɪ'dʒekt",
        .meaning = "逐出，排斥；喷射",
        .example = "The demonstrators were ejected from the hall.",
        .example_cn = "示威者被赶出大厅。"
    },
    {
        .word = "bamboo",
        .phonetic_us = ",bæm'bu",
        .phonetic_uk = "bæm'buː",
        .meaning = "竹；竹杆，竹棍",
        .example = "...huts with walls of bamboo.",
        .example_cn = "…竹墙小屋。"
    },
    {
        .word = "jewellery",
        .phonetic_us = "'dʒu:əlri",
        .phonetic_uk = "'dʒuːəlrɪ",
        .meaning = "珠宝，珠宝饰物",
        .example = "She wears a lot of gold jewelry.",
        .example_cn = "她戴了许多金首饰。"
    },
    {
        .word = "wrinkle",
        .phonetic_us = "'rɪŋkl",
        .phonetic_uk = "'rɪŋkl",
        .meaning = "皱纹",
        .example = "Her face was a mass of wrinkles.",
        .example_cn = "她的脸上布满皱纹。"
    },
    {
        .word = "axial",
        .phonetic_us = "'æksɪəl",
        .phonetic_uk = "'æksɪəl",
        .meaning = "轴的；轴向的",
        .example = "Angular momentum is an axial vector quantity.",
        .example_cn = "角动量是一种轴矢量。"
    },
    {
        .word = "axis",
        .phonetic_us = "'æksɪs",
        .phonetic_uk = "'æksɪs",
        .meaning = "轴，轴线",
        .example = "The Earth rotates on an axis between the north and south poles.",
        .example_cn = "地球绕着南北两极之间的地轴自转。"
    },
    {
        .word = "ambient",
        .phonetic_us = "'æmbɪənt",
        .phonetic_uk = "'æmbɪənt",
        .meaning = "周围的，包围着的",
        .example = "...ambient sounds of children in the background.",
        .example_cn = "...背景处环绕着孩子们的声音。"
    },
    {
        .word = "periodic",
        .phonetic_us = ",pɪrɪ'ɑdɪk",
        .phonetic_uk = ",pɪərɪ'ɒdɪk",
        .meaning = "周期的；一定时期的",
        .example = "periodic home visits by nurses",
        .example_cn = "护士的定期上门探访"
    },
    {
        .word = "anniversary",
        .phonetic_us = ",ænɪ'vɝsəri",
        .phonetic_uk = "ænɪ'vɜːs(ə)rɪ",
        .meaning = "周年纪念日",
        .example = "Jack and Kim celebrated their twentieth wedding anniversary in January.",
        .example_cn = "1月，杰克和金庆祝了他们的结婚20周年纪念日。"
    },
    {
        .word = "peripheral",
        .phonetic_us = "pə'rɪfərəl",
        .phonetic_uk = "pə'rɪf(ə)r(ə)l",
        .meaning = "外围的的；末梢的",
        .example = "the city’s peripheral suburbs",
        .example_cn = "这座城市的市郊"
    },
    {
        .word = "perimeter",
        .phonetic_us = "pə'rɪmɪtɚ",
        .phonetic_uk = "pə'rɪmɪtə",
        .meaning = "周（边）；周长",
        .example = "...the perimeter of the airport.",
        .example_cn = "…机场周边。"
    },
    {
        .word = "anybody",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "重要人物",
        .example = "She wasn't anybody before she got that job.",
        .example_cn = "她在获得那个职位之前不过是个无名之辈。"
    },
    {
        .word = "responsible",
        .phonetic_us = "rɪ'spɑnsəbl",
        .phonetic_uk = "rɪ'spɒnsɪb(ə)l",
        .meaning = "可靠的；责任重大的",
        .example = "You can leave the children with Billy – he’s very responsible.",
        .example_cn = "你可以把孩子交给比利，他非常可靠。"
    },
    {
        .word = "consequence",
        .phonetic_us = "'kɑnsəkwɛns",
        .phonetic_uk = "'kɒnsɪkw(ə)ns",
        .meaning = "重要（性），重大意义",
        .example = "I don’t suppose it is of any consequence now.",
        .example_cn = "现在我觉得这事一点都无所谓了。"
    },
    {
        .word = "category",
        .phonetic_us = "'kætəɡɔri",
        .phonetic_uk = "'kætɪg(ə)rɪ",
        .meaning = "种类，类目；范畴",
        .example = "people in the over-45 age category",
        .example_cn = "属45岁以上年龄组的人"
    },
    {
        .word = "species",
        .phonetic_us = "'spiʃiz",
        .phonetic_uk = "'spiːʃiːz; -ʃɪz; 'spiːs-",
        .meaning = "种，物种；种类",
        .example = "Seven species of birds of prey have been observed.",
        .example_cn = "已有七种猛禽被观察到。"
    },
    {
        .word = "hearty",
        .phonetic_us = "'hɑrti",
        .phonetic_uk = "'hɑːtɪ",
        .meaning = "热情友好的；丰盛的",
        .example = "a hearty laugh",
        .example_cn = "开怀大笑"
    },
    {
        .word = "neutron",
        .phonetic_us = "'nʊtrɑn",
        .phonetic_uk = "'njuːtrɒn",
        .meaning = "中子",
        .example = "Each atomic cluster is made up of neutrons and protons.",
        .example_cn = "每个原子团簇是由中子和质子组成的。"
    },
    {
        .word = "intermediate",
        .phonetic_us = ",ɪntɚ'midɪət",
        .phonetic_uk = ",ɪntə'miːdɪət",
        .meaning = "中间体；调解人",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "proton",
        .phonetic_us = "'protɑn",
        .phonetic_uk = "'prəʊtɒn",
        .meaning = "质子，氕核",
        .example = "When a neutron inside an atom decays, it produces a proton, an electron, and a neutrino.",
        .example_cn = "原子内的一个中子衰变后会产生一个质子、一个电子和一个中微子。"
    },
    {
        .word = "qualitative",
        .phonetic_us = "'kwɑlətetɪv",
        .phonetic_uk = "'kwɒlɪtətɪv",
        .meaning = "质的；定性的",
        .example = "There are qualitative differences in the way children of different ages and adults think.",
        .example_cn = "不同年龄的儿童和成人在思维方式上有着质的差异。"
    },
    {
        .word = "fabricate",
        .phonetic_us = "'fæbrɪket",
        .phonetic_uk = "'fæbrɪkeɪt",
        .meaning = "捏造；制作",
        .example = "The police were accused of fabricating evidence.",
        .example_cn = "警方被控捏造证据。"
    },
    {
        .word = "fabrication",
        .phonetic_us = ",fæbrɪ'keʃən",
        .phonetic_uk = "fæbrɪ'keɪʃ(ə)n",
        .meaning = "捏造；制作",
        .example = "Her story was a complete fabrication from start to finish.",
        .example_cn = "她的叙述从头到尾都是编造出来的。"
    },
    {
        .word = "volunteer",
        .phonetic_us = ",vɑlən'tɪr",
        .phonetic_uk = ",vɒlən'tɪə",
        .meaning = "志愿者",
        .example = "Most of the relief work was done by volunteers.",
        .example_cn = "大部分救援工作都由志愿人员完成。"
    },
    {
        .word = "rebuke",
        .phonetic_us = "rɪ'bjʊk",
        .phonetic_uk = "rɪ'bjuːk",
        .meaning = "指责，非难，斥责",
        .example = "The president rebuked the House and Senate for not passing those bills within 100 days.",
        .example_cn = "总统谴责参众两院未在100天内通过那些法案。"
    },
    {
        .word = "indicative",
        .phonetic_us = "ɪn'dɪkətɪv",
        .phonetic_uk = "ɪn'dɪkətɪv",
        .meaning = "指示的；陈述的",
        .example = "This behaviour is indicative of her whole attitude, I’m afraid.",
        .example_cn = "这一行为恐怕已表明了她的总体态度。"
    },
    {
        .word = "denote",
        .phonetic_us = "dɪ'not",
        .phonetic_uk = "dɪ'nəʊt",
        .meaning = "指示，意味着",
        .example = "What does the word ‘curriculum’ denote that ‘course’ does not?",
        .example_cn = "curriculum一词的哪些含义是course没有的？"
    },
    {
        .word = "instructor",
        .phonetic_us = "ɪn'strʌktɚ",
        .phonetic_uk = "ɪn'strʌktə",
        .meaning = "指导者，教员",
        .example = "a driving instructor",
        .example_cn = "驾驶教练"
    },
    {
        .word = "designate",
        .phonetic_us = "'dɛzɪɡnet",
        .phonetic_uk = "'dezɪgneɪt",
        .meaning = "指定；指示；指明",
        .example = "This floor has been designated a no-smoking area.",
        .example_cn = "这楼层已定为无烟区。"
    },
    {
        .word = "colonial",
        .phonetic_us = "kə'lonɪəl",
        .phonetic_uk = "kə'ləʊnɪəl",
        .meaning = "殖民地的，殖民的",
        .example = "the struggle against colonial rule",
        .example_cn = "反抗殖民统治的斗争"
    },
    {
        .word = "vocation",
        .phonetic_us = "vo'keʃən",
        .phonetic_uk = "və(ʊ)'keɪʃ(ə)n",
        .meaning = "职业，行业",
        .example = "At 17 she found her true vocation as a writer.",
        .example_cn = "17岁时她找到了自己真正的使命——当一名作家。"
    },
    {
        .word = "notable",
        .phonetic_us = "'notəbl",
        .phonetic_uk = "'nəʊtəb(ə)l",
        .meaning = "值得注意的；著名的",
        .example = "The town is notable for its busy open-air market.",
        .example_cn = "该城镇因其热闹的露天市场而出名。"
    },
    {
        .word = "merit",
        .phonetic_us = "'mɛrɪt",
        .phonetic_uk = "'merɪt",
        .meaning = "值得；应受赏（罚）",
        .example = "The results have been encouraging enough to merit further investigation.",
        .example_cn = "结果令人振奋，值得进一步调查研究。"
    },
    {
        .word = "weaver",
        .phonetic_us = "'wivɚ",
        .phonetic_uk = "'wiːvə",
        .meaning = "织布工，编织者",
        .example = "basket weavers",
        .example_cn = "编篮子的人"
    },
    {
        .word = "brace",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "支柱",
        .example = "She had to wear a brace after the accident.",
        .example_cn = "出事以后她只得使用支架。"
    },
    {
        .word = "check",
        .phonetic_us = "tʃɛk",
        .phonetic_uk = "tʃek",
        .meaning = "支票；帐单",
        .example = "Can I pay by check?",
        .example_cn = "我可以用支票付款吗？"
    },
    {
        .word = "second",
        .phonetic_us = "'sɛkənd",
        .phonetic_uk = "'sek(ə)nd",
        .meaning = "支持",
        .example = "Any proposal must be seconded by two other members of the committee.",
        .example_cn = "任何提案须有委员会其他两位委员附议。"
    },
    {
        .word = "bearing",
        .phonetic_us = "'bɛrɪŋ",
        .phonetic_uk = "'beərɪŋ",
        .meaning = "方位；（机器的）承座；轴承；忍受",
        .example = "learning to take a compass bearing",
        .example_cn = "学习用罗盘辨别方向"
    },
    {
        .word = "symptom",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "症状；征兆，征候",
        .example = "One of the most common symptoms of schizophrenia is hearing imaginary voices.",
        .example_cn = "精神分裂症最常见的症状之一是幻听。"
    },
    {
        .word = "regime",
        .phonetic_us = "re'ʒim",
        .phonetic_uk = "reɪ'ʒiːm",
        .meaning = "政权，政体；制度",
        .example = "The regime got rid of most of its opponents.",
        .example_cn = "该政权清除了大多数反对者。"
    },
    {
        .word = "politics",
        .phonetic_us = "'pɑlətɪks",
        .phonetic_uk = "'pɒlɪtɪks",
        .meaning = "政纲，政见，策略",
        .example = "I assume her politics must be fairly conservative.",
        .example_cn = "我猜她的政治观点一定相当保守。"
    },
    {
        .word = "platform",
        .phonetic_us = "'plæt'fɔrm",
        .phonetic_uk = "'plætfɔːm",
        .meaning = "政纲，党纲，宣言",
        .example = "a strong women’s rights platform",
        .example_cn = "强硬的妇女权利政纲"
    },
    {
        .word = "confirmation",
        .phonetic_us = ",kɑnfɚ'meʃən",
        .phonetic_uk = "kɒnfə'meɪʃ(ə)n",
        .meaning = "证实，确定；确认",
        .example = "There has still been no official confirmation of the report.",
        .example_cn = "这则报道仍未得到官方证实。"
    },
    {
        .word = "testify",
        .phonetic_us = "'tɛstɪfaɪ",
        .phonetic_uk = "'testɪfaɪ",
        .meaning = "作证；证明，证实",
        .example = "Mr Molto has agreed to testify at the trial.",
        .example_cn = "莫尔托先生已经同意出庭作证。"
    },
    {
        .word = "audience",
        .phonetic_us = "'ɔdɪəns",
        .phonetic_uk = "'ɔːdɪəns",
        .meaning = "正式会见；拜会",
        .example = "He was granted an audience with the Pope.",
        .example_cn = "他获准觐见教皇。"
    },
    {
        .word = "correctly",
        .phonetic_us = "kə'rɛktli",
        .phonetic_uk = "kə'rek(t)lɪ",
        .meaning = "正确地，恰当地",
        .example = "The writer expresses himself correctly in English.",
        .example_cn = "作家用英语正确地表达自己的意思。"
    },
    {
        .word = "positive",
        .phonetic_us = "'pɑzətɪv",
        .phonetic_uk = "'pɒzɪtɪv",
        .meaning = "正的，阳性的；正的，正极的，阳性的；正的，正数的",
        .example = "The test results came back positive.",
        .example_cn = "化验结果呈阳性。"
    },
    {
        .word = "normalization",
        .phonetic_us = "nɔrmləˈzeʃən",
        .phonetic_uk = ",nɔːməlaɪ'zeɪʃən",
        .meaning = "正常化，标准化",
        .example = "the normalization of relations",
        .example_cn = "关系的正常化"
    },
    {
        .word = "sign",
        .phonetic_us = "saɪn",
        .phonetic_uk = "saɪn",
        .meaning = "征兆，迹象，病症",
        .example = "A paw print in the dust was a sign that a tiger was close.",
        .example_cn = "沙土里的一个爪印表明附近有老虎。"
    },
    {
        .word = "conqueror",
        .phonetic_us = "'kɑŋkərɚ",
        .phonetic_uk = "'kɒŋk(ə)rə(r)",
        .meaning = "征服者，胜利者",
        .example = "The people of an oppressed country obey their conquerors because they want to go on living.",
        .example_cn = "一个被压迫国家的人民顺从他们的征服者，是因为他们想活下去。"
    },
    {
        .word = "controversy",
        .phonetic_us = "ˈkɑːntrəvɜːrsi",
        .phonetic_uk = "'kɒntrəvɜːsɪ; kən'trɒvəsɪ",
        .meaning = "争论，辩论，争吵",
        .example = "a political controversy",
        .example_cn = "政治争议"
    },
    {
        .word = "suppress",
        .phonetic_us = "sə'prɛs",
        .phonetic_uk = "sə'pres",
        .meaning = "镇压；抑制；禁止发表；封锁；查禁",
        .example = "The uprising was ruthlessly suppressed.",
        .example_cn = "起义受到了残酷的镇压。"
    },
    {
        .word = "gust",
        .phonetic_us = "ɡʌst",
        .phonetic_uk = "gʌst",
        .meaning = "阵风，一阵狂风",
        .example = "A gust of wind drove down the valley.",
        .example_cn = "一阵狂风掠过山谷。"
    },
    {
        .word = "clinic",
        .phonetic_us = "'klɪnɪk",
        .phonetic_uk = "'klɪnɪk",
        .meaning = "诊所，医务室；会诊；会诊时间；门诊时间",
        .example = "an appointment at an outpatient clinic",
        .example_cn = "门诊预约"
    },
    {
        .word = "diagnose",
        .phonetic_us = ",daɪəɡ'nos",
        .phonetic_uk = "'daɪəgnəʊz; -'nəʊz",
        .meaning = "诊断（疾病）",
        .example = "The soldiers were diagnosed as having flu.",
        .example_cn = "这些士兵被诊断为患了流感。"
    },
    {
        .word = "sincerity",
        .phonetic_us = "sɪn'sɪərəti",
        .phonetic_uk = "sɪn'serətɪ",
        .meaning = "真诚，诚意；真实",
        .example = "I don’t doubt her sincerity, but I think she’s got her facts wrong.",
        .example_cn = "我不怀疑她的诚意，但我认为她没弄清楚事实。"
    },
    {
        .word = "cherish",
        .phonetic_us = "'tʃɛrɪʃ",
        .phonetic_uk = "'tʃerɪʃ",
        .meaning = "珍爱；怀有（感情）",
        .example = "In marriage, a man promises to cherish his wife.",
        .example_cn = "在婚姻中，男人承诺要爱护妻子。"
    },
    {
        .word = "detective",
        .phonetic_us = "dɪ'tɛktɪv",
        .phonetic_uk = "dɪ'tektɪv",
        .meaning = "侦探，警探；私人侦探，私家侦探",
        .example = "Now detectives are appealing for witnesses who may have seen anything suspicious last night.",
        .example_cn = "现在侦探们正在呼吁昨晚可能看到任何可疑情况的人出来作证。"
    },
    {
        .word = "underline",
        .phonetic_us = "'ʌndəlaɪn",
        .phonetic_uk = "ʌndə'laɪn",
        .meaning = "着重；强调",
        .example = "This tragic incident underlines the need for immediate action.",
        .example_cn = "这一悲剧事件突显了立即采取行动的必要性。"
    },
    {
        .word = "grind",
        .phonetic_us = "ɡraɪnd",
        .phonetic_uk = "graɪnd",
        .meaning = "磨碎，碾碎，把...磨成粉",
        .example = "Store the peppercorns in an airtight container and grind the pepper as you need it.",
        .example_cn = "将胡椒子储藏在密封容器里，当你需要的时候把它磨成粉。"
    },
    {
        .word = "discount",
        .phonetic_us = "dɪs'kaʊnt",
        .phonetic_uk = "'dɪskaʊnt",
        .meaning = "折扣",
        .example = "They are often available at a discount.",
        .example_cn = "它们经常可以以折扣价买到。"
    },
    {
        .word = "literally",
        .phonetic_us = "'lɪtərəli",
        .phonetic_uk = "'lɪt(ə)rəlɪ",
        .meaning = "照字义，逐字地",
        .example = "The name of the cheese is Dolcelatte, literally meaning ‘sweet milk’.",
        .example_cn = "这种奶酪名叫Dolcelatte，字面意思是 “甜牛奶” 。"
    },
    {
        .word = "illuminate",
        .phonetic_us = "ɪ'lumɪnet",
        .phonetic_uk = "ɪ'l(j)uːmɪneɪt",
        .meaning = "照明，照亮；阐明",
        .example = "A single candle illuminated his face.",
        .example_cn = "一支蜡烛照亮了他的脸。"
    },
    {
        .word = "summon",
        .phonetic_us = "'sʌmən",
        .phonetic_uk = "'sʌmən",
        .meaning = "召唤；鼓起（勇气）",
        .example = "Robert summoned the waiter for the bill.",
        .example_cn = "罗伯特召唤服务员结账。"
    },
    {
        .word = "marsh",
        .phonetic_us = "mɑrʃ",
        .phonetic_uk = "mɑːʃ",
        .meaning = "沼泽地，湿地",
        .example = "Cows were grazing on the marshes.",
        .example_cn = "牛群在湿地上吃草。"
    },
    {
        .word = "entertainment",
        .phonetic_us = "'ɛntɚ'tenmənt",
        .phonetic_uk = "entə'teɪnm(ə)nt",
        .meaning = "招待，招待会",
        .example = "the entertainment of friends",
        .example_cn = "招待朋友"
    },
    {
        .word = "hindrance",
        .phonetic_us = "'hɪndrəns",
        .phonetic_uk = "'hɪndr(ə)ns",
        .meaning = "障碍，妨碍",
        .example = "A degree is more of a hindrance than a help in British industry.",
        .example_cn = "在英国工业界，学位反倒是个累赘。"
    },
    {
        .word = "hose",
        .phonetic_us = "hoz",
        .phonetic_uk = "həʊz",
        .meaning = "软管；袜类（包括连裤袜、长筒袜、短袜）",
        .example = "You've left the garden hose on.",
        .example_cn = "你没有关花园的水管。"
    },
    {
        .word = "sofa",
        .phonetic_us = "'sofə",
        .phonetic_uk = "'səʊfə",
        .meaning = "长沙发，沙发",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "tensile",
        .phonetic_us = "'tɛnsl",
        .phonetic_uk = "'tensaɪl",
        .meaning = "张力的；能伸长的",
        .example = "tensile rubber",
        .example_cn = "有伸缩性的橡胶"
    },
    {
        .word = "warfare",
        .phonetic_us = "'wɔrfɛr",
        .phonetic_uk = "'wɔːfeə",
        .meaning = "战争，战争状态",
        .example = "the realities of modern warfare",
        .example_cn = "现代战争的真实面貌"
    },
    {
        .word = "battle",
        .phonetic_us = "'bætl",
        .phonetic_uk = "'bæt(ə)l",
        .meaning = "战斗，与…作战",
        .example = "...the notorious Montonero guerrilla group who did battle with the army during the dirty war...",
        .example_cn = "曾在那场肮脏的战争中与这支部队交战的臭名昭著的蒙特内罗游击队"
    },
    {
        .word = "predominant",
        .phonetic_us = "prɪ'dɑmənənt",
        .phonetic_uk = "prɪ'dɒmɪnənt",
        .meaning = "占优势的；主要的",
        .example = "the predominant group in society",
        .example_cn = "社会中的主导群体"
    },
    {
        .word = "unfold",
        .phonetic_us = "ʌn'fold",
        .phonetic_uk = "ʌn'fəʊld",
        .meaning = "展开；展现，呈现",
        .example = "She unfolded her arms.",
        .example_cn = "她张开双臂。"
    },
    {
        .word = "cling",
        .phonetic_us = "klɪŋ",
        .phonetic_uk = "klɪŋ",
        .meaning = "粘住；依附；坚持",
        .example = "His wet shirt clung to his body.",
        .example_cn = "他的湿衬衫紧紧地贴在身上。"
    },
    {
        .word = "viscous",
        .phonetic_us = "'vɪskəs",
        .phonetic_uk = "'vɪskəs",
        .meaning = "粘滞的，粘性的",
        .example = "As the liquid cools, it becomes viscous.",
        .example_cn = "这液体冷却后会变黏稠。"
    },
    {
        .word = "coherent",
        .phonetic_us = "ko'hɪrənt",
        .phonetic_uk = "kə(ʊ)'hɪər(ə)nt",
        .meaning = "（文章、观点等）连贯的，有条理的，一致的",
        .example = "The three years of the course are planned as a coherent whole.",
        .example_cn = "这三年的课程是作为连贯的整体来安排的。"
    },
    {
        .word = "album",
        .phonetic_us = "'ælbəm",
        .phonetic_uk = "'ælbəm",
        .meaning = "（收存照片或邮票的） 册子",
        .example = "a photograph album",
        .example_cn = "相册"
    },
    {
        .word = "glue",
        .phonetic_us = "ɡlu",
        .phonetic_uk = "gluː",
        .meaning = "粘牢",
        .example = "Glue the fabric around the window.",
        .example_cn = "用胶把这布粘在窗户四周。"
    },
    {
        .word = "cement",
        .phonetic_us = "sə'mɛnt",
        .phonetic_uk = "sɪ'ment",
        .meaning = "粘结",
        .example = "Most artificial joints are cemented into place.",
        .example_cn = "绝大部分人造关节是被黏结复位的。"
    },
    {
        .word = "adhere",
        .phonetic_us = "əd'hɪr",
        .phonetic_uk = "əd'hɪə",
        .meaning = "粘附；追随；坚持",
        .example = "Small particles adhere to the seed.",
        .example_cn = "微小的粒子紧贴着种子。"
    },
    {
        .word = "strip",
        .phonetic_us = "strɪp",
        .phonetic_uk = "strɪp",
        .meaning = "窄条，长带",
        .example = "a strip of paper",
        .example_cn = "一张纸条"
    },
    {
        .word = "grasshopper",
        .phonetic_us = "'ɡræshɑpɚ",
        .phonetic_uk = "'grɑːshɒpə",
        .meaning = "蚱蜢，蝗虫，蚂蚱",
        .example = "One day a grasshopper came upon an ant at work in a garden.",
        .example_cn = "一天， 蚱蜢碰到了一只正在花园里干活的蚂蚁。"
    },
    {
        .word = "wink",
        .phonetic_us = "wɪŋk",
        .phonetic_uk = "wɪŋk",
        .meaning = "眨眼；使眼色",
        .example = "He winked an eye at his companion.",
        .example_cn = "他朝同伴眨眨眼。"
    },
    {
        .word = "further",
        .phonetic_us = "'fɝðɚ",
        .phonetic_uk = "'fɜːðə",
        .meaning = "增进",
        .example = "Education needn't only be about furthering your career.",
        .example_cn = "教育不必只是与推进你的事业有关。"
    },
    {
        .word = "multiplication",
        .phonetic_us = "'mʌltəplə'keʃən",
        .phonetic_uk = ",mʌltɪplɪ'keɪʃ(ə)n",
        .meaning = "乘法；增加",
        .example = "There will be simple tests in addition, subtraction, multiplication, and division.",
        .example_cn = "将会有加减乘除的简单测试。"
    },
    {
        .word = "liability",
        .phonetic_us = "'laɪə'bɪləti",
        .phonetic_uk = "laɪə'bɪlɪtɪ",
        .meaning = "责任；债务",
        .example = "Tenants have legal liability for any damage they cause.",
        .example_cn = "承租人造成任何损坏都要负法律责任。"
    },
    {
        .word = "shipbuilding",
        .phonetic_us = "'ʃɪp,bɪldɪŋ",
        .phonetic_uk = "",
        .meaning = "造船（业），造船学",
        .example = "a shipbuilding yard",
        .example_cn = "造船厂"
    },
    {
        .word = "mint",
        .phonetic_us = "mɪnt",
        .phonetic_uk = "mɪnt",
        .meaning = "造币厂；巨额钱财",
        .example = "coins issued by the Royal Mint",
        .example_cn = "皇家铸币局发行的硬币"
    },
    {
        .word = "hollow",
        .phonetic_us = "'hɑlo",
        .phonetic_uk = "'hɒləʊ",
        .meaning = "凿空，挖空",
        .example = "Hollow out the cake and fill it with cream.",
        .example_cn = "在蛋糕上挖个洞，填入奶油。"
    },
    {
        .word = "hymn",
        .phonetic_us = "hɪm",
        .phonetic_uk = "hɪm",
        .meaning = "赞美诗，圣歌；赞歌",
        .example = "He liked to sing hymns as he worked.",
        .example_cn = "他工作时喜欢唱赞美诗。"
    },
    {
        .word = "glorify",
        .phonetic_us = "'ɡlɔrɪfaɪ",
        .phonetic_uk = "'glɔːrɪfaɪ",
        .meaning = "赞美；颂扬（上帝）",
        .example = "This magazine in no way glorifies gangs.",
        .example_cn = "本杂志决不美化各种犯罪团伙。"
    },
    {
        .word = "fore",
        .phonetic_us = "fɔr",
        .phonetic_uk = "fɔː",
        .meaning = "在（或向）船头；在（或向）飞行器头部",
        .example = "Our yacht was well equipped with two double cabins fore and aft.",
        .example_cn = "我们的游艇设施完备，首尾有两个双人舱。"
    },
    {
        .word = "therein",
        .phonetic_us = ",ðɛr'ɪn",
        .phonetic_uk = "ðeər'ɪn",
        .meaning = "在那里",
        .example = "See Thompson, 1983, and the references cited therein.",
        .example_cn = "见汤普森（1983）以及书中引用的参考资料。"
    },
    {
        .word = "overseas",
        .phonetic_us = ",ovɚ'siz",
        .phonetic_uk = "əʊvə'siːz",
        .meaning = "在海外，（向）国外",
        .example = "Chris is going to work overseas.",
        .example_cn = "克里斯要去国外工作。"
    },
    {
        .word = "ashore",
        .phonetic_us = "ə'ʃɔr",
        .phonetic_uk = "ə'ʃɔː",
        .meaning = "在岸上，上岸",
        .example = "Several dead birds had been washed ashore.",
        .example_cn = "几只死鸟被冲上了岸。"
    },
    {
        .word = "outside",
        .phonetic_us = ",aʊt'saɪd",
        .phonetic_uk = "aʊt'saɪd; 'aʊtsaɪd",
        .meaning = "在…外，向…外",
        .example = "You can park your car outside our house.",
        .example_cn = "你可以把汽车停在我们家屋外。"
    },
    {
        .word = "brand",
        .phonetic_us = "brænd",
        .phonetic_uk = "brænd",
        .meaning = "在…上打烙印",
        .example = "The owner couldn't be bothered to brand the cattle.",
        .example_cn = "主人懒得给这牛打上烙印。"
    },
    {
        .word = "alongside",
        .phonetic_us = "ə'lɔŋ'saɪd",
        .phonetic_uk = "əlɒŋ'saɪd",
        .meaning = "在…旁边",
        .example = "He crossed the street and walked alongside Central Park.",
        .example_cn = "他过了马路，然后在中央公园旁边走着。"
    },
    {
        .word = "roam",
        .phonetic_us = "rom",
        .phonetic_uk = "rəʊm",
        .meaning = "在…漫步，漫游",
        .example = "Chickens and geese roam freely in the back yard.",
        .example_cn = "鸡和鹅在后院随意溜达。"
    },
    {
        .word = "over",
        .phonetic_us = "'ovɚ",
        .phonetic_uk = "'əʊvə",
        .meaning = "在（做）…时",
        .example = "Will you be home over the summer vacation?",
        .example_cn = "暑假期间你在家吗？"
    },
    {
        .word = "reproduction",
        .phonetic_us = ",riprə'dʌkʃən",
        .phonetic_uk = "riːprə'dʌkʃ(ə)n",
        .meaning = "再生（产）；繁殖",
        .example = "Scientists studied the reproduction, diet, and health of the dolphins.",
        .example_cn = "科学家研究了海豚的繁殖情况、进食规律和健康状况。"
    },
    {
        .word = "specification",
        .phonetic_us = "'spɛsəfə'keʃən",
        .phonetic_uk = ",spesɪfɪ'keɪʃ(ə)n",
        .meaning = "规格；明确说明，详述",
        .example = "The bolts met all the engineering specifications.",
        .example_cn = "这些螺栓符合所有的工程设计规格。"
    },
    {
        .word = "disastrous",
        .phonetic_us = "dɪ'zæstrəs",
        .phonetic_uk = "dɪ'zɑːstrəs",
        .meaning = "灾难性的；悲惨的",
        .example = "a disastrous first marriage",
        .example_cn = "以失败告终的第一次婚姻"
    },
    {
        .word = "operation",
        .phonetic_us = ",ɑpə'reʃən",
        .phonetic_uk = "ɒpə'reɪʃ(ə)n",
        .meaning = "运算",
        .example = "The whole operation is performed in less than three seconds.",
        .example_cn = "全部运算在三秒内完成。"
    },
    {
        .word = "freight",
        .phonetic_us = "fret",
        .phonetic_uk = "freɪt",
        .meaning = "货运；运费",
        .example = "freight services",
        .example_cn = "货运公司"
    },
    {
        .word = "locomotive",
        .phonetic_us = ",lokə'motɪv",
        .phonetic_uk = "ləʊkə'məʊtɪv",
        .meaning = "运动的；机动",
        .example = "an increase in locomotive power",
        .example_cn = "运动力的增加"
    },
    {
        .word = "lunar",
        .phonetic_us = "'lunɚ",
        .phonetic_uk = "'luːnə",
        .meaning = "月亮的",
        .example = "studies of the lunar surface",
        .example_cn = "对月球表面的研究"
    },
    {
        .word = "undertake",
        .phonetic_us = ",ʌndɚ'tek",
        .phonetic_uk = "ʌndə'teɪk",
        .meaning = "从事；承诺",
        .example = "She undertook the task of monitoring the elections.",
        .example_cn = "她承担了监督选举的任务。"
    },
    {
        .word = "primitive",
        .phonetic_us = "'prɪmətɪv",
        .phonetic_uk = "'prɪmɪtɪv",
        .meaning = "远古的，未开化的",
        .example = "a primitive society",
        .example_cn = "原始社会"
    },
    {
        .word = "dome",
        .phonetic_us = "dom",
        .phonetic_uk = "dəʊm",
        .meaning = "圆屋顶，拱顶",
        .example = "...the dome of the Capitol.",
        .example_cn = "…国会大厦的穹顶。"
    },
    {
        .word = "cylinder",
        .phonetic_us = "'sɪlɪndɚ",
        .phonetic_uk = "'sɪlɪndə",
        .meaning = "圆筒；柱（面）；汽缸",
        .example = "The gases are stored in cylinders.",
        .example_cn = "气体储存在圆筒内。"
    },
    {
        .word = "satisfactorily",
        .phonetic_us = "ˌsætɪs'fæktərɪlɪ",
        .phonetic_uk = ",sætɪs'fæktərəlɪ",
        .meaning = "圆满地",
        .example = "Her disappearance has never been satisfactorily explained.",
        .example_cn = "她的失踪一直没有得到令人信服的解释。"
    },
    {
        .word = "nucleus",
        .phonetic_us = "'nuklɪəs",
        .phonetic_uk = "'njuːklɪəs",
        .meaning = "原子核，细胞核",
        .example = "Neutrons and protons are bound together in the nucleus of an atom.",
        .example_cn = "在一个原子的核内，中子和质子聚合在一起。"
    },
    {
        .word = "prototype",
        .phonetic_us = "'protə'taɪp",
        .phonetic_uk = "'prəʊtətaɪp",
        .meaning = "原型；典型，范例",
        .example = "the prototype of the modern bicycle",
        .example_cn = "现代自行车的雏形"
    },
    {
        .word = "vowel",
        .phonetic_us = "'vaʊəl",
        .phonetic_uk = "'vaʊəl",
        .meaning = "元音；元音字母",
        .example = "Each language has a different vowel system.",
        .example_cn = "每种语言都有不同的元音系统。"
    },
    {
        .word = "marshal",
        .phonetic_us = "'mɑrʃəl",
        .phonetic_uk = "'mɑːʃ(ə)l",
        .meaning = "元帅；陆军元帅",
        .example = "Marshal Zhukov",
        .example_cn = "朱可夫元帅"
    },
    {
        .word = "subscription",
        .phonetic_us = "səb'skrɪpʃən",
        .phonetic_uk = "səb'skrɪpʃ(ə)n",
        .meaning = "订阅（费）；用户费（的缴纳）",
        .example = "You may cancel your subscription at any time.",
        .example_cn = "你随时可以取消订阅。"
    },
    {
        .word = "prophet",
        .phonetic_us = "'prɑfɪt",
        .phonetic_uk = "'prɒfɪt",
        .meaning = "预言家，先知",
        .example = "the prophet Elijah",
        .example_cn = "先知以利亚"
    },
    {
        .word = "prophecy",
        .phonetic_us = "'prɑfəsi",
        .phonetic_uk = "'prɒfɪsɪ",
        .meaning = "预言；预言能力",
        .example = "the prophecy of Isaiah",
        .example_cn = "以赛亚的预言"
    },
    {
        .word = "prediction",
        .phonetic_us = "prɪ'dɪkʃən",
        .phonetic_uk = "prɪ'dɪkʃ(ə)n",
        .meaning = "预言，预告；预报",
        .example = "The data can be used to make useful economic predictions .",
        .example_cn = "这些数据可用于进行有用的经济预测。"
    },
    {
        .word = "preset",
        .phonetic_us = ",pri'sɛt",
        .phonetic_uk = "priː'set",
        .meaning = "预先装置",
        .example = "...a computerized timer that can be preset.",
        .example_cn = "...一个可以预调的电脑定时器。"
    },
    {
        .word = "beforehand",
        .phonetic_us = "bɪ'fɔrhænd",
        .phonetic_uk = "bɪ'fɔːhænd",
        .meaning = "预先；提前地",
        .example = "The police need to be briefed beforehand on how to deal with this sort of situation.",
        .example_cn = "需要事先告诉警察这种情况怎样处理。"
    },
    {
        .word = "budget",
        .phonetic_us = "'bʌdʒɪt",
        .phonetic_uk = "'bʌdʒɪt",
        .meaning = "预算；〔政府的〕",
        .example = "We had a really tight budget.",
        .example_cn = "我们的预算很紧。"
    },
    {
        .word = "foresee",
        .phonetic_us = "fɔr'si",
        .phonetic_uk = "fɔː'siː",
        .meaning = "预见，预知，看穿",
        .example = "I’ve put your name on the list and I don’t foresee any problems.",
        .example_cn = "我把你的名字写在名单上了，估计不会有什么问题。"
    },
    {
        .word = "prevention",
        .phonetic_us = "pri'vɛnʃən",
        .phonetic_uk = "prɪ'venʃn",
        .meaning = "预防，阻止，妨碍",
        .example = "a fire prevention officer",
        .example_cn = "消防官员"
    },
    {
        .word = "tulip",
        .phonetic_us = "'tʊlɪp",
        .phonetic_uk = "'tjuːlɪp",
        .meaning = "郁金香",
        .example = "In a vase on the table stood a tulip.",
        .example_cn = "桌上的花瓶里插着一束郁金香。"
    },
    {
        .word = "intonation",
        .phonetic_us = ",ɪntə'neʃən",
        .phonetic_uk = "ɪntə'neɪʃ(ə)n",
        .meaning = "语调，声调；发声",
        .example = "intonation patterns",
        .example_cn = "语调类型"
    },
    {
        .word = "cosmic",
        .phonetic_us = "'kɑzmɪk",
        .phonetic_uk = "'kɒzmɪk",
        .meaning = "宇宙的；广大无边的，极大的",
        .example = "the cosmic laws governing our world",
        .example_cn = "主宰我们世界的宇宙法则"
    },
    {
        .word = "cosmos",
        .phonetic_us = "'kɑzmos",
        .phonetic_uk = "'kɒzmɒs",
        .meaning = "宇宙",
        .example = "...the natural laws of the cosmos.",
        .example_cn = "…宇宙的自然法则。"
    },
    {
        .word = "overlap",
        .phonetic_us = "'ovəlæp",
        .phonetic_uk = "əʊvə'læp",
        .meaning = "与…交搭，重叠",
        .example = "When the bag is folded, the bottom overlaps one side.",
        .example_cn = "把包折叠起来时，其底部与一边就重合了。"
    },
    {
        .word = "excuse",
        .phonetic_us = "ɪk'skjʊs",
        .phonetic_uk = "ɪk'skjuːz; ek-",
        .meaning = "为…辩解；使免除",
        .example = "He excused himself by saying he was 'forced to rob to maintain my wife and cat.'",
        .example_cn = "他辩解说自己是“为了供养妻子和猫儿被迫去抢劫的”。"
    },
    {
        .word = "senseless",
        .phonetic_us = "'sɛnsləs",
        .phonetic_uk = "'senslɪs",
        .meaning = "愚蠢的，无意义的",
        .example = "Her death seemed such a senseless waste of life.",
        .example_cn = "她的死真是无谓地浪费生命。"
    },
    {
        .word = "amusement",
        .phonetic_us = "ə'mjuzmənt",
        .phonetic_uk = "ə'mjuːzm(ə)nt",
        .meaning = "乐趣；娱乐，消遣",
        .example = "Steve couldn’t hide his amusement.",
        .example_cn = "史蒂夫忍俊不禁。"
    },
    {
        .word = "torpedo",
        .phonetic_us = "tɔr'pido",
        .phonetic_uk = "tɔː'piːdəʊ",
        .meaning = "鱼雷，水雷",
        .example = "His ship was blown up by a torpedo.",
        .example_cn = "他的船被一枚鱼雷炸毁了。"
    },
    {
        .word = "margin",
        .phonetic_us = "'mɑrdʒən",
        .phonetic_uk = "'mɑːdʒɪn",
        .meaning = "余地；（获胜者在时间或票数上领先的）幅度，差额；利润；赚头",
        .example = "It’ll take about 30 minutes to dry but I’d allow a safety margin of, say, another 10 minutes.",
        .example_cn = "要30分钟左右才能干，不过保险一点，再多10分钟吧。"
    },
    {
        .word = "roundabout",
        .phonetic_us = "'raʊndəbaʊt",
        .phonetic_uk = "'raʊndəbaʊt",
        .meaning = "转弯抹角的；迂回的",
        .example = "He told us, in a very roundabout way, that he was thinking of leaving.",
        .example_cn = "他拐弯抹角地对我们说他想走了。"
    },
    {
        .word = "kidnap",
        .phonetic_us = "'kɪdnæp",
        .phonetic_uk = "'kɪdnæp",
        .meaning = "诱拐，绑架",
        .example = "Police appealed for witnesses after a woman was kidnapped at gunpoint.",
        .example_cn = "一名妇女遭到持枪绑架，警方呼吁目击者挺身而出。"
    },
    {
        .word = "guilt",
        .phonetic_us = "ɡɪlt",
        .phonetic_uk = "gɪlt",
        .meaning = "内疚；有罪，犯罪",
        .example = "He used to buy them expensive presents, out of guilt.",
        .example_cn = "出于内疚，他以前总是给他们买昂贵的礼物。"
    },
    {
        .word = "shadowy",
        .phonetic_us = "'ʃædoi",
        .phonetic_uk = "'ʃædəʊɪ",
        .meaning = "有影的；幽暗的",
        .example = "a shadowy room",
        .example_cn = "幽暗的房间"
    },
    {
        .word = "avail",
        .phonetic_us = "ə'vel",
        .phonetic_uk = "ə'veɪl",
        .meaning = "有益于，有用",
        .example = "Guests should feel at liberty to avail themselves of your facilities.",
        .example_cn = "客人们应可以随意使用你们的设施。"
    },
    {
        .word = "ambitious",
        .phonetic_us = "æm'bɪʃəs",
        .phonetic_uk = "æm'bɪʃəs",
        .meaning = "有雄心的；热望的",
        .example = "Alfred was intensely ambitious, obsessed with the idea of becoming rich.",
        .example_cn = "艾尔弗雷德雄心勃勃，一心想着发财。"
    },
    {
        .word = "significant",
        .phonetic_us = "sɪɡ'nɪfɪkənt",
        .phonetic_uk = "sɪg'nɪfɪk(ə)nt",
        .meaning = "重要的，重大的，影响深远的",
        .example = "His most significant political achievement was the abolition of the death penalty.",
        .example_cn = "他政治上最重大的成就是废除了死刑。"
    },
    {
        .word = "validity",
        .phonetic_us = "və'lɪdəti",
        .phonetic_uk = "və'lɪdɪtɪ",
        .meaning = "（法律上的）有效；符合逻辑，正确",
        .example = "The period of validity of the agreement has expired.",
        .example_cn = "本协议的有效期已过。"
    },
    {
        .word = "availability",
        .phonetic_us = "ə,velə'bɪləti",
        .phonetic_uk = "ə,veɪlə'bɪlətɪ",
        .meaning = "有效（性）；可得性",
        .example = "the availability of cheap flights",
        .example_cn = "有廉价机票出售"
    },
    {
        .word = "finite",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "有限的；有尽的",
        .example = "the earth’s finite resources",
        .example_cn = "地球有限的资源"
    },
    {
        .word = "magnet",
        .phonetic_us = "'mægnɪt",
        .phonetic_uk = "ˈmæɡnɪt",
        .meaning = "有吸引力的人（或物）",
        .example = "Prospect Park, with its vast lake, is a magnet for all health freaks.",
        .example_cn = "拥有大片湖区的展望公园是所有健身迷的向往之地。"
    },
    {
        .word = "profitable",
        .phonetic_us = "'prɑfɪtəbl",
        .phonetic_uk = "'prɒfɪtəb(ə)l",
        .meaning = "有利的；有益的",
        .example = "The advertising campaign proved very profitable.",
        .example_cn = "事实证明，这次广告宣传活动卓有成效。"
    },
    {
        .word = "advantageous",
        .phonetic_us = "'ædvən'tedʒəs",
        .phonetic_uk = "ædvən'teɪdʒəs",
        .meaning = "有利的，有助的",
        .example = "He was now in a more advantageous position.",
        .example_cn = "他现在的位置更有利。"
    },
    {
        .word = "courteous",
        .phonetic_us = "'kɝtɪəs",
        .phonetic_uk = "'kɜːtjəs",
        .meaning = "有礼貌的，谦恭的",
        .example = "The staff are always courteous and helpful.",
        .example_cn = "员工们总是彬彬有礼、乐于帮助。"
    },
    {
        .word = "bead",
        .phonetic_us = "bid",
        .phonetic_uk = "biːd",
        .meaning = "有孔小珠；水珠；露珠",
        .example = "She wore a string of green glass beads around her neck.",
        .example_cn = "她脖子上戴着一串绿色的玻璃珠子。"
    },
    {
        .word = "commonsense",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "有常识的",
        .example = "The judge's ruling was based on the simple commonsense tenet that no man is above the law.",
        .example_cn = "法官的判决基于一个常识性原则，即谁也不能凌驾于法律之上。"
    },
    {
        .word = "conservative",
        .phonetic_us = "kən'sɝvətɪv",
        .phonetic_uk = "kən'sɜːvətɪv",
        .meaning = "保守的，守旧的",
        .example = "a very conservative attitude to education",
        .example_cn = "对待教育非常守旧的态度"
    },
    {
        .word = "liable",
        .phonetic_us = "'laɪəbl",
        .phonetic_uk = "'laɪəb(ə)l",
        .meaning = "有（法律）责任的",
        .example = "The airline's insurer is liable for damages to the victims' families.",
        .example_cn = "航空公司投保的保险公司为遇难者家庭的损失负法律责任。"
    },
    {
        .word = "yacht",
        .phonetic_us = "jɑt",
        .phonetic_uk = "jɒt",
        .meaning = "游艇，快艇",
        .example = "His 36 ft yacht sank suddenly last summer.",
        .example_cn = "他的36英尺游艇去年夏天突然沉没了。"
    },
    {
        .word = "uranium",
        .phonetic_us = "jʊ'renɪəm",
        .phonetic_uk = "jʊ'reɪnɪəm",
        .meaning = "铀",
        .example = "The fuel was enriched with uranium 235 for the nuclear reactor.",
        .example_cn = "核反应堆的燃料被铀235浓缩。"
    },
    {
        .word = "tanker",
        .phonetic_us = "'tæŋkɚ",
        .phonetic_uk = "'tæŋkə",
        .meaning = "油船；空中加油飞机",
        .example = "A Greek oil tanker has run aground.",
        .example_cn = "一艘希腊油轮已经搁浅了。"
    },
    {
        .word = "postal",
        .phonetic_us = "'postl",
        .phonetic_uk = "'pəʊst(ə)l",
        .meaning = "邮政的，邮局的",
        .example = "the U.S. postal service",
        .example_cn = "美国邮政"
    },
    {
        .word = "superiority",
        .phonetic_us = "su,pɪrɪ'ɔrəti",
        .phonetic_uk = "suː,pɪərɪ'ɒrɪtɪ; sjuː-",
        .meaning = "优越（性），优势",
        .example = "the intellectual superiority of humans over other animals",
        .example_cn = "人类相比其他动物所具有的智力优势"
    },
    {
        .word = "elbow",
        .phonetic_us = "'ɛlbo",
        .phonetic_uk = "'elbəʊ",
        .meaning = "用肘挤，挤进",
        .example = "She pushed through the crowd, elbowing people out of the way.",
        .example_cn = "她用手肘把人们推开，从人群中挤了出来。"
    },
    {
        .word = "paper",
        .phonetic_us = "'pepɚ",
        .phonetic_uk = "'peɪpə",
        .meaning = "贴壁纸",
        .example = "The previous owners had obviously papered over any damp patches.",
        .example_cn = "原先的房主显然是用壁纸把潮斑都盖起来了。"
    },
    {
        .word = "cutter",
        .phonetic_us = "'kʌtɚ",
        .phonetic_uk = "'kʌtə",
        .meaning = "用于切割的器械",
        .example = "wire cutters",
        .example_cn = "钢丝钳，铁丝剪"
    },
    {
        .word = "net",
        .phonetic_us = "nɛt",
        .phonetic_uk = "net",
        .meaning = "用网捕；用网覆盖",
        .example = "We netted three fish in under an hour.",
        .example_cn = "不到一小时我们就网住了三条鱼。"
    },
    {
        .word = "head",
        .phonetic_us = "hɛd",
        .phonetic_uk = "hed",
        .meaning = "用头顶（球）；朝...行进",
        .example = "He headed the ball across the face of the goal.",
        .example_cn = "他一个头球，球从球门前横飞而过。"
    },
    {
        .word = "tug",
        .phonetic_us = "tʌɡ",
        .phonetic_uk = "tʌg",
        .meaning = "用力拖",
        .example = "The woman gently tugged his arm.",
        .example_cn = "那女人轻轻拽了拽他的胳膊。"
    },
    {
        .word = "hook",
        .phonetic_us = "hʊk",
        .phonetic_uk = "hʊk",
        .meaning = "（使）钩住，挂住",
        .example = "We hooked the trailer to the back of the car.",
        .example_cn = "我们把拖车挂在汽车尾部。"
    },
    {
        .word = "formulate",
        .phonetic_us = "'fɔrmjə'let",
        .phonetic_uk = "'fɔːmjʊleɪt",
        .meaning = "规划；制定；准备",
        .example = "He formulated Labour Party education policy in 1922.",
        .example_cn = "1922年，他制定了工党教育政策。"
    },
    {
        .word = "sniff",
        .phonetic_us = "snɪf",
        .phonetic_uk = "snɪf",
        .meaning = "用鼻子吸，嗅",
        .example = "He opened the milk and sniffed it.",
        .example_cn = "他打开牛奶闻了闻。"
    },
    {
        .word = "courageous",
        .phonetic_us = "kə'redʒəs",
        .phonetic_uk = "kə'reɪdʒəs",
        .meaning = "勇敢的，无畏的",
        .example = "He was wrong, and courageous enough to admit it.",
        .example_cn = "他是错了，而且有勇气承认自己错了。"
    },
    {
        .word = "emigrate",
        .phonetic_us = "'ɛmɪɡret",
        .phonetic_uk = "'emɪgreɪt",
        .meaning = "永久移居国外",
        .example = "He emigrated to Belgium.",
        .example_cn = "他移民去了比利时。"
    },
    {
        .word = "perpetual",
        .phonetic_us = "pɚ'pɛtʃuəl",
        .phonetic_uk = "pə'petʃʊəl; -tjʊəl",
        .meaning = "永久的；四季开花的",
        .example = "the perpetual snows of the mountaintops",
        .example_cn = "山顶的终年积雪"
    },
    {
        .word = "everlasting",
        .phonetic_us = ",ɛvɚ'læstɪŋ",
        .phonetic_uk = "evə'lɑːstɪŋ",
        .meaning = "永久的；持久的",
        .example = "everlasting fame",
        .example_cn = "永久的名声"
    },
    {
        .word = "eternal",
        .phonetic_us = "ɪ'tɝnl",
        .phonetic_uk = "ɪ'tɜːn(ə)l; iː-",
        .meaning = "永久的；不朽的",
        .example = "the Christian promise of eternal life",
        .example_cn = "基督教承诺的永生"
    },
    {
        .word = "stiffness",
        .phonetic_us = "'stɪfnɪs",
        .phonetic_uk = "'stɪfnɪs",
        .meaning = "硬度",
        .example = "If you eat soon after your workout, you can minimize muscle stiffness and soreness.",
        .example_cn = "如果在训练不久之后进食，就可以减缓肌肉僵硬和疼痛。"
    },
    {
        .word = "comply",
        .phonetic_us = "kəm'plaɪ",
        .phonetic_uk = "kəm'plaɪ",
        .meaning = "应允，遵照，照做",
        .example = "The commander said that the army would comply with the ceasefire.",
        .example_cn = "指挥官说过部队会遵从停火协议。"
    },
    {
        .word = "bound",
        .phonetic_us = "baʊnd",
        .phonetic_uk = "baʊnd",
        .meaning = "应当的；必定的",
        .example = "Don’t lie to her. She’s bound to find out.",
        .example_cn = "别骗她，她肯定会发现的。"
    },
    {
        .word = "salute",
        .phonetic_us = "sə'lut",
        .phonetic_uk = "sə'l(j)uːt",
        .meaning = "（向…）行军礼，（向…）致敬",
        .example = "The two soldiers saluted Lieutenant Cecil.",
        .example_cn = "那两名士兵向塞西尔中尉行了礼。"
    },
    {
        .word = "cater",
        .phonetic_us = "'ketɚ",
        .phonetic_uk = "'keɪtə",
        .meaning = "迎合，投合",
        .example = "We cater to an exclusive clientele.",
        .example_cn = "我们满足一个特殊客户群的需求。"
    },
    {
        .word = "press",
        .phonetic_us = "prɛs",
        .phonetic_uk = "pres",
        .meaning = "出版社；印刷所；印刷机",
        .example = "Oxford University Press",
        .example_cn = "牛津大学出版社"
    },
    {
        .word = "printer",
        .phonetic_us = "'prɪntɚ",
        .phonetic_uk = "'prɪntə",
        .meaning = "印刷工；印花工",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "harbour",
        .phonetic_us = "hɑrbɚ",
        .phonetic_uk = "ˈhɑ:bə(r)",
        .meaning = "怀着（不好的想法、恐惧或希望）；包含，藏有；窝藏",
        .example = "I think he’s harbouring some sort of grudge against me.",
        .example_cn = "我觉得他对我有点怀恨在心。"
    },
    {
        .word = "diet",
        .phonetic_us = "'daɪət",
        .phonetic_uk = "'daɪət",
        .meaning = "日常饮食，日常食物",
        .example = "She doesn’t eat a very healthy diet.",
        .example_cn = "她的饮食不是很健康。"
    },
    {
        .word = "tempt",
        .phonetic_us = "tɛmpt",
        .phonetic_uk = "tem(p)t",
        .meaning = "引诱，诱惑，劝诱",
        .example = "If you leave valuables in your car it will tempt thieves.",
        .example_cn = "如果把贵重物品留在车上，会招来小偷的。"
    },
    {
        .word = "cite",
        .phonetic_us = "saɪt",
        .phonetic_uk = "saɪt",
        .meaning = "引证；引用；〔法院〕传召，传讯",
        .example = "The judge cited a 1956 Supreme Court ruling in her decision.",
        .example_cn = "法官在她的判决中引用了1956年最高法院的一项裁决。"
    },
    {
        .word = "ignite",
        .phonetic_us = "ɪɡ'naɪt",
        .phonetic_uk = "ɪg'naɪt",
        .meaning = "引燃，着火",
        .example = "The bombs ignited a fire which destroyed some 60 houses.",
        .example_cn = "炸弹引起了一场火灾，烧毁了大约六十间房屋。"
    },
    {
        .word = "derivation",
        .phonetic_us = "'dɛrə'veʃən",
        .phonetic_uk = "derɪ'veɪʃ(ə)n",
        .meaning = "引出；起源；衍生",
        .example = "The derivation of its name is obscure.",
        .example_cn = "它名字的根源起源鲜为人知。"
    },
    {
        .word = "banker",
        .phonetic_us = "'bæŋkɚ",
        .phonetic_uk = "'bæŋkə",
        .meaning = "银行家",
        .example = "...an investment banker.",
        .example_cn = "…一位投资银行家。"
    },
    {
        .word = "obscure",
        .phonetic_us = "əb'skjʊr",
        .phonetic_uk = "əb'skjʊə",
        .meaning = "无名的；鲜为人知的",
        .example = "an obscure poet",
        .example_cn = "名不见经传的诗人"
    },
    {
        .word = "inasmuch",
        .phonetic_us = ",ɪnəz'mʌtʃ",
        .phonetic_uk = "ɪnəz'mʌtʃ",
        .meaning = "因为，由于",
        .example = "Forgive them inasmuch as they are young.",
        .example_cn = "原谅他们吧，因为他们还年轻。"
    },
    {
        .word = "through",
        .phonetic_us = "θru",
        .phonetic_uk = "θruː",
        .meaning = "因为，由于",
        .example = "How many working days were lost through sickness last year?",
        .example_cn = "去年因为员工生病损失了多少个工作日？"
    },
    {
        .word = "consciousness",
        .phonetic_us = "'kɑnʃəsnəs",
        .phonetic_uk = "'kɒnʃəsnɪs",
        .meaning = "意识；知觉",
        .example = "The painful memories eventually faded from her consciousness.",
        .example_cn = "那些痛苦的回忆最终从她的意识中淡去了。"
    },
    {
        .word = "observation",
        .phonetic_us = ",ɑbzɚ'veʃən",
        .phonetic_uk = "ɒbzə'veɪʃ(ə)n",
        .meaning = "意见，短评，按语",
        .example = "Darwin’s observations on the habits of certain birds",
        .example_cn = "达尔文对某些鸟类习性的论述"
    },
    {
        .word = "cross",
        .phonetic_us = "krɔs",
        .phonetic_uk = "krɒs",
        .meaning = "恼怒的",
        .example = "She gets cross when he goes out drinking.",
        .example_cn = "他出去喝酒她就不高兴。"
    },
    {
        .word = "refrain",
        .phonetic_us = "rɪ'fren",
        .phonetic_uk = "rɪ'freɪn",
        .meaning = "抑制，制止，忍住",
        .example = "Mrs. Hardie refrained from making any comment.",
        .example_cn = "哈迪太太忍住了没做任何评论。"
    },
    {
        .word = "restrain",
        .phonetic_us = "rɪ'stren",
        .phonetic_uk = "rɪ'streɪn",
        .meaning = "制止；抑制",
        .example = "I had to restrain her from running out into the street.",
        .example_cn = "我只得阻止她跑到街上去。"
    },
    {
        .word = "singular",
        .phonetic_us = "'sɪŋɡjəlɚ",
        .phonetic_uk = "'sɪŋgjʊlə",
        .meaning = "异常的，奇异的",
        .example = "I wondered why she was behaving in so singular a fashion.",
        .example_cn = "我真奇怪她为什么会有如此异常的行为。"
    },
    {
        .word = "house",
        .phonetic_us = "haʊs",
        .phonetic_uk = "haʊs",
        .meaning = "议院，会议厅",
        .example = "The president will address both houses of Congress.",
        .example_cn = "总统将向参众两院发表讲话。"
    },
    {
        .word = "obligation",
        .phonetic_us = ",ɑblɪ'ɡeʃən",
        .phonetic_uk = "ɒblɪ'geɪʃ(ə)n",
        .meaning = "义务，职责，责任",
        .example = "Employers have an obligation to treat all employees equally.",
        .example_cn = "雇主有责任对所有员工一视同仁。"
    },
    {
        .word = "formerly",
        .phonetic_us = "'fɔrmɚli",
        .phonetic_uk = "'fɔːməlɪ",
        .meaning = "以前，从前",
        .example = "Kiribati, formerly known as the Gilbert Islands",
        .example_cn = "基里巴斯，旧称吉尔伯特群岛"
    },
    {
        .word = "veil",
        .phonetic_us = "vel",
        .phonetic_uk = "veɪl",
        .meaning = "以面纱遮掩；遮盖",
        .example = "A black kerchief modestly veiled her hair.",
        .example_cn = "一条黑色头巾端庄地裹着她的头发。"
    },
    {
        .word = "desert",
        .phonetic_us = "(for v.) dɪˈzɝ​t; (for n.) 'dɛzɚt",
        .phonetic_uk = "(for v.) dɪ'zɜːt; (for n.) 'dezət",
        .meaning = "遗弃；擅离（职守）",
        .example = "Helen was deserted by her husband.",
        .example_cn = "海伦被丈夫遗弃了。"
    },
    {
        .word = "forsake",
        .phonetic_us = "fɔrˈsek, fə-",
        .phonetic_uk = "fə'seɪk",
        .meaning = "遗弃，抛弃；摒绝，摒弃",
        .example = "children forsaken by their parents",
        .example_cn = "被父母遗弃的孩子"
    },
    {
        .word = "transmission",
        .phonetic_us = "træns'mɪʃən",
        .phonetic_uk = "trænz'mɪʃ(ə)n; trɑːnz-; -ns-",
        .meaning = "传播，传染",
        .example = "the transmission of disease",
        .example_cn = "疾病的传播"
    },
    {
        .word = "displace",
        .phonetic_us = "dɪs'ples",
        .phonetic_uk = "dɪs'pleɪs",
        .meaning = "移置；取代；置换",
        .example = "Coal has been displaced by natural gas as a major source of energy.",
        .example_cn = "作为一种主要能源，煤的地位已为天然气所取代。"
    },
    {
        .word = "displacement",
        .phonetic_us = "dɪs'plesmənt",
        .phonetic_uk = "dɪs'pleɪsm(ə)nt",
        .meaning = "移置；免职；置换",
        .example = "the displacement of traditional agriculture by industrial crops",
        .example_cn = "经济作物对传统农业的替代"
    },
    {
        .word = "colonist",
        .phonetic_us = "'kɑlənɪst",
        .phonetic_uk = "'kɒlənɪst",
        .meaning = "移民；殖民地居民",
        .example = "The colonists struggled through their first winter.",
        .example_cn = "这些殖民地居民艰难地度过了第一个冬天。"
    },
    {
        .word = "instrumental",
        .phonetic_us = ",ɪnstrə'mɛntl",
        .phonetic_uk = "ɪnstrʊ'ment(ə)l",
        .meaning = "器乐的；有帮助的",
        .example = "...a CD of vocal and instrumental music.",
        .example_cn = "…一张声乐和器乐光盘。"
    },
    {
        .word = "wardrobe",
        .phonetic_us = "'wɔr'drob",
        .phonetic_uk = "'wɔːdrəʊb",
        .meaning = "衣柜，衣橱，藏衣室",
        .example = "Can you hang these in the wardrobe, please?",
        .example_cn = "请你把这些衣服挂到衣橱里去好吗？"
    },
    {
        .word = "garment",
        .phonetic_us = "'gɑrmənt",
        .phonetic_uk = "'gɑːm(ə)nt",
        .meaning = "衣服；服装，衣着",
        .example = "She pulled the garment on and zipped it up.",
        .example_cn = "她穿上衣服并拉好拉链。"
    },
    {
        .word = "Islam",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "伊斯兰教，回教",
        .example = "He converted to Islam at the age of 16.",
        .example_cn = "他在16岁时皈依了伊斯兰教。"
    },
    {
        .word = "evenly",
        .phonetic_us = "'ivnli",
        .phonetic_uk = "'i:vənlɪ",
        .meaning = "一致地；平静地",
        .example = "The profits will be split evenly between the three of us.",
        .example_cn = "利润将由我们三人平分。"
    },
    {
        .word = "compatible",
        .phonetic_us = "kəm'pætəbl",
        .phonetic_uk = "kəm'pætɪb(ə)l",
        .meaning = "兼容的",
        .example = "The new software is IBM compatible (= can be used with IBM computers ) .",
        .example_cn = "这个新软件与IBM的计算机兼容。"
    },
    {
        .word = "stitch",
        .phonetic_us = "stɪtʃ",
        .phonetic_uk = "stɪtʃ",
        .meaning = "一针，缝线",
        .example = "Her mother counted the stitches on her knitting needles.",
        .example_cn = "她的母亲数了数编织针上的针数。"
    },
    {
        .word = "troop",
        .phonetic_us = "trʊp",
        .phonetic_uk = "truːp",
        .meaning = "一群，一队，大量",
        .example = "a troop of monkeys",
        .example_cn = "一群猴子"
    },
    {
        .word = "concert",
        .phonetic_us = "'kɑnsɚt",
        .phonetic_uk = "'kɒnsət",
        .meaning = "一齐，一致，协作",
        .example = "Britain has to pursue policies in concert with other EU members.",
        .example_cn = "英国必须和其他欧盟成员国一起贯彻各项政策。"
    },
    {
        .word = "chop",
        .phonetic_us = "tʃɑp",
        .phonetic_uk = "tʃɒp",
        .meaning = "一块排骨，肉块",
        .example = "a grilled pork/lamb chop",
        .example_cn = "烤猪排/羊排"
    },
    {
        .word = "baby",
        .phonetic_us = "bebɪ",
        .phonetic_uk = "'beɪbɪ",
        .meaning = "一家中年龄最小的人",
        .example = "Clare is the baby of the family.",
        .example_cn = "克莱尔是家里最小的孩子。"
    },
    {
        .word = "episode",
        .phonetic_us = "'ɛpɪsod",
        .phonetic_uk = "'epɪsəʊd",
        .meaning = "（人生的）一段经历；（小说的）片段，插曲",
        .example = "I'd like to try and forget the whole episode.",
        .example_cn = "我倒想尽量把那段经历全部忘掉。"
    },
    {
        .word = "cluster",
        .phonetic_us = "'klʌstɚ",
        .phonetic_uk = "'klʌstə",
        .meaning = "串，束，簇；群，组",
        .example = "a diamond cluster ring",
        .example_cn = "群镶钻戒"
    },
    {
        .word = "generalization",
        .phonetic_us = ",dʒɛnrələ'zeʃən",
        .phonetic_uk = ",dʒenrələ'zeɪʃən",
        .meaning = "一般化；概括，综合",
        .example = "You can’t make generalizations about what men and women are like.",
        .example_cn = "男人什么样，女人什么样，不能一概而论。"
    },
    {
        .word = "burglar",
        .phonetic_us = "'bɝɡlɚ",
        .phonetic_uk = "'bɜːglə",
        .meaning = "夜盗，窃贼",
        .example = "Burglars broke into their home.",
        .example_cn = "窃贼闯进了他们家。"
    },
    {
        .word = "amateur",
        .phonetic_us = "ˈæmətər",
        .phonetic_uk = "'æmətə; -tʃə; -tjʊə; ,æmə'tɜː",
        .meaning = "业余的",
        .example = "...professional athletes and amateur runners.",
        .example_cn = "…专业运动员和业余赛跑运动员。"
    },
    {
        .word = "metallurgy",
        .phonetic_us = "'mɛtəlɝdʒi",
        .phonetic_uk = "mɪ'tælədʒɪ; 'met(ə),lɜːdʒɪ",
        .meaning = "冶金学，冶金术",
        .example = "He studied metallurgy as a mature student, having spent ten years working in a foundry.",
        .example_cn = "在一家铸造厂工作了10年以后,他成为成人学生学习冶金专业。"
    },
    {
        .word = "Jesus",
        .phonetic_us = "'dʒizəs",
        .phonetic_uk = "'dʒiːzəs",
        .meaning = "耶稣",
        .example = "As a scientist,he disbelieves in Jesus.",
        .example_cn = "作为一名科学家，他不信耶稣。"
    },
    {
        .word = "fort",
        .phonetic_us = "fɔrt",
        .phonetic_uk = "fɔːt",
        .meaning = "要塞，堡垒",
        .example = "The men in the fort capitulated.",
        .example_cn = "堡垒中的守军投降了。"
    },
    {
        .word = "postulate",
        .phonetic_us = "'pɑstʃəlet",
        .phonetic_uk = "'pɒstjʊleɪt",
        .meaning = "假定，假设",
        .example = "He dismissed arguments postulating differing standards for human rights in different cultures and regions.",
        .example_cn = "他无法接受的是假定人权标准在不同文化和地区有所不同。"
    },
    {
        .word = "prescription",
        .phonetic_us = "prɪ'skrɪpʃən",
        .phonetic_uk = "prɪ'skrɪpʃ(ə)n",
        .meaning = "药方，处方；处方药",
        .example = "The new drug will not require a physician's prescription.",
        .example_cn = "这种新药不需要医生的处方。"
    },
    {
        .word = "cradle",
        .phonetic_us = "'kredl",
        .phonetic_uk = "'kreɪd(ə)l",
        .meaning = "摇篮；发源地",
        .example = "She rocked the cradle to quieten the child.",
        .example_cn = "她摇动摇篮，让宝宝安静下来。"
    },
    {
        .word = "waver",
        .phonetic_us = "'wevɚ",
        .phonetic_uk = "'weɪvə",
        .meaning = "犹豫不决；摇摆",
        .example = "Shareholders who were wavering met the directors.",
        .example_cn = "举棋不定的股东们会见了董事。"
    },
    {
        .word = "wag",
        .phonetic_us = "wæɡ",
        .phonetic_uk = "wæg",
        .meaning = "（狗） 摇摆 （尾巴）；摇晃 （手指）",
        .example = "The dog was biting, growling and wagging its tail.",
        .example_cn = "那条狗咬着叫着，还摇着尾巴。"
    },
    {
        .word = "oxide",
        .phonetic_us = "'ɑksaɪd",
        .phonetic_uk = "'ɒksaɪd",
        .meaning = "氧化物",
        .example = "iron oxide",
        .example_cn = "氧化铁"
    },
    {
        .word = "oxidize",
        .phonetic_us = "'ɑksə'daɪz",
        .phonetic_uk = "'ɒksɪdaɪz",
        .meaning = "氧化，使生锈",
        .example = "If the organic material decays or is oxidized, it will not form petroleum.",
        .example_cn = "如果有机物腐烂或氧化，它不会形成石油。"
    },
    {
        .word = "domestic",
        .phonetic_us = "də'mɛstɪk",
        .phonetic_uk = "də'mestɪk",
        .meaning = "家养的",
        .example = "a domestic cat",
        .example_cn = "一只家猫"
    },
    {
        .word = "foster",
        .phonetic_us = "'fɔstɚ",
        .phonetic_uk = "'fɒstə",
        .meaning = "培养；抚育，代养",
        .example = "The bishop helped foster the sense of a community embracing all classes.",
        .example_cn = "主教鼓励一种包容各个阶层的社区精神。"
    },
    {
        .word = "balcony",
        .phonetic_us = "'bælkəni",
        .phonetic_uk = "'bælkənɪ",
        .meaning = "阳台；楼厅，楼座",
        .example = "Has your flat got a balcony?",
        .example_cn = "你的公寓有阳台吗？"
    },
    {
        .word = "anode",
        .phonetic_us = "'ænod",
        .phonetic_uk = "'ænəʊd",
        .meaning = "阳极，正极，板极",
        .example = "A red wire is often attached to the anode.",
        .example_cn = "红色电线通常与阳极相联。"
    },
    {
        .word = "proverb",
        .phonetic_us = "'prɑvɝb",
        .phonetic_uk = "'prɒvɜːb",
        .meaning = "谚语，格言，箴言",
        .example = "An old Arab proverb says, \"The enemy of my enemy is my friend.\"",
        .example_cn = "有一句古老的阿拉伯谚语说：“我敌人的敌人是我的朋友。”"
    },
    {
        .word = "banquet",
        .phonetic_us = "'bæŋkwɪt",
        .phonetic_uk = "'bæŋkwɪt",
        .meaning = "宴会，盛会，酒席",
        .example = "a state banquet (=  one attended by heads of government and other important people  )",
        .example_cn = "国宴"
    },
    {
        .word = "scope",
        .phonetic_us = "skop",
        .phonetic_uk = "skəʊp",
        .meaning = "（学科、活动、书籍等的）范围；（发挥能力的）机会，施展余地；眼界",
        .example = "measures to limit the scope of criminals’ activities",
        .example_cn = "限制罪犯活动范围的措施"
    },
    {
        .word = "cloak",
        .phonetic_us = "klok",
        .phonetic_uk = "kləʊk",
        .meaning = "掩盖，掩饰；覆盖，笼罩",
        .example = "The talks have been cloaked in secrecy.",
        .example_cn = "会谈是秘密进行的。"
    },
    {
        .word = "sharply",
        .phonetic_us = "'ʃɑrpli",
        .phonetic_uk = "'ʃɑ:plɪ",
        .meaning = "严厉地，苛刻地",
        .example = "The report was sharply critical of the police.",
        .example_cn = "报道猛烈地抨击了警方。"
    },
    {
        .word = "prolong",
        .phonetic_us = "prəˈlɑːŋ",
        .phonetic_uk = "prə'lɒŋ",
        .meaning = "延长，拉长，拖延",
        .example = "I was trying to think of some way to prolong the conversation.",
        .example_cn = "我在想方设法拖长这次谈话。"
    },
    {
        .word = "retard",
        .phonetic_us = "'rɪtɑrd",
        .phonetic_uk = "'rɪtɑːd",
        .meaning = "阻碍；减缓；放慢",
        .example = "Cold weather retards the growth of many plants.",
        .example_cn = "寒冷的天气使许多植物生长滞缓。"
    },
    {
        .word = "pickle",
        .phonetic_us = "'pɪkl",
        .phonetic_uk = "'pɪk(ə)l",
        .meaning = "腌制食品，泡菜",
        .example = "cheese and pickle sandwiches",
        .example_cn = "干酪腌菜三明治"
    },
    {
        .word = "dentist",
        .phonetic_us = "'dɛntɪst",
        .phonetic_uk = "'dentɪst",
        .meaning = "牙科医生",
        .example = "Visit your dentist twice a year for a checkup.",
        .example_cn = "每年看两次牙医做检查。"
    },
    {
        .word = "opium",
        .phonetic_us = "'opɪəm",
        .phonetic_uk = "'əʊpɪəm",
        .meaning = "鸦片；麻醉剂",
        .example = "an opium addict",
        .example_cn = "吸鸦片成瘾者"
    },
    {
        .word = "deposit",
        .phonetic_us = "dɪ'pɑzɪt",
        .phonetic_uk = "dɪ'pɒzɪt",
        .meaning = "押金",
        .example = "We ask for one month’s rent in advance, plus a deposit of 500.",
        .example_cn = "我们要求预付一个月的租金，再加500美元的押金。"
    },
    {
        .word = "squeeze",
        .phonetic_us = "skwiz",
        .phonetic_uk = "skwiːz",
        .meaning = "压榨；榨取",
        .example = "Squeeze the oranges.",
        .example_cn = "把橙子榨一榨。"
    },
    {
        .word = "compression",
        .phonetic_us = "kəm'prɛʃən",
        .phonetic_uk = "kəm'preʃ(ə)n",
        .meaning = "压缩，压紧，浓缩",
        .example = "the compression of air",
        .example_cn = "空气的压缩"
    },
    {
        .word = "squash",
        .phonetic_us = "skwɔʃ",
        .phonetic_uk = "skwɒʃ",
        .meaning = "压碎",
        .example = "The cake got a bit squashed on the way here.",
        .example_cn = "蛋糕在送来这里的路上有点压坏了。"
    },
    {
        .word = "overwhelming",
        .phonetic_us = ",ovɚ'wɛlmɪŋ",
        .phonetic_uk = "",
        .meaning = "压倒的，势不可挡的",
        .example = "You may find it somewhat overwhelming at first.",
        .example_cn = "起初你可能觉得它有些无法抗拒。"
    },
    {
        .word = "overwhelm",
        .phonetic_us = ",ovɚ'wɛlm",
        .phonetic_uk = "əʊvə'welm",
        .meaning = "使（某人）感到不能自持，使不知所措；压倒，击败",
        .example = "Grief overwhelmed me.",
        .example_cn = "我悲痛不已。"
    },
    {
        .word = "velocity",
        .phonetic_us = "vəˈlɑsəti",
        .phonetic_uk = "vəˈlɒsəti",
        .meaning = "迅速，快速",
        .example = "Martinez had good velocity on his fastball.",
        .example_cn = "马丁内斯的快球速度极快。"
    },
    {
        .word = "circulation",
        .phonetic_us = ",sɝkjə'leʃən",
        .phonetic_uk = "sɜːkjʊ'leɪʃ(ə)n",
        .meaning = "血液循环；（资料、货币等）流通",
        .example = "Exercise improves the circulation.",
        .example_cn = "运动能促进血液循环。"
    },
    {
        .word = "patrol",
        .phonetic_us = "pə'trol",
        .phonetic_uk = "pə'trəʊl",
        .meaning = "巡逻，巡查",
        .example = "The security forces increased their patrols in the area.",
        .example_cn = "安全部队加强了对该地区的巡逻。"
    },
    {
        .word = "cruise",
        .phonetic_us = "krʊz",
        .phonetic_uk = "kruːz",
        .meaning = "巡航，巡航于…",
        .example = "She wants to cruise the canals of France in a barge.",
        .example_cn = "她想坐驳船游览法国的运河。"
    },
    {
        .word = "quest",
        .phonetic_us = "kwɛst",
        .phonetic_uk = "kwest",
        .meaning = "寻找，追求",
        .example = "He had been questing for religious belief from an early age.",
        .example_cn = "他从早年开始就一直在寻求宗教信仰。"
    },
    {
        .word = "cigar",
        .phonetic_us = "sɪ'ɡɑr",
        .phonetic_uk = "sɪ'gɑː",
        .meaning = "雪茄烟，叶卷烟",
        .example = "He was smoking a big cigar.",
        .example_cn = "他在抽一只大雪茄。"
    },
    {
        .word = "scholarship",
        .phonetic_us = "'skɑlɚʃɪp",
        .phonetic_uk = "'skɒləʃɪp",
        .meaning = "奖学金；学问，学识",
        .example = "She won a scholarship to Iowa State University.",
        .example_cn = "她获得了艾奥瓦州立大学的奖学金。"
    },
    {
        .word = "radiant",
        .phonetic_us = "'redɪənt",
        .phonetic_uk = "'reɪdɪənt",
        .meaning = "容光焕发的；灿烂的",
        .example = "She looked radiant in a white silk dress.",
        .example_cn = "她身穿白色真丝礼服，看上去光彩照人。"
    },
    {
        .word = "gorgeous",
        .phonetic_us = "'ɡɔrdʒəs",
        .phonetic_uk = "'gɔːdʒəs",
        .meaning = "极其漂亮的，极其吸引人的；绚丽的，华丽的",
        .example = "‘What do you think of my new flatmate?’ ‘He’s absolutely gorgeous !’",
        .example_cn = "“你觉得我的新室友怎么样？”“他帅极了！”"
    },
    {
        .word = "option",
        .phonetic_us = "'ɑpʃən",
        .phonetic_uk = "'ɒpʃ(ə)n",
        .meaning = "选择，取舍",
        .example = "There are a number of options available.",
        .example_cn = "有多种选择。"
    },
    {
        .word = "cock",
        .phonetic_us = "kɑk",
        .phonetic_uk = "kɒk",
        .meaning = "公鸡",
        .example = "A cock crowed in the distance.",
        .example_cn = "远处有只公鸡在打鸣。"
    },
    {
        .word = "melody",
        .phonetic_us = "'mɛlədi",
        .phonetic_uk = "'melədɪ",
        .meaning = "旋律，曲调；歌曲",
        .example = "They played some lovely melodies.",
        .example_cn = "他们演奏了一些动听的曲子。"
    },
    {
        .word = "overhang",
        .phonetic_us = ",ovɚ'hæŋ",
        .phonetic_uk = "əʊvə'hæŋ",
        .meaning = "悬于…之上，悬垂",
        .example = "Part of the rock wall overhung the path at one point.",
        .example_cn = "部分岩壁悬在了小径一处的上方。"
    },
    {
        .word = "console",
        .phonetic_us = "'kɑnsol",
        .phonetic_uk = "kən'səʊl",
        .meaning = "悬臂，肘托；控制台",
        .example = "Several nurses sat before a console of flickering lights and bleeping monitors.",
        .example_cn = "几名护士坐在灯光闪烁、监听器嘟嘟作响的控制台前。"
    },
    {
        .word = "propaganda",
        .phonetic_us = "'prɑpə'gændə",
        .phonetic_uk = "prɒpə'gændə",
        .meaning = "宣传",
        .example = "the spreading of political propaganda",
        .example_cn = "政治宣传的开展"
    },
    {
        .word = "declaration",
        .phonetic_us = ",dɛklə'reʃən",
        .phonetic_uk = "deklə'reɪʃ(ə)n",
        .meaning = "宣布，宣言",
        .example = "to issue/sign a declaration",
        .example_cn = "发布 / 签署公告"
    },
    {
        .word = "narration",
        .phonetic_us = "nə'reʃən",
        .phonetic_uk = "nə'reɪʃ(ə)n",
        .meaning = "叙述；故事；叙述法",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "sequence",
        .phonetic_us = "'sikwəns",
        .phonetic_uk = "'siːkw(ə)ns",
        .meaning = "序列，顺序",
        .example = "Be careful to perform the actions in the correct sequence.",
        .example_cn = "注意要按正确的顺序来完成动作。"
    },
    {
        .word = "warrant",
        .phonetic_us = "'wɔrənt",
        .phonetic_uk = "'wɒr(ə)nt",
        .meaning = "（法院授权警方采取行动的）令状；许可证",
        .example = "The magistrate issued a warrant for his arrest.",
        .example_cn = "地方法官发出了对他的逮捕令。"
    },
    {
        .word = "requisite",
        .phonetic_us = "'rɛkwəzɪt",
        .phonetic_uk = "'rekwɪzɪt",
        .meaning = "需要的，必要的",
        .example = "He lacks the requisite qualifications.",
        .example_cn = "他缺少必要的资历。"
    },
    {
        .word = "embroidery",
        .phonetic_us = "ɪm'brɔɪdəri",
        .phonetic_uk = "ɪm'brɒɪd(ə)rɪ; em-",
        .meaning = "绣花，刺绣；绣制品",
        .example = "The shorts had blue embroidery over the pockets.",
        .example_cn = "这条短裤口袋上有蓝色的刺绣。"
    },
    {
        .word = "nun",
        .phonetic_us = "nʌn",
        .phonetic_uk = "nʌn",
        .meaning = "修女，尼姑",
        .example = "Mr. Thomas was taught by the Catholic nuns whose school he attended to work and study hard.",
        .example_cn = "托马斯先生受教于天主教修女。在修女开办的学校里他专心工作，刻苦学习。"
    },
    {
        .word = "eloquence",
        .phonetic_us = "'ɛləkwəns",
        .phonetic_uk = "'eləkwəns",
        .meaning = "雄辩；口才，修辞",
        .example = "a speech of passionate eloquence",
        .example_cn = "激情洋溢的演讲"
    },
    {
        .word = "wind",
        .phonetic_us = "wɪnd; (for v.) waɪnd",
        .phonetic_uk = "wɪnd; (for v.) waɪnd",
        .meaning = "风",
        .example = "The wind blew from the northeast.",
        .example_cn = "风从东北方向吹来。"
    },
    {
        .word = "directory",
        .phonetic_us = "dəˈrɛktəri; (also) daɪˈrɛktəri",
        .phonetic_uk = "dɪ'rekt(ə)rɪ; daɪ-",
        .meaning = "姓名地址录",
        .example = "I couldn’t find your number in the telephone directory.",
        .example_cn = "我在电话簿上找不到你的电话号码。"
    },
    {
        .word = "pacific",
        .phonetic_us = "pə'sɪfɪk",
        .phonetic_uk = "pə'sɪfɪk",
        .meaning = "性情温和的",
        .example = "Gorbachev was less pacific than people thought.",
        .example_cn = "戈尔巴乔夫不像人们想得那样温和。"
    },
    {
        .word = "survival",
        .phonetic_us = "sɚ'vaɪvl",
        .phonetic_uk = "sə'vaɪv(ə)l",
        .meaning = "幸存；残存；幸存者",
        .example = "The doctors gave him a one in ten chance of survival .",
        .example_cn = "医生说他有十分之一的生存希望。"
    },
    {
        .word = "flush",
        .phonetic_us = "flʌʃ",
        .phonetic_uk = "flʌʃ",
        .meaning = "脸红；一阵强烈情感；（流露出的）一阵激情",
        .example = "His words brought a warm flush to her face.",
        .example_cn = "他那番话讲得她脸红发烫。"
    },
    {
        .word = "formal",
        .phonetic_us = "'fɔrml",
        .phonetic_uk = "'fɔːm(ə)l",
        .meaning = "正规的；庄重的",
        .example = "He kept the tone of the letter formal and businesslike.",
        .example_cn = "他使这封信保持正式公文的语气。"
    },
    {
        .word = "constituent",
        .phonetic_us = "kən'stɪtʃuənt",
        .phonetic_uk = "kən'stɪtjʊənt",
        .meaning = "构成的",
        .example = "the EU and its constituent members",
        .example_cn = "欧盟及其成员国"
    },
    {
        .word = "scarlet",
        .phonetic_us = "'skɑrlɪt",
        .phonetic_uk = "'skɑːlət",
        .meaning = "猩红色",
        .example = "scarlet berries",
        .example_cn = "鲜红的浆果"
    },
    {
        .word = "religion",
        .phonetic_us = "rɪ'lɪdʒən",
        .phonetic_uk = "rɪ'lɪdʒ(ə)n",
        .meaning = "宗教",
        .example = "people of different religions",
        .example_cn = "宗教信仰不同的人"
    },
    {
        .word = "novelty",
        .phonetic_us = "'nɑvlti",
        .phonetic_uk = "'nɒv(ə)ltɪ",
        .meaning = "新颖；新奇的事物",
        .example = "Many toys have no attraction beyond their novelty value.",
        .example_cn = "许多玩具除了有些新奇感之外，别无吸引力。"
    },
    {
        .word = "regenerative",
        .phonetic_us = "rə'dʒɛnəretɪv",
        .phonetic_uk = "rɪ'dʒen(ə)rətɪv",
        .meaning = "回授的；再生的",
        .example = "...the regenerative power of nature.",
        .example_cn = "...大自然的再生力。"
    },
    {
        .word = "bridegroom",
        .phonetic_us = "'braɪdɡrum",
        .phonetic_uk = "'braɪdgruːm",
        .meaning = "新郎",
        .example = "The bridegroom asked the guests to stand and then toasted the bridesmaids.",
        .example_cn = "新郎请客人起立为女傧相干杯."
    },
    {
        .word = "novel",
        .phonetic_us = "ˈnɑːvl",
        .phonetic_uk = "'nɒv(ə)l",
        .meaning = "新的，异常的",
        .example = "What a novel idea!",
        .example_cn = "多么新奇的想法呀！"
    },
    {
        .word = "zinc",
        .phonetic_us = "zɪŋk",
        .phonetic_uk = "zɪŋk",
        .meaning = "锌",
        .example = "Brass is an alloy of copper and zinc.",
        .example_cn = "黄铜是铜锌合金。"
    },
    {
        .word = "appreciation",
        .phonetic_us = "ə,priʃɪ'eʃən",
        .phonetic_uk = "əpriːʃɪ'eɪʃ(ə)n; -sɪ-",
        .meaning = "欣赏；感激",
        .example = "It helps children to develop an appreciation of poetry and literature.",
        .example_cn = "这有助于培养小孩子对诗歌和文学作品的欣赏力。"
    },
    {
        .word = "psychology",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "心理学；心理",
        .example = "experts in the field of developmental psychology",
        .example_cn = "发展心理学领域的专家"
    },
    {
        .word = "crab",
        .phonetic_us = "kræb",
        .phonetic_uk = "kræb",
        .meaning = "蟹；蟹肉",
        .example = "crab meat",
        .example_cn = "蟹肉"
    },
    {
        .word = "subscript",
        .phonetic_us = "'sʌbskrɪpt",
        .phonetic_uk = "'sʌbskrɪpt",
        .meaning = "写在下方的",
        .example = "The subscript operator must be defined as a class member function.",
        .example_cn = "下标操作符必须定义为类成员函数。"
    },
    {
        .word = "sideways",
        .phonetic_us = "'saɪdwez",
        .phonetic_uk = "'saɪdweɪz",
        .meaning = "斜向一边地",
        .example = "A strong gust of wind blew the car sideways into the ditch.",
        .example_cn = "一阵狂风把汽车横着掀进了沟里。"
    },
    {
        .word = "jean",
        .phonetic_us = "dʒɪn",
        .phonetic_uk = "dʒiːn",
        .meaning = "斜纹布；牛仔裤",
        .example = "a young man in jeans and a worn T-shirt",
        .example_cn = "一个穿着牛仔裤和破旧T恤衫的年轻人"
    },
    {
        .word = "gradient",
        .phonetic_us = "'ɡredɪənt",
        .phonetic_uk = "'greɪdɪənt",
        .meaning = "斜坡",
        .example = "a steep gradient",
        .example_cn = "陡坡"
    },
    {
        .word = "vicious",
        .phonetic_us = "'vɪʃəs",
        .phonetic_uk = "'vɪʃəs",
        .meaning = "邪恶的；恶性的",
        .example = "Sarah can be quite vicious at times.",
        .example_cn = "萨拉有时相当狠毒。"
    },
    {
        .word = "evil",
        .phonetic_us = "'ivl",
        .phonetic_uk = "'iːv(ə)l; -vɪl",
        .meaning = "邪恶，罪恶；祸害",
        .example = "She wanted to protect her children from the evils of the outside world.",
        .example_cn = "她想保护她的孩子不受外界的不良影响。"
    },
    {
        .word = "collaborate",
        .phonetic_us = "kə'læbəret",
        .phonetic_uk = "kə'læbəreɪt",
        .meaning = "协作，合作；协调",
        .example = "The two nations are collaborating on several satellite projects.",
        .example_cn = "两国在几个人造衞星项目上展开合作。"
    },
    {
        .word = "team",
        .phonetic_us = "tim",
        .phonetic_uk = "tiːm",
        .meaning = "协作，合作",
        .example = "black trousers teamed with a bright shirt",
        .example_cn = "配亮色衬衫的黑裤子"
    },
    {
        .word = "coefficient",
        .phonetic_us = ",koɪ'fɪʃnt",
        .phonetic_uk = ",kəʊɪ'fɪʃ(ə)nt",
        .meaning = "协同因素；系数，率",
        .example = "In 8pq, the coefficient of pq is 8.",
        .example_cn = "在8pq中pq的系数为8。"
    },
    {
        .word = "wedge",
        .phonetic_us = "wɛdʒ",
        .phonetic_uk = "wedʒ",
        .meaning = "楔",
        .example = "He hammered the wedge into the crack in the stone.",
        .example_cn = "他用锤子把楔子砸入石缝里。"
    },
    {
        .word = "calibration",
        .phonetic_us = ",kælɪ'breʃən",
        .phonetic_uk = "kælɪ'breɪʃ(ə)n",
        .meaning = "校准；标定，刻度",
        .example = "a calibration error",
        .example_cn = "校准误差"
    },
    {
        .word = "paragraph",
        .phonetic_us = "'pærəɡræf",
        .phonetic_uk = "'pærəgrɑːf",
        .meaning = "（文章的）段，段落",
        .example = "the opening paragraphs of the novel",
        .example_cn = "小说开篇的几个段落"
    },
    {
        .word = "cautious",
        .phonetic_us = "'kɔʃəs",
        .phonetic_uk = "'kɔːʃəs",
        .meaning = "小心的，谨慎的",
        .example = "a cautious driver",
        .example_cn = "一位谨慎的司机"
    },
    {
        .word = "caution",
        .phonetic_us = "'kɔʃən",
        .phonetic_uk = "'kɔːʃ(ə)n",
        .meaning = "小心",
        .example = "The physician must exercise caution when prescribing antidepressants.",
        .example_cn = "医师在开抗抑郁药处方时必须谨慎。"
    },
    {
        .word = "suitcase",
        .phonetic_us = "'sutkes",
        .phonetic_uk = "'suːtkeɪs",
        .meaning = "手提箱，衣箱",
        .example = "It did not take Andrew long to pack a suitcase.",
        .example_cn = "安德鲁没有用多长时间就整理好了手提箱。"
    },
    {
        .word = "decimal",
        .phonetic_us = "'dɛsɪml",
        .phonetic_uk = "'desɪm(ə)l",
        .meaning = "小数的，十进制的",
        .example = "changing to a decimal system",
        .example_cn = "改为十进制"
    },
    {
        .word = "footpath",
        .phonetic_us = "'fʊtpæθ",
        .phonetic_uk = "'fʊtpɑːθ",
        .meaning = "小路，人行道",
        .example = "He said he had just picked up the druken man from the footpath and did not know him from Adam.",
        .example_cn = "他说他只是把这个倒在人行道上的醉汉扶了起来，他根本不认识他。"
    },
    {
        .word = "puppy",
        .phonetic_us = "'pʌpi",
        .phonetic_uk = "'pʌpɪ",
        .meaning = "小狗；幼小的动物",
        .example = "a six-month-old puppy",
        .example_cn = "一只六个月大的小狗"
    },
    {
        .word = "closet",
        .phonetic_us = "'klɑzət",
        .phonetic_uk = "'klɒzɪt",
        .meaning = "小房间；壁碗橱",
        .example = "a closet full of beautiful clothes",
        .example_cn = "满是漂亮衣服的壁橱"
    },
    {
        .word = "pamphlet",
        .phonetic_us = "ˈpæmflɪt",
        .phonetic_uk = "",
        .meaning = "小册子",
        .example = "a political pamphlet",
        .example_cn = "政治宣传册"
    },
    {
        .word = "slack",
        .phonetic_us = "slæk",
        .phonetic_uk = "slæk",
        .meaning = "萧条的；懈怠的",
        .example = "Business remained slack throughout the day.",
        .example_cn = "一整天生意都很冷清。"
    },
    {
        .word = "disappearance",
        .phonetic_us = ",dɪsə'pɪrəns",
        .phonetic_uk = "dɪsə'pɪərəns",
        .meaning = "消失，消散；失踪",
        .example = "Police are investigating the woman’s disappearance.",
        .example_cn = "警方正在调查这名女子的失踪。"
    },
    {
        .word = "recreation",
        .phonetic_us = ",rɛkrɪ'eʃən",
        .phonetic_uk = ",rekrɪ'eɪʃ(ə)n",
        .meaning = "消遣，娱乐活动",
        .example = "His only recreations are drinking beer and watching football.",
        .example_cn = "他唯一的消遣就是喝啤酒和看足球比赛。"
    },
    {
        .word = "consumer",
        .phonetic_us = "kən'sumɚ",
        .phonetic_uk = "kən'sjuːmə",
        .meaning = "消费者，用户",
        .example = "Consumers will soon be paying higher airfares.",
        .example_cn = "不久消费者就要支付更高的机票价了。"
    },
    {
        .word = "consumption",
        .phonetic_us = "kən'sʌmpʃən",
        .phonetic_uk = "kən'sʌm(p)ʃ(ə)n",
        .meaning = "消费（量）",
        .example = "Vigorous exercise increases oxygen consumption.",
        .example_cn = "剧烈运动增加氧的消耗。"
    },
    {
        .word = "depression",
        .phonetic_us = "dɪ'prɛʃən",
        .phonetic_uk = "dɪ'preʃ(ə)n",
        .meaning = "消沉；不景气萧条期",
        .example = "Lucy’s mood was one of deep depression.",
        .example_cn = "露西的情绪极度消沉。"
    },
    {
        .word = "token",
        .phonetic_us = "'tokən",
        .phonetic_uk = "'təʊk(ə)n",
        .meaning = "辅币；象征",
        .example = "slot-machine tokens",
        .example_cn = "自动贩卖机使用的代用币"
    },
    {
        .word = "ivory",
        .phonetic_us = "'aɪvəri",
        .phonetic_uk = "'aɪv(ə)rɪ",
        .meaning = "象牙（质）；乳白色",
        .example = "an ivory chess set",
        .example_cn = "一副象牙国际象棋"
    },
    {
        .word = "forward",
        .phonetic_us = "'fɔrwɚd",
        .phonetic_uk = "'fɔːwəd",
        .meaning = "向前；向将来",
        .example = "He leaned forward , his elbows resting on the table.",
        .example_cn = "他身体前倾，胳膊肘撑在桌子上。"
    },
    {
        .word = "southwards",
        .phonetic_us = "'saʊθwɚdz",
        .phonetic_uk = "'saʊθwədz",
        .meaning = "向南方",
        .example = "We followed the coast southwards.",
        .example_cn = "我们沿海岸向南走。"
    },
    {
        .word = "orientation",
        .phonetic_us = "orɪɛn'teʃən",
        .phonetic_uk = ",ɔːrɪən'teɪʃ(ə)n; ,ɒr-",
        .meaning = "定位；方向",
        .example = "The company needs to develop a stronger orientation towards marketing its products.",
        .example_cn = "公司需要针对其产品的营销设定一个更为明确的目标。"
    },
    {
        .word = "defy",
        .phonetic_us = "'difaɪ",
        .phonetic_uk = "dɪ'faɪ",
        .meaning = "向…挑战；蔑视",
        .example = "people who openly defy the law",
        .example_cn = "公然抗拒法律的人"
    },
    {
        .word = "hail",
        .phonetic_us = "hel",
        .phonetic_uk = "heɪl",
        .meaning = "向…欢呼，招呼",
        .example = "She leaned out of the window and hailed a passerby.",
        .example_cn = "她探出窗户向一个路人大喊。"
    },
    {
        .word = "yearn",
        .phonetic_us = "jɝn",
        .phonetic_uk = "jɜːn",
        .meaning = "渴望，向往",
        .example = "Hannah yearned for a child.",
        .example_cn = "汉娜渴望有个孩子。"
    },
    {
        .word = "spice",
        .phonetic_us = "spaɪs",
        .phonetic_uk = "spaɪs",
        .meaning = "香料，调味品",
        .example = "herbs and spices",
        .example_cn = "香草和香料"
    },
    {
        .word = "pilgrim",
        .phonetic_us = "'pɪlɡrɪm",
        .phonetic_uk = "'pɪlgrɪm",
        .meaning = "香客，朝圣者",
        .example = "pilgrims visiting a holy shrine",
        .example_cn = "祭拜圣庙的朝圣者"
    },
    {
        .word = "fragrant",
        .phonetic_us = "'fregrənt",
        .phonetic_uk = "'freɪgr(ə)nt",
        .meaning = "香的，芬芳的",
        .example = "fragrant flowers",
        .example_cn = "芳香的花朵"
    },
    {
        .word = "incense",
        .phonetic_us = "'ɪnsɛns",
        .phonetic_uk = "'ɪnsens",
        .meaning = "香，熏香；香气",
        .example = "a church filled with the smell of incense",
        .example_cn = "充满焚香气味的教堂"
    },
    {
        .word = "uniformly",
        .phonetic_us = "jʊnə'fɔrmli",
        .phonetic_uk = "'ju:nɪfɔ:mlɪ",
        .meaning = "相同地；一贯",
        .example = "The principles were applied uniformly across all the departments.",
        .example_cn = "这些原则统一适用于所有部门。"
    },
    {
        .word = "resemblance",
        .phonetic_us = "rɪ'zɛmbləns",
        .phonetic_uk = "rɪ'zembl(ə)ns",
        .meaning = "相似，相似性",
        .example = "The resemblance between Susan and her sister was remarkable.",
        .example_cn = "苏珊和她的姐姐十分相像。"
    },
    {
        .word = "analogy",
        .phonetic_us = "ə'nælədʒi",
        .phonetic_uk = "ə'nælədʒɪ",
        .meaning = "相似，类似；比拟",
        .example = "analogies between human and animal behaviour",
        .example_cn = "人类行为与动物行为的类同"
    },
    {
        .word = "interact",
        .phonetic_us = ",ɪntɚ'ækt",
        .phonetic_uk = "ɪntər'ækt",
        .meaning = "相互作用",
        .example = "The immune system interacts with both the nervous system and the hormones.",
        .example_cn = "免疫系统与神经系统及激素相互影响。"
    },
    {
        .word = "correlation",
        .phonetic_us = ",kɔrə'leʃən",
        .phonetic_uk = ",kɒrə'leɪʃ(ə)n; -rɪ-",
        .meaning = "相互关系",
        .example = "a strong correlation between urban deprivation and poor health",
        .example_cn = "都市贫困和健康状况差之间的密切关系"
    },
    {
        .word = "reciprocal",
        .phonetic_us = "rɪ'sɪprəkl",
        .phonetic_uk = "rɪ'sɪprək(ə)l",
        .meaning = "相互的；互利的",
        .example = "He spoke of the necessity for a reciprocal relationship that would be useful for all sides.",
        .example_cn = "他谈及需要建立对各方都有益的互惠关系。"
    },
    {
        .word = "coincide",
        .phonetic_us = ",koɪn'saɪd",
        .phonetic_uk = ",kəʊɪn'saɪd",
        .meaning = "相巧合；相符合",
        .example = "When our vacations coincided, we often holidayed together.",
        .example_cn = "我们的假期要是凑巧赶在一起，我们常常会一同去度假。"
    },
    {
        .word = "inversely",
        .phonetic_us = "ɪn'vɝslɪ",
        .phonetic_uk = "'ɪnvɜːslɪ",
        .meaning = "相反地",
        .example = "We regard health as inversely related to social class.",
        .example_cn = "我们认为健康状况与社会地位成相反关系。"
    },
    {
        .word = "devotion",
        .phonetic_us = "dɪ'voʃən",
        .phonetic_uk = "dɪ'vəʊʃ(ə)n",
        .meaning = "献身，热诚，专心",
        .example = "her devotion to duty",
        .example_cn = "她对职责的忠诚"
    },
    {
        .word = "linear",
        .phonetic_us = "'lɪnɪɚ",
        .phonetic_uk = "'lɪnɪə",
        .meaning = "线的；长度的",
        .example = "a linear diagram",
        .example_cn = "线形图"
    },
    {
        .word = "qualify",
        .phonetic_us = "ˈkwɑləˌfaɪ",
        .phonetic_uk = "'kwɒlɪfaɪ",
        .meaning = "限制，限定，修饰",
        .example = "In ‘the open door ’, ‘open ’ is an adjective qualifying ‘door ’.",
        .example_cn = "在the open door中，open是修饰door的形容词。"
    },
    {
        .word = "realistic",
        .phonetic_us = ",riə'lɪstɪk",
        .phonetic_uk = "rɪə'lɪstɪk",
        .meaning = "现实的；现实主义的",
        .example = "It’s just not realistic to expect a promotion so soon.",
        .example_cn = "这么快就想升职根本不现实。"
    },
    {
        .word = "striking",
        .phonetic_us = "'straɪkɪŋ",
        .phonetic_uk = "'straɪkɪŋ",
        .meaning = "显著的，惊人的",
        .example = "a striking contrast between wealth and poverty",
        .example_cn = "显著的贫富差异"
    },
    {
        .word = "microscopic",
        .phonetic_us = ",maɪkrə'skɑpɪk",
        .phonetic_uk = "maɪkrə'skɒpɪk",
        .meaning = "显微镜的；微观的，极小的",
        .example = "The cells were identified through microscopic analysis.",
        .example_cn = "那些细胞通过显微镜分析被识别出来。"
    },
    {
        .word = "apparent",
        .phonetic_us = "ə'pærənt",
        .phonetic_uk = "ə'pær(ə)nt",
        .meaning = "显然的",
        .example = "The difference in quality was immediately apparent .",
        .example_cn = "质量的差异显而易见。"
    },
    {
        .word = "distinctly",
        .phonetic_us = "dɪ'stɪŋktli",
        .phonetic_uk = "dɪ'stɪŋ(k)tlɪ",
        .meaning = "显然，清楚地",
        .example = "Speak clearly and distinctly.",
        .example_cn = "说话要清楚明白。"
    },
    {
        .word = "bacon",
        .phonetic_us = "'bekən",
        .phonetic_uk = "'beɪk(ə)n",
        .meaning = "咸猪肉，熏猪肉",
        .example = "bacon and eggs",
        .example_cn = "咸猪肉煎蛋"
    },
    {
        .word = "gossip",
        .phonetic_us = "'ɡɑsɪp",
        .phonetic_uk = "'gɒsɪp",
        .meaning = "闲谈；碎嘴子；漫笔",
        .example = "What’s the latest gossip ?",
        .example_cn = "最近有些什么传闻？"
    },
    {
        .word = "ramble",
        .phonetic_us = "'ræmbl",
        .phonetic_uk = "'ræmb(ə)l",
        .meaning = "闲逛，漫步；漫谈，闲聊",
        .example = "There’s plenty to discover as you ramble around this little island.",
        .example_cn = "漫步这个小岛，你会有很多新发现。"
    },
    {
        .word = "precede",
        .phonetic_us = "prɪ'sid",
        .phonetic_uk = "prɪ'siːd",
        .meaning = "先于…，领先",
        .example = "a type of cloud that precedes rain",
        .example_cn = "下雨前出现的一种云"
    },
    {
        .word = "priority",
        .phonetic_us = "praɪ'ɔrəti",
        .phonetic_uk = "praɪ'ɒrɪtɪ",
        .meaning = "先，前；优先，重点",
        .example = "The club’s priority is to win the League.",
        .example_cn = "该俱乐部首先考虑的是要赢得联赛。"
    },
    {
        .word = "shower",
        .phonetic_us = "'ʃaʊɚ",
        .phonetic_uk = "'ʃaʊə",
        .meaning = "下阵雨，使湿透",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "decline",
        .phonetic_us = "dɪ'klaɪn",
        .phonetic_uk = "dɪ'klaɪn",
        .meaning = "下倾；偏斜；衰退",
        .example = "the economic decline faced by many cities",
        .example_cn = "许多城市面临的经济衰退"
    },
    {
        .word = "descent",
        .phonetic_us = "dɪ'sɛnt",
        .phonetic_uk = "dɪ'sent",
        .meaning = "下降；出身；斜坡",
        .example = "Passengers must fasten their seat belts prior to descent.",
        .example_cn = "乘客在飞机降落之前必须系好安全带。"
    },
    {
        .word = "subordinate",
        .phonetic_us = "səˈbɔːdɪnɪt (for n. &adj.) ; səˈbɔːdɪˌnet (for v.)",
        .phonetic_uk = "sə'bɔːdɪnət",
        .meaning = "下级的，辅助的",
        .example = "a subordinate officer",
        .example_cn = "下级官员"
    },
    {
        .word = "inferior",
        .phonetic_us = "ɪn'fɪrɪɚ",
        .phonetic_uk = "ɪn'fɪərɪə",
        .meaning = "下级；晚辈；次品",
        .example = "It was a gentleman's duty always to be civil, even to his inferiors.",
        .example_cn = "一个绅士的责任是一直保持彬彬有礼，即使是对比自己地位低的人。"
    },
    {
        .word = "slim",
        .phonetic_us = "slɪm",
        .phonetic_uk = "slɪm",
        .meaning = "细长的；微小的",
        .example = "a slim young woman",
        .example_cn = "身材苗条的年轻女子"
    },
    {
        .word = "taper",
        .phonetic_us = "'tepɚ",
        .phonetic_uk = "'teɪpə",
        .meaning = "细小的蜡烛；微光",
        .example = "small boys holding lighted tapers",
        .example_cn = "拿着点燃的细蜡烛的小男孩"
    },
    {
        .word = "petty",
        .phonetic_us = "'pɛti",
        .phonetic_uk = "'petɪ",
        .meaning = "细小的；器量小的",
        .example = "petty squabbles",
        .example_cn = "小口角"
    },
    {
        .word = "nice",
        .phonetic_us = "naɪs",
        .phonetic_uk = "naɪs",
        .meaning = "细微的，微妙的",
        .example = "a nice point of law",
        .example_cn = "法律上的微妙难断之处"
    },
    {
        .word = "filament",
        .phonetic_us = "'fɪləmənt",
        .phonetic_uk = "'fɪləm(ə)nt",
        .meaning = "细丝；长丝；灯丝",
        .example = "an electric filament",
        .example_cn = "灯丝"
    },
    {
        .word = "bacterium",
        .phonetic_us = "bæk'tɪrɪəm",
        .phonetic_uk = "bæk'tɪərɪəm",
        .meaning = "细菌",
        .example = "The bacterium Streptococcus pneumoniae causes about a third of some 3,000 annual meningitis cases.",
        .example_cn = "在每年约3000起脑膜炎病例中，1/3左右是由一种叫“肺炎链球菌”的细菌引起的。"
    },
    {
        .word = "germ",
        .phonetic_us = "dʒɝm",
        .phonetic_uk = "dʒɜːm",
        .meaning = "细菌，病原菌；幼芽",
        .example = "Put disinfectant down the toilet to kill any germs.",
        .example_cn = "在抽水马桶里投放消毒剂杀菌。"
    },
    {
        .word = "systematically",
        .phonetic_us = ",sɪstə'mætɪkl",
        .phonetic_uk = ",sɪstə'mætɪklɪ",
        .meaning = "系统地，有规则地",
        .example = "The search was carried out systematically.",
        .example_cn = "搜查已按照部署执行。"
    },
    {
        .word = "spectrum",
        .phonetic_us = "'spɛktrəm",
        .phonetic_uk = "'spektrəm",
        .meaning = "系列，范围；波谱",
        .example = "The two articles here represent opposite ends of the spectrum.",
        .example_cn = "这里的两篇文章代表了两个极端的观点。"
    },
    {
        .word = "lace",
        .phonetic_us = "les",
        .phonetic_uk = "leɪs",
        .meaning = "系带，用带子束紧",
        .example = "Lace up your shoes or you’ll trip over.",
        .example_cn = "把鞋带系好，否则你会绊倒的。"
    },
    {
        .word = "tape",
        .phonetic_us = "tep",
        .phonetic_uk = "teɪp",
        .meaning = "系，捆",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "drama",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "戏剧性事件；戏剧性",
        .example = "Maggie’s life is always full of drama.",
        .example_cn = "玛吉的生活总是充满了戏剧性。"
    },
    {
        .word = "theatre",
        .phonetic_us = "ˈθiətər",
        .phonetic_uk = "'θɪətə",
        .meaning = "剧场，戏院",
        .example = "an open-air theatre (= a theatre that is outside )",
        .example_cn = "露天剧场"
    },
    {
        .word = "comedy",
        .phonetic_us = "'kɑmədi",
        .phonetic_uk = "'kɒmɪdɪ",
        .meaning = "喜剧；喜剧场面",
        .example = "a career in stand-up comedy",
        .example_cn = "单口喜剧表演职业"
    },
    {
        .word = "assault",
        .phonetic_us = "ə'sɔlt",
        .phonetic_uk = "ə'sɔːlt; ə'sɒlt",
        .meaning = "袭击",
        .example = "Two men assaulted him after he left the bar.",
        .example_cn = "他离开酒吧之后遭到两名男子的袭击。"
    },
    {
        .word = "usage",
        .phonetic_us = "'jusɪdʒ",
        .phonetic_uk = "'juːsɪdʒ",
        .meaning = "习惯用法",
        .example = "a book on modern English usage",
        .example_cn = "关于现代英语用法的书"
    },
    {
        .word = "quench",
        .phonetic_us = "kwɛntʃ",
        .phonetic_uk = "kwen(t)ʃ",
        .meaning = "熄灭，扑灭；压制",
        .example = "a desperate bid to quench the raging flames",
        .example_cn = "为扑灭熊熊大火而不顾一切的努力"
    },
    {
        .word = "extinguish",
        .phonetic_us = "ɪk'stɪŋɡwɪʃ",
        .phonetic_uk = "ɪk'stɪŋgwɪʃ; ek-",
        .meaning = "熄灭，扑灭；消灭",
        .example = "Please extinguish all cigarettes.",
        .example_cn = "请把香烟都熄灭了。"
    },
    {
        .word = "absorption",
        .phonetic_us = "əbˈsɔrpʃən, -ˈzɔrp-",
        .phonetic_uk = "əb'zɔːpʃ(ə)n; -'sɔːp-",
        .meaning = "吸收；专注",
        .example = "the body’s absorption of iron",
        .example_cn = "身体对铁质的吸收"
    },
    {
        .word = "intake",
        .phonetic_us = "'ɪn'tek",
        .phonetic_uk = "'ɪnteɪk",
        .meaning = "吸入；输入能量",
        .example = "Try to reduce your intake of fat.",
        .example_cn = "尽量减少脂肪的摄入量。"
    },
    {
        .word = "physically",
        .phonetic_us = "'fɪzɪkli",
        .phonetic_uk = "'fɪzɪkəllɪ",
        .meaning = "身体上；体格上",
        .example = "She is young and physically fit.",
        .example_cn = "她年轻而且身体健康。"
    },
    {
        .word = "substantial",
        .phonetic_us = "səbˈstænʃəl",
        .phonetic_uk = "səb'stænʃ(ə)l",
        .meaning = "大而坚固的",
        .example = "a substantial piece of furniture",
        .example_cn = "一件又大又结实的家具"
    },
    {
        .word = "body",
        .phonetic_us = "'bɑdi",
        .phonetic_uk = "'bɒdɪ",
        .meaning = "物体",
        .example = "Keep the caps on the bottles to prevent foreign bodies entering them (= objects that should not be there )",
        .example_cn = "瓶子要盖好，以免异物进入。"
    },
    {
        .word = "luncheon",
        .phonetic_us = "'lʌntʃən",
        .phonetic_uk = "'lʌn(t)ʃ(ə)n",
        .meaning = "午宴，午餐，便宴",
        .example = "Earlier this month, a luncheon for former U.N. staff was held in Vienna.",
        .example_cn = "本月早些时候在维也纳为前联合国工作人员举行了午宴。"
    },
    {
        .word = "ignorance",
        .phonetic_us = "'ɪɡnərəns",
        .phonetic_uk = "'ɪgn(ə)r(ə)ns",
        .meaning = "无知，无学，愚昧",
        .example = "Excuse my ignorance, but how does it actually work?",
        .example_cn = "请原谅我的无知，它究竟是如何运作的？"
    },
    {
        .word = "insignificant",
        .phonetic_us = ",ɪnsɪɡ'nɪfɪkənt",
        .phonetic_uk = "ɪnsɪg'nɪfɪk(ə)nt",
        .meaning = "无意义的；低微的",
        .example = "You realize that your problems are insignificant in comparison.",
        .example_cn = "要知道，你的问题相对来说微不足道。"
    },
    {
        .word = "doubtless",
        .phonetic_us = "'daʊtləs",
        .phonetic_uk = "'daʊtlɪs",
        .meaning = "无疑地；很可能",
        .example = "Doubtless there would be lots of rumours.",
        .example_cn = "无疑会谣言四起。"
    },
    {
        .word = "indefinite",
        .phonetic_us = "ɪn'dɛfɪnət",
        .phonetic_uk = "ɪn'defɪnɪt",
        .meaning = "无限期的",
        .example = "The next day the union voted to begin an indefinite strike.",
        .example_cn = "第二天工会投票表决决定开始无限期罢工。"
    },
    {
        .word = "infinitely",
        .phonetic_us = "'ɪnfɪnətli",
        .phonetic_uk = "'ɪnfɪnɪtlɪ",
        .meaning = "无限地，无边地",
        .example = "Human beings are infinitely adaptable.",
        .example_cn = "人类的适应力是无限的。"
    },
    {
        .word = "unlimited",
        .phonetic_us = "ʌn'lɪmɪtɪd",
        .phonetic_uk = "ʌn'lɪmɪtɪd",
        .meaning = "无限的；不定的",
        .example = "The system can support an unlimited number of users.",
        .example_cn = "该系统可以支持无限多的用户。"
    },
    {
        .word = "infinite",
        .phonetic_us = "'ɪnfɪnət",
        .phonetic_uk = "'ɪnfɪnət",
        .meaning = "无限；无穷（大）",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "fearless",
        .phonetic_us = "'fɪrləs",
        .phonetic_uk = "'fɪəlɪs",
        .meaning = "无畏的，大胆的",
        .example = "These dogs are absolutely fearless.",
        .example_cn = "这些狗什么都不怕。"
    },
    {
        .word = "innumerable",
        .phonetic_us = "ɪ'nʊmərəbl",
        .phonetic_uk = "ɪ'njuːm(ə)rəb(ə)l",
        .meaning = "无数的，数不清的",
        .example = "She’s served on innumerable committees.",
        .example_cn = "她在多个委员会担任委员。"
    },
    {
        .word = "inorganic",
        .phonetic_us = "'ɪnɔr'gænɪk",
        .phonetic_uk = "ɪnɔː'gænɪk",
        .meaning = "无生物的；无机的",
        .example = "inorganic matter",
        .example_cn = "无机物"
    },
    {
        .word = "ruthless",
        .phonetic_us = "'rʊθləs",
        .phonetic_uk = "'ruːθlɪs",
        .meaning = "无情的，冷酷的",
        .example = "a ruthless dictator",
        .example_cn = "无情的独裁者"
    },
    {
        .word = "incapable",
        .phonetic_us = "ɪn'kepəbl",
        .phonetic_uk = "ɪn'keɪpəb(ə)l",
        .meaning = "无能力的；无资格的",
        .example = "He seemed incapable of understanding how she felt.",
        .example_cn = "他似乎不能理解她的感受。"
    },
    {
        .word = "unique",
        .phonetic_us = "jʊ'nik",
        .phonetic_uk = "juː'niːk",
        .meaning = "无可匹敌的；极好的",
        .example = "a unique opportunity to study these rare creatures",
        .example_cn = "研究这些珍稀动物的难得机会"
    },
    {
        .word = "faultless",
        .phonetic_us = "'fɔltləs",
        .phonetic_uk = "'fɔːltlɪs; 'fɒlt-",
        .meaning = "无过失的；无缺点的",
        .example = "a faultless performance",
        .example_cn = "完美的表现"
    },
    {
        .word = "foreign",
        .phonetic_us = "'fɔrən",
        .phonetic_uk = "'fɒrɪn",
        .meaning = "外国的，国外的",
        .example = "foreign students",
        .example_cn = "外国学生"
    },
    {
        .word = "nought",
        .phonetic_us = "nɔt",
        .phonetic_uk = "nɔːt",
        .meaning = "无，零",
        .example = "A billion is 1 with 9 noughts after it.",
        .example_cn = "十亿是1后面加9个零。"
    },
    {
        .word = "filth",
        .phonetic_us = "fɪlθ",
        .phonetic_uk = "fɪlθ",
        .meaning = "污秽，污物；淫猥；淫猥",
        .example = "a mound of filth and rubbish",
        .example_cn = "一堆脏东西和垃圾"
    },
    {
        .word = "snail",
        .phonetic_us = "snel",
        .phonetic_uk = "sneɪl",
        .meaning = "蜗牛；行动缓慢的人",
        .example = "Traffic was moving at a snail’s pace.",
        .example_cn = "车辆移动的速度慢得像蜗牛。"
    },
    {
        .word = "hum",
        .phonetic_us = "hʌm",
        .phonetic_uk = "hʌm",
        .meaning = "嗡嗡声",
        .example = "the distant hum of traffic",
        .example_cn = "远处嘈杂的车流声"
    },
    {
        .word = "compliment",
        .phonetic_us = "ˈkɑːmplɪmənt",
        .phonetic_uk = "'kɒmplɪm(ə)nt",
        .meaning = "致意，问候",
        .example = "Compliments of the season! (= for Christmas or the New Year)",
        .example_cn = "谨致节日的祝贺！（圣诞节或新年时的贺词）"
    },
    {
        .word = "question",
        .phonetic_us = "'kwɛstʃən",
        .phonetic_uk = "'kwestʃ(ə)n",
        .meaning = "问，询问，讯问",
        .example = "Two men have been arrested and questioned.",
        .example_cn = "已有两名男子被捕并受到盘问。"
    },
    {
        .word = "literal",
        .phonetic_us = "'lɪtərəl",
        .phonetic_uk = "'lɪt(ə)r(ə)l",
        .meaning = "文字（上）的；字面的",
        .example = "A trade war is not a war in the literal sense.",
        .example_cn = "贸易战不是字面意义上的战争。"
    },
    {
        .word = "illiterate",
        .phonetic_us = "ɪ'lɪtərət",
        .phonetic_uk = "ɪ'lɪt(ə)rət",
        .meaning = "文盲的",
        .example = "A large percentage of the population is illiterate.",
        .example_cn = "文盲人口占有相当高的比例。"
    },
    {
        .word = "stationery",
        .phonetic_us = "'steʃənɛri",
        .phonetic_uk = "'steɪʃ(ə)n(ə)rɪ",
        .meaning = "信笺，信纸；文具",
        .example = "a letter on hotel stationery",
        .example_cn = "用酒店信纸写的信"
    },
    {
        .word = "plague",
        .phonetic_us = "pleɡ",
        .phonetic_uk = "pleɪg",
        .meaning = "瘟疫；鼠疫（尤指腺鼠疫）",
        .example = "drops in population levels due to plagues and famines",
        .example_cn = "瘟疫和饥荒造成的人口水平下降"
    },
    {
        .word = "softness",
        .phonetic_us = "'sɔftnɪs",
        .phonetic_uk = "",
        .meaning = "温和，柔和；软弱",
        .example = "deceitful softness",
        .example_cn = "虚伪的温柔"
    },
    {
        .word = "graze",
        .phonetic_us = "ɡrez",
        .phonetic_uk = "greɪz",
        .meaning = "喂草；放牧（牲畜）",
        .example = "fields where they used to graze their sheep",
        .example_cn = "他们过去放羊的田野"
    },
    {
        .word = "locality",
        .phonetic_us = "lo'kæləti",
        .phonetic_uk = "lə(ʊ)'kælɪtɪ",
        .meaning = "位置，地点，发生地",
        .example = "weather reports from several different localities",
        .example_cn = "来自几个不同地区的天气报告"
    },
    {
        .word = "situated",
        .phonetic_us = "'sɪtʃuetɪd",
        .phonetic_uk = "'sɪtjʊeɪtɪd",
        .meaning = "位于…的",
        .example = "The house is situated near the college.",
        .example_cn = "这幢房子位于学院附近。"
    },
    {
        .word = "bachelor",
        .phonetic_us = "'bætʃəlɚ",
        .phonetic_uk = "'bætʃələ",
        .meaning = "未婚男子；学士",
        .example = "Gerald was 38, and a confirmed bachelor (=  a man who has decided that he will never marry  ) .",
        .example_cn = "杰拉德38岁，抱定主意独身。"
    },
    {
        .word = "unpaid",
        .phonetic_us = ",ʌn'ped",
        .phonetic_uk = "ʌn'peɪd",
        .meaning = "未付的；无偿的",
        .example = "unpaid bills",
        .example_cn = "未付的账单"
    },
    {
        .word = "stern",
        .phonetic_us = "stɝn",
        .phonetic_uk = "stɜːn",
        .meaning = "艉，船尾；臀部",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "commission",
        .phonetic_us = "kə'mɪʃən",
        .phonetic_uk = "kə'mɪʃ(ə)n",
        .meaning = "委托，委任；委托状",
        .example = "a commission from the Academy for a new sculpture",
        .example_cn = "学院要求制作一尊新雕塑的委托"
    },
    {
        .word = "latitude",
        .phonetic_us = "'lætɪtud",
        .phonetic_uk = "'lætɪtjuːd",
        .meaning = "纬度；黄纬",
        .example = "The birds breed in northern latitudes.",
        .example_cn = "这些鸟在北纬地区繁殖。"
    },
    {
        .word = "vitamin",
        .phonetic_us = "'vaɪtəmɪn",
        .phonetic_uk = "'vɪtəmɪn; 'vaɪt-",
        .meaning = "维生素，维他命",
        .example = "Try to eat foods that are rich in vitamins and minerals.",
        .example_cn = "尽量吃富含维生素和矿物质的食物。"
    },
    {
        .word = "Venus",
        .phonetic_us = "'vinəs",
        .phonetic_uk = "'viːnəs",
        .meaning = "维纳斯；美人",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "idealism",
        .phonetic_us = "'aɪ'diə'lɪzəm",
        .phonetic_uk = "aɪ'dɪəlɪz(ə)m; -'diːə-",
        .meaning = "唯心主义；理想主义",
        .example = "the idealism of the younger generation",
        .example_cn = "年轻一代的理想主义"
    },
    {
        .word = "mast",
        .phonetic_us = "mæst",
        .phonetic_uk = "mɑːst",
        .meaning = "桅杆",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "enclosure",
        .phonetic_us = "ɪn'kloʒɚ",
        .phonetic_uk = "ɪn'kləʊʒə; en-",
        .meaning = "围场，围栏；围绕",
        .example = "the bear enclosure at the zoo",
        .example_cn = "动物园中的熊园"
    },
    {
        .word = "violation",
        .phonetic_us = ",vaɪə'leʃən",
        .phonetic_uk = "vaɪə'leɪʃn",
        .meaning = "违犯；侵犯，妨碍",
        .example = "human rights violations",
        .example_cn = "违反人权"
    },
    {
        .word = "violate",
        .phonetic_us = "'vaɪəlet",
        .phonetic_uk = "'vaɪəleɪt",
        .meaning = "违犯，违背；侵犯",
        .example = "34 protesters were arrested for violating criminal law.",
        .example_cn = "34名抗议者因违反刑法而被逮捕。"
    },
    {
        .word = "towards",
        .phonetic_us = "tɔrdz",
        .phonetic_uk = "tə'wɔːdz; twɔːdz; 'tɔːdz",
        .meaning = "用于，有助于",
        .example = "The money collected will be put towards repairing the church roof.",
        .example_cn = "募集到的钱款将用于修缮教堂屋顶。"
    },
    {
        .word = "plead",
        .phonetic_us = "plid",
        .phonetic_uk = "pliːd",
        .meaning = "为…辩护，抗辩",
        .example = "He appeared before the committee to plead his case.",
        .example_cn = "他出现在委员会上为他的案子辩护。"
    },
    {
        .word = "catalogue",
        .phonetic_us = "'kætəlɔɡ",
        .phonetic_uk = "'kæt(ə)lɒg",
        .meaning = "为…编目录",
        .example = "The manuscripts have never been systematically catalogued.",
        .example_cn = "一直没有系统地为这些手稿编过目录。"
    },
    {
        .word = "microprocessor",
        .phonetic_us = ",maɪkro'prosɛsɚ",
        .phonetic_uk = "maɪkrə(ʊ)'prəʊsesə",
        .meaning = "微信息处理机",
        .example = "I've got a typerwriter with a microprocessor.",
        .example_cn = "我有一台装有微处理机的打字机。"
    },
    {
        .word = "subtle",
        .phonetic_us = "'sʌtl",
        .phonetic_uk = "'sʌt(ə)l",
        .meaning = "微妙的；精巧的",
        .example = "The pictures are similar, but there are subtle differences between them.",
        .example_cn = "这些图片很相似，但它们之间有细微的差别。"
    },
    {
        .word = "atom",
        .phonetic_us = "'ætəm",
        .phonetic_uk = "'ætəm",
        .meaning = "原子",
        .example = "carbon atoms",
        .example_cn = "碳原子"
    },
    {
        .word = "calculus",
        .phonetic_us = "'kælkjələs",
        .phonetic_uk = "'kælkjʊləs",
        .meaning = "微积分；结石",
        .example = "We have to factor that into the calculus.",
        .example_cn = "我们要在微积分学中考虑这些因素。"
    },
    {
        .word = "gleam",
        .phonetic_us = "ɡlim",
        .phonetic_uk = "gliːm",
        .meaning = "微光",
        .example = "They saw a sudden gleam of light.",
        .example_cn = "他们看到一道微光一闪而过。"
    },
    {
        .word = "negligible",
        .phonetic_us = "'nɛɡlɪdʒəbl",
        .phonetic_uk = "'neglɪdʒɪb(ə)l",
        .meaning = "微不足道的",
        .example = "The damage done to his property was negligible.",
        .example_cn = "对他财产造成的损失微不足道。"
    },
    {
        .word = "microwave",
        .phonetic_us = "'maɪkrə'wev",
        .phonetic_uk = "'maɪkrə(ʊ)weɪv",
        .meaning = "微波",
        .example = "Its molecules can be agitated by microwave energy.",
        .example_cn = "微波能量可以使其分子随之运动。"
    },
    {
        .word = "awful",
        .phonetic_us = "'ɔfl",
        .phonetic_uk = "'ɔːfʊl",
        .meaning = "威严的；令人崇敬的",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "majesty",
        .phonetic_us = "'mædʒəsti",
        .phonetic_uk = "'mædʒɪstɪ",
        .meaning = "雄伟，威严，庄严；陛下",
        .example = "the sheer majesty of St Peter's in Rome",
        .example_cn = "罗马圣彼得大教堂的雄伟庄严"
    },
    {
        .word = "prestige",
        .phonetic_us = "prɛ'stidʒ",
        .phonetic_uk = "pre'stiː(d)ʒ",
        .meaning = "威望，威信，声望",
        .example = "The king wanted to enhance his prestige through war.",
        .example_cn = "国王想通过战争来提高自己的威信。"
    },
    {
        .word = "endanger",
        .phonetic_us = "ɪn'dendʒɚ",
        .phonetic_uk = "ɪn'deɪn(d)ʒə; en-",
        .meaning = "危及，危害",
        .example = "Smoking during pregnancy endangers your baby’s life.",
        .example_cn = "孕期吸烟会危及胎儿生命。"
    },
    {
        .word = "crisis",
        .phonetic_us = "'kraɪsɪs",
        .phonetic_uk = "'kraɪsɪs",
        .meaning = "危机；转折点",
        .example = "The country now faces an economic crisis .",
        .example_cn = "该国目前正面临一场经济危机。"
    },
    {
        .word = "peril",
        .phonetic_us = "'pɛrəl",
        .phonetic_uk = "'perɪl; -r(ə)l",
        .meaning = "危机；危险的事物",
        .example = "a voyage that was fraught with peril",
        .example_cn = "历尽艰险的旅程"
    },
    {
        .word = "dismiss",
        .phonetic_us = "dɪs'mɪs",
        .phonetic_uk = "dɪs'mɪs",
        .meaning = "解雇，开除",
        .example = "Bryant was unfairly dismissed from his post.",
        .example_cn = "布赖恩特被无理免职了。"
    },
    {
        .word = "fro",
        .phonetic_us = "fro",
        .phonetic_uk = "frəʊ",
        .meaning = "往，去，回，向后",
        .example = "She rocked the baby to and fro.",
        .example_cn = "她来回摇动着婴儿。"
    },
    {
        .word = "mesh",
        .phonetic_us = "mɛʃ",
        .phonetic_uk = "meʃ",
        .meaning = "网眼，筛孔，网络",
        .example = "The windows were covered in wire mesh to keep out flies.",
        .example_cn = "窗户上装了铁丝纱网，防止苍蝇飞入。"
    },
    {
        .word = "network",
        .phonetic_us = "'nɛtwɝk",
        .phonetic_uk = "'netwɜːk",
        .meaning = "网络；广播网",
        .example = "a high-speed European rail network",
        .example_cn = "欧洲的高速铁路网"
    },
    {
        .word = "web",
        .phonetic_us = "wɛb",
        .phonetic_uk = "web",
        .meaning = "网，网状物",
        .example = "a web of streets",
        .example_cn = "纵横交错的街道"
    },
    {
        .word = "stubborn",
        .phonetic_us = "'stʌbɚn",
        .phonetic_uk = "'stʌbən",
        .meaning = "顽固的；顽强的",
        .example = "Why are you so stubborn?",
        .example_cn = "你怎么这么固执？"
    },
    {
        .word = "trifle",
        .phonetic_us = "'traɪfl",
        .phonetic_uk = "'traɪf(ə)l",
        .meaning = "玩忽；闲混；嬉耍",
        .example = "He’s not a man to be trifled with.",
        .example_cn = "他这个人怠慢不得。"
    },
    {
        .word = "completion",
        .phonetic_us = "kəm'pliʃən",
        .phonetic_uk = "kəm'pliːʃn",
        .meaning = "完成，结束，完满",
        .example = "The house is nearing completion (= almost finished ) .",
        .example_cn = "房子即将完工。"
    },
    {
        .word = "crooked",
        .phonetic_us = "'krʊkɪd",
        .phonetic_uk = "'krʊkɪd",
        .meaning = "弯的，歪的；畸形的",
        .example = "Your tie’s crooked.",
        .example_cn = "你的领带歪了。"
    },
    {
        .word = "hull",
        .phonetic_us = "",
        .phonetic_uk = "hʌl",
        .meaning = "外壳，豆荚；薄膜",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "diplomatic",
        .phonetic_us = ",dɪplə'mætɪk",
        .phonetic_uk = "dɪplə'mætɪk",
        .meaning = "外交的；有策略的",
        .example = "Diplomatic efforts to end the fighting began on October 25.",
        .example_cn = "停战的外交努力于10月25日开始。"
    },
    {
        .word = "alien",
        .phonetic_us = "ˈeliən,ˈeljən",
        .phonetic_uk = "'eɪlɪən",
        .meaning = "外国的",
        .example = "alien cultures",
        .example_cn = "异域文化"
    },
    {
        .word = "strange",
        .phonetic_us = "strendʒ",
        .phonetic_uk = "streɪn(d)ʒ",
        .meaning = "陌生的，不熟悉的",
        .example = "As a child, she’d been taught never to speak to strange men.",
        .example_cn = "她从小就受到教育绝对不要和陌生男人说话。"
    },
    {
        .word = "distort",
        .phonetic_us = "dɪ'stɔrt",
        .phonetic_uk = "dɪ'stɔːt",
        .meaning = "歪曲，曲解；扭曲",
        .example = "His account was badly distorted by the press.",
        .example_cn = "他的话被报界严重歪曲。"
    },
    {
        .word = "twist",
        .phonetic_us = "twɪst",
        .phonetic_uk = "twɪst",
        .meaning = "歪曲，曲解",
        .example = "He’s always trying to twist my words and make me look bad.",
        .example_cn = "他总是要曲解我的话，丑化我的形象。"
    },
    {
        .word = "tile",
        .phonetic_us = "taɪl",
        .phonetic_uk = "taɪl",
        .meaning = "瓷砖；贴砖；瓦片",
        .example = "bathroom tiles",
        .example_cn = "浴室瓷砖"
    },
    {
        .word = "watt",
        .phonetic_us = "wɑt",
        .phonetic_uk = "wɒt",
        .meaning = "瓦（特）",
        .example = "a 100-watt bulb",
        .example_cn = "100瓦的灯泡"
    },
    {
        .word = "elliptical",
        .phonetic_us = "ɪ'lɪptɪkl",
        .phonetic_uk = "ɪ'lɪptɪk(ə)l",
        .meaning = "椭圆的；省略的",
        .example = "Kepler published his discovery of the elliptical orbits of planets in 1609. 1609",
        .example_cn = "年开普勒公布他的发现，认为行星轨道为椭圆形。"
    },
    {
        .word = "haul",
        .phonetic_us = "hɔl",
        .phonetic_uk = "hɔːl",
        .meaning = "拖曳；拖运",
        .example = "the steam locomotive which hauled the train",
        .example_cn = "拖动火车的蒸汽机车"
    },
    {
        .word = "hip",
        .phonetic_us = "hɪp",
        .phonetic_uk = "hɪp",
        .meaning = "臀部，髋",
        .example = "She stood there with her hands on her hips glaring at him.",
        .example_cn = "她站在那里，双手叉腰瞪着他。"
    },
    {
        .word = "devour",
        .phonetic_us = "dɪ'vaʊɚ",
        .phonetic_uk = "dɪ'vaʊə",
        .meaning = "吞食；吞灭，毁灭",
        .example = "The boys devoured their pancakes.",
        .example_cn = "男孩子们狼吞虎咽地把薄煎饼吃了。"
    },
    {
        .word = "retirement",
        .phonetic_us = "rɪ'taɪɚmənt",
        .phonetic_uk = "rɪ'taɪəm(ə)nt",
        .meaning = "退休，引退；退隐",
        .example = "She took early retirement (= retired at an earlier age than usual ) last year.",
        .example_cn = "她去年提前退休了。"
    },
    {
        .word = "drawback",
        .phonetic_us = "'drɔbæk",
        .phonetic_uk = "'drɔːbæk",
        .meaning = "妨碍；弊端",
        .example = "It’s a great city – the only drawback is the weather.",
        .example_cn = "这是座很不错的城市，唯一的不足就是天气。"
    },
    {
        .word = "inference",
        .phonetic_us = "'ɪnfərəns",
        .phonetic_uk = "'ɪnf(ə)r(ə)ns",
        .meaning = "推论；推断的结果",
        .example = "There were two inferences to be drawn from her letter.",
        .example_cn = "从她的来信可以得到两种推论。"
    },
    {
        .word = "rational",
        .phonetic_us = "'ræʃnəl",
        .phonetic_uk = "'ræʃ(ə)n(ə)l",
        .meaning = "合理的；适度的",
        .example = "Parents need to be fully informed so they can make a rational decision.",
        .example_cn = "父母需要充分了解情况，这样才可以作出合理的决定。"
    },
    {
        .word = "propulsion",
        .phonetic_us = "prə'pʌlʃən",
        .phonetic_uk = "prə'pʌlʃ(ə)n",
        .meaning = "推进，推进力",
        .example = "research into liquid hydrogen as a means of propulsion",
        .example_cn = "对液态氢作为一种动力方式进行的研究"
    },
    {
        .word = "propel",
        .phonetic_us = "prə'pɛl",
        .phonetic_uk = "prə'pel",
        .meaning = "推进，推动",
        .example = "a boat propelled by a small motor",
        .example_cn = "由小马达驱动的小船"
    },
    {
        .word = "recommendation",
        .phonetic_us = ",rɛkəmɛn'deʃən",
        .phonetic_uk = ",rekəmen'deɪʃ(ə)n",
        .meaning = "推荐，介绍；建议",
        .example = "We chose the hotel on their recommendation (= because they recommended it).",
        .example_cn = "我们根据他们的推荐选了这家酒店。"
    },
    {
        .word = "overthrow",
        .phonetic_us = ",ovɚ'θro",
        .phonetic_uk = "əʊvə'θrəʊ",
        .meaning = "推翻",
        .example = "Rebels were already making plans to overthrow the government.",
        .example_cn = "反叛者已在密谋颠覆政府。"
    },
    {
        .word = "impulse",
        .phonetic_us = "'ɪmpʌls",
        .phonetic_uk = "'ɪmpʌls",
        .meaning = "冲动；推动",
        .example = "a sudden impulse to laugh",
        .example_cn = "突然想笑的冲动"
    },
    {
        .word = "presumably",
        .phonetic_us = "prɪ'zuməbli",
        .phonetic_uk = "prɪ'zjuːməblɪ",
        .meaning = "推测起来，大概",
        .example = "It’s raining, which presumably means that your football match will be cancelled.",
        .example_cn = "下雨了，这可能意味着你们的足球比赛要取消。"
    },
    {
        .word = "gather",
        .phonetic_us = "'ɡæðɚ",
        .phonetic_uk = "'gæðə",
        .meaning = "推测，推断",
        .example = "You two know each other, I gather.",
        .example_cn = "我想你们俩认识。"
    },
    {
        .word = "shove",
        .phonetic_us = "ʃʌv",
        .phonetic_uk = "ʃʌv",
        .meaning = "推，（使劲）推",
        .example = "He shoved her towards the car.",
        .example_cn = "他推着她走向汽车。"
    },
    {
        .word = "solidarity",
        .phonetic_us = ",sɑlɪ'dærəti",
        .phonetic_uk = ",sɒlɪ'dærɪtɪ",
        .meaning = "团结；休戚相关",
        .example = "a gesture of solidarity",
        .example_cn = "团结的表示"
    },
    {
        .word = "regiment",
        .phonetic_us = "'rɛdʒɪmənt",
        .phonetic_uk = "'redʒɪm(ə)nt",
        .meaning = "团，军团；一大群",
        .example = "They deserted from their regiment.",
        .example_cn = "他们从团里开了小差。"
    },
    {
        .word = "bandit",
        .phonetic_us = "'bændɪt",
        .phonetic_uk = "'bændɪt",
        .meaning = "土匪，盗匪，歹徒",
        .example = "They travelled 30 miles through bandit country.",
        .example_cn = "他们走了30英里，穿过强盗横行的乡间。"
    },
    {
        .word = "lever",
        .phonetic_us = "'lɛvɚ",
        .phonetic_uk = "'liːvə",
        .meaning = "途径，工具，手段",
        .example = "Rich countries use foreign aid as a lever to achieve political aims.",
        .example_cn = "富国利用对外援助作为达到政治目的的手段。"
    },
    {
        .word = "overtake",
        .phonetic_us = ",ovɚ'tek",
        .phonetic_uk = "əʊvə'teɪk",
        .meaning = "突然发生；压倒",
        .example = "Tragedy was shortly to overtake him, however.",
        .example_cn = "然而，不幸将很快降临到他的头上。"
    },
    {
        .word = "nose",
        .phonetic_us = "noz",
        .phonetic_uk = "nəʊz",
        .meaning = "突出部分（如船头等）",
        .example = "They went over to the aeroplane and stood near its nose.",
        .example_cn = "他们朝飞机走了过去并站在靠近机头的地方。"
    },
    {
        .word = "bald",
        .phonetic_us = "bɔld",
        .phonetic_uk = "bɔːld",
        .meaning = "秃头的；无毛的",
        .example = "a bald man",
        .example_cn = "一名秃顶男子"
    },
    {
        .word = "projector",
        .phonetic_us = "prə'dʒɛktɚ",
        .phonetic_uk = "prə'dʒektə",
        .meaning = "投影仪；探照灯",
        .example = "...a slide projector.",
        .example_cn = "…幻灯机。"
    },
    {
        .word = "poll",
        .phonetic_us = "pol",
        .phonetic_uk = "pəʊl",
        .meaning = "投票",
        .example = "Ten million voters went to the polls.",
        .example_cn = "1,000 万选民参加了投票。"
    },
    {
        .word = "dizzy",
        .phonetic_us = "'dɪzi",
        .phonetic_uk = "'dɪzɪ",
        .meaning = "头晕眼花的，眩晕的",
        .example = "The heat and the champagne made him feel dizzy .",
        .example_cn = "高温和香槟酒使他感到眩晕。"
    },
    {
        .word = "steal",
        .phonetic_us = "stil",
        .phonetic_uk = "stiːl",
        .meaning = "偷偷地做，窃取",
        .example = "Boys broke into a shop and stole £45 in cash.",
        .example_cn = "男孩们闯进一家商店，盗走了45英镑现金。"
    },
    {
        .word = "misery",
        .phonetic_us = "'mɪzəri",
        .phonetic_uk = "'mɪz(ə)rɪ",
        .meaning = "痛苦，悲惨，不幸",
        .example = "What we are witnessing here is human misery on a vast scale.",
        .example_cn = "我们在这里所目睹的情景是许许多多的人都生活困苦。"
    },
    {
        .word = "torment",
        .phonetic_us = "'tɔrmɛnt",
        .phonetic_uk = "'tɔːment",
        .meaning = "痛苦",
        .example = "She lay awake all night in torment.",
        .example_cn = "她一晚上都醒着，在痛苦中煎熬。"
    },
    {
        .word = "thrash",
        .phonetic_us = "θræʃ",
        .phonetic_uk = "θræʃ",
        .meaning = "痛打，鞭打，打",
        .example = "My poor brother used to get thrashed for all kinds of minor offences.",
        .example_cn = "我那可怜的哥哥过去常常因为各种各样的小错而挨打。"
    },
    {
        .word = "dominant",
        .phonetic_us = "'dɑmɪnənt",
        .phonetic_uk = "'dɒmɪnənt",
        .meaning = "统治的",
        .example = "The firm has achieved a dominant position in the world market.",
        .example_cn = "这家公司在国际市场上占有举足轻重的地位。"
    },
    {
        .word = "dominate",
        .phonetic_us = "'dɑmɪnet",
        .phonetic_uk = "'dɒmɪneɪt",
        .meaning = "统治，支配，控制",
        .example = "The industry is dominated by five multinational companies.",
        .example_cn = "这个行业受五家跨国公司控制。"
    },
    {
        .word = "statistics",
        .phonetic_us = "stə'tɪstɪks",
        .phonetic_uk = "stə'tɪstɪks",
        .meaning = "统计，统计数字",
        .example = "crime/unemployment, etc. statistics",
        .example_cn = "犯罪、失业等统计资料"
    },
    {
        .word = "even",
        .phonetic_us = "'ivən",
        .phonetic_uk = "'iːv(ə)n",
        .meaning = "平稳的，均匀的",
        .example = "The room is kept at an even temperature.",
        .example_cn = "这个房间保持恒温状态。"
    },
    {
        .word = "identical",
        .phonetic_us = "aɪ'dɛntɪkl",
        .phonetic_uk = "aɪ'dentɪk(ə)l",
        .meaning = "同一的；恒等的",
        .example = "four identical houses",
        .example_cn = "四幢一模一样的房子"
    },
    {
        .word = "likeness",
        .phonetic_us = "'laɪknəs",
        .phonetic_uk = "'laɪknɪs",
        .meaning = "同样；类似，相似",
        .example = "I can see the family likeness.",
        .example_cn = "我看出这一家人都长得很像。"
    },
    {
        .word = "simultaneous",
        .phonetic_us = ",saɪml'tenɪəs",
        .phonetic_uk = ",sɪm(ə)l'teɪnɪəs",
        .meaning = "同时的，同时存在的",
        .example = "They grabbed each other’s hands in simultaneous panic.",
        .example_cn = "他们俩同时惊慌起来，相互抓住对方的手。"
    },
    {
        .word = "accessory",
        .phonetic_us = "ək'sɛsəri",
        .phonetic_uk = "ək'ses(ə)rɪ",
        .meaning = "同谋，帮凶",
        .example = "an accessory to murder",
        .example_cn = "谋杀案的帮凶"
    },
    {
        .word = "homogeneous",
        .phonetic_us = ",homə'dʒinɪəs",
        .phonetic_uk = ",hɒmə(ʊ)'dʒiːnɪəs; -'dʒen-",
        .meaning = "同类的",
        .example = "a homogeneous society",
        .example_cn = "同种族人组成的社会"
    },
    {
        .word = "coordinate",
        .phonetic_us = "ko'ɔrdɪnet",
        .phonetic_uk = "kəʊ'ɔ:dɪneɪt",
        .meaning = "同等的",
        .example = "coordinate clauses joined by ‘and’",
        .example_cn = "用 and 连接的并列分句"
    },
    {
        .word = "whilst",
        .phonetic_us = "hwailst",
        .phonetic_uk = "waɪlst",
        .meaning = "同时；然而",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "notify",
        .phonetic_us = "'notə'fai",
        .phonetic_uk = "'nəʊtɪfaɪ",
        .meaning = "通知，告知；报告",
        .example = "You will be notified of any changes in the system.",
        .example_cn = "系统中有任何变化都会通知你。"
    },
    {
        .word = "advertise",
        .phonetic_us = "'ædvɚtaɪz",
        .phonetic_uk = "'ædvətaɪz",
        .meaning = "登广告",
        .example = "They no longer advertise alcohol or cigarettes at sporting events.",
        .example_cn = "他们不再在体育赛事上做烟酒广告了。"
    },
    {
        .word = "correspondence",
        .phonetic_us = ",kɔrə'spɑndəns",
        .phonetic_uk = "kɒrɪ'spɒnd(ə)ns",
        .meaning = "通信；相关；相似",
        .example = "The magazine is unable to enter into any correspondence on medical matters.",
        .example_cn = "本杂志无法答复有关医学方面的来信。"
    },
    {
        .word = "popularity",
        .phonetic_us = ",pɑpju'lærəti",
        .phonetic_uk = "pɒpjʊ'lærətɪ",
        .meaning = "通俗性；普及，流行",
        .example = "The president’s popularity has declined considerably.",
        .example_cn = "总统的支持率大大下降了。"
    },
    {
        .word = "inflation",
        .phonetic_us = "ɪn'fleʃən",
        .phonetic_uk = "ɪn'fleɪʃ(ə)n",
        .meaning = "通货膨胀，物价飞涨",
        .example = "Inflation is now at over 16%.",
        .example_cn = "通货膨胀率现已超过16%。"
    },
    {
        .word = "currency",
        .phonetic_us = "ˈkɜrənsi",
        .phonetic_uk = "'kʌr(ə)nsɪ",
        .meaning = "通货；货币",
        .example = "The bank can supply you with foreign currency .",
        .example_cn = "这家银行能为你提供外币。"
    },
    {
        .word = "entry",
        .phonetic_us = "'ɛntri",
        .phonetic_uk = "ˈɒntreɪ",
        .meaning = "入口，通道；条目",
        .example = "You can leave your umbrella in the entry.",
        .example_cn = "你可以把伞放在入口处。"
    },
    {
        .word = "customary",
        .phonetic_us = "'kʌstə'mɛri",
        .phonetic_uk = "'kʌstəm(ə)rɪ",
        .meaning = "通常的；照惯例的",
        .example = "In some cultures it is customary for the bride to wear white.",
        .example_cn = "在一些文化中，新娘按风俗要穿白色。"
    },
    {
        .word = "ordinarily",
        .phonetic_us = ",ɔrdn'ɛrəli",
        .phonetic_uk = "'ɔːd(ə),n(ə)rɪlɪ; ,ɔːdɪ'nerɪlɪ",
        .meaning = "通常，大概",
        .example = "Ordinarily, he didn’t like to go to the movies.",
        .example_cn = "一般来说他不喜欢去看电影。"
    },
    {
        .word = "hydrocarbon",
        .phonetic_us = ",haɪdrə'kɑrbən",
        .phonetic_uk = ",haɪdrə(ʊ)'kɑːb(ə)n",
        .meaning = "烃，碳氢化合物",
        .example = "hydrocarbon emissions",
        .example_cn = "碳氢化合物的排放"
    },
    {
        .word = "resignation",
        .phonetic_us = ",rɛzɪɡ'neʃən",
        .phonetic_uk = "rezɪg'neɪʃ(ə)n",
        .meaning = "听从，屈从，顺从",
        .example = "She gave a sigh of resignation.",
        .example_cn = "她无奈地叹了一口气。"
    },
    {
        .word = "blacksmith",
        .phonetic_us = "'blæksmɪθ",
        .phonetic_uk = "'blæksmɪθ",
        .meaning = "铁匠，锻工",
        .example = "In my youth my father bound me to a blacksmith.",
        .example_cn = "在我年轻时我父亲立契让我给一名铁匠当学徒。"
    },
    {
        .word = "ferrous",
        .phonetic_us = "'fɛrəs",
        .phonetic_uk = "'ferəs",
        .meaning = "铁的；亚铁的",
        .example = "ferrous metals",
        .example_cn = "含铁[黑色]金属"
    },
    {
        .word = "adjoin",
        .phonetic_us = "ə'dʒɔɪn",
        .phonetic_uk = "ə'dʒɒɪn",
        .meaning = "贴近，毗连；靠近",
        .example = "A vacant plot of land adjoins his house.",
        .example_cn = "有一块空地紧挨着他家。"
    },
    {
        .word = "hop",
        .phonetic_us = "hɑp",
        .phonetic_uk = "hɒp",
        .meaning = "（人）单足跳",
        .example = "a little girl hopping and skipping",
        .example_cn = "一个蹦蹦跳跳的小女孩"
    },
    {
        .word = "skip",
        .phonetic_us = "skɪp",
        .phonetic_uk = "skɪp",
        .meaning = "蹦跳着走；跳绳；略过",
        .example = "He turned and skipped away, singing happily to himself.",
        .example_cn = "他转身蹦蹦跳跳地跑了，嘴里高兴地哼着歌。"
    },
    {
        .word = "overlook",
        .phonetic_us = ",ovɚ'lʊk",
        .phonetic_uk = "əʊvə'lʊk",
        .meaning = "眺望；看漏；宽容",
        .example = "Our room overlooks the ocean.",
        .example_cn = "我们的房间可以俯视大海。"
    },
    {
        .word = "regulate",
        .phonetic_us = "'rɛɡjulet",
        .phonetic_uk = "'regjʊleɪt",
        .meaning = "调整，调节，校准",
        .example = "People sweat to regulate their body heat.",
        .example_cn = "人出汗以调节体温。"
    },
    {
        .word = "modulate",
        .phonetic_us = "'mɑdʒəlet",
        .phonetic_uk = "'mɒdjʊleɪt",
        .meaning = "调整，调节（声音）",
        .example = "He carefully modulated his voice.",
        .example_cn = "他仔细地调节了自己的声音。"
    },
    {
        .word = "settlement",
        .phonetic_us = "'sɛtlmənt",
        .phonetic_uk = "'set(ə)lm(ə)nt",
        .meaning = "调停；（尤指拓荒者居住的）定居点，村落",
        .example = "the search for a peaceful settlement of the Northern Ireland conflict",
        .example_cn = "寻找和平解决北爱尔兰冲突的办法"
    },
    {
        .word = "mischief",
        .phonetic_us = "'mɪstʃɪf",
        .phonetic_uk = "'mɪstʃɪf",
        .meaning = "调皮，捣蛋，胡闹",
        .example = "Now run along, and don’t get into mischief .",
        .example_cn = "好了，走开，不要捣乱。"
    },
    {
        .word = "accord",
        .phonetic_us = "ə'kɔrd",
        .phonetic_uk = "ə'kɔːd",
        .meaning = "符合；协议",
        .example = "These results are in accord with earlier research.",
        .example_cn = "这些结果和先前的研究一致。"
    },
    {
        .word = "questionnaire",
        .phonetic_us = "ˌkwɛstʃənˈɛr",
        .phonetic_uk = "ˌkwestʃəˈneə(r)",
        .meaning = "调查表，征求意见表",
        .example = "Teachers will be asked to fill in a questionnaire.",
        .example_cn = "教师们将被要求填写一份调查问卷。"
    },
    {
        .word = "sweetness",
        .phonetic_us = "'switnəs",
        .phonetic_uk = "",
        .meaning = "甜蜜，芬芳；愉悦，美好",
        .example = "the sweetness of the wild rose",
        .example_cn = "野玫瑰的芬芳"
    },
    {
        .word = "dessert",
        .phonetic_us = "dɪ'zɝt",
        .phonetic_uk = "dɪ'zɜːt",
        .meaning = "甜点心",
        .example = "She had homemade ice cream for dessert.",
        .example_cn = "她吃了些自制冰淇淋当餐后甜点。"
    },
    {
        .word = "Catholic",
        .phonetic_us = "kæθəlɪk",
        .phonetic_uk = "",
        .meaning = "天主教的",
        .example = "...the Catholic Church.",
        .example_cn = "…天主教会。"
    },
    {
        .word = "astronomy",
        .phonetic_us = "ə'strɑnəmi",
        .phonetic_uk = "ə'strɒnəmɪ",
        .meaning = "天文学",
        .example = "Do you know anything about astronomy?",
        .example_cn = "你懂天文学吗?"
    },
    {
        .word = "embody",
        .phonetic_us = "ɪm'bɑdi",
        .phonetic_uk = "ɪm'bɒdɪ; em-",
        .meaning = "体现；包含，收录",
        .example = "She embodies everything I admire in a teacher.",
        .example_cn = "她具备了我所钦佩的教师该具备的一切素质。"
    },
    {
        .word = "theme",
        .phonetic_us = "θim",
        .phonetic_uk = "θiːm",
        .meaning = "题目；主题；主旋律；（句子的）主位；词干",
        .example = "The book’s theme is the conflict between love and duty.",
        .example_cn = "本书的主题是爱与责任之间的冲突。"
    },
    {
        .word = "nominate",
        .phonetic_us = "'nɑmɪnet",
        .phonetic_uk = "'nɒmɪneɪt",
        .meaning = "提名，推荐；任命",
        .example = "Ferraro was the first woman to be nominated for the job of vice president.",
        .example_cn = "费拉罗是第一位获得副总统职位提名的女性。"
    },
    {
        .word = "finance",
        .phonetic_us = "'faɪnæns",
        .phonetic_uk = "faɪ'næns; fɪ-; 'faɪnæns",
        .meaning = "提供资金",
        .example = "The concerts are financed by the Arts Council.",
        .example_cn = "音乐会由艺术协会出资举办。"
    },
    {
        .word = "nourish",
        .phonetic_us = "'nɜrɪʃ",
        .phonetic_uk = "'nʌrɪʃ",
        .meaning = "提供养分，养育",
        .example = "The cream contains vitamin A to nourish the skin.",
        .example_cn = "这种护肤霜含有滋养肌肤的维生素A。"
    },
    {
        .word = "enhance",
        .phonetic_us = "ɪn'hæns",
        .phonetic_uk = "ɪn'hɑːns; -hæns; en-",
        .meaning = "提高，增加；改进",
        .example = "Good lighting will enhance any room.",
        .example_cn = "良好的照明能给房间增色不少。"
    },
    {
        .word = "elevate",
        .phonetic_us = "'ɛlɪvet",
        .phonetic_uk = "'elɪveɪt",
        .meaning = "提拔；抬高",
        .example = "Language has elevated humans above the other animals.",
        .example_cn = "语言使人类高于其他动物。"
    },
    {
        .word = "purify",
        .phonetic_us = "'pjʊrɪfaɪ",
        .phonetic_uk = "'pjʊərɪfaɪ",
        .meaning = "提纯，精炼（金属）",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "raise",
        .phonetic_us = "rez",
        .phonetic_uk = "reɪz",
        .meaning = "提出，发起，发出",
        .example = "He did not raise the subject again.",
        .example_cn = "他再也没有提起这个话题。"
    },
    {
        .word = "introduce",
        .phonetic_us = "ˌɪntrə'dus",
        .phonetic_uk = "ɪntrə'djuːs",
        .meaning = "提出（议案等）",
        .example = "Several senators introduced legislation aimed at sexual harassment.",
        .example_cn = "几位参议员提交了针对性骚扰的立法议案。"
    },
    {
        .word = "peculiarity",
        .phonetic_us = "pɪ'kjʊlɪ'ærəti",
        .phonetic_uk = "pɪ,kjuːlɪ'ærɪtɪ",
        .meaning = "特性，独特性；怪癖",
        .example = "The lack of a written constitution is a peculiarity of the British political system.",
        .example_cn = "没有一部成文宪法是英国政治制度的一大特点。"
    },
    {
        .word = "individual",
        .phonetic_us = ",ɪndɪ'vɪdʒuəl",
        .phonetic_uk = "ɪndɪ'vɪdjʊ(ə)l",
        .meaning = "特殊的",
        .example = "a tennis player with a highly individual style",
        .example_cn = "风格非常独特的网球选手"
    },
    {
        .word = "essential",
        .phonetic_us = "ɪ'sɛnʃl",
        .phonetic_uk = "ɪ'senʃ(ə)l",
        .meaning = "极其重要的；必不可少的",
        .example = "Window locks are fairly cheap and absolutely essential.",
        .example_cn = "窗锁相当便宜，绝对有必要安装。"
    },
    {
        .word = "bore",
        .phonetic_us = "bɔr",
        .phonetic_uk = "bɔː",
        .meaning = "讨厌的人；麻烦事",
        .example = "He turned out to be a crashing bore (= used to emphasize that someone is very boring ).",
        .example_cn = "他这人原来无聊透顶。"
    },
    {
        .word = "earthenware",
        .phonetic_us = "'ɝθnwɛr",
        .phonetic_uk = "'ɜːθ(ə)nweə",
        .meaning = "陶器",
        .example = "...colourful Italian china and earthenware.",
        .example_cn = "...五颜六色的意大利瓷器和陶器。"
    },
    {
        .word = "flee",
        .phonetic_us = "fli",
        .phonetic_uk = "fliː",
        .meaning = "逃走，逃避",
        .example = "His attackers turned and fled.",
        .example_cn = "袭击他的人转身逃走了。"
    },
    {
        .word = "outlaw",
        .phonetic_us = "'aʊtlɔ",
        .phonetic_uk = "'aʊtlɔː",
        .meaning = "逃犯，歹徒",
        .example = "Jesse was an outlaw, a bandit, a criminal.",
        .example_cn = "杰西曾是个逃犯、土匪、罪犯。"
    },
    {
        .word = "wade",
        .phonetic_us = "wed",
        .phonetic_uk = "weɪd",
        .meaning = "趟（河），跋涉",
        .example = "He waded into the water to push the boat out.",
        .example_cn = "他蹚进水里把船推出来。"
    },
    {
        .word = "probe",
        .phonetic_us = "prob",
        .phonetic_uk = "prəʊb",
        .meaning = "探针",
        .example = "a fibre-optic probe",
        .example_cn = "一根光纤探针"
    },
    {
        .word = "expedition",
        .phonetic_us = ",ɛkspə'dɪʃən",
        .phonetic_uk = "ekspɪ'dɪʃ(ə)n",
        .meaning = "探险；探险队",
        .example = "an expedition to the North Pole",
        .example_cn = "北极探险"
    },
    {
        .word = "charcoal",
        .phonetic_us = "'tʃɑrkol",
        .phonetic_uk = "'tʃɑːkəʊl",
        .meaning = "炭，木炭；生物炭",
        .example = "cooking over a charcoal fire",
        .example_cn = "在炭火上做饭"
    },
    {
        .word = "plain",
        .phonetic_us = "plen",
        .phonetic_uk = "pleɪn",
        .meaning = "坦白的；普通的",
        .example = "Let’s have some plain, truthful answers.",
        .example_cn = "让我们听听坦率而真实的回答吧。"
    },
    {
        .word = "negotiate",
        .phonetic_us = "nɪ'ɡoʃɪet",
        .phonetic_uk = "nɪ'gəʊʃɪeɪt",
        .meaning = "谈判，交涉，议定",
        .example = "His first aim is to get the warring parties back to the negotiating table (= discussing something ).",
        .example_cn = "他的首要目标就是把交战各方拉回到谈判桌上。"
    },
    {
        .word = "greed",
        .phonetic_us = "ɡrid",
        .phonetic_uk = "griːd",
        .meaning = "贪心，贪婪",
        .example = "people motivated by jealousy and greed",
        .example_cn = "受妒忌和贪婪驱使的人们"
    },
    {
        .word = "moss",
        .phonetic_us = "mɔs",
        .phonetic_uk = "mɒs",
        .meaning = "苔藓，地衣",
        .example = "...ground covered over with moss.",
        .example_cn = "…长满青苔的地面。"
    },
    {
        .word = "pedal",
        .phonetic_us = "'pɛdl",
        .phonetic_uk = "'ped(ə)l",
        .meaning = "（自行车的）踏脚，踏板，脚蹬；（汽车或机器的）踏板",
        .example = "I couldn't reach the pedals on her bike.",
        .example_cn = "我骑她的车够不到脚蹬子。"
    },
    {
        .word = "thereof",
        .phonetic_us = ",ðɛr'ʌv",
        .phonetic_uk = "ðeər'ɒv",
        .meaning = "它的，其；由此",
        .example = "States differ in standards for products and the labelling thereof.",
        .example_cn = "各州的产品标准不同，标签的标注也不同。"
    },
    {
        .word = "trivial",
        .phonetic_us = "'trɪvɪəl",
        .phonetic_uk = "'trɪvɪəl",
        .meaning = "琐碎的；平常的",
        .example = "a trivial detail",
        .example_cn = "细枝末节"
    },
    {
        .word = "detail",
        .phonetic_us = "'ditel",
        .phonetic_uk = "'diːteɪl",
        .meaning = "琐碎，小事",
        .example = "She told me every detail of her trip.",
        .example_cn = "她把旅行的所有细节都告诉了我。"
    },
    {
        .word = "concern",
        .phonetic_us = "kən'sɝn",
        .phonetic_uk = "kən'sɜːn",
        .meaning = "所关切的事；商行",
        .example = "One of the concerns that people have is the side effects of treatment.",
        .example_cn = "人们担心的问题之一是治疗的副作用。"
    },
    {
        .word = "what",
        .phonetic_us = "hwʌt; hwɑt; wʌt; wɑt",
        .phonetic_uk = "wɒt",
        .meaning = "所…的",
        .example = "Show me what you bought.",
        .example_cn = "给我看看你买的东西。"
    },
    {
        .word = "miniature",
        .phonetic_us = "ˈmɪniətʃɚ; ˈmɪnɪtʃɚ",
        .phonetic_uk = "'mɪnɪtʃə",
        .meaning = "缩影",
        .example = "She’s her mother in miniature.",
        .example_cn = "她是她母亲的缩影。"
    },
    {
        .word = "hurt",
        .phonetic_us = "hɝ​t",
        .phonetic_uk = "hɜːt",
        .meaning = "（对感情造成的）伤害，创伤",
        .example = "She saw the hurt in his eyes.",
        .example_cn = "她看到了他眼中的伤痛。"
    },
    {
        .word = "deform",
        .phonetic_us = "dɪ'fɔrm",
        .phonetic_uk = "dɪ'fɔːm",
        .meaning = "损坏…的形状",
        .example = "Wearing badly-fitting shoes can deform your feet.",
        .example_cn = "穿不合脚的鞋会使脚变形。"
    },
    {
        .word = "deformation",
        .phonetic_us = "'difɔr'meʃən",
        .phonetic_uk = ",diːfɔː'meɪʃ(ə)n",
        .meaning = "损坏；变形；畸形",
        .example = "a deformation of the spine",
        .example_cn = "脊柱的畸变"
    },
    {
        .word = "fringe",
        .phonetic_us = "frɪndʒ",
        .phonetic_uk = "frɪn(d)ʒ",
        .meaning = "穗，毛边；边缘",
        .example = "The jacket had leather fringes.",
        .example_cn = "这件夹克有皮穗。"
    },
    {
        .word = "scrap",
        .phonetic_us = "skræp",
        .phonetic_uk = "skræp",
        .meaning = "碎片；废料",
        .example = "a rug made out of old scraps of material",
        .example_cn = "用旧零碎材料拼做的一块小地毯"
    },
    {
        .word = "random",
        .phonetic_us = "'rændəm",
        .phonetic_uk = "'rændəm",
        .meaning = "随机",
        .example = "The gang picked their victims at random.",
        .example_cn = "这帮犯罪分子随意选择对象下手。"
    },
    {
        .word = "garlic",
        .phonetic_us = "'ɡɑrlɪk",
        .phonetic_uk = "'gɑːlɪk",
        .meaning = "蒜，大蒜",
        .example = "Add a crushed clove of garlic (= single section of it ).",
        .example_cn = "加一瓣压碎的大蒜。"
    },
    {
        .word = "plastic",
        .phonetic_us = "'plæstɪk",
        .phonetic_uk = "'plæstɪk",
        .meaning = "塑料的；塑性的",
        .example = "a plastic spoon",
        .example_cn = "塑料汤匙"
    },
    {
        .word = "shorthand",
        .phonetic_us = "'ʃɔrthænd",
        .phonetic_uk = "'ʃɔːthænd",
        .meaning = "速记，速记法",
        .example = "a secretary who takes shorthand (= writes in shorthand )",
        .example_cn = "会速记的秘书"
    },
    {
        .word = "scout",
        .phonetic_us = "skaʊt",
        .phonetic_uk = "skaʊt",
        .meaning = "搜索，侦察",
        .example = "They scouted the area for somewhere to stay the night.",
        .example_cn = "他们四处查看，想找个过夜的地方。"
    },
    {
        .word = "laundry",
        .phonetic_us = "'lɔndri",
        .phonetic_uk = "'lɔːndrɪ",
        .meaning = "送洗衣店去洗的东西",
        .example = "She did the laundry (= washed the clothes etc ) and hung it out to dry.",
        .example_cn = "她洗了衣服，然后挂出去晾干。"
    },
    {
        .word = "replace",
        .phonetic_us = "rɪ'ples",
        .phonetic_uk = "rɪ'pleɪs",
        .meaning = "把...放回原处",
        .example = "He replaced the book on the shelf.",
        .example_cn = "他把书放回架子上。"
    },
    {
        .word = "loosely",
        .phonetic_us = "'lusli",
        .phonetic_uk = "'lu:slɪ",
        .meaning = "松松地，松散地",
        .example = "She fastened the belt loosely around her waist.",
        .example_cn = "她把皮带松松地系在腰上。"
    },
    {
        .word = "rear",
        .phonetic_us = "rɪr",
        .phonetic_uk = "rɪə",
        .meaning = "饲养，培植；抚养",
        .example = "It’s a good place to rear young children.",
        .example_cn = "这地方非常适合抚养小孩子成长。"
    },
    {
        .word = "perish",
        .phonetic_us = "'pɛrɪʃ",
        .phonetic_uk = "'perɪʃ",
        .meaning = "死亡，夭折；枯萎",
        .example = "Hundreds perished when the ship went down.",
        .example_cn = "轮船沉没，数百人罹难。"
    },
    {
        .word = "hiss",
        .phonetic_us = "hɪs",
        .phonetic_uk = "hɪs",
        .meaning = "嘶嘶声",
        .example = "the snake's hiss",
        .example_cn = "蛇发出的嘶嘶声"
    },
    {
        .word = "rip",
        .phonetic_us = "rɪp",
        .phonetic_uk = "rɪp",
        .meaning = "撕，扯破，划破",
        .example = "Her clothes had all been ripped.",
        .example_cn = "她的衣服都被撕破了。"
    },
    {
        .word = "speculate",
        .phonetic_us = "'spɛkjə'let",
        .phonetic_uk = "'spekjʊleɪt",
        .meaning = "猜测，推测；投机",
        .example = "Jones refused to speculate about what might happen.",
        .example_cn = "琼斯拒绝猜测可能会发生什么事情。"
    },
    {
        .word = "smuggle",
        .phonetic_us = "'smʌgl",
        .phonetic_uk = "'smʌg(ə)l",
        .meaning = "私运，走私",
        .example = "The guns were smuggled across the border.",
        .example_cn = "这些枪被偷运过境。"
    },
    {
        .word = "confidence",
        .phonetic_us = "'kɑnfɪdəns",
        .phonetic_uk = "'kɒnfɪd(ə)ns",
        .meaning = "私房话，秘密，机密",
        .example = "I have never betrayed a confidence.",
        .example_cn = "我从未泄露过别人的秘密。"
    },
    {
        .word = "velvet",
        .phonetic_us = "'vɛlvɪt",
        .phonetic_uk = "ˈvɛlvɪt",
        .meaning = "丝绒制的；柔软光滑的",
        .example = "velvet curtains/cushions",
        .example_cn = "天鹅绒窗帘/坐垫"
    },
    {
        .word = "treasurer",
        .phonetic_us = "'trɛʒərɚ",
        .phonetic_uk = "'treʒ(ə)rə",
        .meaning = "司库，财务主管",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "exposition",
        .phonetic_us = ",ɛkspə'zɪʃən",
        .phonetic_uk = "ekspə'zɪʃ(ə)n",
        .meaning = "说明，解释；展览会，博览会",
        .example = "a lucid exposition of educational theories",
        .example_cn = "对教育理论的清晰阐述"
    },
    {
        .word = "preach",
        .phonetic_us = "pritʃ",
        .phonetic_uk = "priːtʃ",
        .meaning = "说教，布道；鼓吹",
        .example = "Christ began preaching to large crowds.",
        .example_cn = "基督开始向众人布道。"
    },
    {
        .word = "observe",
        .phonetic_us = "əb'zɝv",
        .phonetic_uk = "əb'zɜːv",
        .meaning = "说，评述，评论",
        .example = "‘Sid looks ill,’ Doherty observed.",
        .example_cn = "“锡德看上去病了。”多尔蒂说道。"
    },
    {
        .word = "momentary",
        .phonetic_us = "'moməntɛri",
        .phonetic_uk = "'məʊm(ə)nt(ə)rɪ",
        .meaning = "瞬息间的，片刻的",
        .example = "There was a momentary pause.",
        .example_cn = "停顿了片刻。"
    },
    {
        .word = "instantaneous",
        .phonetic_us = ",ɪnstən'tenɪəs",
        .phonetic_uk = ",ɪnst(ə)n'teɪnɪəs",
        .meaning = "瞬间的，即刻的",
        .example = "modern methods of instantaneous communication",
        .example_cn = "现代的即时通信方法"
    },
    {
        .word = "couch",
        .phonetic_us = "kaʊtʃ",
        .phonetic_uk = "kaʊtʃ",
        .meaning = "睡椅，长沙发椅",
        .example = "Tom offered to sleep on the couch.",
        .example_cn = "汤姆说他来睡沙发。"
    },
    {
        .word = "slumber",
        .phonetic_us = "'slʌmbɚ",
        .phonetic_uk = "'slʌmbə",
        .meaning = "睡眠；沉睡状态",
        .example = "He passed into a deep slumber.",
        .example_cn = "他酣然入梦。"
    },
    {
        .word = "buffalo",
        .phonetic_us = "'bʌfəlo",
        .phonetic_uk = "'bʌfələʊ",
        .meaning = "水牛；水陆坦克",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "hydraulic",
        .phonetic_us = "haɪ'drɔlɪk",
        .phonetic_uk = "haɪ'drɔːlɪk; haɪ'drɒlɪk",
        .meaning = "水力的；水力学的",
        .example = "a hydraulic pump",
        .example_cn = "水压泵，液压泵"
    },
    {
        .word = "watery",
        .phonetic_us = "'wɑtəri",
        .phonetic_uk = "'wɔːt(ə)rɪ",
        .meaning = "充满水的；与水有关的；湿的；（食物、饮料等）味淡的",
        .example = "Her eyes were red and watery from crying.",
        .example_cn = "她的眼睛哭得红红的，眼里含满泪水。"
    },
    {
        .word = "rinse",
        .phonetic_us = "rɪns",
        .phonetic_uk = "rɪns",
        .meaning = "冲洗；嗽（口）",
        .example = "Let me just rinse my hands.",
        .example_cn = "让我冲个手。"
    },
    {
        .word = "wrestle",
        .phonetic_us = "'rɛsl",
        .phonetic_uk = "'res(ə)l",
        .meaning = "摔交；斗争，搏斗",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "numerical",
        .phonetic_us = "nʊ'mɛrɪkl",
        .phonetic_uk = "njuː'merɪk(ə)l",
        .meaning = "数字的，数值的",
        .example = "a numerical code",
        .example_cn = "数字密码"
    },
    {
        .word = "reckon",
        .phonetic_us = "'rɛkən",
        .phonetic_uk = "'rek(ə)n",
        .meaning = "计算；认为",
        .example = "The expression ‘full moon’ means the fourteenth day of the moon reckoned from its first appearance.",
        .example_cn = "所谓“满月”是指从新月初现算起的第14天。"
    },
    {
        .word = "harp",
        .phonetic_us = "hɑrp",
        .phonetic_uk = "hɑːp",
        .meaning = "竖琴；天琴座",
        .example = "She swept her fingers over the strings of the harp.",
        .example_cn = "她用手指划过竖琴的琴弦。"
    },
    {
        .word = "erect",
        .phonetic_us = "ɪ'rɛkt",
        .phonetic_uk = "ɪ'rekt",
        .meaning = "直立的",
        .example = "Martin stood erect on the platform.",
        .example_cn = "马丁在讲台上笔直地站着。"
    },
    {
        .word = "terminology",
        .phonetic_us = ",tɝmə'nɑlədʒi",
        .phonetic_uk = ",tɜːmɪ'nɒlədʒɪ",
        .meaning = "术语学，术语",
        .example = "computer terminology",
        .example_cn = "计算机术语"
    },
    {
        .word = "proficient",
        .phonetic_us = "prə'fɪʃnt",
        .phonetic_uk = "prə'fɪʃ(ə)nt",
        .meaning = "熟练的，精通的",
        .example = "a proficient typist",
        .example_cn = "熟练的打字员"
    },
    {
        .word = "proficiency",
        .phonetic_us = "prə'fɪʃənsi",
        .phonetic_uk = "prə'fɪʃ(ə)nsɪ",
        .meaning = "熟练，精通",
        .example = "a high level of proficiency in English",
        .example_cn = "精通英语"
    },
    {
        .word = "input",
        .phonetic_us = "'ɪn'pʊt",
        .phonetic_uk = "'ɪnpʊt",
        .meaning = "输入",
        .example = "to input text/data/figures",
        .example_cn = "把文本 / 数据 / 数字输入计算机"
    },
    {
        .word = "grant",
        .phonetic_us = "ɡrænt",
        .phonetic_uk = "grɑːnt",
        .meaning = "拨款",
        .example = "The university gets a government grant.",
        .example_cn = "这所大学获得政府拨款。"
    },
    {
        .word = "dependant",
        .phonetic_us = "di'pendənt",
        .phonetic_uk = "dɪ'pend(ə)nt",
        .meaning = "受赡养者",
        .example = "Companies with 200 or more workers must offer health benefits to employees and their dependants.",
        .example_cn = "员工数为200或更多的公司必须为其员工和员工的受扶养人提供健康福利。"
    },
    {
        .word = "miser",
        .phonetic_us = "'maɪzɚ",
        .phonetic_uk = "'maɪzə",
        .meaning = "守财奴，吝啬鬼",
        .example = "I'm married to a miser.",
        .example_cn = "我嫁了个守财奴。"
    },
    {
        .word = "trolley",
        .phonetic_us = "'trɑli",
        .phonetic_uk = "'trɒlɪ",
        .meaning = "手推车；有轨电车",
        .example = "a supermarket trolley",
        .example_cn = "超市购物手推车"
    },
    {
        .word = "manuscript",
        .phonetic_us = "'mænjuskrɪpt",
        .phonetic_uk = "'mænjʊskrɪpt",
        .meaning = "手稿，底稿，原稿",
        .example = "Unfortunately, parts of the original manuscript have been lost.",
        .example_cn = "遗憾的是，部分原始手稿丢失了。"
    },
    {
        .word = "handbook",
        .phonetic_us = "'hændbʊk",
        .phonetic_uk = "'hæn(d)bʊk",
        .meaning = "手册，便览，指南",
        .example = "the Fiction Writer’s Handbook",
        .example_cn = "《小说写作手册》"
    },
    {
        .word = "adoption",
        .phonetic_us = "ə'dɑpʃən",
        .phonetic_uk = "ə'dɒpʃ(ə)n",
        .meaning = "收养；采纳，采取",
        .example = "She decided to put the baby up for adoption.",
        .example_cn = "她决定让人收养那个婴儿。"
    },
    {
        .word = "revenue",
        .phonetic_us = "'rɛvənu",
        .phonetic_uk = "'revənjuː",
        .meaning = "收入；收入数目",
        .example = "advertising revenue",
        .example_cn = "广告收入"
    },
    {
        .word = "oath",
        .phonetic_us = "oθ",
        .phonetic_uk = "əʊθ",
        .meaning = "誓言，誓约，宣誓",
        .example = "The president took the oath of office (= made the official public promises that every president makes when starting their job ) .",
        .example_cn = "总统宣誓就职。"
    },
    {
        .word = "vow",
        .phonetic_us = "vaʊ",
        .phonetic_uk = "vaʊ",
        .meaning = "誓言，誓约，许愿",
        .example = "Jim made a vow that he would find his wife’s killer.",
        .example_cn = "吉姆发誓要找到杀害他妻子的凶手。"
    },
    {
        .word = "pledge",
        .phonetic_us = "plɛdʒ",
        .phonetic_uk = "pledʒ",
        .meaning = "誓言",
        .example = "a pledge of support for the plan",
        .example_cn = "支持该计划的誓约"
    },
    {
        .word = "indoor",
        .phonetic_us = "'ɪndɔr",
        .phonetic_uk = "'ɪndɔː",
        .meaning = "室内的；室内进行的",
        .example = "an indoor swimming pool",
        .example_cn = "室内游泳池"
    },
    {
        .word = "wholesome",
        .phonetic_us = "'holsəm",
        .phonetic_uk = "'həʊls(ə)m",
        .meaning = "对健康有益的",
        .example = "well-balanced wholesome meals",
        .example_cn = "营养均衡的健康餐"
    },
    {
        .word = "moderately",
        .phonetic_us = "'mɑdərətli",
        .phonetic_uk = "'mɒd(ə)rətlɪ",
        .meaning = "适度地，适中",
        .example = "He drinks moderately.",
        .example_cn = "他喝酒有节制。"
    },
    {
        .word = "fitting",
        .phonetic_us = "'fɪtɪŋ",
        .phonetic_uk = "'fɪtɪŋ",
        .meaning = "适当的",
        .example = "I thought the memorial was a fitting tribute to the President.",
        .example_cn = "我认为这座纪念碑恰如其分地表达了对总统的敬意。"
    },
    {
        .word = "fitness",
        .phonetic_us = "ˈfɪtnɪs",
        .phonetic_uk = "'fɪtnəs",
        .meaning = "适当，恰当；健康",
        .example = "He questioned McNeil’s fitness for high office.",
        .example_cn = "他质疑麦克尼尔是否适合身居高位。"
    },
    {
        .word = "vision",
        .phonetic_us = "'vɪʒən",
        .phonetic_uk = "'vɪʒ(ə)n",
        .meaning = "视力；眼力，想象力",
        .example = "She suffered temporary loss of vision after being struck on the head.",
        .example_cn = "她头部受撞击以后出现暂时性失明。"
    },
    {
        .word = "attendant",
        .phonetic_us = "ə'tɛndənt",
        .phonetic_uk = "ə'tend(ə)nt",
        .meaning = "侍者；（要人的）侍从；（病人的）护理人员",
        .example = "a cloakroom/parking/museum attendant",
        .example_cn = "衣帽间 / 停车服务员；博物馆接待员"
    },
    {
        .word = "occurrence",
        .phonetic_us = "ə'kʌrəns",
        .phonetic_uk = "ə'kʌr(ə)ns",
        .meaning = "发生的事",
        .example = "Laughter was a rare occurrence in his classroom.",
        .example_cn = "他的课堂上难得有笑声。"
    },
    {
        .word = "snob",
        .phonetic_us = "snɑb",
        .phonetic_uk = "snɒb",
        .meaning = "势利小人",
        .example = "Stop being such a snob.",
        .example_cn = "别这么势利眼。"
    },
    {
        .word = "snobbish",
        .phonetic_us = "'snɑbɪʃ",
        .phonetic_uk = "'snɒbɪʃ",
        .meaning = "势利的，谄上欺下的",
        .example = "Her family seems snobbish.",
        .example_cn = "她家里人好像挺势利的。"
    },
    {
        .word = "influence",
        .phonetic_us = "'ɪnfluəns",
        .phonetic_uk = "'ɪnflʊəns",
        .meaning = "势力，权势",
        .example = "He used his influence to get his son into medical school.",
        .example_cn = "他利用权势把儿子弄进了医学院。"
    },
    {
        .word = "municipal",
        .phonetic_us = "mju'nɪsɪpl",
        .phonetic_uk = "mjʊ'nɪsɪp(ə)l",
        .meaning = "市的，市立的",
        .example = "the municipal waste dump",
        .example_cn = "城市垃圾场"
    },
    {
        .word = "conform",
        .phonetic_us = "kən'fɔrm",
        .phonetic_uk = "kən'fɔːm",
        .meaning = "使遵守；一致",
        .example = "The building does not conform with safety regulations.",
        .example_cn = "例句：这座建筑物不符合安全条例。"
    },
    {
        .word = "automate",
        .phonetic_us = "'ɔtəmet",
        .phonetic_uk = "'ɔːtəmeɪt",
        .meaning = "使自动化",
        .example = "Cash machines automate two basic functions of a bank – deposits and withdrawals.",
        .example_cn = "柜员机使银行的两个基本功能——存款和取款自动化了。"
    },
    {
        .word = "divert",
        .phonetic_us = "dɪˈvɚt",
        .phonetic_uk = "daɪ'vɜːt; dɪ-",
        .meaning = "使转向；转移",
        .example = "Northbound traffic will have to be diverted onto minor roads.",
        .example_cn = "北行车辆将不得不绕次要道路行驶。"
    },
    {
        .word = "specialize",
        .phonetic_us = "'spɛʃəlaɪz",
        .phonetic_uk = "'speʃəlaiz",
        .meaning = "使专门化，专业化",
        .example = "Simmons specialized in contract law.",
        .example_cn = "西蒙斯专攻合同法。"
    },
    {
        .word = "hazard",
        .phonetic_us = "'hæzɚd",
        .phonetic_uk = "'hæzəd",
        .meaning = "使遭危险",
        .example = "Careless drivers hazard other people's lives as well as their own.",
        .example_cn = "粗心大意的驾驶者拿他人和自己的生命冒险。"
    },
    {
        .word = "standardize",
        .phonetic_us = "'stændɚdaɪz",
        .phonetic_uk = "'stændədaɪz",
        .meaning = "使与标准比较",
        .example = "Attempts to standardize English spelling have never been successful.",
        .example_cn = "统一英语拼写的尝试从未成功过。"
    },
    {
        .word = "lengthen",
        .phonetic_us = "'lɛŋθən",
        .phonetic_uk = "'leŋθ(ə)n; -ŋkθ-",
        .meaning = "使延长，变长",
        .example = "Can you lengthen this skirt for me?",
        .example_cn = "你能不能帮我把这条裙子改长？"
    },
    {
        .word = "shame",
        .phonetic_us = "ʃem",
        .phonetic_uk = "ʃeɪm",
        .meaning = "使羞愧；玷辱",
        .example = "It shames me to say it, but I lied.",
        .example_cn = "说出来真难为情，我撒谎了。"
    },
    {
        .word = "freshen",
        .phonetic_us = "'frɛʃən",
        .phonetic_uk = "'freʃ(ə)n",
        .meaning = "使显得新鲜",
        .example = "Using a mouthwash freshens the breath.",
        .example_cn = "使用漱口液可以使口气清新。"
    },
    {
        .word = "distinguish",
        .phonetic_us = "dɪ'stɪŋɡwɪʃ",
        .phonetic_uk = "dɪ'stɪŋgwɪʃ",
        .meaning = "使显出特色，使杰出",
        .example = "The factor that distinguishes this company from the competition is customer service.",
        .example_cn = "使这家公司在竞争中脱颖而出的是其客户服务。"
    },
    {
        .word = "evaporate",
        .phonetic_us = "ɪ'væpəret",
        .phonetic_uk = "ɪ'væpəreɪt",
        .meaning = "使脱水，发散蒸气",
        .example = "Most of the water had evaporated.",
        .example_cn = "大部分的水都蒸发了。"
    },
    {
        .word = "ventilate",
        .phonetic_us = "'vɛntɪlet",
        .phonetic_uk = "'ventɪleɪt",
        .meaning = "使通风，使换气",
        .example = "Ventilate the room properly when stripping paint.",
        .example_cn = "在刮漆的时候要适当地使房间通风。"
    },
    {
        .word = "moor",
        .phonetic_us = "",
        .phonetic_uk = "mɔː; mʊə",
        .meaning = "使停泊；使固定",
        .example = "Two or three fishing boats were moored alongside the pier.",
        .example_cn = "有两三艘渔船停泊在码头边。"
    },
    {
        .word = "resign",
        .phonetic_us = "rɪ'zaɪn",
        .phonetic_uk = "rɪ'zaɪn",
        .meaning = "使顺从，使听任于",
        .example = "Josh resigned himself to the long walk home.",
        .example_cn = "乔希只好走很长的路回家。"
    },
    {
        .word = "perfect",
        .phonetic_us = "ˈpɝfɪkt; (for v.) pɝˈfɛkt",
        .phonetic_uk = "ˈpəːfɪkt; (for v.) pəˈfekt",
        .meaning = "使熟练，使改善",
        .example = "Mock trials help students perfect their legal skills.",
        .example_cn = "模拟庭审有助于学生们完善自己的法律技能。"
    },
    {
        .word = "infect",
        .phonetic_us = "ɪn'fɛkt",
        .phonetic_uk = "ɪn'fekt",
        .meaning = "使受影响",
        .example = "Lucy’s enthusiasm soon infected the rest of the class.",
        .example_cn = "露西的热情很快就感染了班里的其他人。"
    },
    {
        .word = "lubricate",
        .phonetic_us = "'lubrɪket",
        .phonetic_uk = "'luːbrɪkeɪt",
        .meaning = "使润滑，加润滑油",
        .example = "Lubricate all moving parts with grease.",
        .example_cn = "给所有活动部件加润滑油。"
    },
    {
        .word = "soften",
        .phonetic_us = "'sɔfn",
        .phonetic_uk = "'sɒf(ə)n",
        .meaning = "使软化，变温和",
        .example = "The government has softened its stance on public spending.",
        .example_cn = "政府对公共开支问题的态度软化了。"
    },
    {
        .word = "facilitate",
        .phonetic_us = "fə'sɪlə'tet",
        .phonetic_uk = "fə'sɪlɪteɪt",
        .meaning = "使容易；助长",
        .example = "The new trade agreement should facilitate more rapid economic growth.",
        .example_cn = "新贸易协定应当会加快经济发展。"
    },
    {
        .word = "acquaint",
        .phonetic_us = "ə'kwent",
        .phonetic_uk = "ə'kweɪnt",
        .meaning = "使认识，使了解",
        .example = "Have steps been taken to acquaint breeders with their right to apply for licenses?",
        .example_cn = "已经采取措施让饲养动物者了解他们申请执照的权利了吗？"
    },
    {
        .word = "tiresome",
        .phonetic_us = "'taɪɚsəm",
        .phonetic_uk = "'taɪəs(ə)m",
        .meaning = "使人厌倦的，讨厌的",
        .example = "the whole tiresome business of filling out the forms",
        .example_cn = "填写表格这套烦人事"
    },
    {
        .word = "sorrowful",
        .phonetic_us = "'sɑrofl",
        .phonetic_uk = "'sɒrə(ʊ)fʊl; -f(ə)l",
        .meaning = "使人伤心的；悲伤的",
        .example = "a sorrowful expression",
        .example_cn = "悲伤的表情"
    },
    {
        .word = "blaze",
        .phonetic_us = "blez",
        .phonetic_uk = "bleɪz",
        .meaning = "使燃烧，燃烧",
        .example = "The room was warm, with a fire blazing in the hearth.",
        .example_cn = "房间里暖融融的，壁炉里的火熊熊燃烧。"
    },
    {
        .word = "subdue",
        .phonetic_us = "səb'du",
        .phonetic_uk = "səb'djuː",
        .meaning = "使屈服，征服",
        .example = "Senior government officials admit they have not been able to subdue the rebels.",
        .example_cn = "高级政府官员们承认他们还没能制服反叛者们。"
    },
    {
        .word = "bend",
        .phonetic_us = "bɛnd",
        .phonetic_uk = "bend",
        .meaning = "使屈从，屈从",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "suit",
        .phonetic_us = "sut",
        .phonetic_uk = "sju:t; su:t",
        .meaning = "使配合，彼此协调",
        .example = "Whatever your reason for borrowing, we have the loan that suits your needs.",
        .example_cn = "不管您因何贷款，我们都会有满足您需要的贷款。"
    },
    {
        .word = "confront",
        .phonetic_us = "kən'frʌnt",
        .phonetic_uk = "kən'frʌnt",
        .meaning = "使面对；使对证",
        .example = "The problems confronting the new government were enormous.",
        .example_cn = "新政府面临的难题是巨大的。"
    },
    {
        .word = "paralyse",
        .phonetic_us = "'pærəlaiz",
        .phonetic_uk = "'pærəlaɪz",
        .meaning = "使麻痹，使瘫痪",
        .example = "Her legs were partly paralysed in the crash.",
        .example_cn = "在撞车事故中她的双腿部分瘫痪。"
    },
    {
        .word = "deafen",
        .phonetic_us = "'dɛfən",
        .phonetic_uk = "'def(ə)n",
        .meaning = "使聋",
        .example = "He was deafened by the noise from the gun.",
        .example_cn = "枪声把他震聋了。"
    },
    {
        .word = "subject",
        .phonetic_us = "ˈsʌbdʒekt",
        .phonetic_uk = "ˈsʌbdʒɪkt",
        .meaning = "使隶属",
        .example = "The Roman Empire subjected most of Europe to its rule.",
        .example_cn = "罗马帝国把欧洲多数地区置于自己的统治之下。"
    },
    {
        .word = "terrify",
        .phonetic_us = "ˈtɛrəˌfaɪ",
        .phonetic_uk = "'terɪfaɪ",
        .meaning = "使恐怖，使惊吓",
        .example = "Her husband’s violence terrified her.",
        .example_cn = "丈夫的暴力行为让她感到害怕。"
    },
    {
        .word = "insulate",
        .phonetic_us = "ˈɪnsəˌleɪt ; ˈɪnsjʊˌleɪt",
        .phonetic_uk = "'ɪnsjʊleɪt",
        .meaning = "使绝缘，使绝热",
        .example = "an insulated attic",
        .example_cn = "隔热[隔音]的阁楼"
    },
    {
        .word = "integrate",
        .phonetic_us = "'ɪntɪɡret",
        .phonetic_uk = "'ɪntɪgreɪt",
        .meaning = "使结合，使并入",
        .example = "These programs can be integrated with your existing software.",
        .example_cn = "这些程序能和你的已有的软件整合成一体。"
    },
    {
        .word = "alternate",
        .phonetic_us = "'ɔltɚnət",
        .phonetic_uk = "'ɔːltəneɪt; 'ɒl-",
        .meaning = "使交替",
        .example = "Alternate cubes of meat and slices of red pepper.",
        .example_cn = "交替放置肉丁和红辣椒片。"
    },
    {
        .word = "degrade",
        .phonetic_us = "dɪ'ɡred",
        .phonetic_uk = "dɪ'greɪd",
        .meaning = "使降低；使堕落",
        .example = "a movie that degrades women",
        .example_cn = "贬损女性的影片"
    },
    {
        .word = "minimize",
        .phonetic_us = "'mɪnɪmaɪz",
        .phonetic_uk = "ˈmɪnɪˌmaɪz",
        .meaning = "使减到最小",
        .example = "Every effort is being made to minimize civilian casualties.",
        .example_cn = "正在尽最大努力减少平民伤亡。"
    },
    {
        .word = "mingle",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "使混合，混合起来",
        .example = "The sounds of laughter and singing mingled in the evening air.",
        .example_cn = "笑声和歌声交织在夜空中。"
    },
    {
        .word = "interconnect",
        .phonetic_us = ",ɪntɚkə'nɛkt",
        .phonetic_uk = "ɪntəkə'nekt",
        .meaning = "使互相联系",
        .example = "a series of interconnected lakes",
        .example_cn = "一连串相互连接的湖泊"
    },
    {
        .word = "reconcile",
        .phonetic_us = "'rɛkənsaɪl",
        .phonetic_uk = "'rek(ə)nsaɪl",
        .meaning = "使和好；调停",
        .example = "The pair were reconciled after Jackson made a public apology.",
        .example_cn = "杰克逊公开道歉之后，这两个人又言归于好了。"
    },
    {
        .word = "oblige",
        .phonetic_us = "ə'blaɪdʒ",
        .phonetic_uk = "ə'blaɪdʒ",
        .meaning = "使感激；施恩惠于",
        .example = "If you ever need help with the babysitting, I'd be glad to oblige...",
        .example_cn = "如果你什么时候需要找人照看孩子，我很乐意帮忙。"
    },
    {
        .word = "enrich",
        .phonetic_us = "ɪn'rɪtʃ",
        .phonetic_uk = "ɪn'rɪtʃ; en-",
        .meaning = "使富裕；使丰富",
        .example = "a nation enriched by oil revenues",
        .example_cn = "靠石油收入富裕起来的国家"
    },
    {
        .word = "embarrass",
        .phonetic_us = "ɪm'bærəs",
        .phonetic_uk = "ɪm'bærəs; em-",
        .meaning = "使…陷入困境",
        .example = "The speech was deliberately designed to embarrass the prime minister.",
        .example_cn = "这个发言是故意为难首相。"
    },
    {
        .word = "decay",
        .phonetic_us = "dɪ'ke",
        .phonetic_uk = "dɪ'keɪ",
        .meaning = "使腐朽，使腐烂",
        .example = "Her body was already starting to decay.",
        .example_cn = "她的尸体已经开始腐烂。"
    },
    {
        .word = "contrast",
        .phonetic_us = "'kɑntræst",
        .phonetic_uk = "'kɒntrɑːst",
        .meaning = "使对比；形成对比",
        .example = "an essay comparing and contrasting (= showing how two things are similar and different ) Verdi and Wagner and their operas",
        .example_cn = "把威尔第和瓦格纳以及他们的歌剧进行比较和对照的一篇文章"
    },
    {
        .word = "baffle",
        .phonetic_us = "'bæfl",
        .phonetic_uk = "'bæf(ə)l",
        .meaning = "使挫折",
        .example = "The question baffled me completely.",
        .example_cn = "这个问题把我彻底难倒了。"
    },
    {
        .word = "mature",
        .phonetic_us = "mə'tʃʊr",
        .phonetic_uk = "mə'tʃʊə",
        .meaning = "使成熟，成熟",
        .example = "As the fish matures, its colours and patternings change.",
        .example_cn = "随着发育成熟，这种鱼的颜色和斑纹都会改变。"
    },
    {
        .word = "ice",
        .phonetic_us = "aɪs",
        .phonetic_uk = "aɪs",
        .meaning = "使成冰，结冰",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "overload",
        .phonetic_us = ",ovɚ'lod",
        .phonetic_uk = "əʊvə'ləʊd",
        .meaning = "使超载",
        .example = "Be careful not to overload the washing machine.",
        .example_cn = "注意别让洗衣机负荷过重。"
    },
    {
        .word = "tangle",
        .phonetic_us = "'tæŋɡl",
        .phonetic_uk = "'tæŋg(ə)l",
        .meaning = "使缠结，使纠缠",
        .example = "My hair tangles easily.",
        .example_cn = "我的头发很容易打结。"
    },
    {
        .word = "sweeten",
        .phonetic_us = "'switn",
        .phonetic_uk = "'swiːt(ə)n",
        .meaning = "使变甜，变甜",
        .example = "Sweeten the mixture with a little honey.",
        .example_cn = "往混合料里加点蜂蜜。"
    },
    {
        .word = "thicken",
        .phonetic_us = "'θɪkən",
        .phonetic_uk = "'θɪk(ə)n",
        .meaning = "使变厚（或粗、密）",
        .example = "The fog was beginning to thicken.",
        .example_cn = "雾气渐浓。"
    },
    {
        .word = "establish",
        .phonetic_us = "ɪˈstæblɪʃ",
        .phonetic_uk = "ɪ'stæblɪʃ; e-",
        .meaning = "使…被接受",
        .example = "He’d already begun to establish quite a reputation as a journalist.",
        .example_cn = "身为记者，他已经声名鹊起。"
    },
    {
        .word = "develop",
        .phonetic_us = "dɪ'vɛləp",
        .phonetic_uk = "dɪ'veləp",
        .meaning = "使（底片）显影",
        .example = "Did you ever get the pictures developed ?",
        .example_cn = "你到底有没有把照片冲洗出来？"
    },
    {
        .word = "jog",
        .phonetic_us = "dʒɑɡ",
        .phonetic_uk = "dʒɒg",
        .meaning = "慢跑（尤作为锻炼）",
        .example = "I go jogging every morning.",
        .example_cn = "我每天早晨都去慢跑。"
    },
    {
        .word = "engage",
        .phonetic_us = "ɪn'ɡedʒ",
        .phonetic_uk = "ɪn'geɪdʒ; en-",
        .meaning = "使（齿轮等）啮合",
        .example = "She engaged the clutch and the car moved.",
        .example_cn = "她踩下离合器，汽车便开动了。"
    },
    {
        .word = "vector",
        .phonetic_us = "'vɛktɚ",
        .phonetic_uk = "'vektə",
        .meaning = "矢量；飞机航线",
        .example = "Acceleration and velocity are both vectors.",
        .example_cn = "加速度和速度都是矢量。"
    },
    {
        .word = "nourishment",
        .phonetic_us = "'nɝɪʃmənt",
        .phonetic_uk = "'nʌrɪʃm(ə)nt",
        .meaning = "食物；营养（情况）",
        .example = "lack of proper nourishment",
        .example_cn = "缺乏适当的营养"
    },
    {
        .word = "pantry",
        .phonetic_us = "'pæntri",
        .phonetic_uk = "'pæntrɪ",
        .meaning = "食品柜，餐具室",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "experimentally",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "实验上，实验性地",
        .example = "data obtained experimentally",
        .example_cn = "实验获得的数据"
    },
    {
        .word = "experimentation",
        .phonetic_us = "ɪk,spɛrɪmɛn'teʃən",
        .phonetic_uk = "ɪk,sperɪmen'teɪʃən",
        .meaning = "实验；试验",
        .example = "The issue of animal experimentation is an emotive subject.",
        .example_cn = "动物实验问题是个敏感的话题。"
    },
    {
        .word = "virtual",
        .phonetic_us = "[ˈvɜ:rtʃuəl]",
        .phonetic_uk = "ˈvɜ:tʃuəl",
        .meaning = "实际上的，实质上的",
        .example = "The country was sliding into a state of virtual civil war.",
        .example_cn = "这个国家实际上正逐渐进入内战状态。"
    },
    {
        .word = "execution",
        .phonetic_us = ",ɛksɪ'kjuʃən",
        .phonetic_uk = ",eksɪ'kjuːʃ(ə)n",
        .meaning = "实行，执行；处死刑",
        .example = "the formulation and execution of urban policy",
        .example_cn = "城市政策的制定与实施"
    },
    {
        .word = "quartz",
        .phonetic_us = "kwɔrts",
        .phonetic_uk = "kwɔːts",
        .meaning = "石英",
        .example = "quartz crystals",
        .example_cn = "石英晶体"
    },
    {
        .word = "graphite",
        .phonetic_us = "ˈɡræfˌaɪt",
        .phonetic_uk = "'græfaɪt",
        .meaning = "石墨，石墨电极",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "whitewash",
        .phonetic_us = "'waɪtwɑʃ",
        .phonetic_uk = "'waɪtwɒʃ",
        .meaning = "石灰水",
        .example = "Investigators are accused of whitewashing the governor’s record.",
        .example_cn = "调查者被指责粉饰州长的政绩。"
    },
    {
        .word = "limestone",
        .phonetic_us = "'laɪmston",
        .phonetic_uk = "'laɪmstəʊn",
        .meaning = "石灰石",
        .example = "...high limestone cliffs.",
        .example_cn = "…高耸的石灰岩峭壁。"
    },
    {
        .word = "humidity",
        .phonetic_us = "hju'mɪdəti",
        .phonetic_uk = "hjʊ'mɪdɪtɪ",
        .meaning = "湿气；湿度",
        .example = "The room is kept at 72 degrees and 50% relative humidity.",
        .example_cn = "房间的温度保持在72度，相对湿度50%。"
    },
    {
        .word = "handout",
        .phonetic_us = "'hænd'aʊt",
        .phonetic_uk = "'hændaʊt",
        .meaning = "施舍物，救济品",
        .example = "people who have to live on handouts from the state",
        .example_cn = "必须依赖国家发放的救济金生活的人们"
    },
    {
        .word = "verse",
        .phonetic_us = "vɝs",
        .phonetic_uk = "vɜːs",
        .meaning = "诗，韵文；诗节",
        .example = "a book of comic verse",
        .example_cn = "一本滑稽诗集"
    },
    {
        .word = "unemployment",
        .phonetic_us = ",ʌnɪm'plɔɪmənt",
        .phonetic_uk = "ʌnɪm'plɒɪm(ə)nt; -em-",
        .meaning = "失业；失业人数",
        .example = "Closure of the plant means 80 workers are facing unemployment.",
        .example_cn = "这家工厂的关闭意味着 80 个工人面临失业。"
    },
    {
        .word = "disgrace",
        .phonetic_us = "dɪs'ɡres",
        .phonetic_uk = "dɪs'greɪs",
        .meaning = "失宠，耻辱，丢脸",
        .example = "Smith faced total public disgrace after the incident.",
        .example_cn = "事情发生之后，史密斯声名狼藉。"
    },
    {
        .word = "residual",
        .phonetic_us = "rɪ'zɪdʒuəl",
        .phonetic_uk = "rɪ'zɪdjʊəl",
        .meaning = "剩余的；残余的",
        .example = "the residual effects of drug treatment",
        .example_cn = "药物治疗的残留作用"
    },
    {
        .word = "remainder",
        .phonetic_us = "rɪ'mendɚ",
        .phonetic_uk = "rɪ'meɪndə",
        .meaning = "剩余（物）；余数",
        .example = "The remainder must be paid by the end of June.",
        .example_cn = "剩余款项必须在6月底之前支付。"
    },
    {
        .word = "excel",
        .phonetic_us = "ɪk'sɛl",
        .phonetic_uk = "ɪk'sel; ek-",
        .meaning = "胜过，杰出",
        .example = "Rick has always excelled at foreign languages.",
        .example_cn = "里克一向擅长外语。"
    },
    {
        .word = "stiff",
        .phonetic_us = "stɪf",
        .phonetic_uk = "stɪf",
        .meaning = "生硬的",
        .example = "Their goodbyes were stiff and formal.",
        .example_cn = "他们的道别生硬刻板。"
    },
    {
        .word = "ecology",
        .phonetic_us = "ɪ'kɑlədʒi",
        .phonetic_uk = "ɪ'kɒlədʒɪ; e-",
        .meaning = "生态学；个体生态学",
        .example = "the natural ecology of the Earth",
        .example_cn = "地球的自然生态"
    },
    {
        .word = "hide",
        .phonetic_us = "haɪd",
        .phonetic_uk = "haɪd",
        .meaning = "生皮，兽皮，皮革",
        .example = "ox hide gloves",
        .example_cn = "牛皮手套"
    },
    {
        .word = "vital",
        .phonetic_us = "'vaɪtl",
        .phonetic_uk = "'vaɪt(ə)l",
        .meaning = "生命的，生机的",
        .example = "Rodgers and Hart’s music sounds as fresh and vital as the day it was written.",
        .example_cn = "罗杰斯与哈特的音乐现在听来还有刚写成时的那份清新和活力。"
    },
    {
        .word = "producer",
        .phonetic_us = "prə'dʊsɚ",
        .phonetic_uk = "prə'djuːsə",
        .meaning = "生产者；舞台监督",
        .example = "...Saudi Arabia, the world's leading oil producer.",
        .example_cn = "…沙特阿拉伯，世界上最重要的石油生产国。"
    },
    {
        .word = "productivity",
        .phonetic_us = ",prodʌk'tɪvəti",
        .phonetic_uk = "prɒdʌk'tɪvɪtɪ",
        .meaning = "生产率；多产",
        .example = "high productivity levels in manufacturing",
        .example_cn = "制造业中的高生产率"
    },
    {
        .word = "productive",
        .phonetic_us = "prə'dʌktɪv",
        .phonetic_uk = "prə'dʌktɪv",
        .meaning = "生产的；出产…的",
        .example = "the economy’s productive capacity",
        .example_cn = "该经济体的生产能力"
    },
    {
        .word = "hoist",
        .phonetic_us = "hɔɪst",
        .phonetic_uk = "hɒɪst",
        .meaning = "升起，扯起来",
        .example = "The crew hurried to hoist the flag.",
        .example_cn = "船员们急忙把旗子升起来。"
    },
    {
        .word = "kidney",
        .phonetic_us = "'kɪdni",
        .phonetic_uk = "'kɪdnɪ",
        .meaning = "肾，腰子",
        .example = "a kidney transplant",
        .example_cn = "肾脏移植"
    },
    {
        .word = "deliberately",
        .phonetic_us = "dɪ'lɪbərətli",
        .phonetic_uk = "",
        .meaning = "故意地；审慎地",
        .example = "He deliberately upset her.",
        .example_cn = "他故意惹她不开心。"
    },
    {
        .word = "censor",
        .phonetic_us = "'sɛnsɚ",
        .phonetic_uk = "'sensə",
        .meaning = "审查，检查",
        .example = "The information given to the press was carefully censored by the Ministry of Defence.",
        .example_cn = "发布给报界的信息经过了国防部的仔细审查。"
    },
    {
        .word = "mystery",
        .phonetic_us = "ˈmɪstri",
        .phonetic_uk = "ˈmɪstri",
        .meaning = "神秘小说，侦探小说",
        .example = "an Agatha Christie mystery",
        .example_cn = "一部阿加莎•克里斯蒂的悬疑小说"
    },
    {
        .word = "shrine",
        .phonetic_us = "ʃraɪn",
        .phonetic_uk = "ʃraɪn",
        .meaning = "神殿，神龛，圣祠",
        .example = "his pilgrimage to the shrine of St John",
        .example_cn = "他去敬奉圣约翰的圣地朝圣"
    },
    {
        .word = "divine",
        .phonetic_us = "dɪ'vaɪn",
        .phonetic_uk = "dɪ'vaɪn",
        .meaning = "神的；敬神的",
        .example = "divine power",
        .example_cn = "神的力量"
    },
    {
        .word = "deliberate",
        .phonetic_us = "dɪ'lɪbərət",
        .phonetic_uk = "dɪ'lɪb(ə)rət",
        .meaning = "深思熟虑的；审慎的",
        .example = "He approached her with slow, deliberate steps.",
        .example_cn = "他迈着缓慢、从容的步子向她走去。"
    },
    {
        .word = "profound",
        .phonetic_us = "prə'faʊnd",
        .phonetic_uk = "prə'faʊnd",
        .meaning = "见解深刻的；渊博的",
        .example = "a profound question",
        .example_cn = "深刻的问题"
    },
    {
        .word = "trench",
        .phonetic_us = "trɛntʃ",
        .phonetic_uk = "tren(t)ʃ",
        .meaning = "深沟；壕沟，战壕",
        .example = "Workers dug a trench for gas lines.",
        .example_cn = "工人们挖了一条沟来铺设煤气管道。"
    },
    {
        .word = "photography",
        .phonetic_us = "fə'tɑɡrəfi",
        .phonetic_uk = "fə'tɒgrəfɪ",
        .meaning = "摄影术",
        .example = "He did fashion photography for ‘Vogue’ magazine.",
        .example_cn = "他为《时尚》杂志拍过时装照片。"
    },
    {
        .word = "editorial",
        .phonetic_us = ",ɛdɪ'tɔrɪəl",
        .phonetic_uk = "edɪ'tɔːrɪəl",
        .meaning = "社论，期刊的社论",
        .example = "In an editorial, The New York Times suggests the victory could turn nasty.",
        .example_cn = "在一篇社论中，《纽约时报》认为该胜利会转成恶梦。"
    },
    {
        .word = "sociology",
        .phonetic_us = ",sosɪ'ɑlədʒi",
        .phonetic_uk = "səʊsɪ'ɒlədʒɪ; səʊʃɪ-",
        .meaning = "社会学",
        .example = "She has a degree in sociology and politics.",
        .example_cn = "她拥有社会学和政治学学位。"
    },
    {
        .word = "conceive",
        .phonetic_us = "kən'siv",
        .phonetic_uk = "kən'siːv",
        .meaning = "设想，以为；怀孕",
        .example = "He conceived the idea of transforming the old power station into an arts centre.",
        .example_cn = "他想出了一个把旧发电站改造为艺术中心的主意。"
    },
    {
        .word = "reject",
        .phonetic_us = "rɪ'dʒɛkt",
        .phonetic_uk = "rɪ'dʒekt",
        .meaning = "舍弃，抛弃；排斥",
        .example = "If inspectors find a defective can, the batch is rejected.",
        .example_cn = "如果质检员发现一个罐头有瑕疵，那么这一批货就会被废弃。"
    },
    {
        .word = "serpent",
        .phonetic_us = "'sɝpənt",
        .phonetic_uk = "'sɜːp(ə)nt",
        .meaning = "蛇（尤指大蛇或毒蛇）",
        .example = "...the serpent in the Garden of Eden.",
        .example_cn = "…伊甸园里的那条蛇。"
    },
    {
        .word = "extravagant",
        .phonetic_us = "ɪk'strævəgənt",
        .phonetic_uk = "ɪk'strævəg(ə)nt; ek-",
        .meaning = "奢侈的；过度的",
        .example = "Would it be too extravagant to buy both?",
        .example_cn = "把两个都买下会不会太奢侈了？"
    },
    {
        .word = "maid",
        .phonetic_us = "med",
        .phonetic_uk = "meɪd",
        .meaning = "少女；处女",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "maiden",
        .phonetic_us = "'medn",
        .phonetic_uk = "'meɪd(ə)n",
        .meaning = "少女，未婚女子",
        .example = "...stories of noble princes and their brave deeds on behalf of beautiful maidens.",
        .example_cn = "…高贵的王子以及他们英雄救美的故事。"
    },
    {
        .word = "scorch",
        .phonetic_us = "skɔrtʃ",
        .phonetic_uk = "skɔːtʃ",
        .meaning = "烧焦；枯萎",
        .example = "I scorched my dress when I was ironing it.",
        .example_cn = "我把自己的连衣裙熨焦了。"
    },
    {
        .word = "context",
        .phonetic_us = "'kɑntɛkst",
        .phonetic_uk = "'kɒntekst",
        .meaning = "上下文；来龙去脉",
        .example = "The meaning of ‘mad’ depends on its context.",
        .example_cn = "mad一词的意义要视上下文而定。"
    },
    {
        .word = "Heaven",
        .phonetic_us = "'hɛvn",
        .phonetic_uk = "'hev(ə)n",
        .meaning = "上帝，神",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "counsel",
        .phonetic_us = "'kaʊnsl",
        .phonetic_uk = "'kaʊns(ə)l",
        .meaning = "商议；忠告；律师",
        .example = "Listen to the counsel of your elders.",
        .example_cn = "要听从长辈的忠告。"
    },
    {
        .word = "tradesman",
        .phonetic_us = "'tredzmən",
        .phonetic_uk = "'treɪdzmən",
        .meaning = "商人，店主；手艺人",
        .example = "Local tradesmen are objecting to plans for a big new out-of-town shopping centre.",
        .example_cn = "当地的店主们反对在城郊新建大型购物中心的计划。"
    },
    {
        .word = "trader",
        .phonetic_us = "'tredɚ",
        .phonetic_uk = "'treɪdə",
        .meaning = "商人",
        .example = "a small trader who sells hats in Oxford",
        .example_cn = "在牛津卖帽子的小贩"
    },
    {
        .word = "dealer",
        .phonetic_us = "'dilɚ",
        .phonetic_uk = "'diːlə",
        .meaning = "商人；毒品贩；发牌者",
        .example = "...an antique dealer.",
        .example_cn = "…一位古董商。"
    },
    {
        .word = "ware",
        .phonetic_us = "wer",
        .phonetic_uk = "weə(r)",
        .meaning = "物品；商品，货物",
        .example = "ceramic ware",
        .example_cn = "陶瓷制品"
    },
    {
        .word = "merchandise",
        .phonetic_us = "'mɝtʃəndaɪs",
        .phonetic_uk = "'mɜːtʃ(ə)ndaɪs; -z",
        .meaning = "商品，货物",
        .example = "A range of official Disney merchandise was on sale.",
        .example_cn = "一系列正版的迪士尼商品在出售。"
    },
    {
        .word = "blue",
        .phonetic_us = "blu",
        .phonetic_uk = "bluː",
        .meaning = "伤心的；下流的",
        .example = "I’ve been feeling kind of blue.",
        .example_cn = "我心情不大好。"
    },
    {
        .word = "goodness",
        .phonetic_us = "'ɡʊdnəs",
        .phonetic_uk = "'gʊdnɪs",
        .meaning = "善良，善行，美德",
        .example = "the desire to see goodness and justice in the world",
        .example_cn = "对善良和正义的向往"
    },
    {
        .word = "underwear",
        .phonetic_us = "'ʌndɚwɛr",
        .phonetic_uk = "'ʌndəweə",
        .meaning = "衫衣，内衣，贴身衣",
        .example = "You just need to take a change of underwear.",
        .example_cn = "你只需带一套换洗的内衣。"
    },
    {
        .word = "cancel",
        .phonetic_us = "'kænsl",
        .phonetic_uk = "'kæns(ə)l",
        .meaning = "取消",
        .example = "Our flight was cancelled.",
        .example_cn = "我们的航班取消了。"
    },
    {
        .word = "gap",
        .phonetic_us = "ɡæp",
        .phonetic_uk = "gæp",
        .meaning = "差距；山口，山峡",
        .example = "the widening gap between the rich and the poor",
        .example_cn = "越来越大的贫富差距"
    },
    {
        .word = "sift",
        .phonetic_us = "sɪft",
        .phonetic_uk = "sɪft",
        .meaning = "筛，过滤",
        .example = "Sift the flour and baking powder into a medium-sized mixing bowl.",
        .example_cn = "把面粉和发酵粉筛到一个中号搅拌碗中。"
    },
    {
        .word = "shark",
        .phonetic_us = "ʃɑrk",
        .phonetic_uk = "ʃɑːk",
        .meaning = "鲨鱼；诈骗钱财者",
        .example = "Sharks were circling around our boat.",
        .example_cn = "鲨鱼在我们的小船周围游弋。"
    },
    {
        .word = "gravel",
        .phonetic_us = "'ɡrævl",
        .phonetic_uk = "'græv(ə)l",
        .meaning = "砂跞；砂砾层；结石",
        .example = "a gravel path",
        .example_cn = "石子小道"
    },
    {
        .word = "sardine",
        .phonetic_us = ",sɑr'din",
        .phonetic_uk = "sɑː'diːn",
        .meaning = "沙丁鱼",
        .example = "commuters packed like sardines on the evening train",
        .example_cn = "晚班火车上挤得像沙丁鱼一样的通勤乘客"
    },
    {
        .word = "tone",
        .phonetic_us = "ton",
        .phonetic_uk = "təʊn",
        .meaning = "色调，光度",
        .example = "Perhaps a darker tone would be better.",
        .example_cn = "可能再深一点的色调更好。"
    },
    {
        .word = "scan",
        .phonetic_us = "skæn",
        .phonetic_uk = "skæn",
        .meaning = "扫描",
        .example = "The scan showed that she was expecting twins.",
        .example_cn = "扫描显示她怀了双胞胎。"
    },
    {
        .word = "uproar",
        .phonetic_us = "'ʌprɔr",
        .phonetic_uk = "'ʌprɔː",
        .meaning = "骚动，扰乱；喧嚣",
        .example = "The announcement caused uproar in the crowd.",
        .example_cn = "公告在人群中引起了一阵骚动。"
    },
    {
        .word = "prose",
        .phonetic_us = "proz",
        .phonetic_uk = "prəʊz",
        .meaning = "散文",
        .example = "Shute's prose is stark and chillingly unsentimental.",
        .example_cn = "舒特的散文刻板而冷峻。"
    },
    {
        .word = "emission",
        .phonetic_us = "ɪ'mɪʃən",
        .phonetic_uk = "ɪ'mɪʃ(ə)n",
        .meaning = "散发；传播；发出物",
        .example = "the emission of carbon dioxide into the atmosphere",
        .example_cn = "向大气排放二氧化碳"
    },
    {
        .word = "stroll",
        .phonetic_us = "strol",
        .phonetic_uk = "strəʊl",
        .meaning = "散步，溜达，闲逛",
        .example = "After dinner, I took a stroll round the city.",
        .example_cn = "晚饭后，我绕着城溜达了一圈。"
    },
    {
        .word = "triangular",
        .phonetic_us = "traɪ'æŋgjəlɚ",
        .phonetic_uk = "traɪ'æŋgjʊlə",
        .meaning = "三角的；三者间的",
        .example = "a triangular roof",
        .example_cn = "一个三角形的屋顶"
    },
    {
        .word = "mute",
        .phonetic_us = "mjut",
        .phonetic_uk = "mjuːt",
        .meaning = "弱音器",
        .example = "He was playing his trumpet with a mute.",
        .example_cn = "他正在吹装了弱音器的小号。"
    },
    {
        .word = "choice",
        .phonetic_us = "tʃɔɪs",
        .phonetic_uk = "tʃɒɪs",
        .meaning = "入选者",
        .example = "I think London was a good choice as a venue.",
        .example_cn = "我觉得伦敦是个很好的选址。"
    },
    {
        .word = "tolerant",
        .phonetic_us = "'tɑlərənt",
        .phonetic_uk = "'tɒl(ə)r(ə)nt",
        .meaning = "容忍的；有耐力的",
        .example = "a tolerant society",
        .example_cn = "宽容的社会"
    },
    {
        .word = "commodity",
        .phonetic_us = "kə'mɑdəti",
        .phonetic_uk = "kə'mɒdɪtɪ",
        .meaning = "日用品，商品，物品",
        .example = "agricultural commodities",
        .example_cn = "农业商品"
    },
    {
        .word = "routine",
        .phonetic_us = "rʊ'tin",
        .phonetic_uk = "ruː'tiːn",
        .meaning = "日常的",
        .example = "You mustn’t worry. These are just routine enquiries.",
        .example_cn = "你不必担心，这只是例行的询问。"
    },
    {
        .word = "undertaking",
        .phonetic_us = "'ʌndɚ'tekɪŋ",
        .phonetic_uk = "ʌndə'teɪkɪŋ",
        .meaning = "任务，事业；承诺",
        .example = "Starting a new business can be a risky undertaking.",
        .example_cn = "创办新企业有时是一件有风险的事情。"
    },
    {
        .word = "deem",
        .phonetic_us = "dim",
        .phonetic_uk = "diːm",
        .meaning = "认为，相信，想",
        .example = "French and German were deemed essential.",
        .example_cn = "法语和德语被认为是必需的。"
    },
    {
        .word = "awake",
        .phonetic_us = "ə'wek",
        .phonetic_uk = "ə'weɪk",
        .meaning = "认识到",
        .example = "Artists finally awoke to the aesthetic possibilities of photography.",
        .example_cn = "艺术家终于意识到了摄影的美学潜质。"
    },
    {
        .word = "recognition",
        .phonetic_us = ",rɛkəɡ'nɪʃən",
        .phonetic_uk = "rekəg'nɪʃ(ə)n",
        .meaning = "认出，识别",
        .example = "He stared at her, but there was no sign of recognition .",
        .example_cn = "他盯着她看，但似乎没认出她来。"
    },
    {
        .word = "identification",
        .phonetic_us = "aɪˌdentɪfɪ'keʃn",
        .phonetic_uk = "aɪ,dentɪfɪ'keɪʃ(ə)n",
        .meaning = "身份证；认出，鉴定",
        .example = "Do you have any identification?",
        .example_cn = "你有什么身份证明文件吗？"
    },
    {
        .word = "merciful",
        .phonetic_us = "'mɝsɪfl",
        .phonetic_uk = "'mɜːsɪfʊl; -f(ə)l",
        .meaning = "仁慈的，宽大的",
        .example = "Merciful God, save us.",
        .example_cn = "仁慈的上帝，救救我们吧。"
    },
    {
        .word = "hostage",
        .phonetic_us = "'hɑstɪdʒ",
        .phonetic_uk = "'hɒstɪdʒ",
        .meaning = "人质",
        .example = "The group are holding two tourists hostage (= keeping them as hostages ) .",
        .example_cn = "这伙人挟持了两名游客作为人质。"
    },
    {
        .word = "pitch",
        .phonetic_us = "pɪtʃ",
        .phonetic_uk = "pɪtʃ",
        .meaning = "沥青",
        .example = "The timbers of similar houses were painted with pitch.",
        .example_cn = "类似房屋所用的栋木刷了沥青。"
    },
    {
        .word = "personnel",
        .phonetic_us = ",pɝsə'nɛl",
        .phonetic_uk = "pɜːsə'nel",
        .meaning = "人事部门",
        .example = "A copy should then be sent to Personnel for our files.",
        .example_cn = "然后必须送一份到人事部供我们存档。"
    },
    {
        .word = "humanity",
        .phonetic_us = "hjʊ'mænəti",
        .phonetic_uk = "hjʊ'mænɪtɪ",
        .meaning = "人类；人性，人情",
        .example = "We want a clean healthy environment for all humanity .",
        .example_cn = "我们希望全人类拥有一个干净健康的生存环境。"
    },
    {
        .word = "personality",
        .phonetic_us = ",pɝsə'næləti",
        .phonetic_uk = "pɜːsə'nælɪtɪ",
        .meaning = "人格，个性；名人",
        .example = "Despite their different personalities, they became the best of friends.",
        .example_cn = "尽管个性不同，他们还是成了最好的朋友。"
    },
    {
        .word = "thermal",
        .phonetic_us = "'θɝml",
        .phonetic_uk = "'θɜːm(ə)l",
        .meaning = "热的；温热的",
        .example = "thermal energy",
        .example_cn = "热能"
    },
    {
        .word = "tropic",
        .phonetic_us = "'trɑpɪk",
        .phonetic_uk = "'trɒpɪk",
        .meaning = "回归线；热带地区",
        .example = "the Tropic of Capricorn/the Tropic of Cancer",
        .example_cn = "南/北回归线"
    },
    {
        .word = "tropical",
        .phonetic_us = "'trɑpɪkl",
        .phonetic_uk = "'trɒpɪk(ə)l",
        .meaning = "热带的；（天气）湿热的",
        .example = "the tropical rain forests",
        .example_cn = "热带雨林"
    },
    {
        .word = "concession",
        .phonetic_us = "kən'sɛʃən",
        .phonetic_uk = "kən'seʃ(ə)n",
        .meaning = "让步，迁就",
        .example = "The British were not prepared to make any concessions .",
        .example_cn = "英国人没有打算作出让步。"
    },
    {
        .word = "combustion",
        .phonetic_us = "kəm'bʌstʃən",
        .phonetic_uk = "kəm'bʌstʃ(ə)n",
        .meaning = "燃烧",
        .example = "The energy is released by combustion on the application of a match.",
        .example_cn = "能量通过点火柴燃烧释放出来。"
    },
    {
        .word = "whisker",
        .phonetic_us = "'wɪskɚ",
        .phonetic_uk = "'wɪskə",
        .meaning = "髯，连鬓胡子",
        .example = "...wild, savage-looking fellows, with large whiskers and dirty faces.",
        .example_cn = "…一些狂野、面相凶恶的家伙，留着满脸的络腮胡子，蓬头垢面。"
    },
    {
        .word = "flock",
        .phonetic_us = "flɑk",
        .phonetic_uk = "flɒk",
        .meaning = "群集，聚集",
        .example = "People have been flocking to the exhibition.",
        .example_cn = "看展览的人络绎不绝。"
    },
    {
        .word = "conviction",
        .phonetic_us = "kən'vɪkʃən",
        .phonetic_uk = "kən'vɪkʃ(ə)n",
        .meaning = "确信，信服，深信",
        .example = "It was a reasonable explanation, but his voice lacked conviction .",
        .example_cn = "这解释合情合理，只是他的语气不坚定。"
    },
    {
        .word = "certainty",
        .phonetic_us = "'sɝtnti",
        .phonetic_uk = "'sɜːt(ə)ntɪ; -tɪn-",
        .meaning = "确实性，确信，确实",
        .example = "the certainty of being caught",
        .example_cn = "被抓的必然"
    },
    {
        .word = "positively",
        .phonetic_us = "'pɑzətɪvli",
        .phonetic_uk = "'pɒzətɪvlɪ",
        .meaning = "确定的，断然",
        .example = "Some holiday destinations are positively dangerous .",
        .example_cn = "有些度假地真的很危险。"
    },
    {
        .word = "quantify",
        .phonetic_us = "'kwɑntɪfaɪ",
        .phonetic_uk = "'kwɒntɪfaɪ",
        .meaning = "确定…的数量",
        .example = "an attempt to quantify the region’s social and economic decline",
        .example_cn = "对该地区社会和经济衰退进行量化的尝试"
    },
    {
        .word = "deficient",
        .phonetic_us = "dɪ'fɪʃnt",
        .phonetic_uk = "dɪ'fɪʃ(ə)nt",
        .meaning = "缺乏的；欠缺的",
        .example = "Women who are dieting can become iron deficient.",
        .example_cn = "节食的女性有可能缺铁。"
    },
    {
        .word = "deficiency",
        .phonetic_us = "dɪ'fɪʃənsi",
        .phonetic_uk = "dɪ'fɪʃ(ə)nsɪ",
        .meaning = "缺乏；不足",
        .example = "a deficiency of safe play areas for children",
        .example_cn = "儿童安全游戏场地的缺乏"
    },
    {
        .word = "scarcity",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "缺乏，不足",
        .example = "the scarcity of employment opportunities",
        .example_cn = "就业机会的短缺"
    },
    {
        .word = "flaw",
        .phonetic_us = "flɔ",
        .phonetic_uk = "flɔː",
        .meaning = "缺点，瑕疵",
        .example = "A design flaw (= a mistake or weakness in the way something was made ) caused the engine to explode.",
        .example_cn = "一个设计缺陷导致了引擎爆炸。"
    },
    {
        .word = "induce",
        .phonetic_us = "ɪn'dus",
        .phonetic_uk = "ɪn'djuːs",
        .meaning = "劝诱；引起",
        .example = "Nothing would induce me to vote for him again.",
        .example_cn = "没有什么能诱使我再投他的票了。"
    },
    {
        .word = "persuasion",
        .phonetic_us = "pɚ'sweʒn",
        .phonetic_uk = "pə'sweɪʒ(ə)n",
        .meaning = "劝说，说服",
        .example = "After a little gentle persuasion , Debbie agreed to let us in.",
        .example_cn = "好言劝说了几句后，黛比就同意让我们进去了。"
    },
    {
        .word = "claim",
        .phonetic_us = "klem",
        .phonetic_uk = "kleɪm",
        .meaning = "权利，所有权",
        .example = "The Maldives pressed its claim to hold the summit.",
        .example_cn = "马尔代夫一再要求主办这场峰会。"
    },
    {
        .word = "late",
        .phonetic_us = "let",
        .phonetic_uk = "leɪt",
        .meaning = "去世不久的",
        .example = "Billy Hicks, late of this parish",
        .example_cn = "不久前故去的本教区的比利·希克斯"
    },
    {
        .word = "extract",
        .phonetic_us = "'ɛkstrækt",
        .phonetic_uk = "ˈekstrækt",
        .meaning = "取出；提取",
        .example = "You’ll have to have that tooth extracted.",
        .example_cn = "你得把那颗牙拔掉。"
    },
    {
        .word = "crank",
        .phonetic_us = "kræŋk",
        .phonetic_uk = "kræŋk",
        .meaning = "曲柄",
        .example = "He was idly turning a crank on a strange mechanism strapped to his chest.",
        .example_cn = "他漫不经心地转着绑在他胸前的一个古怪装置上面的曲柄。"
    },
    {
        .word = "expel",
        .phonetic_us = "ɪk'spɛl",
        .phonetic_uk = "ɪk'spel; ek-",
        .meaning = "开除；驱逐；排出",
        .example = "Two girls were expelled from school for taking drugs.",
        .example_cn = "两名女生因吸毒而被学校开除。"
    },
    {
        .word = "dissipate",
        .phonetic_us = "'dɪsɪpet",
        .phonetic_uk = "'dɪsɪpeɪt",
        .meaning = "驱散；消散；浪费",
        .example = "As he thought it over, his anger gradually dissipated.",
        .example_cn = "他想明白后，怒气就渐渐消了。"
    },
    {
        .word = "spherical",
        .phonetic_us = "'sfɪrɪkəl",
        .phonetic_uk = "'sferɪk(ə)l",
        .meaning = "球形的，球面的",
        .example = "...purple and gold spherical earrings.",
        .example_cn = "...紫色和金色的球形耳环。"
    },
    {
        .word = "global",
        .phonetic_us = "'ɡlobl",
        .phonetic_uk = "'gləʊb(ə)l",
        .meaning = "全球的",
        .example = "global climate change",
        .example_cn = "全球气候变化"
    },
    {
        .word = "Jupiter",
        .phonetic_us = "'dʒʊpətɚ",
        .phonetic_uk = "'dʒuːpɪtə",
        .meaning = "木星；丘庇特",
        .example = "a space probe on its way to Jupiter",
        .example_cn = "飞向木星的一个太空探测器"
    },
    {
        .word = "plea",
        .phonetic_us = "pli",
        .phonetic_uk = "pliː",
        .meaning = "请愿，请求，恳求",
        .example = "Caldwell made a plea for donations.",
        .example_cn = "考德威尔恳求捐款。"
    },
    {
        .word = "petition",
        .phonetic_us = "pə'tɪʃən",
        .phonetic_uk = "pɪ'tɪʃ(ə)n",
        .meaning = "请愿",
        .example = "Local residents have drawn up a petition to protest the hospital closure.",
        .example_cn = "当地居民已草拟了一份请愿书，抗议关闭医院。"
    },
    {
        .word = "sight",
        .phonetic_us = "saɪt",
        .phonetic_uk = "saɪt",
        .meaning = "景象；名胜，风景",
        .example = "the sights and sounds of the forest",
        .example_cn = "森林的景致与声音"
    },
    {
        .word = "mistress",
        .phonetic_us = "'mɪstrəs",
        .phonetic_uk = "'mɪstrɪs",
        .meaning = "情妇，情人",
        .example = "The Prince had shocked society by living openly with his mistress.",
        .example_cn = "王子和他的情妇公开同居，让社会大为震惊。"
    },
    {
        .word = "mosque",
        .phonetic_us = "mɑsk",
        .phonetic_uk = "mɒsk",
        .meaning = "清真寺",
        .example = "Would you go to church or the synagogue or the mosque?",
        .example_cn = "你会去教堂，犹太教会，或者清真寺吗？"
    },
    {
        .word = "cleanliness",
        .phonetic_us = "'klɛnlɪnəs",
        .phonetic_uk = "'klenlɪnəs",
        .meaning = "清洁",
        .example = "a high standard of cleanliness",
        .example_cn = "很高的卫生标准"
    },
    {
        .word = "inclination",
        .phonetic_us = "'ɪnklə'neʃən",
        .phonetic_uk = "ɪnklɪ'neɪʃ(ə)n",
        .meaning = "倾斜，点头；斜坡",
        .example = "She greeted Maggie with an inclination of the head.",
        .example_cn = "她向玛吉点头打招呼。"
    },
    {
        .word = "rap",
        .phonetic_us = "ræp",
        .phonetic_uk = "ræp",
        .meaning = "轻敲击声",
        .example = "She was woken by a sharp rap on the door.",
        .example_cn = "她被一阵急促的敲门声惊醒。"
    },
    {
        .word = "rash",
        .phonetic_us = "ræʃ",
        .phonetic_uk = "ræʃ",
        .meaning = "轻率的；鲁莽的",
        .example = "Please Jessie, don’t do anything rash.",
        .example_cn = "求你了，杰西，不要草率行事。"
    },
    {
        .word = "bronze",
        .phonetic_us = "brɑnz",
        .phonetic_uk = "brɒnz",
        .meaning = "青铜色",
        .example = "Her hair shone bronze and gold.",
        .example_cn = "她的头发闪耀着青铜色和金黄色的光彩。"
    },
    {
        .word = "industrious",
        .phonetic_us = "ɪn'dʌstrɪəs",
        .phonetic_uk = "ɪn'dʌstrɪəs",
        .meaning = "勤劳的，勤奋的",
        .example = "She was an industrious and willing worker.",
        .example_cn = "她是个勤劳肯干的工人。"
    },
    {
        .word = "admiration",
        .phonetic_us = ",ædmə'reʃən",
        .phonetic_uk = "ædmə'reɪʃ(ə)n",
        .meaning = "钦佩；赞美，羡慕",
        .example = "Daniel gazed at her in admiration .",
        .example_cn = "丹尼尔用爱慕的眼神注视着她。"
    },
    {
        .word = "agreeable",
        .phonetic_us = "ə'ɡriəbl",
        .phonetic_uk = "ə'griːəb(ə)l",
        .meaning = "惬意的；同意的",
        .example = "We spent a most agreeable couple of hours.",
        .example_cn = "我们非常愉快地度过了几个小时。"
    },
    {
        .word = "section",
        .phonetic_us = "'sɛkʃən",
        .phonetic_uk = "'sekʃ(ə)n",
        .meaning = "部分",
        .example = "The plane’s tail section was found in a cornfield.",
        .example_cn = "飞机的尾部在玉米田里找到了。"
    },
    {
        .word = "segment",
        .phonetic_us = "'sɛɡmənt",
        .phonetic_uk = "'segm(ə)nt",
        .meaning = "切片，部分；段，节",
        .example = "segments of the population",
        .example_cn = "人口中的若干组成部分"
    },
    {
        .word = "slit",
        .phonetic_us = "slɪt",
        .phonetic_uk = "slɪt",
        .meaning = "切开",
        .example = "They say somebody slit her throat.",
        .example_cn = "他们说有人割断了她的喉咙。"
    },
    {
        .word = "hardy",
        .phonetic_us = "",
        .phonetic_uk = "'hɑːdɪ",
        .meaning = "强壮的，耐劳的",
        .example = "hardy mountain goats",
        .example_cn = "能适应恶劣环境的石山羊"
    },
    {
        .word = "compulsory",
        .phonetic_us = "kəm'pʌlsəri",
        .phonetic_uk = "kəm'pʌls(ə)rɪ",
        .meaning = "强迫的，义务的",
        .example = "the threat of compulsory redundancies",
        .example_cn = "强制性裁员的威胁"
    },
    {
        .word = "constraint",
        .phonetic_us = "kən'strent",
        .phonetic_uk = "kən'streɪnt",
        .meaning = "限制，束缚，约束",
        .example = "the constraints of family life",
        .example_cn = "家庭生活的约束"
    },
    {
        .word = "mighty",
        .phonetic_us = "'maɪti",
        .phonetic_uk = "'maɪtɪ",
        .meaning = "强大的；巨大的",
        .example = "the mighty Mississippi river",
        .example_cn = "浩荡的密西西比河"
    },
    {
        .word = "thoughtless",
        .phonetic_us = "'θɔtləs",
        .phonetic_uk = "'θɔːtlɪs",
        .meaning = "欠考虑的；自私的",
        .example = "a selfish and thoughtless man",
        .example_cn = "自私而不顾他人的人"
    },
    {
        .word = "denounce",
        .phonetic_us = "dɪ'naʊns",
        .phonetic_uk = "dɪ'naʊns",
        .meaning = "谴责，声讨；告发",
        .example = "The group denounced the failure by the authorities to take action.",
        .example_cn = "该团体谴责当局没有采取行动。"
    },
    {
        .word = "pious",
        .phonetic_us = "'paɪəs",
        .phonetic_uk = "'paɪəs",
        .meaning = "虔诚的；虔奉宗教的",
        .example = "He was a quiet, pious man.",
        .example_cn = "他是个文静、虔诚的人。"
    },
    {
        .word = "lobby",
        .phonetic_us = "'lɑbi",
        .phonetic_uk = "'lɒbɪ",
        .meaning = "前厅，（剧院的）门廊",
        .example = "a hotel lobby",
        .example_cn = "宾馆大堂"
    },
    {
        .word = "consistent",
        .phonetic_us = "kən'sɪstənt",
        .phonetic_uk = "kən'sɪst(ə)nt",
        .meaning = "前后一致的，连贯的",
        .example = "a well-thought-out and consistent argument",
        .example_cn = "经过深思熟虑的、相互连贯的论点"
    },
    {
        .word = "predecessor",
        .phonetic_us = "'prɛdəsɛsɚ",
        .phonetic_uk = "'priːdɪsesə",
        .meaning = "前辈，前任者",
        .example = "Kennedy’s predecessor as President was the war hero Dwight Eisenhower.",
        .example_cn = "肯尼迪总统的前任是战争英雄德怀特·艾森豪威尔。"
    },
    {
        .word = "visa",
        .phonetic_us = "'vizə",
        .phonetic_uk = "'viːzə",
        .meaning = "签证",
        .example = "I was still in New York, trying to get a visa to visit Russia.",
        .example_cn = "我仍在纽约，正在办理去俄罗斯的签证。"
    },
    {
        .word = "modesty",
        .phonetic_us = "'mɑdəsti",
        .phonetic_uk = "'mɒdɪstɪ",
        .meaning = "谦逊；端庄",
        .example = "‘Anyone else would have done the same thing,’ he said with typical modesty.",
        .example_cn = "换了谁都会这么做的。”他带着一贯的谦虚说道。"
    },
    {
        .word = "gracious",
        .phonetic_us = "'ɡreʃəs",
        .phonetic_uk = "'greɪʃəs",
        .meaning = "谦和的",
        .example = "Sibyl was the most gracious, helpful, and generous person to work with.",
        .example_cn = "西比尔非常和蔼，乐于助人，而且为人慷慨，和她共事最愉快。"
    },
    {
        .word = "migrate",
        .phonetic_us = "'maɪɡret",
        .phonetic_uk = "maɪ'greɪt; 'maɪgreɪt",
        .meaning = "迁移，移居",
        .example = "People migrate to cities like Jakarta in search of work.",
        .example_cn = "人们移居到雅加达这样的城市找工作。"
    },
    {
        .word = "kilowatt",
        .phonetic_us = "'kɪlə'wɑt",
        .phonetic_uk = "'kɪləwɒt",
        .meaning = "千瓦（特）",
        .example = "a prototype system which produces 25 kilowatts of power",
        .example_cn = "一个生产25千瓦电量的样机"
    },
    {
        .word = "pertinent",
        .phonetic_us = "'pɝtnənt",
        .phonetic_uk = "'pɜːtɪnənt",
        .meaning = "恰当的；有关的",
        .example = "He asked me a lot of very pertinent questions.",
        .example_cn = "他问了我许多直接相关的问题。"
    },
    {
        .word = "apt",
        .phonetic_us = "æpt",
        .phonetic_uk = "æpt",
        .meaning = "恰当的；聪明的",
        .example = "‘Love at first sight’ is a very apt description of how he felt when he saw her.",
        .example_cn = "用“一见钟情”来形容他见到她时的感觉再恰当不过。"
    },
    {
        .word = "utensil",
        .phonetic_us = "jʊ'tɛnsl",
        .phonetic_uk = "juː'tens(ə)l",
        .meaning = "器皿，用具",
        .example = "kitchen utensils",
        .example_cn = "厨房用具"
    },
    {
        .word = "maple",
        .phonetic_us = "'mepl",
        .phonetic_uk = "'meɪp(ə)l",
        .meaning = "槭树，枫树",
        .example = "a maple leaf",
        .example_cn = "枫叶"
    },
    {
        .word = "follower",
        .phonetic_us = "'fɑloɚ",
        .phonetic_uk = "'fɒləʊə",
        .meaning = "信徒，追随者",
        .example = "Marx and his followers were convinced that capitalism would destroy itself.",
        .example_cn = "马克思及其支持者确信资本主义将自我毁灭。"
    },
    {
        .word = "siren",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "汽笛，警报器",
        .example = "the wail of the ambulance sirens",
        .example_cn = "救护车汽笛的尖啸"
    },
    {
        .word = "motel",
        .phonetic_us = "mo'tɛl",
        .phonetic_uk = "məʊ'tel",
        .meaning = "汽车游客旅馆",
        .example = "The gas station just neighbours to the motel.",
        .example_cn = "加油站就在汽车旅馆的附近。"
    },
    {
        .word = "garage",
        .phonetic_us = "gəˈrɑʒ; gəˈrɑdʒ",
        .phonetic_uk = "'gærɑː(d)ʒ; -ɪdʒ; gə'rɑːʒ",
        .meaning = "汽车修理站",
        .example = "My car’s at the garage.",
        .example_cn = "我的车正放在汽修厂修理。"
    },
    {
        .word = "motorway",
        .phonetic_us = "'motɚwe",
        .phonetic_uk = "'məʊtəweɪ",
        .meaning = "汽车道，快车路",
        .example = "busy/congested motorways",
        .example_cn = "繁忙的 / 拥挤的高速公路"
    },
    {
        .word = "hitherto",
        .phonetic_us = ",hɪðɚ'tu",
        .phonetic_uk = "hɪðə'tuː; 'hɪðətuː",
        .meaning = "迄今，到目前为止",
        .example = "a species of fish hitherto unknown in the West",
        .example_cn = "迄今在西方还不为人知的一种鱼"
    },
    {
        .word = "barometer",
        .phonetic_us = "bə'rɑmɪtɚ",
        .phonetic_uk = "bə'rɒmɪtə",
        .meaning = "气压计，睛雨表",
        .example = "The barometer is falling (= showing that it will probably rain).",
        .example_cn = "气压在下降（表示可能要下雨）。"
    },
    {
        .word = "pant",
        .phonetic_us = "pænt",
        .phonetic_uk = "pænt",
        .meaning = "气喘",
        .example = "He came in panting after running up the steps.",
        .example_cn = "他跑上台阶，气喘吁吁地走了进来。"
    },
    {
        .word = "jack",
        .phonetic_us = "dʒæk",
        .phonetic_uk = "dʒæk",
        .meaning = "起重器；传动装置",
        .example = "a hydraulic jack",
        .example_cn = "液压千斤顶"
    },
    {
        .word = "scratch",
        .phonetic_us = "skrætʃ",
        .phonetic_uk = "skrætʃ",
        .meaning = "（某人皮肤上的）划痕，划伤",
        .example = "There were deep scratches all over her face.",
        .example_cn = "她脸上全是深深的伤痕。"
    },
    {
        .word = "count",
        .phonetic_us = "kaʊnt",
        .phonetic_uk = "kaʊnt",
        .meaning = "起拆理由，罪状",
        .example = "Davis was found not guilty on all counts .",
        .example_cn = "戴维斯受到指控的各项罪名均不成立。"
    },
    {
        .word = "message",
        .phonetic_us = "'mɛsɪdʒ",
        .phonetic_uk = "'mesɪdʒ",
        .meaning = "启示，要旨，教训",
        .example = "The message of the film is that good always triumphs over evil.",
        .example_cn = "这部电影的主题思想是善良终必战胜邪恶。"
    },
    {
        .word = "enlighten",
        .phonetic_us = "ɪn'laɪtn",
        .phonetic_uk = "ɪn'laɪt(ə)n; en-",
        .meaning = "启发，开导；启蒙",
        .example = "Baldwin enlightened her as to the nature of the experiment.",
        .example_cn = "鲍德温给她讲解了这个实验的性质。"
    },
    {
        .word = "implore",
        .phonetic_us = "ɪm'plɔr",
        .phonetic_uk = "ɪm'plɔː",
        .meaning = "乞求，恳求，哀求",
        .example = "‘Don’t go,’ I implored her.",
        .example_cn = "“不要走。”我哀求她。"
    },
    {
        .word = "knight",
        .phonetic_us = "naɪt",
        .phonetic_uk = "naɪt",
        .meaning = "骑士，武士；爵士",
        .example = "knights in armour",
        .example_cn = "身披盔甲的骑士"
    },
    {
        .word = "marvel",
        .phonetic_us = "'mɑrvl",
        .phonetic_uk = "'mɑːv(ə)l",
        .meaning = "奇迹；惊奇",
        .example = "the marvels of nature/technology",
        .example_cn = "大自然的 / 技术的奇迹"
    },
    {
        .word = "subsequently",
        .phonetic_us = "'sʌbsɪkwəntli",
        .phonetic_uk = "'sʌbsɪkwəntlɪ",
        .meaning = "其后，其次，接着",
        .example = "The book was subsequently translated into 15 languages.",
        .example_cn = "该书后来被译成 15 种语言。"
    },
    {
        .word = "cheat",
        .phonetic_us = "tʃit",
        .phonetic_uk = "tʃiːt",
        .meaning = "欺诈；骗取",
        .example = "It's really a cheat, but you can use ready-made pastry if you want.",
        .example_cn = "这东西真是骗人，但如果你愿意的话，可以用现成的油酥面团。"
    },
    {
        .word = "periodical",
        .phonetic_us = ",pɪrɪ'ɑdɪkl",
        .phonetic_uk = "pɪərɪ'ɒdɪk(ə)l",
        .meaning = "期刊，杂志",
        .example = "The walls would be lined with books and periodicals.",
        .example_cn = "沿这几面墙将排放书籍和期刊。"
    },
    {
        .word = "currently",
        .phonetic_us = "'kɝrəntlɪ",
        .phonetic_uk = "'kʌrəntlɪ",
        .meaning = "当前",
        .example = "the products that are currently available",
        .example_cn = "目前供应的产品"
    },
    {
        .word = "universally",
        .phonetic_us = ",junɪ'vɝsəli",
        .phonetic_uk = "juːnɪ'vɜːsəlɪ",
        .meaning = "普遍地，一般地",
        .example = "...a universally accepted point of view.",
        .example_cn = "…一个被普遍接受的观点。"
    },
    {
        .word = "bushel",
        .phonetic_us = "'bʊʃəl",
        .phonetic_uk = "'bʊʃ(ə)l",
        .meaning = "蒲式耳（容量单位）",
        .example = "Grains are sold by the bushel.",
        .example_cn = "谷物论蒲式耳出售。"
    },
    {
        .word = "raisin",
        .phonetic_us = "'rezn",
        .phonetic_uk = "'reɪz(ə)n",
        .meaning = "葡萄干",
        .example = "...homemade oatmeal with brown sugar and raisins.",
        .example_cn = "…自家煮的放有红糖和葡萄干的麦片粥。"
    },
    {
        .word = "fracture",
        .phonetic_us = "'fræktʃɚ",
        .phonetic_uk = "'fræktʃə",
        .meaning = "破裂；裂痕",
        .example = "a fracture of the leg/skull",
        .example_cn = "腿骨 / 颅骨骨折"
    },
    {
        .word = "destructive",
        .phonetic_us = "dɪ'strʌktɪv",
        .phonetic_uk = "dɪ'strʌktɪv",
        .meaning = "破坏（性）的，危害的",
        .example = "the destructive power of modern weapons",
        .example_cn = "现代武器的破坏力"
    },
    {
        .word = "bankrupt",
        .phonetic_us = "'bæŋkrʌpt",
        .phonetic_uk = "'bæŋkrʌpt",
        .meaning = "破产的",
        .example = "The firm went bankrupt before the building work was completed.",
        .example_cn = "建筑工程尚未竣工，公司就破产了。"
    },
    {
        .word = "persecute",
        .phonetic_us = "'pɝsɪkjut",
        .phonetic_uk = "'pɜːsɪkjuːt",
        .meaning = "迫害，残害",
        .example = "The Puritans left England to escape being persecuted.",
        .example_cn = "清教徒离开了英国以躲避迫害。"
    },
    {
        .word = "incline",
        .phonetic_us = "ɪn'klaɪn",
        .phonetic_uk = "ɪn'klaɪn",
        .meaning = "坡度",
        .example = "a steep incline",
        .example_cn = "陡坡"
    },
    {
        .word = "flask",
        .phonetic_us = "flæsk",
        .phonetic_uk = "flɑːsk",
        .meaning = "瓶",
        .example = "He took out a metal flask from a canvas bag.",
        .example_cn = "他从帆布袋里拿出了一个金属水瓶。"
    },
    {
        .word = "tack",
        .phonetic_us = "tæk",
        .phonetic_uk = "tæk",
        .meaning = "平头钉",
        .example = "...a box of carpet tacks.",
        .example_cn = "…一盒地毯钉。"
    },
    {
        .word = "terrace",
        .phonetic_us = "ˈterəs",
        .phonetic_uk = "'terəs",
        .meaning = "平台，阳台，露台",
        .example = "Some guests recline in deck chairs on the sea-facing terrace.",
        .example_cn = "有些客人斜躺在朝海露台的躺椅上。"
    },
    {
        .word = "civilian",
        .phonetic_us = "sə'vɪlɪən",
        .phonetic_uk = "sɪ'vɪlj(ə)n",
        .meaning = "平民",
        .example = "Many innocent civilians were killed during the war.",
        .example_cn = "许多无辜的平民在战争中丧生。"
    },
    {
        .word = "tranquil",
        .phonetic_us = "ˈtræŋkwəl",
        .phonetic_uk = "'træŋkwɪl",
        .meaning = "平静的；稳定的",
        .example = "a small tranquil village",
        .example_cn = "宁静的小村庄"
    },
    {
        .word = "equation",
        .phonetic_us = "ɪ'kweʒn",
        .phonetic_uk = "ɪ'kweɪʒ(ə)n",
        .meaning = "平衡；反应式",
        .example = "When children enter the equation , further tensions may arise within a marriage.",
        .example_cn = "有了孩子以后，婚姻中可能出现新的矛盾。"
    },
    {
        .word = "equilibrium",
        .phonetic_us = ",ikwɪ'lɪbrɪəm",
        .phonetic_uk = ",iːkwɪ'lɪbrɪəm; ,ekwɪ-",
        .meaning = "平衡，均衡；均衡论",
        .example = "The government is anxious not to upset the economic equilibrium.",
        .example_cn = "政府急切希望不要打乱经济平衡。"
    },
    {
        .word = "commonplace",
        .phonetic_us = "'kɑmən'ples",
        .phonetic_uk = "'kɒmənpleɪs",
        .meaning = "平凡的",
        .example = "Car thefts are commonplace in this part of town.",
        .example_cn = "镇上的这个地段盗车案屡见不鲜。"
    },
    {
        .word = "frequency",
        .phonetic_us = "'frikwənsi",
        .phonetic_uk = "'friːkw(ə)nsɪ",
        .meaning = "频繁，屡次；频率",
        .example = "Businesses come and go with alarming frequency.",
        .example_cn = "商家开张停业惊人地频繁。"
    },
    {
        .word = "barren",
        .phonetic_us = "'bærən",
        .phonetic_uk = "'bær(ə)n",
        .meaning = "贫瘠的；不孕的",
        .example = "Thousands of years ago the surface was barren desert.",
        .example_cn = "很久很久以前，地面还是一片荒漠。"
    },
    {
        .word = "float",
        .phonetic_us = "flot",
        .phonetic_uk = "fləʊt",
        .meaning = "漂浮物；浮标，木筏",
        .example = "Fishing nets are often held in position by floats.",
        .example_cn = "渔网常常用浮子固定。"
    },
    {
        .word = "bleach",
        .phonetic_us = "blitʃ",
        .phonetic_uk = "bliːtʃ",
        .meaning = "漂白，变白",
        .example = "She bleached her hair blonde.",
        .example_cn = "她把头发漂成了金黄色。"
    },
    {
        .word = "flake",
        .phonetic_us = "flek",
        .phonetic_uk = "fleɪk",
        .meaning = "片，薄片",
        .example = "chocolate flakes",
        .example_cn = "巧克力薄片"
    },
    {
        .word = "deflection",
        .phonetic_us = "dɪ'flɛkʃən",
        .phonetic_uk = "dɪ'flekʃ(ə)n",
        .meaning = "偏斜，歪斜；偏差",
        .example = "the deflection of the missile away from its target",
        .example_cn = "使导弹偏离目标"
    },
    {
        .word = "prejudice",
        .phonetic_us = "'prɛdʒədɪs",
        .phonetic_uk = "'predʒʊdɪs",
        .meaning = "偏见，成见；损害",
        .example = "Women still face prejudice in the workplace.",
        .example_cn = "女性在职场中仍然面临歧视。"
    },
    {
        .word = "adjacent",
        .phonetic_us = "ə'dʒesnt",
        .phonetic_uk = "ə'dʒeɪs(ə)nt",
        .meaning = "毗连的；紧接着的",
        .example = "We stayed in adjacent rooms.",
        .example_cn = "我们住在毗连的房间里。"
    },
    {
        .word = "cape",
        .phonetic_us = "kep",
        .phonetic_uk = "keɪp",
        .meaning = "披肩，斗篷；海角",
        .example = "...a woollen cape.",
        .example_cn = "…一件羊毛披肩。"
    },
    {
        .word = "clash",
        .phonetic_us = "klæʃ",
        .phonetic_uk = "klæʃ",
        .meaning = "冲突，抵触；碰撞声",
        .example = "personality/culture clash (=a situation in which two people or groups do not like each other)",
        .example_cn = "个性/文化冲突"
    },
    {
        .word = "collide",
        .phonetic_us = "kə'laɪd",
        .phonetic_uk = "kə'laɪd",
        .meaning = "碰撞；冲突，抵触",
        .example = "A car and a van collided on the motorway.",
        .example_cn = "一辆汽车和一辆小型货车在高速公路上相撞了。"
    },
    {
        .word = "ingredient",
        .phonetic_us = "ɪn'ɡridɪənt",
        .phonetic_uk = "ɪn'griːdɪənt",
        .meaning = "配料，成分",
        .example = "Combine all the ingredients in a large bowl.",
        .example_cn = "把所有食材都放在一个大碗里。"
    },
    {
        .word = "shell",
        .phonetic_us = "ʃɛl",
        .phonetic_uk = "ʃel",
        .meaning = "炮弹，猎枪子弹",
        .example = "We ran for cover as shells dropped all around us.",
        .example_cn = "周围炮弹四处飞落，我们奔跑着寻找地方躲避。"
    },
    {
        .word = "battery",
        .phonetic_us = "'bæt(ə)rɪ",
        .phonetic_uk = "'bætri",
        .meaning = "炮组，排炮",
        .example = "an anti-aircraft battery",
        .example_cn = "防空炮"
    },
    {
        .word = "foam",
        .phonetic_us = "fom",
        .phonetic_uk = "fəʊm",
        .meaning = "泡沫塑料；泡沫",
        .example = "a foam mattress",
        .example_cn = "海绵橡胶床垫"
    },
    {
        .word = "bypass",
        .phonetic_us = "'baɪpæs",
        .phonetic_uk = "'baɪpɑːs",
        .meaning = "旁通管",
        .example = "a triple bypass operation",
        .example_cn = "接三通管的手术"
    },
    {
        .word = "limp",
        .phonetic_us = "lɪmp",
        .phonetic_uk = "lɪmp",
        .meaning = "蹒跚，跛行",
        .example = "Moreno limped off the field with a foot injury.",
        .example_cn = "莫雷诺脚上受了伤，一瘸一拐地走出球场。"
    },
    {
        .word = "stagger",
        .phonetic_us = "'stægɚ",
        .phonetic_uk = "'stægə",
        .meaning = "蹒跚，使摇晃",
        .example = "He managed to stagger home.",
        .example_cn = "他好不容易才蹒跚着走回家。"
    },
    {
        .word = "ascend",
        .phonetic_us = "ə'sɛnd",
        .phonetic_uk = "ə'send",
        .meaning = "攀登，登高",
        .example = "Without a word, he began to ascend the stairs.",
        .example_cn = "他没说一句话就上楼梯了。"
    },
    {
        .word = "dispatch",
        .phonetic_us = "dɪ'spætʃ",
        .phonetic_uk = "dɪˈspætʃ",
        .meaning = "派遣；调度",
        .example = "Goods are normally dispatched within 24 hours.",
        .example_cn = "货物一般在24小时内派送。"
    },
    {
        .word = "faction",
        .phonetic_us = "'fækʃən",
        .phonetic_uk = "'fækʃ(ə)n",
        .meaning = "派别，宗派，小集团",
        .example = "struggles between the different factions within the party",
        .example_cn = "党内的派系斗争"
    },
    {
        .word = "hover",
        .phonetic_us = "'hʌvɚ",
        .phonetic_uk = "'hɒvə",
        .meaning = "徘徊；傍徨；翱翔；盘旋",
        .example = "Her younger brother hovered in the background watching us.",
        .example_cn = "她的弟弟在后面走来走去，观察着我们。"
    },
    {
        .word = "drainage",
        .phonetic_us = "'drenɪdʒ",
        .phonetic_uk = "'dreɪnɪdʒ",
        .meaning = "排水；下水道",
        .example = "A handful of pebbles in the bottom of a flowerpot will help drainage.",
        .example_cn = "在花盆底下放一把鹅卵石能够帮助排水。"
    },
    {
        .word = "range",
        .phonetic_us = "rendʒ",
        .phonetic_uk = "reɪn(d)ʒ",
        .meaning = "排列",
        .example = "In the dining room, team photographs were ranged along the wall.",
        .example_cn = "餐厅里，球队的照片排列在墙上。"
    },
    {
        .word = "clap",
        .phonetic_us = "klæp",
        .phonetic_uk = "klæp",
        .meaning = "拍手喝采声；霹雳声",
        .example = "Come on everyone, let’s give Tommy a clap.",
        .example_cn = "来吧各位，我们为汤米鼓鼓掌吧。"
    },
    {
        .word = "reptile",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "爬行动物",
        .example = "This small reptile, which measures just 10 centimeters long, can swim through the sand dunes at up to 15 centimeters per second.",
        .example_cn = "这种身长只有10厘米小型爬行动物，可以在沙子中以最快每秒15厘米的速度游动。"
    },
    {
        .word = "overhear",
        .phonetic_us = ",ovɚ'hɪr",
        .phonetic_uk = "əʊvə'hɪə",
        .meaning = "偶然听到；偷听",
        .example = "I overheard part of their conversation.",
        .example_cn = "我碰巧听到了他们谈话的部分内容。"
    },
    {
        .word = "ohm",
        .phonetic_us = "om",
        .phonetic_uk = "əʊm",
        .meaning = "欧姆",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "hostess",
        .phonetic_us = "'hostəs",
        .phonetic_uk = "'həʊstɪs; -es; həʊ'stes",
        .meaning = "女主人；旅馆女老板",
        .example = "Mary was always the perfect hostess.",
        .example_cn = "玛丽总是最殷勤的女主人。"
    },
    {
        .word = "feminine",
        .phonetic_us = "'fɛmənɪn",
        .phonetic_uk = "'femɪnɪn",
        .meaning = "女性的；女子气的",
        .example = "traditional feminine roles",
        .example_cn = "传统的女性角色"
    },
    {
        .word = "waitress",
        .phonetic_us = "ˈwetrɪs",
        .phonetic_uk = "ˈweɪtrəs",
        .meaning = "女侍者，女服务员",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "goddess",
        .phonetic_us = "ɡɑdɪs",
        .phonetic_uk = "ˈgɒdɪs",
        .meaning = "女神",
        .example = "Aphrodite, goddess of love",
        .example_cn = "爱神阿佛洛狄忒"
    },
    {
        .word = "blouse",
        .phonetic_us = "blaʊs",
        .phonetic_uk = "'blaʊz",
        .meaning = "女衬衫；罩衫",
        .example = "a silk blouse",
        .example_cn = "丝质女衬衫"
    },
    {
        .word = "coward",
        .phonetic_us = "'kaʊɚd",
        .phonetic_uk = "'kaʊəd",
        .meaning = "懦怯的，胆小的",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "radiator",
        .phonetic_us = "'redɪ'etɚ",
        .phonetic_uk = "'reɪdɪeɪtə",
        .meaning = "暖气片；散热器",
        .example = "a central heating system with a radiator in each room",
        .example_cn = "每个房间都配有一个散热器的中央供暖系统"
    },
    {
        .word = "strive",
        .phonetic_us = "straɪv",
        .phonetic_uk = "straɪv",
        .meaning = "努力，奋斗，力求",
        .example = "I was still striving to be successful.",
        .example_cn = "我仍在努力争取成功。"
    },
    {
        .word = "mess",
        .phonetic_us = "mɛs",
        .phonetic_uk = "mes",
        .meaning = "弄脏，弄乱，搞糟",
        .example = "He scratched his head and messed his hair even more.",
        .example_cn = "他挠挠头，把头发弄得更乱了。"
    },
    {
        .word = "distortion",
        .phonetic_us = "dɪs'tɔrʃən",
        .phonetic_uk = "dɪ'stɔːʃ(ə)n",
        .meaning = "歪曲；畸变",
        .example = "a distortion of the facts",
        .example_cn = "对事实的歪曲"
    },
    {
        .word = "shorten",
        .phonetic_us = "'ʃɔrtn",
        .phonetic_uk = "'ʃɔːt(ə)n",
        .meaning = "弄短，缩小，减少",
        .example = "The days are shortening.",
        .example_cn = "白天变得越来越短了。"
    },
    {
        .word = "Saturn",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "土星",
        .example = "Saturn is the second biggest planet in the solar system.",
        .example_cn = "土星是太阳系中的第二大行星。"
    },
    {
        .word = "milky",
        .phonetic_us = "'mɪlki",
        .phonetic_uk = "'mɪlkɪ",
        .meaning = "牛奶的；乳白色的",
        .example = "a cup of milky coffee",
        .example_cn = "一杯牛奶咖啡"
    },
    {
        .word = "wrench",
        .phonetic_us = "rɛntʃ",
        .phonetic_uk = "ren(t)ʃ",
        .meaning = "拧，扭伤",
        .example = "I wrenched the packet from his grasp.",
        .example_cn = "我用力夺过他攥在手里的纸袋。"
    },
    {
        .word = "wring",
        .phonetic_us = "rɪŋ",
        .phonetic_uk = "rɪŋ",
        .meaning = "拧，挤，扭，榨",
        .example = "This jacket’s wringing wet!",
        .example_cn = "这件上衣湿得都能拧出水来！"
    },
    {
        .word = "peer",
        .phonetic_us = "pɪr",
        .phonetic_uk = "pɪə",
        .meaning = "凝视",
        .example = "He was peering through the wet windscreen at the cars ahead.",
        .example_cn = "他正费力地透过淋湿的风挡盯视着前方的汽车。"
    },
    {
        .word = "nickel",
        .phonetic_us = "'nɪkl",
        .phonetic_uk = "'nɪk(ə)l",
        .meaning = "镍；镍币",
        .example = "a nickel alloy",
        .example_cn = "镍合金"
    },
    {
        .word = "junior",
        .phonetic_us = "'dʒunɪɚ",
        .phonetic_uk = "'dʒuːnɪə",
        .meaning = "年少者；晚辈",
        .example = "She now lives with actor Denis Lawson, 10 years her junior.",
        .example_cn = "她现在和比她小10岁的演员丹尼斯·劳森同居。"
    },
    {
        .word = "annually",
        .phonetic_us = "'ænjuəli",
        .phonetic_uk = "'ænjʊəlɪ; 'ænjʊlɪ",
        .meaning = "年年，每年",
        .example = "The exhibition is held annually.",
        .example_cn = "这个展览每年举行一次。"
    },
    {
        .word = "practicable",
        .phonetic_us = "'præktɪkəbl",
        .phonetic_uk = "'præktɪkəb(ə)l",
        .meaning = "能实行的；适用的",
        .example = "The only practicable course of action is to sell the company.",
        .example_cn = "唯一可行的做法是把公司卖掉。"
    },
    {
        .word = "capability",
        .phonetic_us = "ˌkeɪpəˈbɪləti",
        .phonetic_uk = "ˌkeɪpəˈbɪləti",
        .meaning = "能力，才能",
        .example = "the country’s manufacturing capability",
        .example_cn = "该国的生产能力"
    },
    {
        .word = "basin",
        .phonetic_us = "'besn",
        .phonetic_uk = "'beɪs(ə)n",
        .meaning = "内海；盆地；流域",
        .example = "a yacht basin",
        .example_cn = "停放游艇的内港"
    },
    {
        .word = "interior",
        .phonetic_us = "ɪn'tɪrɪɚ",
        .phonetic_uk = "ɪn'tɪɜːrɪə",
        .meaning = "内部",
        .example = "The interior of the church was dark.",
        .example_cn = "教堂里很暗。"
    },
    {
        .word = "tickle",
        .phonetic_us = "'tɪkl",
        .phonetic_uk = "'tɪk(ə)l",
        .meaning = "挠，胳肢；逗乐",
        .example = "Stop tickling me!",
        .example_cn = "别挠我痒痒！"
    },
    {
        .word = "incredible",
        .phonetic_us = "ɪn'krɛdəbl",
        .phonetic_uk = "ɪn'kredɪb(ə)l",
        .meaning = "难以置信的，惊人的",
        .example = "It’s incredible that he survived the fall.",
        .example_cn = "他跌下去竟然能够生还，真不可思议。"
    },
    {
        .word = "difficult",
        .phonetic_us = "'dɪfɪkəlt",
        .phonetic_uk = "'dɪfɪk(ə)lt",
        .meaning = "难以满足的",
        .example = "Don’t be so difficult!",
        .example_cn = "别这么挑剔！"
    },
    {
        .word = "refugee",
        .phonetic_us = "'rɛfjʊdʒi",
        .phonetic_uk = "refjʊ'dʒiː",
        .meaning = "难民，流亡者",
        .example = "Refugees were streaming across the border.",
        .example_cn = "难民正涌过边境。"
    },
    {
        .word = "pumpkin",
        .phonetic_us = "'pʌmpkɪn",
        .phonetic_uk = "'pʌm(p)kɪn",
        .meaning = "南瓜",
        .example = "pumpkin pie",
        .example_cn = "南瓜饼"
    },
    {
        .word = "polar",
        .phonetic_us = "'polɚ",
        .phonetic_uk = "'pəʊlə",
        .meaning = "南（北）极的；极性的",
        .example = "As our climate warms up, the polar ice caps will begin to melt.",
        .example_cn = "随着地球气候逐渐变暖，极地的冰冠将开始融化。"
    },
    {
        .word = "masculine",
        .phonetic_us = "'mæskjəlɪn",
        .phonetic_uk = "'mæskjʊlɪn",
        .meaning = "男性的",
        .example = "They’re nice curtains, but I’d prefer something a little more masculine.",
        .example_cn = "这些窗帘很好，但我更喜欢男性化一点的。"
    },
    {
        .word = "baron",
        .phonetic_us = "'bærən",
        .phonetic_uk = "'bær(ə)n",
        .meaning = "男爵；贵族；巨商",
        .example = "...their stepfather, Baron Michael Distemple.",
        .example_cn = "…他们的继父迈克尔• 迪斯坦普尔男爵"
    },
    {
        .word = "endurance",
        .phonetic_us = "ɪn'dʊrəns",
        .phonetic_uk = "ɪn'djʊər(ə)ns; en-",
        .meaning = "耐久力，持久力",
        .example = "She was pushed beyond her powers of endurance.",
        .example_cn = "她被逼得忍无可忍。"
    },
    {
        .word = "sodium",
        .phonetic_us = "'sodɪəm",
        .phonetic_uk = "'səʊdɪəm",
        .meaning = "钠",
        .example = "...one level teaspoon of sodium bicarbonate powder.",
        .example_cn = "一平茶匙碳酸氢钠粉末"
    },
    {
        .word = "pasture",
        .phonetic_us = "'pæstʃɚ",
        .phonetic_uk = "'pɑːstʃə",
        .meaning = "牧场",
        .example = "large areas of rough upland pasture",
        .example_cn = "大片起伏的山地牧场"
    },
    {
        .word = "intent",
        .phonetic_us = "ɪn'tɛnt",
        .phonetic_uk = "ɪn'tent",
        .meaning = "目不转睛的，热切的",
        .example = "an intent gaze/look",
        .example_cn = "专注的目光 / 神情"
    },
    {
        .word = "end",
        .phonetic_us = "ɛnd",
        .phonetic_uk = "end",
        .meaning = "目标，目的",
        .example = "She’ll do anything to achieve her own ends.",
        .example_cn = "她为了实现自己的目标，什么都会去做。"
    },
    {
        .word = "oyster",
        .phonetic_us = "'ɔɪstɚ",
        .phonetic_uk = "'ɒɪstə",
        .meaning = "牡蛎",
        .example = "He had two dozen oysters and enjoyed every one of them.",
        .example_cn = "他吃了两打牡蛎，每一个都吃得津津有味。"
    },
    {
        .word = "magician",
        .phonetic_us = "mə'dʒɪʃən",
        .phonetic_uk = "mə'dʒɪʃ(ə)n",
        .meaning = "魔法师；变戏法的人",
        .example = "There'll be a magician at the kids' Christmas party.",
        .example_cn = "孩子们的圣诞聚会上会有一位魔术师。"
    },
    {
        .word = "skyscraper",
        .phonetic_us = "'skaɪ'skrepɚ",
        .phonetic_uk = "'skaɪskreɪpə",
        .meaning = "摩天楼",
        .example = "The skyscraper towers into the clouds.",
        .example_cn = "那幢摩天大楼高耸入云。"
    },
    {
        .word = "module",
        .phonetic_us = "'mɑdʒul",
        .phonetic_uk = "'mɒdjuːl",
        .meaning = "模块；组件",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "ambiguous",
        .phonetic_us = "æm'bɪɡjuəs",
        .phonetic_uk = "æm'bɪgjʊəs",
        .meaning = "模棱两可的；分歧的",
        .example = "The language in the Minister’s statement is highly ambiguous.",
        .example_cn = "部长的声明措辞很含糊。"
    },
    {
        .word = "feel",
        .phonetic_us = "fiːl",
        .phonetic_uk = "fiːl",
        .meaning = "摸起来",
        .example = "It’s nice fabric - it feels like velvet.",
        .example_cn = "面料不错——摸上去像丝绒。"
    },
    {
        .word = "destiny",
        .phonetic_us = "'dɛstəni",
        .phonetic_uk = "'destɪnɪ",
        .meaning = "命运，天数",
        .example = "Nancy wondered whether it was her destiny to live in England and marry Melvyn.",
        .example_cn = "南希想知道她生活在英格兰又嫁给梅尔文是不是命运的安排。"
    },
    {
        .word = "doom",
        .phonetic_us = "dʊm",
        .phonetic_uk = "duːm",
        .meaning = "厄运，毁灭",
        .example = "A sense of impending doom (= coming very soon ) gripped her.",
        .example_cn = "她心头被一种大难临头的感觉所笼罩。"
    },
    {
        .word = "proposition",
        .phonetic_us = ",prɑpə'zɪʃən",
        .phonetic_uk = "prɒpə'zɪʃ(ə)n",
        .meaning = "命题，主题；提议",
        .example = "They were debating the proposition that \"All people are created equal\".",
        .example_cn = "他们正就“人人生而平等”这一命题展开辩论。"
    },
    {
        .word = "bid",
        .phonetic_us = "bɪd",
        .phonetic_uk = "bɪd",
        .meaning = "报价；命令",
        .example = "She bid £100 for a Victorian chair.",
        .example_cn = "她出价100英镑买一把维多利亚时代的椅子。"
    },
    {
        .word = "destine",
        .phonetic_us = "'dɛstɪn",
        .phonetic_uk = "'destɪn",
        .meaning = "命定，注定；预定",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "sensible",
        .phonetic_us = "'sɛnsəbl",
        .phonetic_uk = "'sensɪb(ə)l",
        .meaning = "明显的，感觉得到的",
        .example = "a sensible increase in temperature",
        .example_cn = "温度的明显上升"
    },
    {
        .word = "explicit",
        .phonetic_us = "ɪk'splɪsɪt",
        .phonetic_uk = "ɪk'splɪsɪt; ek-",
        .meaning = "明晰的；直率的",
        .example = "The contrast could not have been made more explicit.",
        .example_cn = "这个对比再清楚不过了。"
    },
    {
        .word = "decidedly",
        .phonetic_us = "dɪ'saɪdɪdli",
        .phonetic_uk = "dɪ'saɪdɪdlɪ",
        .meaning = "明确地，坚决地",
        .example = "‘I’m not going to do it,’ said Margaret decidedly.",
        .example_cn = "“这件事我不做。” 玛格丽特坚决地说。"
    },
    {
        .word = "formulation",
        .phonetic_us = ",fɔrmjə'leʃən",
        .phonetic_uk = "fɔːmjʊ'leɪʃn",
        .meaning = "表述方式",
        .example = "This is a far weaker formulation than is in the draft resolution which is being proposed.",
        .example_cn = "这是相对于正在被提议的草拟决议要弱得多的一种表述方式。"
    },
    {
        .word = "brightness",
        .phonetic_us = "'braɪtnɪs",
        .phonetic_uk = "'braɪtnɪs",
        .meaning = "明亮，辉煌，聪明",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "classic",
        .phonetic_us = "'klæsɪk",
        .phonetic_uk = "'klæsɪk",
        .meaning = "名著",
        .example = "‘La Grande Illusion’ is one of the classics of French cinema.",
        .example_cn = "《大幻影》是法国电影中的经典作品之一。"
    },
    {
        .word = "promptly",
        .phonetic_us = "'prɑmptli",
        .phonetic_uk = "'prɒm(p)tlɪ",
        .meaning = "敏捷地，迅速地",
        .example = "A reply came very promptly.",
        .example_cn = "马上就有了答复。"
    },
    {
        .word = "sensitivity",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "敏感（性）；灵敏性",
        .example = "It’s a matter of great political sensitivity.",
        .example_cn = "这件事在政治上非常敏感。"
    },
    {
        .word = "representation",
        .phonetic_us = "'rɛprɪzɛn'teʃən",
        .phonetic_uk = ",reprɪzen'teɪʃ(ə)n",
        .meaning = "描写；陈述；代表",
        .example = "The clock in the painting is a symbolic representation of the passage of time.",
        .example_cn = "画上的时钟象征着光阴的流逝。"
    },
    {
        .word = "nursery",
        .phonetic_us = "'nɝsəri",
        .phonetic_uk = "'nɜːs(ə)rɪ",
        .meaning = "苗圃",
        .example = "The garden, developed over the past 35 years, includes a nursery.",
        .example_cn = "这个有35年历史的园子里有一个苗圃。"
    },
    {
        .word = "deposition",
        .phonetic_us = ",dɛpə'zɪʃən",
        .phonetic_uk = ",depə'zɪʃ(ə)n; diː-",
        .meaning = "免职，罢免",
        .example = "the deposition of the King",
        .example_cn = "废黜国王"
    },
    {
        .word = "confidential",
        .phonetic_us = ",kɑnfɪ'dɛnʃl",
        .phonetic_uk = "kɒnfɪ'denʃ(ə)l",
        .meaning = "秘密的；亲信的",
        .example = "a confidential government report",
        .example_cn = "一份机密的政府报告"
    },
    {
        .word = "enchant",
        .phonetic_us = "ɪn'tʃænt",
        .phonetic_uk = "ɪn'tʃɑːnt; en-",
        .meaning = "迷住；用魔法迷惑",
        .example = "I was enchanted by the way she smiled.",
        .example_cn = "她微笑时的样子让我着迷。"
    },
    {
        .word = "fascinate",
        .phonetic_us = "'fæsə'net",
        .phonetic_uk = "'fæsɪneɪt",
        .meaning = "迷住，迷人",
        .example = "The idea of travelling through time fascinates me.",
        .example_cn = "穿越时光的想法深深吸引着我。"
    },
    {
        .word = "superstition",
        .phonetic_us = ",supɚ'stɪʃən",
        .phonetic_uk = ",suːpə'stɪʃ(ə)n; ,sjuː-",
        .meaning = "迷信，迷信行为",
        .example = "the old superstition that walking under a ladder is unlucky",
        .example_cn = "认为从梯子下面穿过不吉利的古老迷信"
    },
    {
        .word = "stray",
        .phonetic_us = "stre",
        .phonetic_uk = "streɪ",
        .meaning = "迷路",
        .example = "Three of the soldiers strayed into enemy territory.",
        .example_cn = "三名士兵误入敌军阵地。"
    },
    {
        .word = "perplex",
        .phonetic_us = "pɚ'plɛks",
        .phonetic_uk = "pə'pleks",
        .meaning = "迷惑，困惑，难住",
        .example = "Shea’s symptoms perplexed the doctors.",
        .example_cn = "谢伊的症状令医生们困惑。"
    },
    {
        .word = "bewilder",
        .phonetic_us = "bɪ'wɪldɚ",
        .phonetic_uk = "bɪ'wɪldə",
        .meaning = "迷惑，把…弄糊涂",
        .example = "He was bewildered by his daughter’s reaction.",
        .example_cn = "他被女儿的反应弄糊涂了。"
    },
    {
        .word = "snap",
        .phonetic_us = "snæp",
        .phonetic_uk = "snæp",
        .meaning = "猛咬；突然折断",
        .example = "The dog started snapping at my heels.",
        .example_cn = "这条狗开始咬我的鞋跟。"
    },
    {
        .word = "hurl",
        .phonetic_us = "hɝl",
        .phonetic_uk = "hɜːl",
        .meaning = "猛投；猛冲",
        .example = "Demonstrators were hurling bricks through the windows.",
        .example_cn = "示威者在向窗里掷砖块。"
    },
    {
        .word = "jerk",
        .phonetic_us = "dʒɝk",
        .phonetic_uk = "dʒɜːk",
        .meaning = "猛地一拉，急拉",
        .example = "She jerked open the car door and got out.",
        .example_cn = "她猛地打开车门下了车。"
    },
    {
        .word = "ally",
        .phonetic_us = "'ælaɪ",
        .phonetic_uk = "'ælaɪ",
        .meaning = "盟国；同盟者，伙伴",
        .example = "a meeting of the European allies",
        .example_cn = "欧洲盟国会议"
    },
    {
        .word = "threshold",
        .phonetic_us = "'θrɛʃhold",
        .phonetic_uk = "'θreʃəʊld; 'θreʃ,həʊld",
        .meaning = "门槛；入门，开端",
        .example = "She opened the door and stepped across the threshold.",
        .example_cn = "她打开门，跨过门槛。"
    },
    {
        .word = "charm",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "魅力；妩媚",
        .example = "She turned on the charm (= used her charm ) to all the men.",
        .example_cn = "她对所有那些男人都施展魅力。"
    },
    {
        .word = "fair",
        .phonetic_us = "fɛr",
        .phonetic_uk = "feə",
        .meaning = "美丽的",
        .example = "a fair maiden",
        .example_cn = "美丽的少女"
    },
    {
        .word = "offensive",
        .phonetic_us = "ə'fɛnsɪv",
        .phonetic_uk = "ə'fensɪv",
        .meaning = "冒犯的；进攻的",
        .example = "I found her remarks deeply offensive.",
        .example_cn = "我觉得她的话令人非常恼火。"
    },
    {
        .word = "pore",
        .phonetic_us = "pɔr",
        .phonetic_uk = "pɔː",
        .meaning = "毛孔，气孔，细孔",
        .example = "The size of your pores is determined by the amount of oil they produce.",
        .example_cn = "毛孔的大小取决于毛孔分泌油脂的多少。"
    },
    {
        .word = "fuss",
        .phonetic_us = "fʌs",
        .phonetic_uk = "fʌs",
        .meaning = "大惊小怪",
        .example = "James said he’d better be getting back or there’d be a fuss.",
        .example_cn = "詹姆斯说他最好回来，否则就会有人小题大做了。"
    },
    {
        .word = "cartoon",
        .phonetic_us = "kɑr'tun",
        .phonetic_uk = "kɑː'tuːn",
        .meaning = "动画片；漫画",
        .example = "a Walt Disney cartoon",
        .example_cn = "迪斯尼动画片"
    },
    {
        .word = "vine",
        .phonetic_us = "vaɪn",
        .phonetic_uk = "vaɪn",
        .meaning = "蔓，藤，藤本植物",
        .example = "Ivy is a type of vine.",
        .example_cn = "常青藤是一种藤本植物。"
    },
    {
        .word = "expire",
        .phonetic_us = "ɪk'spaɪɚ",
        .phonetic_uk = "ɪk'spaɪə; ek-",
        .meaning = "满期，到期；断气",
        .example = "My passport expires next week.",
        .example_cn = "我的护照下周就到期了。"
    },
    {
        .word = "bull",
        .phonetic_us = "",
        .phonetic_uk = "bʊl",
        .meaning = "买空的证券投机商",
        .example = "The bulls argue stock prices are low and there are bargains to be had.",
        .example_cn = "那些买空者认为股价很低，有些便宜股可以买进。"
    },
    {
        .word = "wharf",
        .phonetic_us = "wɔrf",
        .phonetic_uk = "wɔːf",
        .meaning = "码头，停泊所",
        .example = "The ship lies alongside the wharf.",
        .example_cn = "那艘船停靠在码头边。"
    },
    {
        .word = "circus",
        .phonetic_us = "'sɝkəs",
        .phonetic_uk = "'sɜːkəs",
        .meaning = "马戏；马戏团",
        .example = "circus act (=a trick performed in a circus)",
        .example_cn = "马戏表演"
    },
    {
        .word = "filter",
        .phonetic_us = "'fɪltɚ",
        .phonetic_uk = "'fɪltə",
        .meaning = "滤过",
        .example = "The water in the tank is constantly filtered.",
        .example_cn = "鱼缸里的水在不停地被过滤。"
    },
    {
        .word = "ass",
        .phonetic_us = "æs",
        .phonetic_uk = "æs",
        .meaning = "傻瓜，蠢笨的人；驴",
        .example = "He’s a pompous ass.",
        .example_cn = "他是头自负的蠢驴。"
    },
    {
        .word = "propeller",
        .phonetic_us = "prə'pɛlɚ",
        .phonetic_uk = "prə'pelə",
        .meaning = "螺旋桨，推进器",
        .example = "...a fixed three-bladed propeller.",
        .example_cn = "…一个固定的三叶螺旋桨。"
    },
    {
        .word = "spiral",
        .phonetic_us = "'spaɪrəl",
        .phonetic_uk = "'spaɪr(ə)l",
        .meaning = "螺旋（形）的，盘旋的",
        .example = "A snail's shell is spiral in form.",
        .example_cn = "蜗牛壳呈螺旋形。"
    },
    {
        .word = "nut",
        .phonetic_us = "nʌt",
        .phonetic_uk = "nʌt",
        .meaning = "螺帽，螺母",
        .example = "Use a wrench to loosen the nut.",
        .example_cn = "用活动扳手将螺帽拧松。"
    },
    {
        .word = "Roman",
        .phonetic_us = "'romən",
        .phonetic_uk = "'rəʊmən",
        .meaning = "古罗马人；罗马人",
        .example = "When they conquered Britain, the Romans brought this custom with them.",
        .example_cn = "当古罗马人征服不列颠时，他们把这一习俗也带了过去。"
    },
    {
        .word = "thesis",
        .phonetic_us = "'θisɪs",
        .phonetic_uk = "'θiːsɪs",
        .meaning = "论文；论题，论点",
        .example = "Cynthia’s still working on her thesis.",
        .example_cn = "辛西娅还在写论文。"
    },
    {
        .word = "forum",
        .phonetic_us = "'fɔrəm",
        .phonetic_uk = "'fɔːrəm",
        .meaning = "论坛，讨论会",
        .example = "the new national forum on the environment",
        .example_cn = "新的全国性环境论坛"
    },
    {
        .word = "oval",
        .phonetic_us = "'ovl",
        .phonetic_uk = "'əʊv(ə)l",
        .meaning = "卵形的",
        .example = "an oval face",
        .example_cn = "鹅蛋脸"
    },
    {
        .word = "video",
        .phonetic_us = "'vɪdɪo",
        .phonetic_uk = "'vɪdɪəʊ",
        .meaning = "录像的",
        .example = "video production",
        .example_cn = "录像制作"
    },
    {
        .word = "reed",
        .phonetic_us = "rid",
        .phonetic_uk = "riːd",
        .meaning = "芦笛，牧笛",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "leakage",
        .phonetic_us = "'likɪdʒ",
        .phonetic_uk = "'liːkɪdʒ",
        .meaning = "漏，泄漏；漏出物",
        .example = "a leakage of toxic waste into the sea",
        .example_cn = "有毒废物的泄漏入海"
    },
    {
        .word = "hug",
        .phonetic_us = "hʌɡ",
        .phonetic_uk = "hʌg",
        .meaning = "搂",
        .example = "We stood there crying and hugging each other.",
        .example_cn = "我们站在那里哭着互相拥抱。"
    },
    {
        .word = "stairway",
        .phonetic_us = "'stɛr'we",
        .phonetic_uk = "'steəweɪ",
        .meaning = "楼梯",
        .example = "...the stairway leading to the top floor.",
        .example_cn = "…通往顶层的楼梯。"
    },
    {
        .word = "monopoly",
        .phonetic_us = "mə'nɑpəli",
        .phonetic_uk = "mə'nɒp(ə)lɪ",
        .meaning = "垄断；独占，专利",
        .example = "In the past central government had a monopoly on television broadcasting.",
        .example_cn = "过去，中央政府对电视节目播放实行垄断。"
    },
    {
        .word = "bridle",
        .phonetic_us = "'braɪdl",
        .phonetic_uk = "'braɪd(ə)l",
        .meaning = "马笼头；马勒",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "willow",
        .phonetic_us = "'wɪlo",
        .phonetic_uk = "'wɪləʊ",
        .meaning = "柳树，柳木",
        .example = "The baskets are woven from strips of willow.",
        .example_cn = "这些篮子是用柳条编的。"
    },
    {
        .word = "streamline",
        .phonetic_us = "'strimlaɪn",
        .phonetic_uk = "'striːmlaɪn",
        .meaning = "流线；流线型",
        .example = "Start with a good streamline, toes turned in and ankles slightly separated.",
        .example_cn = "开始时保持好身体的流线, 脚尖向内,脚踝向外轻微分开。"
    },
    {
        .word = "rascal",
        .phonetic_us = "'ræskl",
        .phonetic_uk = "'rɑːsk(ə)l",
        .meaning = "流氓，恶棍，无赖",
        .example = "What's that old rascal been telling you?",
        .example_cn = "那个老家伙对你都一直说些什么？"
    },
    {
        .word = "prevalent",
        .phonetic_us = "'prɛvələnt",
        .phonetic_uk = "'prev(ə)l(ə)nt",
        .meaning = "流行的；盛行的",
        .example = "the prevalent belief in astrology",
        .example_cn = "对占星术的普遍相信"
    },
    {
        .word = "exile",
        .phonetic_us = "'ɛksaɪl",
        .phonetic_uk = "'eksaɪl; 'egz-",
        .meaning = "流放",
        .example = "the exiled former president",
        .example_cn = "流亡国外的前总统"
    },
    {
        .word = "flux",
        .phonetic_us = "flʌks",
        .phonetic_uk = "flʌks",
        .meaning = "流；涨潮；流量",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "track",
        .phonetic_us = "træk",
        .phonetic_uk = "træk",
        .meaning = "留下足迹",
        .example = "Which of you boys tracked mud all over the kitchen floor?",
        .example_cn = "你们这些男孩，是谁把厨房地上踩得到处都是泥巴？"
    },
    {
        .word = "gramophone",
        .phonetic_us = "'ɡræməfon",
        .phonetic_uk = "'græməfəʊn",
        .meaning = "留声机",
        .example = "...a wind-up gramophone with a big horn.",
        .example_cn = "...一台带大喇叭的发条式留声机。"
    },
    {
        .word = "otherwise",
        .phonetic_us = "'ʌðɚwaɪz",
        .phonetic_uk = "'ʌðəwaɪz",
        .meaning = "另外；在其他方面",
        .example = "He was tired but otherwise in good health.",
        .example_cn = "他除了累身体很好。"
    },
    {
        .word = "province",
        .phonetic_us = "'prɑvɪns",
        .phonetic_uk = "'prɒvɪns",
        .meaning = "领域，范围，职权",
        .example = "Computers were once the exclusive province of scientists and mathematicians.",
        .example_cn = "计算机一度为科学家和数学家专用。"
    },
    {
        .word = "consul",
        .phonetic_us = "'kɑnsl",
        .phonetic_uk = "'kɒns(ə)l",
        .meaning = "领事",
        .example = "the British Consul in Paris",
        .example_cn = "英国驻巴黎领事"
    },
    {
        .word = "retail",
        .phonetic_us = "'ritel",
        .phonetic_uk = "'riːteɪl",
        .meaning = "零售",
        .example = "a retail price of £8.99",
        .example_cn = "8.99英镑的零售价"
    },
    {
        .word = "flexible",
        .phonetic_us = "'flɛksəbl",
        .phonetic_uk = "'fleksɪb(ə)l",
        .meaning = "灵活的，可变通的",
        .example = "We can be flexible about your starting date.",
        .example_cn = "你具体从哪天开始，我们可以灵活一点。"
    },
    {
        .word = "inspiration",
        .phonetic_us = "ˌɪnspəˈreʃən",
        .phonetic_uk = "ˌɪnspəˈreɪʃn",
        .meaning = "灵感；妙想；鼓舞",
        .example = "Dreams can be a rich source of inspiration for an artist.",
        .example_cn = "梦境可以成为艺术家灵感的丰富源泉。"
    },
    {
        .word = "grove",
        .phonetic_us = "ɡrov",
        .phonetic_uk = "grəʊv",
        .meaning = "林子，小树林，园林",
        .example = "...an olive grove.",
        .example_cn = "…一片橄榄树丛。"
    },
    {
        .word = "neighbouring",
        .phonetic_us = "'neibəriŋ",
        .phonetic_uk = "'neɪb(ə)rɪŋ",
        .meaning = "邻近的，接壤的",
        .example = "The fair attracted hundreds of people from the neighbouring towns and villages.",
        .example_cn = "集市吸引了邻近城镇及村庄的好几百人前来。"
    },
    {
        .word = "vicinity",
        .phonetic_us = "və'sɪnəti",
        .phonetic_uk = "vɪ'sɪnɪtɪ",
        .meaning = "邻近；附近地区",
        .example = "The stolen car was found in the vicinity of the station.",
        .example_cn = "被盗汽车在车站附近被发现。"
    },
    {
        .word = "fission",
        .phonetic_us = "'fɪʃən",
        .phonetic_uk = "'fɪʃ(ə)n",
        .meaning = "裂开；分裂生殖",
        .example = "The fission of the cell could be inhibited with certain chemicals.",
        .example_cn = "细胞裂殖可以靠某些化学制品加以抑制。"
    },
    {
        .word = "prey",
        .phonetic_us = "pre",
        .phonetic_uk = "preɪ",
        .meaning = "猎物",
        .example = "a tiger stalking its prey",
        .example_cn = "潜行跟踪猎物的老虎"
    },
    {
        .word = "martyr",
        .phonetic_us = "'mɑrtɚ",
        .phonetic_uk = "'mɑːtə",
        .meaning = "烈士，殉难者",
        .example = "St. Stephen, the first Christian martyr",
        .example_cn = "圣司提反，第一个基督教殉道者"
    },
    {
        .word = "grin",
        .phonetic_us = "ɡrɪn",
        .phonetic_uk = "grɪn",
        .meaning = "咧着嘴笑",
        .example = "She grinned at me, her eyes sparkling.",
        .example_cn = "她咧嘴对我笑着，两眼放光。"
    },
    {
        .word = "expect",
        .phonetic_us = "ɪk'spɛkt",
        .phonetic_uk = "ɪk'spekt; ek-",
        .meaning = "料想，认为",
        .example = "I expected her to be taller than me, not shorter.",
        .example_cn = "我曾以为她个子比我高，不会比我矮。"
    },
    {
        .word = "quantitative",
        .phonetic_us = "'kwɑntətetɪv",
        .phonetic_uk = "'kwɒntɪ,tətɪv; -,teɪtɪv",
        .meaning = "量的；定量的",
        .example = "We need to do a proper quantitative analysis of this problem.",
        .example_cn = "我们需要对这个问题作一个正确的定量分析。"
    },
    {
        .word = "blush",
        .phonetic_us = "blʌʃ",
        .phonetic_uk = "blʌʃ",
        .meaning = "脸红，害臊",
        .example = "Wilson saw she was watching him and blushed.",
        .example_cn = "威尔逊看到她在注视着自己，不由得脸红了。"
    },
    {
        .word = "allied",
        .phonetic_us = "əˈlaɪd,ˈælˌaɪd",
        .phonetic_uk = "'ælaɪd; ə'laɪd",
        .meaning = "联合的；联姻的",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "ripple",
        .phonetic_us = "'rɪpl",
        .phonetic_uk = "'rɪp(ə)l",
        .meaning = "涟漪，细浪，波纹",
        .example = "ripples on the surface of the pond",
        .example_cn = "池面上的涟漪"
    },
    {
        .word = "mitten",
        .phonetic_us = "'mɪtn",
        .phonetic_uk = "'mɪt(ə)n",
        .meaning = "连指手套",
        .example = "sheepskin mittens",
        .example_cn = "羊皮连指手套"
    },
    {
        .word = "attachment",
        .phonetic_us = "ə'tætʃmənt",
        .phonetic_uk = "ə'tætʃm(ə)nt",
        .meaning = "爱慕；附件；连接物",
        .example = "a child’s attachment to its mother",
        .example_cn = "孩子对母亲的依恋"
    },
    {
        .word = "junction",
        .phonetic_us = "'dʒʌŋkʃən",
        .phonetic_uk = "'dʒʌŋ(k)ʃ(ə)n",
        .meaning = "连接点，汇合处",
        .example = "the junction of Abbot Road and Mill Street",
        .example_cn = "阿伯特路与米尔街的交叉口"
    },
    {
        .word = "chestnut",
        .phonetic_us = "'tʃɛsnʌt",
        .phonetic_uk = "'tʃesnʌt",
        .meaning = "栗子；栗树；栗色",
        .example = "roast chestnuts",
        .example_cn = "炒栗子"
    },
    {
        .word = "exceptional",
        .phonetic_us = "ɪk'sɛpʃənl",
        .phonetic_uk = "ɪk'sepʃ(ə)n(ə)l; ek-",
        .meaning = "优越的；例外的",
        .example = "an exceptional student",
        .example_cn = "出类拔萃的学生"
    },
    {
        .word = "solar",
        .phonetic_us = "'solɚ",
        .phonetic_uk = "'səʊlə",
        .meaning = "利用太阳光的",
        .example = "solar energy",
        .example_cn = "太阳能"
    },
    {
        .word = "impose",
        .phonetic_us = "ɪm'poz",
        .phonetic_uk = "ɪm'pəʊz",
        .meaning = "将（想法、信仰等）强加于（某人）",
        .example = "parents who impose their own moral values on their children",
        .example_cn = "把自己的道德观强加给孩子的父母"
    },
    {
        .word = "utilization",
        .phonetic_us = "ˌjuːtəlaɪ'zeɪʃn",
        .phonetic_uk = ",juːtɪlaɪ'zeɪʃən",
        .meaning = "利用，效用",
        .example = "Computer has found an increasingly wide utilization in all fields.",
        .example_cn = "电子计算机已越来越广泛地在各个领域得到应用。"
    },
    {
        .word = "stereo",
        .phonetic_us = "'stɛrɪo",
        .phonetic_uk = "'sterɪəʊ; 'stɪərɪəʊ",
        .meaning = "立体声",
        .example = "The concert will be broadcast in stereo.",
        .example_cn = "音乐会将用立体声播放。"
    },
    {
        .word = "cubic",
        .phonetic_us = "'kjubɪk",
        .phonetic_uk = "'kjuːbɪk",
        .meaning = "立方体的；立方的",
        .example = "the cubic capacity of an engine",
        .example_cn = "引擎汽缸的容积"
    },
    {
        .word = "legislation",
        .phonetic_us = ",lɛdʒɪs'leʃən",
        .phonetic_uk = "ledʒɪs'leɪʃ(ə)n",
        .meaning = "立法；法规",
        .example = "This is a very important piece of legislation (= law ).",
        .example_cn = "这是一条非常重要的法规。"
    },
    {
        .word = "historian",
        .phonetic_us = "hɪ'stɔrɪən",
        .phonetic_uk = "hɪ'stɔːrɪən",
        .meaning = "历史学家；编史家",
        .example = "I am a historian, and I teach in an American university.",
        .example_cn = "我是一位历史学家，在美国一所大学任教。"
    },
    {
        .word = "historic",
        .phonetic_us = "hɪ'stɔrɪk",
        .phonetic_uk = "hɪ'stɒrɪk",
        .meaning = "历史的；历史性的",
        .example = "a historic meeting of world leaders",
        .example_cn = "具有历史意义的世界领导人会议"
    },
    {
        .word = "mechanics",
        .phonetic_us = "mə'kænɪks",
        .phonetic_uk = "mɪ'kænɪks",
        .meaning = "力学，机械学",
        .example = "He has not studied mechanics or engineering.",
        .example_cn = "他没有学习过力学或者工程学。"
    },
    {
        .word = "intellect",
        .phonetic_us = "'ɪntəlɛkt",
        .phonetic_uk = "'ɪntəlekt",
        .meaning = "理智，智力，才智",
        .example = "He combined a formidable intellect with a talent for speaking.",
        .example_cn = "他不但智力超群，而且口才出众。"
    },
    {
        .word = "ideally",
        .phonetic_us = "aɪ'diəli",
        .phonetic_uk = "aɪ'dɪəl(l)ɪ; aɪ'diːəl(l)ɪ",
        .meaning = "理想地；理论上",
        .example = "Ideally, your car should have high-security locks.",
        .example_cn = "最理想的情况是，你的车应该配有高度安全的车锁。"
    },
    {
        .word = "abstract",
        .phonetic_us = "'æbstrækt",
        .phonetic_uk = "'æbstrækt",
        .meaning = "理论上的",
        .example = "abstract knowledge/principles",
        .example_cn = "理论知识；抽象原理"
    },
    {
        .word = "slang",
        .phonetic_us = "slæŋ",
        .phonetic_uk = "slæŋ",
        .meaning = "俚语；行话，黑话",
        .example = "schoolboy slang",
        .example_cn = "学生俚语"
    },
    {
        .word = "courtesy",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "礼貌，谦恭",
        .example = "It’s a matter of common courtesy to acknowledge letters.",
        .example_cn = "确认收到来信是起码的礼貌。"
    },
    {
        .word = "twilight",
        .phonetic_us = "'twaɪlaɪt",
        .phonetic_uk = "'twaɪlaɪt",
        .meaning = "黄昏",
        .example = "romantic walks along the beach at twilight",
        .example_cn = "黄昏时分浪漫的海边漫步"
    },
    {
        .word = "ion",
        .phonetic_us = "'aɪən",
        .phonetic_uk = "'aɪən",
        .meaning = "离子",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "excursion",
        .phonetic_us = "ɪk'skɝʒn",
        .phonetic_uk = "ɪk'skɜːʃ(ə)n; ek-",
        .meaning = "（尤指集体）远足，短途旅行",
        .example = "Included in the tour is an excursion to the Grand Canyon.",
        .example_cn = "这次旅游包括大峡谷观光。"
    },
    {
        .word = "grim",
        .phonetic_us = "ɡrɪm",
        .phonetic_uk = "grɪm",
        .meaning = "严厉的",
        .example = "‘I’ll survive,’ he said with a grim smile.",
        .example_cn = "“我死不了。”他阴笑着说。"
    },
    {
        .word = "prism",
        .phonetic_us = "'prɪzəm",
        .phonetic_uk = "'prɪz(ə)m",
        .meaning = "棱镜；棱柱（体）",
        .example = "Light is refracted when passed through a prism.",
        .example_cn = "光通过棱镜时产生折射。"
    },
    {
        .word = "troublesome",
        .phonetic_us = "'trʌblsəm",
        .phonetic_uk = "'trʌb(ə)ls(ə)m",
        .meaning = "困难的",
        .example = "The economy has become a troublesome issue for the Conservative Party.",
        .example_cn = "经济状况已成为保守党的一大难题。"
    },
    {
        .word = "analogue",
        .phonetic_us = "'ænəlɔ:g",
        .phonetic_uk = "'ænəlɒg",
        .meaning = "类似物",
        .example = "Scientists are attempting to compare features of extinct animals with living analogues.",
        .example_cn = "科学家正试图把已灭绝动物的特征与现存类似动物相比较。"
    },
    {
        .word = "similarity",
        .phonetic_us = ",sɪmə'lærəti",
        .phonetic_uk = "sɪmə'lærətɪ",
        .meaning = "类似，相似；类似点",
        .example = "She bears a striking similarity to her mother.",
        .example_cn = "她跟她母亲十分相像。"
    },
    {
        .word = "flank",
        .phonetic_us = "flæŋk",
        .phonetic_uk = "flæŋk",
        .meaning = "肋，肋腹；侧面",
        .example = "He put his hand on the dog's flank.",
        .example_cn = "他把手放在狗的胁腹上。"
    },
    {
        .word = "comprehend",
        .phonetic_us = ",kɑmprɪ'hɛnd",
        .phonetic_uk = "kɒmprɪ'hend",
        .meaning = "了解，理解，领会",
        .example = "She cannot comprehend the extent of the disaster.",
        .example_cn = "她无法理解这场灾难的严重程度。"
    },
    {
        .word = "optimism",
        .phonetic_us = "'ɑptɪmɪzəm",
        .phonetic_uk = "'ɒptɪmɪz(ə)m",
        .meaning = "乐观，乐观主义",
        .example = "There are grounds for cautious optimism.",
        .example_cn = "有理由保持谨慎乐观。"
    },
    {
        .word = "sophisticated",
        .phonetic_us = "sə'fɪstɪketɪd",
        .phonetic_uk = "sə'fɪstɪkeɪtɪd",
        .meaning = "老于世故的；高级的",
        .example = "Mark is a smart and sophisticated young man.",
        .example_cn = "马克是一个聪明老成的年轻人。"
    },
    {
        .word = "straightforward",
        .phonetic_us = ",stret'fɔrwɚd",
        .phonetic_uk = "streɪt'fɔːwəd",
        .meaning = "老实的，坦率的",
        .example = "Jack is tough, but always straightforward and fair.",
        .example_cn = "虽然杰克很严厉，但一向坦诚公正。"
    },
    {
        .word = "wasteful",
        .phonetic_us = "'westfl",
        .phonetic_uk = "'weɪstfʊl; -f(ə)l",
        .meaning = "浪费的",
        .example = "a wasteful use of resources",
        .example_cn = "滥用资源"
    },
    {
        .word = "idleness",
        .phonetic_us = "'aɪdlnɪs",
        .phonetic_uk = "'aɪdlnəs",
        .meaning = "懒惰；赋闲无事",
        .example = "After a period of enforced idleness, she found a new job.",
        .example_cn = "她在被迫闲散了一段时间之后，找到了份新工作。"
    },
    {
        .word = "shabby",
        .phonetic_us = "ˈʃæbi",
        .phonetic_uk = "'ʃæbɪ",
        .meaning = "破旧的；褴褛的",
        .example = "Hugh’s jacket was old and shabby.",
        .example_cn = "休的夹克衫又旧又破。"
    },
    {
        .word = "dust",
        .phonetic_us = "dʌst",
        .phonetic_uk = "dʌst",
        .meaning = "灰尘",
        .example = "All the furniture was covered in dust.",
        .example_cn = "所有的家具都蒙上了灰尘。"
    },
    {
        .word = "flight",
        .phonetic_us = "flaɪt",
        .phonetic_uk = "flaɪt",
        .meaning = "溃退，逃跑",
        .example = "Donald Wood’s hasty flight from South Africa early in 1978",
        .example_cn = "1978年初唐纳德•伍德匆忙逃离南非"
    },
    {
        .word = "rapture",
        .phonetic_us = "'ræptʃɚ",
        .phonetic_uk = "'ræptʃə",
        .meaning = "狂喜，欢天喜地",
        .example = "The boys gazed up at him in rapture.",
        .example_cn = "男孩们欣喜若狂地抬头注视着他。"
    },
    {
        .word = "fury",
        .phonetic_us = "'fjʊri",
        .phonetic_uk = "'fjʊərɪ",
        .meaning = "狂怒，暴怒；猛烈",
        .example = "I was shaking with fury .",
        .example_cn = "我气得发抖。"
    },
    {
        .word = "violent",
        .phonetic_us = "'vaɪələnt",
        .phonetic_uk = "'vaɪəl(ə)nt",
        .meaning = "狂暴的",
        .example = "My father was a violent and dangerous man.",
        .example_cn = "我父亲脾气暴躁，是个危险人物。"
    },
    {
        .word = "furious",
        .phonetic_us = "'fjʊrɪəs",
        .phonetic_uk = "'fjʊərɪəs",
        .meaning = "狂暴的；强烈的",
        .example = "She was absolutely furious.",
        .example_cn = "她怒不可遏。"
    },
    {
        .word = "satisfaction",
        .phonetic_us = ",sætɪs'fækʃən",
        .phonetic_uk = "sætɪs'fækʃ(ə)n",
        .meaning = "满足，愉快",
        .example = "She got great satisfaction from helping people to learn.",
        .example_cn = "她在帮助人们学习的过程中得到很大的满足。"
    },
    {
        .word = "snack",
        .phonetic_us = "snæk",
        .phonetic_uk = "snæk",
        .meaning = "快餐，小吃",
        .example = "I grabbed a quick snack.",
        .example_cn = "我赶紧吃了点零食。"
    },
    {
        .word = "rapidity",
        .phonetic_us = "rə'pɪdəti",
        .phonetic_uk = "rə'pɪdɪtɪ",
        .meaning = "快，迅速；陡，险峻",
        .example = "the rapidity of economic growth",
        .example_cn = "经济增长的高速度"
    },
    {
        .word = "parade",
        .phonetic_us = "pə'red",
        .phonetic_uk = "pə'reɪd",
        .meaning = "夸耀（才能等）",
        .example = "He is not one to parade his achievements.",
        .example_cn = "他不是一个爱炫耀自己成就的人。"
    },
    {
        .word = "pants",
        .phonetic_us = "pænts",
        .phonetic_uk = "pæn(t)s",
        .meaning = "裤子；男用短衬裤",
        .example = "She was wearing dark blue pants and a white sweater.",
        .example_cn = "她穿着深蓝色长裤和白色毛衣。"
    },
    {
        .word = "bitterness",
        .phonetic_us = "'bɪtɚnɪs",
        .phonetic_uk = "bɪtənəs",
        .meaning = "苦味，辛酸，苦难",
        .example = "The flowers of the hop plant add bitterness to the beer.",
        .example_cn = "忽布花可增加啤酒的苦味。"
    },
    {
        .word = "wither",
        .phonetic_us = "'wɪðɚ",
        .phonetic_uk = "'wɪðə",
        .meaning = "枯萎；使衰弱",
        .example = "The flowers in Isabel's room had withered.",
        .example_cn = "伊莎贝尔房间里的花朵已经枯萎了。"
    },
    {
        .word = "clasp",
        .phonetic_us = "klæsp",
        .phonetic_uk = "klɑːsp",
        .meaning = "扣住，扣紧，钩住",
        .example = "She clasped the bracelet around her wrist.",
        .example_cn = "她把手镯戴上手腕扣牢。"
    },
    {
        .word = "fastener",
        .phonetic_us = "'fæsnɚ",
        .phonetic_uk = "'fɑːsənə",
        .meaning = "扣件，钮扣，揿钮",
        .example = "shoes with velcro fasteners",
        .example_cn = "带维可牢搭链的鞋"
    },
    {
        .word = "stammer",
        .phonetic_us = "'stæmɚ",
        .phonetic_uk = "'stæmə",
        .meaning = "口吃地说",
        .example = "Whenever he was angry, he would begin to stammer slightly.",
        .example_cn = "他一生气说话就开始有点结巴。"
    },
    {
        .word = "panic",
        .phonetic_us = "'pænɪk",
        .phonetic_uk = "'pænɪk",
        .meaning = "恐慌，惊慌",
        .example = "a feeling of sheer panic",
        .example_cn = "惊恐万分的感觉"
    },
    {
        .word = "terrorist",
        .phonetic_us = "'tɛrərɪst",
        .phonetic_uk = "'terərɪst",
        .meaning = "恐怖分子",
        .example = "We refuse to talk to terrorists.",
        .example_cn = "我们拒绝和恐怖分子对话。"
    },
    {
        .word = "peacock",
        .phonetic_us = "'pikɑk",
        .phonetic_uk = "'piːkɒk",
        .meaning = "孔雀",
        .example = "...peacocks strutting slowly across the garden.",
        .example_cn = "...孔雀在花园中趾高气扬地走来走去。"
    },
    {
        .word = "fantastic",
        .phonetic_us = "fæn'tæstɪk",
        .phonetic_uk = "fæn'tæstɪk",
        .meaning = "空想的；奇异的",
        .example = "a fantastic scheme",
        .example_cn = "异想天开的计划"
    },
    {
        .word = "pneumatic",
        .phonetic_us = "numætɪk",
        .phonetic_uk = "njuː'mætɪk",
        .meaning = "空气的；气动的",
        .example = "pneumatic tyres",
        .example_cn = "充气轮胎"
    },
    {
        .word = "aerial",
        .phonetic_us = "'ɛrɪəl",
        .phonetic_uk = "'eərɪəl",
        .meaning = "空气的；航空的",
        .example = "The banyan tree has aerial roots.",
        .example_cn = "榕树有气根。"
    },
    {
        .word = "spatial",
        .phonetic_us = "'speʃl",
        .phonetic_uk = "'speɪʃ(ə)l",
        .meaning = "空间的，占据空间的",
        .example = "...the spatial distribution of black employment and population in South Africa.",
        .example_cn = "…南非黑人就业和人口的空间分布。"
    },
    {
        .word = "void",
        .phonetic_us = "vɔɪd",
        .phonetic_uk = "vɒɪd",
        .meaning = "无效的；空的",
        .example = "The agreement was declared void.",
        .example_cn = "该协议已宣布无效。"
    },
    {
        .word = "gnaw",
        .phonetic_us = "nɔ",
        .phonetic_uk = "nɔː",
        .meaning = "啃，咬断，啮",
        .example = "Dexter gnawed his pen thoughtfully.",
        .example_cn = "德克斯特若有所思地咬着钢笔。"
    },
    {
        .word = "longing",
        .phonetic_us = "'lɔŋɪŋ",
        .phonetic_uk = "'lɒŋɪŋ",
        .meaning = "渴望",
        .example = "She looked back with longing on the good old days.",
        .example_cn = "她回首往事，怀念着过去的美好时光。"
    },
    {
        .word = "suspicious",
        .phonetic_us = "sə'spɪʃəs",
        .phonetic_uk = "sə'spɪʃəs",
        .meaning = "可疑的；猜疑的",
        .example = "They found a suspicious package under the seat.",
        .example_cn = "他们在座位下发现了一个可疑包裹。"
    },
    {
        .word = "shady",
        .phonetic_us = "'ʃedi",
        .phonetic_uk = "'ʃeɪdɪ",
        .meaning = "可疑的，靠不住的",
        .example = "a shady character",
        .example_cn = "一个鬼鬼祟祟的人"
    },
    {
        .word = "questionable",
        .phonetic_us = "'kwɛstʃənəbl",
        .phonetic_uk = "'kwestʃ(ə)nəb(ə)l",
        .meaning = "可疑的，不可靠的",
        .example = "The statistics are highly questionable.",
        .example_cn = "这个统计数据大有问题。"
    },
    {
        .word = "portable",
        .phonetic_us = "'pɔrtəbl",
        .phonetic_uk = "'pɔːtəb(ə)l",
        .meaning = "可移动的",
        .example = "a portable radio",
        .example_cn = "便携式收音机"
    },
    {
        .word = "grateful",
        .phonetic_us = "'ɡretfl",
        .phonetic_uk = "'greɪtfʊl; -f(ə)l",
        .meaning = "感谢的，感激的",
        .example = "Our grateful thanks go to all who participated.",
        .example_cn = "我们衷心感谢所有参与者。"
    },
    {
        .word = "adjustable",
        .phonetic_us = "ə'dʒʌstəbl",
        .phonetic_uk = "",
        .meaning = "可调整的，可校准的",
        .example = "an adjustable spanner",
        .example_cn = "一把活动扳手"
    },
    {
        .word = "frightful",
        .phonetic_us = "'fraɪtfl",
        .phonetic_uk = "'fraɪtfʊl; -f(ə)l",
        .meaning = "可怕的；讨厌的",
        .example = "There’s been a frightful accident.",
        .example_cn = "发生了一起可怕的意外。"
    },
    {
        .word = "formidable",
        .phonetic_us = "'fɔrmɪdəbl",
        .phonetic_uk = "'fɔːmɪdəb(ə)l; fɔː'mɪd-",
        .meaning = "可怕的；难对付的",
        .example = "The building is grey, formidable, not at all picturesque.",
        .example_cn = "那幢建筑呈灰色，气势凛然，与漂亮沾不上边。"
    },
    {
        .word = "dreadful",
        .phonetic_us = "'drɛdfəl",
        .phonetic_uk = "'dredfʊl; -f(ə)l",
        .meaning = "可怕的；令人畏惧的",
        .example = "a dreadful accident",
        .example_cn = "可怕的事故"
    },
    {
        .word = "monstrous",
        .phonetic_us = "'mɑnstrəs",
        .phonetic_uk = "'mɒnstrəs",
        .meaning = "极大的；可怕的",
        .example = "a monstrous nose",
        .example_cn = "很大的鼻子"
    },
    {
        .word = "possibility",
        .phonetic_us = ",pɑsə'bɪləti",
        .phonetic_uk = ",pɒsɪ'bɪlɪtɪ",
        .meaning = "可能的事",
        .example = "There were several possibilities open to each manufacturer.",
        .example_cn = "每个制造商都可以有几种不同的选择。"
    },
    {
        .word = "likelihood",
        .phonetic_us = "'laɪklɪhʊd",
        .phonetic_uk = "'laɪklɪhʊd",
        .meaning = "可能（性）",
        .example = "Using a seatbelt will reduce the likelihood of serious injury in a car accident.",
        .example_cn = "系安全带可以降低在车祸中受重伤的可能性。"
    },
    {
        .word = "respectable",
        .phonetic_us = "rɪ'spɛktəbl",
        .phonetic_uk = "rɪ'spektəb(ə)l",
        .meaning = "可敬的；人格高尚的",
        .example = "hard-working, respectable people",
        .example_cn = "勤勉可敬的人"
    },
    {
        .word = "appreciable",
        .phonetic_us = "ə'priʃəbl",
        .phonetic_uk = "ə'priːʃəb(ə)l; -ʃɪə-",
        .meaning = "可察觉的",
        .example = "There’s no appreciable change in the patient’s condition.",
        .example_cn = "病人的状况没有明显改变。"
    },
    {
        .word = "shameful",
        .phonetic_us = "'ʃemfl",
        .phonetic_uk = "'ʃeɪmfʊl; -f(ə)l",
        .meaning = "可耻的；不道德的",
        .example = "It’s shameful the way some people treat their pets.",
        .example_cn = "有些人如此对待自己的宠物，真是可耻。"
    },
    {
        .word = "comparable",
        .phonetic_us = "'kɑmpərəbl",
        .phonetic_uk = "'kɒmp(ə)rəb(ə)l",
        .meaning = "可比较的；类似的",
        .example = "A car of comparable size would cost far more abroad.",
        .example_cn = "同样大小的汽车在国外要贵得多。"
    },
    {
        .word = "particular",
        .phonetic_us = "pɚ'tɪkjəlɚ",
        .phonetic_uk = "pəˈtɪkjʊlə(r)",
        .meaning = "特称的；苛求的",
        .example = "Most students choose one particular area for research.",
        .example_cn = "大多数学生选择一个特定领域进行研究。"
    },
    {
        .word = "whereby",
        .phonetic_us = "wɛr'bai",
        .phonetic_uk = "weə'baɪ",
        .meaning = "靠什么；靠那个",
        .example = "a proposal whereby EU citizens would be allowed to reside anywhere in the EU",
        .example_cn = "允许欧盟公民在欧盟任何地方居住的一项提议"
    },
    {
        .word = "ponder",
        .phonetic_us = "'pɑndɚ",
        .phonetic_uk = "'pɒndə",
        .meaning = "考虑，沉思",
        .example = "He continued to ponder the problem as he walked home.",
        .example_cn = "他一边往家走一边继续思考那个问题。"
    },
    {
        .word = "exploration",
        .phonetic_us = ",ɛksplə'reʃən",
        .phonetic_uk = "eksplə'reɪʃ(ə)n",
        .meaning = "考察；勘探；探查",
        .example = "oil exploration facilities in the North Sea",
        .example_cn = "北海的石油勘探设施"
    },
    {
        .word = "generosity",
        .phonetic_us = ",dʒɛnə'rɑsəti",
        .phonetic_uk = "dʒenə'rɒsətɪ",
        .meaning = "慷慨，宽宏大量",
        .example = "an act of great generosity",
        .example_cn = "十分慷慨的行为"
    },
    {
        .word = "discern",
        .phonetic_us = "dɪ'sɝn",
        .phonetic_uk = "dɪ'sɜːn",
        .meaning = "弄清楚，辨别；看出，辨出",
        .example = "You need a long series of data to be able to discern such a trend.",
        .example_cn = "你需要一大串数据才能认清这一趋势。"
    },
    {
        .word = "fell",
        .phonetic_us = "fɛl",
        .phonetic_uk = "fel",
        .meaning = "砍倒（树等）；砍伐",
        .example = "More than 100 trees were felled in just over an hour.",
        .example_cn = "短短一个多小时100多棵树就被砍倒了。"
    },
    {
        .word = "carry",
        .phonetic_us = "'kæri",
        .phonetic_uk = "'kærɪ",
        .meaning = "刊登",
        .example = "The morning paper carried a story about demonstrations in New York and Washington D.C.",
        .example_cn = "晨报登载了纽约和华盛顿特区举行示威游行的报道。"
    },
    {
        .word = "inaugurate",
        .phonetic_us = "ɪ'nɔɡjəret",
        .phonetic_uk = "ɪ'nɔːgjʊreɪt",
        .meaning = "使就职；开始",
        .example = "He will be inaugurated (as) President in January.",
        .example_cn = "他将于一月份就任总统。"
    },
    {
        .word = "initiate",
        .phonetic_us = "ɪ'nɪʃɪet",
        .phonetic_uk = "ɪ'nɪʃɪeɪt",
        .meaning = "开始，创始；启蒙",
        .example = "They have decided to initiate legal proceedings against the newspaper.",
        .example_cn = "他们决定向该报提起法律诉讼。"
    },
    {
        .word = "commence",
        .phonetic_us = "kə'mɛns",
        .phonetic_uk = "kə'mens",
        .meaning = "开始；获得学位",
        .example = "Work will commence on the new building immediately.",
        .example_cn = "新大楼即将破土动工。"
    },
    {
        .word = "reclaim",
        .phonetic_us = "rɪ'klem",
        .phonetic_uk = "rɪ'kleɪm",
        .meaning = "开垦，开拓；回收",
        .example = "This land will be reclaimed for a new airport.",
        .example_cn = "这块土地将被开发用来建新机场。"
    },
    {
        .word = "evolution",
        .phonetic_us = "ˌɛvəˈluʃən; (occas.) ˌ ivəˈluʃən",
        .phonetic_uk = ",iːvə'luːʃ(ə)n; 'ev-",
        .meaning = "进化",
        .example = "the theory of evolution",
        .example_cn = "进化论"
    },
    {
        .word = "start",
        .phonetic_us = "stɑrt",
        .phonetic_uk = "stɑːt",
        .meaning = "开动，着手；开设",
        .example = "There’s so much to do. I don’t know where to start.",
        .example_cn = "有那么多的事情要做，我都不知道从哪里开始。"
    },
    {
        .word = "unlock",
        .phonetic_us = "'ʌn'lɑk",
        .phonetic_uk = "ʌn'lɒk",
        .meaning = "开…的锁；开启",
        .example = "to unlock the door",
        .example_cn = "打开门锁"
    },
    {
        .word = "sheriff",
        .phonetic_us = "'ʃɛrɪf",
        .phonetic_uk = "'ʃerɪf",
        .meaning = "郡长",
        .example = "...the Sheriff of Oxford.",
        .example_cn = "牛津的郡长"
    },
    {
        .word = "monarch",
        .phonetic_us = "'mɑnɚk",
        .phonetic_uk = "'mɒnək",
        .meaning = "君主，最高统治者",
        .example = "Britain's head of state is a constitutional monarch.",
        .example_cn = "英国的国家元首是君主立宪的国王或女王。"
    },
    {
        .word = "sovereign",
        .phonetic_us = "sɑvrɪn",
        .phonetic_uk = "'sɒvrɪn",
        .meaning = "君主",
        .example = "In March 1889, she became the first British sovereign to set foot on Spanish soil.",
        .example_cn = "1889年3月，她成为首位踏上西班牙国土的英国君主。"
    },
    {
        .word = "bugle",
        .phonetic_us = "'bjuɡl",
        .phonetic_uk = "'bjuːg(ə)l",
        .meaning = "军号，喇叭",
        .example = "The bugle sounded as the troops advanced.",
        .example_cn = "军号吹响前进的号令。"
    },
    {
        .word = "extinct",
        .phonetic_us = "ɪk'stɪŋkt",
        .phonetic_uk = "ɪk'stɪŋkt; ek-",
        .meaning = "绝种的",
        .example = "Dinosaurs have been extinct for millions of years.",
        .example_cn = "恐龙已灭绝数千万年了。"
    },
    {
        .word = "decisive",
        .phonetic_us = "dɪ'saɪsɪv",
        .phonetic_uk = "dɪ'saɪsɪv",
        .meaning = "决定性的；果断的",
        .example = "a decisive factor/victory/battle",
        .example_cn = "决定性的因素 / 胜利 / 战役"
    },
    {
        .word = "govern",
        .phonetic_us = "'ɡʌvɚn",
        .phonetic_uk = "'gʌv(ə)n",
        .meaning = "决定，支配；控制",
        .example = "Prices are governed by market demand.",
        .example_cn = "价格的高低取决于市场的需求。"
    },
    {
        .word = "winding",
        .phonetic_us = "'waɪndɪŋ",
        .phonetic_uk = "'waɪndɪŋ",
        .meaning = "蜿蜒曲折的路径",
        .example = "a long and winding road",
        .example_cn = "漫长而曲折的道路"
    },
    {
        .word = "curly",
        .phonetic_us = "'kɝli",
        .phonetic_uk = "'kɜːlɪ",
        .meaning = "卷曲的；有卷毛的",
        .example = "long dark curly hair",
        .example_cn = "又长又黑的鬈发"
    },
    {
        .word = "reel",
        .phonetic_us = "ril",
        .phonetic_uk = "riːl",
        .meaning = "卷，绕",
        .example = "I slowly reeled the fish in.",
        .example_cn = "我慢慢地收卷鱼线，将鱼拉过来。"
    },
    {
        .word = "mob",
        .phonetic_us = "mɑb",
        .phonetic_uk = "mɒb",
        .meaning = "团团围住（名人等）",
        .example = "Fans ran onto the pitch and mobbed the batsman.",
        .example_cn = "球迷冲上球场围住了那位击球手。"
    },
    {
        .word = "polymer",
        .phonetic_us = "'pɑlɪmɚ",
        .phonetic_uk = "'pɒlɪmə",
        .meaning = "聚合物，多聚物",
        .example = "Many polymers, such as nylon, are artificial.",
        .example_cn = "许多聚合物是人造的，比如说尼龙。"
    },
    {
        .word = "hurricane",
        .phonetic_us = "hʌrɪˌken",
        .phonetic_uk = "'hʌrɪk(ə)n; -keɪn",
        .meaning = "飓风，十二级风",
        .example = "Hurricane Betty is now approaching the coast of Florida.",
        .example_cn = "飓风贝蒂正在逼近佛罗里达海岸。"
    },
    {
        .word = "sting",
        .phonetic_us = "stɪŋ",
        .phonetic_uk = "stɪŋ",
        .meaning = "剧痛；刺痛",
        .example = "She felt the sting of tears in her eyes.",
        .example_cn = "她感觉泪水刺痛了眼睛。"
    },
    {
        .word = "repel",
        .phonetic_us = "rɪ'pɛl",
        .phonetic_uk = "rɪ'pel",
        .meaning = "使厌恶；拒绝",
        .example = "The smell repelled him.",
        .example_cn = "这气味让他反感。"
    },
    {
        .word = "gigantic",
        .phonetic_us = "dʒaɪ'ɡæntɪk",
        .phonetic_uk = "dʒaɪ'gæntɪk",
        .meaning = "巨大的；巨人似的",
        .example = "a gigantic skyscraper",
        .example_cn = "摩天大楼"
    },
    {
        .word = "uphold",
        .phonetic_us = "ʌpˈhoʊld",
        .phonetic_uk = "ʌp'həʊld",
        .meaning = "维护",
        .example = "We have a duty to uphold the law.",
        .example_cn = "维护法律是我们的责任。"
    },
    {
        .word = "exemplify",
        .phonetic_us = "ɪɡ'zɛmplɪfaɪ",
        .phonetic_uk = "ɪg'zemplɪfaɪ; eg-",
        .meaning = "举例证明（解释）",
        .example = "Problems are exemplified in the report.",
        .example_cn = "问题都在报告中作了举例说明。"
    },
    {
        .word = "rectangle",
        .phonetic_us = "'rɛktæŋɡl",
        .phonetic_uk = "'rektæŋg(ə)l",
        .meaning = "矩形，长方形",
        .example = "Suppose the width of a rectangle is x metres.",
        .example_cn = "设长方形的宽是 x 米。"
    },
    {
        .word = "administration",
        .phonetic_us = "əd,mɪnɪ'streʃən",
        .phonetic_uk = "ədmɪnɪ'streɪʃ(ə)n",
        .meaning = "局（或署、处等）",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "reside",
        .phonetic_us = "rɪ'zaɪd",
        .phonetic_uk = "rɪ'zaɪd",
        .meaning = "居住，驻扎；属于",
        .example = "He spent most of his time in Rutherglen, where his family resided.",
        .example_cn = "他大部分时间都在拉瑟格伦度过，他的家人就在那里居住。"
    },
    {
        .word = "dwell",
        .phonetic_us = "dwɛl",
        .phonetic_uk = "dwel",
        .meaning = "居住；凝思，细想",
        .example = "They dwelt in the forest.",
        .example_cn = "他们住在森林里。"
    },
    {
        .word = "induction",
        .phonetic_us = "ɪn'dʌkʃən",
        .phonetic_uk = "ɪn'dʌkʃ(ə)n",
        .meaning = "就职；归纳推理",
        .example = "Mrs Simpson is responsible for the induction of new library staff.",
        .example_cn = "辛普森太太负责图书馆新职员的入职培训。"
    },
    {
        .word = "Christ",
        .phonetic_us = "",
        .phonetic_uk = "kraɪst",
        .meaning = "救世主（耶稣基督）",
        .example = "a follower of Christ",
        .example_cn = "耶稣的门徒"
    },
    {
        .word = "symposium",
        .phonetic_us = "sɪm'pozɪəm",
        .phonetic_uk = "sɪm'pəʊzɪəm",
        .meaning = "座谈会",
        .example = "a symposium on women’s health",
        .example_cn = "女性健康研讨会"
    },
    {
        .word = "whoever",
        .phonetic_us = "hʊ'ɛvɚ",
        .phonetic_uk = "huːˈɛvə",
        .meaning = "究竟是谁",
        .example = "Whoever would do a thing like that to an old woman?",
        .example_cn = "究竟是谁会对一位老太太做出那样的事？"
    },
    {
        .word = "rectify",
        .phonetic_us = "'rɛktɪfaɪ",
        .phonetic_uk = "'rektɪfaɪ",
        .meaning = "纠正；调整",
        .example = "I did my best to rectify the situation, but the damage was already done.",
        .example_cn = "我竭尽全力去挽回局面，但损害已经造成了。"
    },
    {
        .word = "vein",
        .phonetic_us = "ven",
        .phonetic_uk = "veɪn",
        .meaning = "静脉，血管；矿脉",
        .example = "the pulmonary vein",
        .example_cn = "肺静脉"
    },
    {
        .word = "competitor",
        .phonetic_us = "kəm'pɛtɪtɚ",
        .phonetic_uk = "kəm'petɪtə",
        .meaning = "竞争者，敌手",
        .example = "Last year they sold twice as many computers as their competitors.",
        .example_cn = "去年他们的计算机销量是竞争对手的两倍。"
    },
    {
        .word = "competitive",
        .phonetic_us = "kəm'pɛtətɪv",
        .phonetic_uk = "kəm'petɪtɪv",
        .meaning = "竞争的，比赛的",
        .example = "Competitive sports encourage children to work together as a team.",
        .example_cn = "竞技体育鼓励孩子们进行团队协作。"
    },
    {
        .word = "contend",
        .phonetic_us = "kən'tɛnd",
        .phonetic_uk = "kən'tend",
        .meaning = "竞争；坚决主张",
        .example = "Inevitably, fights break out between the members of contending groups.",
        .example_cn = "争权夺利的几个团体之间不可避免地发生了打斗。"
    },
    {
        .word = "alert",
        .phonetic_us = "ə'lɝt",
        .phonetic_uk = "ə'lɜːt",
        .meaning = "警惕的",
        .example = "The animal raised its head, suddenly alert.",
        .example_cn = "那只动物突然警觉地抬起头来。"
    },
    {
        .word = "warning",
        .phonetic_us = "'wɔrnɪŋ",
        .phonetic_uk = "'wɔːnɪŋ",
        .meaning = "警告，告诫，鉴诫",
        .example = "a warning that grey squirrels are threatening the existence of red squirrels",
        .example_cn = "关于灰松鼠正威胁到红松鼠生存的警告"
    },
    {
        .word = "whale",
        .phonetic_us = "wel",
        .phonetic_uk = "weɪl",
        .meaning = "鲸",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "selection",
        .phonetic_us = "sɪ'lɛkʃən",
        .phonetic_uk = "sɪ'lekʃ(ə)n",
        .meaning = "选择；精选的东西",
        .example = "The judges have made their final selection.",
        .example_cn = "评委已经作出最后的评选。"
    },
    {
        .word = "thorough",
        .phonetic_us = "ˈθʌrəʊ; θʌro",
        .phonetic_uk = "'θʌrə",
        .meaning = "精心的；详尽的",
        .example = "The doctor gave him a thorough check-up.",
        .example_cn = "医生给他做了一次全面的体检。"
    },
    {
        .word = "finely",
        .phonetic_us = "'faɪnli",
        .phonetic_uk = "'faɪnlɪ",
        .meaning = "精细地；美好地",
        .example = "Saunders’ finely crafted drawings",
        .example_cn = "桑德斯精心绘制的画作"
    },
    {
        .word = "literary",
        .phonetic_us = "lɪtərɛri",
        .phonetic_uk = "'lɪt(ə)(rə)rɪ",
        .meaning = "文学的",
        .example = "a literary prize",
        .example_cn = "文学奖"
    },
    {
        .word = "refinery",
        .phonetic_us = "rɪ'faɪnəri",
        .phonetic_uk = "rɪ'faɪn(ə)rɪ",
        .meaning = "精炼厂，提炼厂",
        .example = "...an oil refinery.",
        .example_cn = "…一家炼油厂。"
    },
    {
        .word = "vigorous",
        .phonetic_us = "'vɪɡərəs",
        .phonetic_uk = "'vɪg(ə)rəs",
        .meaning = "精力旺盛的，茁壮的",
        .example = "a vigorous young man",
        .example_cn = "精力充沛的年轻男子"
    },
    {
        .word = "fright",
        .phonetic_us = "fraɪt",
        .phonetic_uk = "fraɪt",
        .meaning = "惊吓，恐怖",
        .example = "You gave me such a fright creeping up on me like that!",
        .example_cn = "你这样不声不响地过来，吓了我一跳！"
    },
    {
        .word = "astonishment",
        .phonetic_us = "ə'stɑnɪʃmənt",
        .phonetic_uk = "ə'stɒnɪʃmənt",
        .meaning = "惊奇，惊讶",
        .example = "She stared at him in astonishment.",
        .example_cn = "她吃惊地看着他。"
    },
    {
        .word = "dismay",
        .phonetic_us = "dɪs'me",
        .phonetic_uk = "dɪs'meɪ",
        .meaning = "惊慌，沮丧，灰心",
        .example = "The thought of leaving filled him with dismay .",
        .example_cn = "想到要离开，他心里充满了忧伤。"
    },
    {
        .word = "empirical",
        .phonetic_us = "ɪm'pɪrɪkl",
        .phonetic_uk = "em'pɪrɪk(ə)l; ɪm-",
        .meaning = "经验主义的",
        .example = "empirical evidence",
        .example_cn = "实验证据"
    },
    {
        .word = "longitude",
        .phonetic_us = "'lɑndʒətud",
        .phonetic_uk = "'lɒn(d)ʒɪtjuːd; 'lɒŋgɪ-",
        .meaning = "经线，经度",
        .example = "The town lies at longitude 12˚ east.",
        .example_cn = "这个镇位于东经12度。"
    },
    {
        .word = "support",
        .phonetic_us = "sə'pɔrt",
        .phonetic_uk = "sə'pɔːt",
        .meaning = "经受，承受",
        .example = "The middle part of the bridge is supported by two huge towers.",
        .example_cn = "桥的中部由两个巨型桥塔支撑。"
    },
    {
        .word = "economics",
        .phonetic_us = "'ikə'nɑmɪks; 'ɛkə'nɑmɪks",
        .phonetic_uk = "iːkə'nɒmɪks; ek-",
        .meaning = "经济学；经济",
        .example = "a Harvard professor of economics",
        .example_cn = "哈佛大学的经济学教授"
    },
    {
        .word = "prohibition",
        .phonetic_us = ",proə'bɪʃən",
        .phonetic_uk = ",prəʊhɪ'bɪʃ(ə)n; prəʊɪ-",
        .meaning = "禁止；禁令，禁律",
        .example = "the prohibition of the sale of firearms",
        .example_cn = "枪支的禁售"
    },
    {
        .word = "shortcut",
        .phonetic_us = "'ʃɔrt,kʌt",
        .phonetic_uk = "'ʃɔːtkʌt",
        .meaning = "近路；捷径",
        .example = "I tried to take a shortcut and got lost.",
        .example_cn = "我试着走近路，结果迷路了。"
    },
    {
        .word = "inlet",
        .phonetic_us = "ɪnˌlɛt",
        .phonetic_uk = "'ɪnlet",
        .meaning = "水湾；进口",
        .example = "There are several sheltered inlets along the coast.",
        .example_cn = "沿着海岸线有几处有天然屏障的水湾。"
    },
    {
        .word = "perfection",
        .phonetic_us = "pɚ'fɛkʃən",
        .phonetic_uk = "pə'fekʃ(ə)n",
        .meaning = "尽善尽美；无比精确",
        .example = "My father expected perfection from all of us.",
        .example_cn = "父亲期望我们都尽善尽美。"
    },
    {
        .word = "notwithstanding",
        .phonetic_us = ",nɑtwɪθ'stændɪŋ",
        .phonetic_uk = "nɒtwɪð'stændɪŋ; -wɪθ-",
        .meaning = "尽管，虽然",
        .example = "Notwithstanding differences, there are clear similarities in all of the world’s religions.",
        .example_cn = "世界上的宗教尽管各不相同，但都有明显的相似之处。"
    },
    {
        .word = "prudent",
        .phonetic_us = "'prʊdnt",
        .phonetic_uk = "'pruːd(ə)nt",
        .meaning = "谨慎的；精明的",
        .example = "prudent house buyers",
        .example_cn = "谨慎的购房者"
    },
    {
        .word = "compact",
        .phonetic_us = "'kɑmpækt",
        .phonetic_uk = "kəm'pækt",
        .meaning = "紧密的",
        .example = "The bushes grew in a compact mass.",
        .example_cn = "灌木长成茂密的一片。"
    },
    {
        .word = "tightly",
        .phonetic_us = "'taɪtli",
        .phonetic_uk = "'taɪtlɪ",
        .meaning = "紧地，牢固地",
        .example = "Her eyes were tightly closed.",
        .example_cn = "她的双眼紧闭着。"
    },
    {
        .word = "barely",
        .phonetic_us = "'bɛrli",
        .phonetic_uk = "'beəlɪ",
        .meaning = "勉强；仅仅",
        .example = "She was very old and barely able to walk.",
        .example_cn = "她年纪非常大，只能勉强走几步路。"
    },
    {
        .word = "metallic",
        .phonetic_us = "mə'tælɪk",
        .phonetic_uk = "mɪ'tælɪk",
        .meaning = "金属的",
        .example = "metallic particles",
        .example_cn = "金属微粒"
    },
    {
        .word = "tuna",
        .phonetic_us = "'tunə",
        .phonetic_uk = "'tjuːnə",
        .meaning = "金枪鱼",
        .example = "...a shoal of tuna.",
        .example_cn = "…一群金枪鱼。"
    },
    {
        .word = "henceforth",
        .phonetic_us = ",hɛns'fɔrθ",
        .phonetic_uk = "hens'fɔːθ; 'hensfɔːθ",
        .meaning = "今后，从今以后",
        .example = "multiple sclerosis (henceforth referred to as MS)",
        .example_cn = "多发性硬化（以下称为MS）"
    },
    {
        .word = "mustard",
        .phonetic_us = "'mʌstɚd",
        .phonetic_uk = "'mʌstəd",
        .meaning = "芥子，芥末",
        .example = "a jar of mustard",
        .example_cn = "一罐芥末酱"
    },
    {
        .word = "presentation",
        .phonetic_us = ",prizɛn'teʃən",
        .phonetic_uk = "prez(ə)n'teɪʃ(ə)n",
        .meaning = "介绍；呈现",
        .example = "I’m going to ask each of you to make a short presentation.",
        .example_cn = "我要请你们每一位作一个简短的介绍。"
    },
    {
        .word = "interpret",
        .phonetic_us = "ɪn'tɝprɪt",
        .phonetic_uk = "ɪn'tɜːprɪt",
        .meaning = "口译；解释",
        .example = "They spoke good Spanish, and promised to interpret for me.",
        .example_cn = "他们西班牙语说得很好，答应替我翻译。"
    },
    {
        .word = "version",
        .phonetic_us = "'vɝʒn",
        .phonetic_uk = "'vɜːʃ(ə)n",
        .meaning = "解释",
        .example = "Is the coffee break the adult version of recess?",
        .example_cn = "工间喝咖啡是成人的休息方式吗？"
    },
    {
        .word = "untie",
        .phonetic_us = "ʌn'taɪ",
        .phonetic_uk = "ʌn'taɪ",
        .meaning = "解开，松开；解放",
        .example = "Peter untied his shoelaces.",
        .example_cn = "彼得解开鞋带。"
    },
    {
        .word = "tackle",
        .phonetic_us = "'tækl",
        .phonetic_uk = "'tæk(ə)l",
        .meaning = "解决，对付",
        .example = "There is more than one way to tackle the problem.",
        .example_cn = "解决这个问题不止一个办法。"
    },
    {
        .word = "dissolve",
        .phonetic_us = "dɪ'zɑlv",
        .phonetic_uk = "dɪ'zɒlv",
        .meaning = "解除（婚约等）",
        .example = "The monarch had the power to dissolve parliament.",
        .example_cn = "君主有权解散议会。"
    },
    {
        .word = "tuberculosis",
        .phonetic_us = "tʊ'bɝkjə'losɪs",
        .phonetic_uk = "tjʊ,bɜːkjʊ'ləʊsɪs",
        .meaning = "结核病，肺结核",
        .example = "She was infected with tuberculosis.",
        .example_cn = "她被传染上了肺结核。"
    },
    {
        .word = "incorporate",
        .phonetic_us = "",
        .phonetic_uk = "ɪn'kɔːpəreɪt",
        .meaning = "结合，合并，收编",
        .example = "We’ve incorporated many environmentally friendly features into the design of the building.",
        .example_cn = "我们在这座建筑的设计中加进了许多环保元素。"
    },
    {
        .word = "construction",
        .phonetic_us = "kən'strʌkʃən",
        .phonetic_uk = "kən'strʌkʃ(ə)n",
        .meaning = "建筑结构",
        .example = "The houses were partly timber in construction.",
        .example_cn = "这些房子有些部分是木结构的。"
    },
    {
        .word = "economically",
        .phonetic_us = ",ikə'nɑmɪkli",
        .phonetic_uk = "iːkə'nɒmɪklɪ",
        .meaning = "在经济上；节约地",
        .example = "In economically advanced countries, women marry later.",
        .example_cn = "在经济发达国家，女性结婚比较晚。"
    },
    {
        .word = "abbreviation",
        .phonetic_us = "əˌbrivɪ'eʃən",
        .phonetic_uk = "əbriːvɪ'eɪʃ(ə)n",
        .meaning = "节略，缩写，缩短",
        .example = "‘Dr’ is the written abbreviation of ‘Doctor’.",
        .example_cn = "Dr是Doctor的书面缩写形式。"
    },
    {
        .word = "thrifty",
        .phonetic_us = "'θrɪfti",
        .phonetic_uk = "'θrɪftɪ",
        .meaning = "节俭的",
        .example = "hard-working, thrifty people",
        .example_cn = "勤劳节俭的人们"
    },
    {
        .word = "interview",
        .phonetic_us = "'ɪntɚvju",
        .phonetic_uk = "'ɪntəvjuː",
        .meaning = "接见，会见，会谈",
        .example = "a police interview",
        .example_cn = "警方问讯"
    },
    {
        .word = "receiver",
        .phonetic_us = "rɪ'sivɚ",
        .phonetic_uk = "rɪ'siːvə",
        .meaning = "接待者；收受者",
        .example = "Molly's more of a giver than a receiver.",
        .example_cn = "莫莉更乐于给予而不是接受。"
    },
    {
        .word = "yeast",
        .phonetic_us = "jist",
        .phonetic_uk = "jiːst",
        .meaning = "酵母",
        .example = "dried/fresh yeast",
        .example_cn = "干／新鲜酵母"
    },
    {
        .word = "doctrine",
        .phonetic_us = "'dɑktrɪn",
        .phonetic_uk = "'dɒktrɪn",
        .meaning = "教义，主义；学说",
        .example = "traditional doctrines of divine power",
        .example_cn = "神力的传统教义"
    },
    {
        .word = "tutor",
        .phonetic_us = "'tʊtɚ",
        .phonetic_uk = "'tjuːtə",
        .meaning = "教，指导",
        .example = "He was privately tutored.",
        .example_cn = "他是由家庭教师教的。"
    },
    {
        .word = "disillusion",
        .phonetic_us = ",dɪsɪ'luʒn",
        .phonetic_uk = ",dɪsɪ'l(j)uːʒ(ə)n",
        .meaning = "觉醒，使觉醒",
        .example = "I hate to disillusion you, but I don’t think she’s coming back.",
        .example_cn = "我真不愿意让你失望，但我想她是不会回来了。"
    },
    {
        .word = "horn",
        .phonetic_us = "hɔrn",
        .phonetic_uk = "hɔːn",
        .meaning = "角状物；喇叭形物",
        .example = "a wind-up gramophone with a big horn",
        .example_cn = "带有一个大喇叭形扬声器的发条式留声机"
    },
    {
        .word = "reef",
        .phonetic_us = "rif",
        .phonetic_uk = "riːf",
        .meaning = "礁，礁石，暗礁",
        .example = "a proposal to protect several miles of thousand-year-old coral reef",
        .example_cn = "保护绵延数英里的千年古珊瑚礁的提案"
    },
    {
        .word = "coke",
        .phonetic_us = "kok",
        .phonetic_uk = "kəʊk",
        .meaning = "焦炭",
        .example = "...a coke-burning stove.",
        .example_cn = "…一个烧焦炭的炉子。"
    },
    {
        .word = "symphony",
        .phonetic_us = "'sɪmfəni",
        .phonetic_uk = "'sɪmf(ə)nɪ",
        .meaning = "交响乐；交响乐团",
        .example = "Bruckner’s Fifth Symphony",
        .example_cn = "布鲁克纳的《第五交响曲》"
    },
    {
        .word = "intercourse",
        .phonetic_us = "'ɪntɚkɔrs",
        .phonetic_uk = "'ɪntəkɔːs",
        .meaning = "交际，往来，交流",
        .example = "social intercourse",
        .example_cn = "社交"
    },
    {
        .word = "soy",
        .phonetic_us = "sɔɪ",
        .phonetic_uk = "sɒɪ",
        .meaning = "大豆，黄豆；酱油",
        .example = "\"I just added a little soy sauce,\" he informs us.",
        .example_cn = "“我就加了一点儿酱油，”他告诉我们。"
    },
    {
        .word = "parachute",
        .phonetic_us = "'pærə'ʃʊt",
        .phonetic_uk = "'pærəʃuːt",
        .meaning = "降落伞",
        .example = "a parachute jump",
        .example_cn = "跳伞"
    },
    {
        .word = "degradation",
        .phonetic_us = ",dɛɡrə'deʃən",
        .phonetic_uk = ",degrə'deɪʃ(ə)n",
        .meaning = "降级；退化；衰变",
        .example = "...air pollution, traffic congestion, and the steady degradation of our quality of life.",
        .example_cn = "…空气污染、交通阻塞以及我们生活质量的持续恶化。"
    },
    {
        .word = "oar",
        .phonetic_us = "ɔr",
        .phonetic_uk = "ɔː",
        .meaning = "桨",
        .example = "He pulled as hard as he could on the oars.",
        .example_cn = "他拼命地划桨。"
    },
    {
        .word = "discourse",
        .phonetic_us = "'dɪskɔrs",
        .phonetic_uk = "'dɪskɔːs; -'kɔːs",
        .meaning = "讲话，演说，讲道",
        .example = "a discourse on art",
        .example_cn = "有关艺术的演讲"
    },
    {
        .word = "ginger",
        .phonetic_us = "'dʒɪndʒɚ",
        .phonetic_uk = "'dʒɪndʒə",
        .meaning = "姜，生姜",
        .example = "a teaspoon of ground ginger",
        .example_cn = "一茶匙姜粉"
    },
    {
        .word = "splash",
        .phonetic_us = "splæʃ",
        .phonetic_uk = "splæʃ",
        .meaning = "溅泼；泼水",
        .example = "Water splashed onto the floor.",
        .example_cn = "水哗的一声泼洒在地板上。"
    },
    {
        .word = "architect",
        .phonetic_us = "'ɑrkɪtɛkt",
        .phonetic_uk = "'ɑːkɪtekt",
        .meaning = "建筑师；创造者",
        .example = "They commissioned an architect to design the new library.",
        .example_cn = "他们委托一位建筑师设计这座新图书馆。"
    },
    {
        .word = "theory",
        .phonetic_us = "'θiəri",
        .phonetic_uk = "'θɪərɪ",
        .meaning = "（未证明的）见解，看法，推测",
        .example = "I have this theory that most people prefer being at work to being at home.",
        .example_cn = "依我看，多数人喜欢工作而不愿待在家里。"
    },
    {
        .word = "clip",
        .phonetic_us = "klɪp",
        .phonetic_uk = "klɪp",
        .meaning = "剪；剪辑报刊",
        .example = "The hedges had just been clipped.",
        .example_cn = "树篱刚修剪过。"
    },
    {
        .word = "diminish",
        .phonetic_us = "dɪ'mɪnɪʃ",
        .phonetic_uk = "dɪ'mɪnɪʃ",
        .meaning = "减少，减小",
        .example = "The party’s share of the electorate has diminished steadily.",
        .example_cn = "支持这个政党的选民比例持续下降。"
    },
    {
        .word = "lessen",
        .phonetic_us = "'lɛsn",
        .phonetic_uk = "'les(ə)n",
        .meaning = "减少，变少",
        .example = "Gradually her anxiety lessened.",
        .example_cn = "她的焦虑慢慢减轻了。"
    },
    {
        .word = "inspector",
        .phonetic_us = "ɪn'spɛktɚ",
        .phonetic_uk = "ɪn'spektə",
        .meaning = "检查员；巡官",
        .example = "ticket inspectors",
        .example_cn = "查票员"
    },
    {
        .word = "reserve",
        .phonetic_us = "rɪ'zɝv",
        .phonetic_uk = "rɪ'zɜːv",
        .meaning = "缄默，自我克制",
        .example = "She overcame her own natural reserve.",
        .example_cn = "她克服了沉默寡言的天性。"
    },
    {
        .word = "challenge",
        .phonetic_us = "'tʃælɪndʒ",
        .phonetic_uk = "'tʃælɪn(d)ʒ",
        .meaning = "艰巨任务",
        .example = "The role will be the biggest challenge of his acting career.",
        .example_cn = "扮演这个角色将是他演艺生涯中最大的挑战。"
    },
    {
        .word = "enterprise",
        .phonetic_us = "'ɛntɚ'praɪz",
        .phonetic_uk = "'entəpraɪz",
        .meaning = "艰巨的事业；事业心",
        .example = "The programme is a joint enterprise with the London Business School.",
        .example_cn = "这一计划是与伦敦商学院的合作项目。"
    },
    {
        .word = "resolute",
        .phonetic_us = "'rɛzəlut",
        .phonetic_uk = "'rezəluːt",
        .meaning = "坚决的，果敢的",
        .example = "resolute opposition",
        .example_cn = "坚决的反对"
    },
    {
        .word = "firmness",
        .phonetic_us = "'fɝmnɪs",
        .phonetic_uk = "'fɜ:mnɪs",
        .meaning = "坚固，坚定，稳固",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "sturdy",
        .phonetic_us = "'stɝdi",
        .phonetic_uk = "'stɜːdɪ",
        .meaning = "牢固的；坚定的",
        .example = "That chair doesn’t look very sturdy.",
        .example_cn = "那把椅子看上去不太结实。"
    },
    {
        .word = "steady",
        .phonetic_us = "'stɛdi",
        .phonetic_uk = "'stedɪ",
        .meaning = "稳定的，扎实的",
        .example = "It takes a steady hand to perform surgery.",
        .example_cn = "做手术手要稳。"
    },
    {
        .word = "stability",
        .phonetic_us = "stə'bɪləti",
        .phonetic_uk = "stə'bɪlɪtɪ",
        .meaning = "稳定",
        .example = "a period of relative stability",
        .example_cn = "相对稳定的一段时期"
    },
    {
        .word = "insistent",
        .phonetic_us = "ɪn'sɪstənt",
        .phonetic_uk = "ɪn'sɪst(ə)nt",
        .meaning = "坚持的",
        .example = "She was insistent that they should all meet for dinner.",
        .example_cn = "她坚持要大家聚在一起吃晚餐。"
    },
    {
        .word = "persistence",
        .phonetic_us = "pɚ'sɪstəns",
        .phonetic_uk = "pə'sɪst(ə)ns",
        .meaning = "坚持；持续，存留",
        .example = "Her persistence paid off when she was offered the job of manager.",
        .example_cn = "她得到了经理的职位，不懈坚持终于有了回报。"
    },
    {
        .word = "persevere",
        .phonetic_us = ",pɝsə'vɪr",
        .phonetic_uk = "pɜːsɪ'vɪə",
        .meaning = "坚持，不屈不挠",
        .example = "It can be tricky at first, but persevere.",
        .example_cn = "一开始会有些棘手，不过要坚持。"
    },
    {
        .word = "shrill",
        .phonetic_us = "ʃrɪl",
        .phonetic_uk = "ʃrɪl",
        .meaning = "尖声的",
        .example = "‘That’s not true,’ she protested in a shrill voice.",
        .example_cn = "“不是这样的。”她尖声抗议道。"
    },
    {
        .word = "bridge",
        .phonetic_us = "brɪdʒ",
        .phonetic_uk = "brɪdʒ",
        .meaning = "架桥于，用桥连接",
        .example = "a fallen tree bridging the stream",
        .example_cn = "倒下来架在小溪上的树"
    },
    {
        .word = "rate",
        .phonetic_us = "ret",
        .phonetic_uk = "reɪt",
        .meaning = "价格",
        .example = "$20 an hour is the going rate (= the usual amount paid ) for private tuition.",
        .example_cn = "每小时20美元是私人授课的一般收费。"
    },
    {
        .word = "hypothesis",
        .phonetic_us = "haɪ'pɑθəsɪs",
        .phonetic_uk = "haɪ'pɒθɪsɪs",
        .meaning = "假设；前提",
        .example = "One hypothesis is that the victim fell asleep while driving.",
        .example_cn = "一种假设是受害人开车时睡着了。"
    },
    {
        .word = "sham",
        .phonetic_us = "ʃæm",
        .phonetic_uk = "ʃæm",
        .meaning = "假冒；膺品",
        .example = "The elections were a complete sham.",
        .example_cn = "这次大选完全是一场骗局。"
    },
    {
        .word = "fake",
        .phonetic_us = "feɪk",
        .phonetic_uk = "feɪk",
        .meaning = "假货，膺品",
        .example = "The painting was judged a fake.",
        .example_cn = "这幅画被鉴定为赝品。"
    },
    {
        .word = "presume",
        .phonetic_us = "prɪ'zum",
        .phonetic_uk = "prɪ'zjuːm",
        .meaning = "假定，假设，揣测",
        .example = "I presume you're here on business.",
        .example_cn = "我想你是来这儿出差的吧。"
    },
    {
        .word = "beetle",
        .phonetic_us = "",
        .phonetic_uk = "'biːt(ə)l",
        .meaning = "甲虫",
        .example = "a black beetle",
        .example_cn = "黑甲虫"
    },
    {
        .word = "clamp",
        .phonetic_us = "klæmp",
        .phonetic_uk = "klæmp",
        .meaning = "夹住，夹紧",
        .example = "She clamped her hands over her ears.",
        .example_cn = "她用手紧紧地捂住耳朵。"
    },
    {
        .word = "sandwich",
        .phonetic_us = "'sænwɪtʃ",
        .phonetic_uk = "'sæn(d)wɪdʒ; -wɪtʃ",
        .meaning = "夹入，挤进",
        .example = "Carefully split the sponge ring, then sandwich the two halves together with whipped cream.",
        .example_cn = "小心地切开海绵蛋糕圈，然后在两半中间夹上生奶油。"
    },
    {
        .word = "homely",
        .phonetic_us = "'homli",
        .phonetic_uk = "'həʊmlɪ",
        .meaning = "家常的",
        .example = "homely cooking",
        .example_cn = "家常烹调"
    },
    {
        .word = "fowl",
        .phonetic_us = "faʊl",
        .phonetic_uk = "faʊl",
        .meaning = "家禽；禽肉",
        .example = "Carve the fowl into 8 pieces.",
        .example_cn = "将这只家禽切成8块。"
    },
    {
        .word = "poultry",
        .phonetic_us = "'poltri",
        .phonetic_uk = "'pəʊltrɪ",
        .meaning = "家禽",
        .example = "...a poultry farm.",
        .example_cn = "…一个家禽饲养场。"
    },
    {
        .word = "heater",
        .phonetic_us = "'hitɚ",
        .phonetic_uk = "'hiːtə",
        .meaning = "加热器",
        .example = "Did you turn the heater off?",
        .example_cn = "你关掉加热器了吗？"
    },
    {
        .word = "deepen",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "（使色泽等）加浓",
        .example = "deepening shadows",
        .example_cn = "越来越暗的阴影"
    },
    {
        .word = "heighten",
        .phonetic_us = "'haɪtn",
        .phonetic_uk = "'haɪt(ə)n",
        .meaning = "加高，提高；增加",
        .example = "There are fears that the march will heighten racial tension.",
        .example_cn = "有人担心这次游行会加深种族间的紧张局势。"
    },
    {
        .word = "line",
        .phonetic_us = "laɪn",
        .phonetic_uk = "laɪn",
        .meaning = "加衬里于",
        .example = "Are those curtains lined?",
        .example_cn = "那些窗帘加衬里了吗？"
    },
    {
        .word = "stillness",
        .phonetic_us = "'stɪlnəs",
        .phonetic_uk = "'stɪlnɪs",
        .meaning = "寂静，无声",
        .example = "The sound of footsteps on the path broke the stillness.",
        .example_cn = "小路上的脚步声打破了宁静。"
    },
    {
        .word = "lodging",
        .phonetic_us = "'lɑdʒɪŋ",
        .phonetic_uk = "'lɒdʒɪŋ",
        .meaning = "寄宿，住宿；住所",
        .example = "It’s £90 a week for board and lodging (= meals and a room ).",
        .example_cn = "食宿费每周90英镑。"
    },
    {
        .word = "successor",
        .phonetic_us = "sək'sɛsɚ",
        .phonetic_uk = "sək'sesə",
        .meaning = "继承人，继任者",
        .example = "His successor died after only 15 months in office.",
        .example_cn = "他的继任者就任仅15个月就去世了。"
    },
    {
        .word = "succession",
        .phonetic_us = "sək'sɛʃən",
        .phonetic_uk = "sək'seʃ(ə)n",
        .meaning = "继承（权）",
        .example = "If the prince dies, the succession passes to his son.",
        .example_cn = "王子如果去世，就由他的儿子继承。"
    },
    {
        .word = "quarterly",
        .phonetic_us = "'kwɔrtɚli",
        .phonetic_uk = "'kwɔːtəlɪ",
        .meaning = "季度的（地）",
        .example = "We publish a quarterly journal.",
        .example_cn = "我们出版一份季刊。"
    },
    {
        .word = "craft",
        .phonetic_us = "kræft",
        .phonetic_uk = "krɑːft",
        .meaning = "技巧",
        .example = "The musician spends years perfecting his craft.",
        .example_cn = "这位音乐家多年来不断提高自己的艺术造诣。"
    },
    {
        .word = "souvenir",
        .phonetic_us = ",suvə'nɪr",
        .phonetic_uk = ",suːvə'nɪə",
        .meaning = "纪念品",
        .example = "a souvenir shop",
        .example_cn = "纪念品商店"
    },
    {
        .word = "documentary",
        .phonetic_us = "'dɑkjə'mɛntri",
        .phonetic_uk = "dɒkjʊ'ment(ə)rɪ",
        .meaning = "纪录的；文献的",
        .example = "documentary films",
        .example_cn = "纪录影片"
    },
    {
        .word = "marginal",
        .phonetic_us = "'mɑrdʒɪnl",
        .phonetic_uk = "'mɑːdʒɪn(ə)l",
        .meaning = "边缘的；记在页边的",
        .example = "marginal groups in society",
        .example_cn = "社会中的非主流群体"
    },
    {
        .word = "terminal",
        .phonetic_us = "ˈtɜːrmɪnl",
        .phonetic_uk = "'tɜːmɪn(ə)l",
        .meaning = "计算机终端；线接头",
        .example = "Carl sits at a computer terminal 40 hours a week.",
        .example_cn = "卡尔每周要在电脑前坐40小时。"
    },
    {
        .word = "scheme",
        .phonetic_us = "skim",
        .phonetic_uk = "skiːm",
        .meaning = "计划，搞阴谋",
        .example = "Everyone's always scheming and plotting.",
        .example_cn = "每个人时刻都在算计和谋划。"
    },
    {
        .word = "geometrical",
        .phonetic_us = "dʒɪə'mɛtrɪkl",
        .phonetic_uk = "dʒɪə'metrɪkl",
        .meaning = "几何学的",
        .example = "geometrical progression",
        .example_cn = "几何级数"
    },
    {
        .word = "bazaar",
        .phonetic_us = "bə'zɑr",
        .phonetic_uk = "bə'zɑː",
        .meaning = "集市，廉价商店",
        .example = "Kamal was a vendor in Cairo's open-air bazaar.",
        .example_cn = "卡莫尔曾是开罗露天集市的摊贩。"
    },
    {
        .word = "gathering",
        .phonetic_us = "'ɡæðərɪŋ",
        .phonetic_uk = "'gæð(ə)rɪŋ",
        .meaning = "集会，聚会，聚集",
        .example = "a select gathering of 20 or 30 people",
        .example_cn = "二三十名特邀人士的聚会"
    },
    {
        .word = "set",
        .phonetic_us = "sɛt",
        .phonetic_uk = "set",
        .meaning = "集（合）",
        .example = "The set (x, y) has two members.",
        .example_cn = "（x, y）这个集里有两个项。"
    },
    {
        .word = "disorder",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "疾病，小病",
        .example = "severe eating disorders such as bulimia and anorexia",
        .example_cn = "像贪食症和厌食症这类严重的进食障碍"
    },
    {
        .word = "complaint",
        .phonetic_us = "kəm'plent",
        .phonetic_uk = "kəm'pleɪnt",
        .meaning = "疾病，病痛",
        .example = "He is having treatment for a chest complaint.",
        .example_cn = "他在接受胸部疾病的治疗。"
    },
    {
        .word = "forthcoming",
        .phonetic_us = ",fɔrθ'kʌmɪŋ",
        .phonetic_uk = "fɔːθ'kʌmɪŋ",
        .meaning = "即将到来的；现成的",
        .example = "the forthcoming elections",
        .example_cn = "即将到来的选举"
    },
    {
        .word = "polarity",
        .phonetic_us = "pə'lærəti",
        .phonetic_uk = "pə(ʊ)'lærɪtɪ",
        .meaning = "（人、意见或观念的）截然相反，截然对立；极性",
        .example = "...the polarities of good and evil.",
        .example_cn = "..善与恶的截然对立。"
    },
    {
        .word = "extreme",
        .phonetic_us = "ɪk'strim",
        .phonetic_uk = "ɪk'striːm; ek-",
        .meaning = "极端不同的性质",
        .example = "In fact, the truth lies between the two extremes.",
        .example_cn = "事实上，真理存在于两个极端之间。"
    },
    {
        .word = "guitar",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "吉他，六弦琴",
        .example = "an acoustic/an electric/a classical, etc. guitar",
        .example_cn = "原声吉他、电吉他、古典吉他等"
    },
    {
        .word = "timely",
        .phonetic_us = "'taɪmli",
        .phonetic_uk = "'taɪmlɪ",
        .meaning = "及时的；适时的",
        .example = "The fight ended only with the timely arrival of the police.",
        .example_cn = "幸亏警察及时赶到，打斗总算停止。"
    },
    {
        .word = "irritate",
        .phonetic_us = "'ɪrɪtet",
        .phonetic_uk = "'ɪrɪteɪt",
        .meaning = "激怒；引起不愉快",
        .example = "It really irritates me when he doesn’t help around the house.",
        .example_cn = "家里的事情他一点都不帮忙，真让我恼火。"
    },
    {
        .word = "drastic",
        .phonetic_us = "'dræstɪk",
        .phonetic_uk = "'dræstɪk; 'drɑː-",
        .meaning = "激烈的；严厉的",
        .example = "drastic cuts in government spending",
        .example_cn = "政府开支的急剧削减"
    },
    {
        .word = "severe",
        .phonetic_us = "sɪ'vɪr",
        .phonetic_uk = "sɪ'vɪə",
        .meaning = "艰难的；简朴的",
        .example = "The negotiations will be a severe test of his abilities.",
        .example_cn = "这次谈判将是对他能力的严峻考验。"
    },
    {
        .word = "Christian",
        .phonetic_us = "'krɪstʃən",
        .phonetic_uk = "'krɪstɪən; -tʃ(ə)n",
        .meaning = "基督教的",
        .example = "the Christian religion",
        .example_cn = "基督教"
    },
    {
        .word = "elemental",
        .phonetic_us = ",ɛlɪ'mɛntl",
        .phonetic_uk = ",elɪ'ment(ə)l",
        .meaning = "基本的；自然力的",
        .example = "Love and fear are two of the most elemental human emotions.",
        .example_cn = "爱和恐惧是人类最基本的两种情感。"
    },
    {
        .word = "radical",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "基本的；激进的",
        .example = "the need for radical changes in education",
        .example_cn = "对教育进行彻底变革的需要"
    },
    {
        .word = "ultimate",
        .phonetic_us = "'ʌltəmət",
        .phonetic_uk = "'ʌltɪmət",
        .meaning = "首要的；基本的",
        .example = "Complete disarmament was the ultimate goal of the conference.",
        .example_cn = "全面裁军是这次会议的最终目标。"
    },
    {
        .word = "energetic",
        .phonetic_us = ",ɛnɚ'dʒɛtɪk",
        .phonetic_uk = ",enə'dʒetɪk",
        .meaning = "积极的；精力旺盛的",
        .example = "an energetic man",
        .example_cn = "精力旺盛的男子"
    },
    {
        .word = "muscular",
        .phonetic_us = "'mʌskjəlɚ",
        .phonetic_uk = "'mʌskjʊlə",
        .meaning = "肌肉发达的，强健的",
        .example = "She was fast and strong, with a slender, muscular body.",
        .example_cn = "她动作敏捷，身体强壮，身材苗条，肌肉结实。"
    },
    {
        .word = "witty",
        .phonetic_us = "'wɪti",
        .phonetic_uk = "'wɪtɪ",
        .meaning = "机智的；风趣的",
        .example = "witty remarks",
        .example_cn = "妙语"
    },
    {
        .word = "mechanism",
        .phonetic_us = "'mɛkənɪzəm",
        .phonetic_uk = "'mek(ə)nɪz(ə)m",
        .meaning = "机械装置；机制",
        .example = "the brake mechanism",
        .example_cn = "刹车装置"
    },
    {
        .word = "tact",
        .phonetic_us = "tækt",
        .phonetic_uk = "tækt",
        .meaning = "机敏，圆滑，得体",
        .example = "With great tact, Clive persuaded her to apologize.",
        .example_cn = "克莱夫十分巧妙地说服了她去道歉。"
    },
    {
        .word = "ingenious",
        .phonetic_us = "ɪn'dʒinɪəs",
        .phonetic_uk = "ɪn'dʒiːnɪəs",
        .meaning = "精巧制成的；机灵的",
        .example = "an ingenious device",
        .example_cn = "精巧的装置"
    },
    {
        .word = "ingenuity",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "机灵；设计新颖",
        .example = "Inspecting the nest can be difficult and may require some ingenuity.",
        .example_cn = "仔细检查鸟巢可能有困难，也许需要一些巧妙的心思。"
    },
    {
        .word = "framework",
        .phonetic_us = "'fremwɝk",
        .phonetic_uk = "'freɪmwɜːk",
        .meaning = "体制",
        .example = "We need to establish a legal framework for the protection of the environment.",
        .example_cn = "我们需要建立一个法律体制来保护环境。"
    },
    {
        .word = "fence",
        .phonetic_us = "fɛns",
        .phonetic_uk = "fens",
        .meaning = "击剑（术），击剑",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "stall",
        .phonetic_us = "stɔl",
        .phonetic_uk = "stɔːl",
        .meaning = "货摊，书摊；马厩",
        .example = "a market stall",
        .example_cn = "市场摊位"
    },
    {
        .word = "fellowship",
        .phonetic_us = "'fɛloʃɪp",
        .phonetic_uk = "'felə(ʊ)ʃɪp",
        .meaning = "伙伴关系；联谊会",
        .example = "Regular outings contribute to a sense of fellowship among co-workers.",
        .example_cn = "经常外出游玩可以增进同事之间的友谊。"
    },
    {
        .word = "Mars",
        .phonetic_us = "mɑrz",
        .phonetic_uk = "mɑːz",
        .meaning = "火星",
        .example = "the enormous volcanoes known to exist on Mars",
        .example_cn = "已知在火星上存在的大量火山"
    },
    {
        .word = "ham",
        .phonetic_us = "hæm",
        .phonetic_uk = "hæm",
        .meaning = "火腿",
        .example = "a ham sandwich",
        .example_cn = "火腿三明治"
    },
    {
        .word = "piston",
        .phonetic_us = "'pɪstən",
        .phonetic_uk = "'pɪst(ə)n",
        .meaning = "活塞",
        .example = "The piston moves by steam pressure.",
        .example_cn = "活塞在蒸汽压力下运动。"
    },
    {
        .word = "vigour",
        .phonetic_us = "'viɡə",
        .phonetic_uk = "'vɪgə",
        .meaning = "活力，精力；元气",
        .example = "He began working with renewed vigour.",
        .example_cn = "他以更加旺盛的精力开始工作。"
    },
    {
        .word = "cloudy",
        .phonetic_us = "'klaʊdi",
        .phonetic_uk = "'klaʊdɪ",
        .meaning = "混浊的；模糊不清的",
        .example = "a rather cloudy wine",
        .example_cn = "相当浑浊的葡萄酒"
    },
    {
        .word = "mixer",
        .phonetic_us = "'mɪksɚ",
        .phonetic_uk = "'mɪksə",
        .meaning = "搅拌器",
        .example = "an electric food mixer",
        .example_cn = "电动食品搅拌器"
    },
    {
        .word = "engagement",
        .phonetic_us = "ɪn'ɡedʒmənt",
        .phonetic_uk = "ɪn'geɪdʒm(ə)nt; en-",
        .meaning = "婚约；约会",
        .example = "Their engagement was announced in the paper.",
        .example_cn = "他们订婚的消息在报上公布了。"
    },
    {
        .word = "bribe",
        .phonetic_us = "braɪb",
        .phonetic_uk = "braɪb",
        .meaning = "贿赂",
        .example = "The officials said that they had been offered bribes before an important game.",
        .example_cn = "这几名官员说，有人在一场重要比赛之前向他们行贿。"
    },
    {
        .word = "corrupt",
        .phonetic_us = "kə'rʌpt",
        .phonetic_uk = "kə'rʌpt",
        .meaning = "使腐化",
        .example = "Young prisoners are being corrupted by the older, long-term offenders.",
        .example_cn = "年轻的囚犯正在被年纪较大、刑期长的犯人带坏。"
    },
    {
        .word = "response",
        .phonetic_us = "rɪ'spɑns",
        .phonetic_uk = "rɪ'spɒns",
        .meaning = "回应",
        .example = "Carl made no response, and carried on with his meal.",
        .example_cn = "卡尔没有回答，继续吃饭。"
    },
    {
        .word = "badge",
        .phonetic_us = "bædʒ",
        .phonetic_uk = "bædʒ",
        .meaning = "徽章，像章；标志",
        .example = "We were each handed a badge with our name on it.",
        .example_cn = "我们每个人都拿到一个徽章，上面有我们的名字。"
    },
    {
        .word = "wield",
        .phonetic_us = "wild",
        .phonetic_uk = "wiːld",
        .meaning = "挥（剑）；行使",
        .example = "He was attacked by a man wielding a knife.",
        .example_cn = "他遭到一名持刀男子的袭击。"
    },
    {
        .word = "locust",
        .phonetic_us = "'lokəst",
        .phonetic_uk = "'ləʊkəst",
        .meaning = "蝗虫",
        .example = "a swarm of locusts",
        .example_cn = "一大群蝗虫"
    },
    {
        .word = "wasp",
        .phonetic_us = "wɑsp",
        .phonetic_uk = "wɒsp",
        .meaning = "黄蜂",
        .example = "a wasp sting",
        .example_cn = "黄蜂蜇伤"
    },
    {
        .word = "royalty",
        .phonetic_us = "'rɔɪəlti",
        .phonetic_uk = "'rɒɪəltɪ",
        .meaning = "皇家，王族，皇族",
        .example = "At school the other children treated them like royalty.",
        .example_cn = "在学校里，其他孩子将他们奉若王族。"
    },
    {
        .word = "desolate",
        .phonetic_us = "'dɛsələt",
        .phonetic_uk = "'des(ə)lət",
        .meaning = "荒芜的；孤独的",
        .example = "a desolate landscape",
        .example_cn = "荒凉的景色"
    },
    {
        .word = "illusion",
        .phonetic_us = "ɪ'luʒn",
        .phonetic_uk = "ɪ'l(j)uːʒ(ə)n",
        .meaning = "幻想；错觉；假象",
        .example = "She was under no illusion that he loved her.",
        .example_cn = "她不再幻想他爱她了。"
    },
    {
        .word = "modification",
        .phonetic_us = ",mɑdɪfɪ'keʃən",
        .phonetic_uk = ",mɒdɪfɪ'keɪʃ(ə)n",
        .meaning = "修改",
        .example = "They have used the same process for almost 50 years with only minor modifications.",
        .example_cn = "同样的工序他们用了将近50年，期间只做过很小的改动。"
    },
    {
        .word = "environmental",
        .phonetic_us = "ɪn,vaɪrən'mɛntl",
        .phonetic_uk = "ɪnvaɪrən'ment(ə)l; en-",
        .meaning = "环境的，环境产生的",
        .example = "the environmental damage caused by the chemical industry",
        .example_cn = "化学工业对环境造成的破坏"
    },
    {
        .word = "pregnant",
        .phonetic_us = "'prɛɡnənt",
        .phonetic_uk = "'pregnənt",
        .meaning = "怀孕的；意义深长的；意义深长的",
        .example = "care for pregnant women",
        .example_cn = "孕妇保健"
    },
    {
        .word = "fossil",
        .phonetic_us = "'fɑsl",
        .phonetic_uk = "'fɒs(ə)l; -sɪl",
        .meaning = "化石",
        .example = "fossils of early reptiles",
        .example_cn = "早期爬行动物的化石"
    },
    {
        .word = "glider",
        .phonetic_us = "'ɡlaɪdɚ",
        .phonetic_uk = "'glaɪdə",
        .meaning = "滑翔机；滑翔导弹",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "pulley",
        .phonetic_us = "'pʊli",
        .phonetic_uk = "'pʊlɪ",
        .meaning = "滑轮，滑车，皮带轮",
        .example = "a system of ropes and pulleys",
        .example_cn = "绳索滑轮系统"
    },
    {
        .word = "slide",
        .phonetic_us = "slaɪd",
        .phonetic_uk = "slaɪd",
        .meaning = "滑动，滑行",
        .example = "The car went into a slide.",
        .example_cn = "汽车打起滑来。"
    },
    {
        .word = "granite",
        .phonetic_us = "'grænɪt",
        .phonetic_uk = "'grænɪt",
        .meaning = "花岗岩，花岗石",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "correlate",
        .phonetic_us = "'kɔrəlet",
        .phonetic_uk = "'kɒrəleɪt; -rɪ-",
        .meaning = "互相关联的事物",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "walnut",
        .phonetic_us = "'wɔlnət",
        .phonetic_uk = "'wɔːlnʌt",
        .meaning = "核桃；胡桃树",
        .example = "coffee and walnut cake",
        .example_cn = "咖啡核桃蛋糕"
    },
    {
        .word = "arc",
        .phonetic_us = "ɑrk",
        .phonetic_uk = "ɑːk",
        .meaning = "弧，弓形物；弧光",
        .example = "the arc of a rainbow",
        .example_cn = "彩虹的弧状"
    },
    {
        .word = "exclamation",
        .phonetic_us = ",ɛksklə'meʃən",
        .phonetic_uk = ",eksklə'meɪʃ(ə)n",
        .meaning = "呼喊，惊叫；感叹",
        .example = "horrified exclamations of disgust",
        .example_cn = "厌恶的惊叫"
    },
    {
        .word = "outcome",
        .phonetic_us = "'aʊt'kʌm",
        .phonetic_uk = "'aʊtkʌm",
        .meaning = "后果，成果",
        .example = "People who had heard the evidence at the trial were surprised at the outcome.",
        .example_cn = "在审判过程中听过证词的人都对此结果感到吃惊。"
    },
    {
        .word = "ruby",
        .phonetic_us = "'rubi",
        .phonetic_uk = "'ruːbɪ",
        .meaning = "红宝石",
        .example = "...a ruby and diamond ring.",
        .example_cn = "…一枚红宝石钻戒。"
    },
    {
        .word = "hit",
        .phonetic_us = "hɪt",
        .phonetic_uk = "hɪt",
        .meaning = "轰动一时的人（或事）",
        .example = "Which band had a hit with ‘Bohemian Rhapsody’?",
        .example_cn = "《波希米亚狂想曲》是哪支乐队风行一时的歌曲？"
    },
    {
        .word = "traverse",
        .phonetic_us = "trə'vɝs",
        .phonetic_uk = "'trævəs; trə'vɜːs",
        .meaning = "横越",
        .example = "two minutes to traverse the park",
        .example_cn = "两分钟横穿公园"
    },
    {
        .word = "transverse",
        .phonetic_us = "træns'vɝs",
        .phonetic_uk = "trænz'vɜːs; trɑːnz-; -ns-",
        .meaning = "横的",
        .example = "a transverse beam",
        .example_cn = "横梁"
    },
    {
        .word = "bed",
        .phonetic_us = "bɛd",
        .phonetic_uk = "bed",
        .meaning = "河床，（湖）底",
        .example = "the sea bed",
        .example_cn = "海底"
    },
    {
        .word = "harmonious",
        .phonetic_us = "hɑr'monɪəs",
        .phonetic_uk = "hɑː'məʊnɪəs",
        .meaning = "和谐的，协调的",
        .example = "The decor is a harmonious blend of traditional and modern.",
        .example_cn = "这种装饰风格是传统与现代的和谐统一。"
    },
    {
        .word = "monk",
        .phonetic_us = "mʌŋk",
        .phonetic_uk = "mʌŋk",
        .meaning = "和尚，僧侣，修道士",
        .example = "...saffron-robed Buddhist monks.",
        .example_cn = "…身穿黄袍的和尚们。"
    },
    {
        .word = "cooperative",
        .phonetic_us = "ko'ɑpərətɪv",
        .phonetic_uk = "kəʊ'ɒpərətɪv",
        .meaning = "合作的",
        .example = "He was doing his best to be cooperative.",
        .example_cn = "他在尽全力配合。"
    },
    {
        .word = "hinge",
        .phonetic_us = "hɪndʒ",
        .phonetic_uk = "hɪn(d)ʒ",
        .meaning = "合页，折叶，铰链",
        .example = "The top swung open on well-oiled hinges.",
        .example_cn = "盖子在上好油的折叶上一下子弹开了。"
    },
    {
        .word = "proper",
        .phonetic_us = "'prɑpɚ",
        .phonetic_uk = "'prɒpə",
        .meaning = "合乎体统的，正派的",
        .example = "It is right and proper that parents take responsibility for their children's attendance at school.",
        .example_cn = "父母负责督促子女上学上课，这是天经地义的事。"
    },
    {
        .word = "composite",
        .phonetic_us = "kɑm'pɑzɪt",
        .phonetic_uk = "'kɒmpəzɪt",
        .meaning = "合成的",
        .example = "composite metals",
        .example_cn = "复合金属"
    },
    {
        .word = "synthesis",
        .phonetic_us = "'sɪnθəsɪs",
        .phonetic_uk = "'sɪnθɪsɪs",
        .meaning = "综合，综合物；（化学或生物学物质的）合成；（用电子方式对声音、语音或音乐的）合成",
        .example = "a synthesis of Eastern and Western philosophical ideas",
        .example_cn = "东西方哲学思想的结合"
    },
    {
        .word = "applause",
        .phonetic_us = "ə'plɔz",
        .phonetic_uk = "ə'plɔːz",
        .meaning = "喝彩；夸奖，称赞",
        .example = "She got a round of applause (= a short period of applause) when she finished.",
        .example_cn = "她结束的时候获得一阵掌声。"
    },
    {
        .word = "applaud",
        .phonetic_us = "ə'plɔd",
        .phonetic_uk = "ə'plɔːd",
        .meaning = "鼓掌；喝彩",
        .example = "The audience applauded loudly.",
        .example_cn = "观众掌声雷动。"
    },
    {
        .word = "hurrah",
        .phonetic_us = "hə'rɑ",
        .phonetic_uk = "hʊ'rɑː",
        .meaning = "好哇，万岁，乌拉",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "pal",
        .phonetic_us = "pæl",
        .phonetic_uk = "pæl",
        .meaning = "好朋友；同谋",
        .example = "We’ve been pals since we were at school.",
        .example_cn = "我们上学的时候就是好朋友。"
    },
    {
        .word = "hospitality",
        .phonetic_us = ",hɑspɪ'tæləti",
        .phonetic_uk = "hɒspɪ'tælɪtɪ",
        .meaning = "好客，殷勤",
        .example = "Thanks for your hospitality over the past few weeks.",
        .example_cn = "感谢你几周来的热情款待。"
    },
    {
        .word = "romantic",
        .phonetic_us = "ro'mæntɪk",
        .phonetic_uk = "rə(ʊ)'mæntɪk",
        .meaning = "好幻想的",
        .example = "Like many New Yorkers, he had a romantic image of country life.",
        .example_cn = "像许多纽约人一样，他对乡村生活也有一种不切实际的美好幻想。"
    },
    {
        .word = "howl",
        .phonetic_us = "haʊl",
        .phonetic_uk = "haʊl",
        .meaning = "嚎叫；哀号；吠",
        .example = "He let out a howl of anguish.",
        .example_cn = "他发出一声痛苦的嚎叫。"
    },
    {
        .word = "aerospace",
        .phonetic_us = "'ɛrospes",
        .phonetic_uk = "'eərəspeɪs",
        .meaning = "航空航天工业",
        .example = "employment in the aerospace industry",
        .example_cn = "航空航天工业的工作"
    },
    {
        .word = "log",
        .phonetic_us = "lɔɡ",
        .phonetic_uk = "lɒg",
        .meaning = "航海日志；飞行日志",
        .example = "The captain always keeps a log.",
        .example_cn = "船长坚持记航海日志。"
    },
    {
        .word = "pedestrian",
        .phonetic_us = "pə'dɛstrɪən",
        .phonetic_uk = "pɪˈdestrɪən",
        .meaning = "行人，步行者",
        .example = "More than a third of all pedestrian injuries are to children.",
        .example_cn = "所有受伤的行人中有1/3以上是儿童。"
    },
    {
        .word = "move",
        .phonetic_us = "muv",
        .phonetic_uk = "muːv",
        .meaning = "行动，步骤",
        .example = "She’s still thinking about her next move.",
        .example_cn = "她还在考虑她的下一步行动。"
    },
    {
        .word = "hesitate",
        .phonetic_us = "'hɛzɪtet",
        .phonetic_uk = "'hezɪteɪt",
        .meaning = "犹豫；迟疑不决",
        .example = "She hesitated before replying.",
        .example_cn = "她犹豫了一下才回答。"
    },
    {
        .word = "pest",
        .phonetic_us = "pɛst",
        .phonetic_uk = "pest",
        .meaning = "害虫",
        .example = "a chemical used in pest control",
        .example_cn = "用于防治虫害的一种化学品"
    },
    {
        .word = "strait",
        .phonetic_us = "stret",
        .phonetic_uk = "streɪt",
        .meaning = "海峡",
        .example = "the Bering Strait",
        .example_cn = "白令海峡"
    },
    {
        .word = "turtle",
        .phonetic_us = "'tɝtl",
        .phonetic_uk = "'tɜːt(ə)l",
        .meaning = "海龟，玳瑁",
        .example = "...the giant sea turtle.",
        .example_cn = "…那只巨大的海龟。"
    },
    {
        .word = "custom",
        .phonetic_us = "'kʌstəm",
        .phonetic_uk = "'kʌstəm",
        .meaning = "海关",
        .example = "She was stopped at customs and questioned.",
        .example_cn = "她在海关被叫住接受问话。"
    },
    {
        .word = "seaport",
        .phonetic_us = "'sipɔrt",
        .phonetic_uk = "'siːpɔːt",
        .meaning = "海港，港口，港市",
        .example = "...the Baltic seaport of Rostock.",
        .example_cn = "...波罗的海沿岸的海港城市罗斯托克。"
    },
    {
        .word = "cable",
        .phonetic_us = "'kebl",
        .phonetic_uk = "'keɪb(ə)l",
        .meaning = "电缆",
        .example = "overhead power cables",
        .example_cn = "高架电缆"
    },
    {
        .word = "pirate",
        .phonetic_us = "'paɪrət",
        .phonetic_uk = "ˈpaɪərət",
        .meaning = "海盗",
        .example = "In the nineteenth century, pirates roamed the seas.",
        .example_cn = "19世纪，海盗很猖獗。"
    },
    {
        .word = "seaside",
        .phonetic_us = "'sisaɪd",
        .phonetic_uk = "'siːsaɪd",
        .meaning = "海滨（胜地）；海边",
        .example = "a trip to the seaside",
        .example_cn = "去海滨的旅行"
    },
    {
        .word = "surplus",
        .phonetic_us = "'sɝpləs",
        .phonetic_uk = "'sɜːpləs",
        .meaning = "过剩，剩余（物资）",
        .example = "Any surplus can be trimmed away.",
        .example_cn = "多出来的部分可以修剪掉。"
    },
    {
        .word = "overestimate",
        .phonetic_us = ",ovər'ɛstɪmət",
        .phonetic_uk = "əʊvər'estɪmeɪt",
        .meaning = "过高估计",
        .example = "He tends to overestimate his own abilities.",
        .example_cn = "他往往高估自己的能力。"
    },
    {
        .word = "excessively",
        .phonetic_us = "ɪk'sɛsɪvli",
        .phonetic_uk = "ek'sesɪvlɪ",
        .meaning = "过分，极端地",
        .example = "excessively high prices",
        .example_cn = "过高的价格"
    },
    {
        .word = "excess",
        .phonetic_us = "'ɛk'sɛs",
        .phonetic_uk = "ɪk'ses; ek-; 'ekses",
        .meaning = "过度行为，暴行",
        .example = "The government was unable to curb the excesses of the secret police.",
        .example_cn = "政府无法约束秘密警察的过分行为。"
    },
    {
        .word = "orchard",
        .phonetic_us = "'ɔrtʃɚd",
        .phonetic_uk = "'ɔːtʃəd",
        .meaning = "果园",
        .example = "a cherry orchard",
        .example_cn = "樱桃园"
    },
    {
        .word = "peel",
        .phonetic_us = "pil",
        .phonetic_uk = "piːl",
        .meaning = "果皮，蔬菜皮",
        .example = "...grated lemon peel.",
        .example_cn = "…磨碎了的柠檬皮。"
    },
    {
        .word = "stone",
        .phonetic_us = "ston",
        .phonetic_uk = "stəʊn",
        .meaning = "果核，（水果的）硬核",
        .example = "...cherry stones.",
        .example_cn = "…樱桃核。"
    },
    {
        .word = "slap",
        .phonetic_us = "slæp",
        .phonetic_uk = "slæp",
        .meaning = "掴",
        .example = "Sarah slapped Aaron across the face.",
        .example_cn = "萨拉在阿龙的脸上掴了一巴掌。"
    },
    {
        .word = "inland",
        .phonetic_us = ",ɪn'lænd",
        .phonetic_uk = "'ɪnlənd; -lænd",
        .meaning = "国内的；内地的",
        .example = "the largest area of inland water in the southeast",
        .example_cn = "东南部最大的内陆水域"
    },
    {
        .word = "boiler",
        .phonetic_us = "'bɔɪlɚ",
        .phonetic_uk = "'bɒɪlə",
        .meaning = "锅炉",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "roller",
        .phonetic_us = "'rolɚ",
        .phonetic_uk = "'rəʊlə",
        .meaning = "滚筒；滚柱",
        .example = "a paint roller",
        .example_cn = "刷漆滚筒"
    },
    {
        .word = "valuable",
        .phonetic_us = "ˈvæljuəbəl; ˈvæljə-",
        .phonetic_uk = "'væljʊəb(ə)l",
        .meaning = "贵重物品，财宝",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "salmon",
        .phonetic_us = "'sæmən",
        .phonetic_uk = "'sæmən",
        .meaning = "鲑，大马哈鱼",
        .example = "a whole salmon",
        .example_cn = "一整条鲑鱼"
    },
    {
        .word = "silicon",
        .phonetic_us = "'sɪlɪkən",
        .phonetic_uk = "'sɪlɪk(ə)n",
        .meaning = "硅（旧名矽）",
        .example = "The new chip will be made from a piece of silicon about the size of a postage stamp.",
        .example_cn = "这种新的芯片将由大约邮票大小的一块硅片制成。"
    },
    {
        .word = "regulation",
        .phonetic_us = "ˌrɛɡjəˈleʃən",
        .phonetic_uk = "regjʊ'leɪʃ(ə)n",
        .meaning = "规章，规则",
        .example = "There seem to be so many rules and regulations these days.",
        .example_cn = "如今好像条条框框很多。"
    },
    {
        .word = "regularity",
        .phonetic_us = "ˌrɛɡjəˈlærətɪ",
        .phonetic_uk = "reɡjʊ'lærətɪ",
        .meaning = "规则性；整齐，端正",
        .example = "Climate change is disrupting the regularity of the seasons.",
        .example_cn = "气候的变化正在打乱季节的规律性。"
    },
    {
        .word = "define",
        .phonetic_us = "dɪ'faɪn",
        .phonetic_uk = "dɪ'faɪn",
        .meaning = "规定；立（界限）",
        .example = "the ability to define clients’ needs",
        .example_cn = "确定客户需求的能力"
    },
    {
        .word = "provision",
        .phonetic_us = "prə'vɪʒn",
        .phonetic_uk = "prə'vɪʒ(ə)n",
        .meaning = "规定，条款，条项",
        .example = "The agreement includes a provision for each side to check the other side’s weapons.",
        .example_cn = "协议有项规定，允许双方互查武器。"
    },
    {
        .word = "replacement",
        .phonetic_us = "rɪ'plesmənt",
        .phonetic_uk = "rɪ'pleɪsm(ə)nt",
        .meaning = "取代；置换",
        .example = "Our old car is badly in need of replacement.",
        .example_cn = "我们的旧车急需更换。"
    },
    {
        .word = "spacious",
        .phonetic_us = "'speʃəs",
        .phonetic_uk = "'speɪʃəs",
        .meaning = "广阔的，广大的",
        .example = "a spacious living area",
        .example_cn = "宽敞的居住空间"
    },
    {
        .word = "amplitude",
        .phonetic_us = "'æmplə'tʊd",
        .phonetic_uk = "'æmplɪtjuːd",
        .meaning = "振幅；广大；充足",
        .example = "As we fall asleep the amplitude of brain waves slowly becomes greater.",
        .example_cn = "进入睡眠状态时，我们的脑电波振幅慢慢变大。"
    },
    {
        .word = "radial",
        .phonetic_us = "'redɪəl",
        .phonetic_uk = "'reɪdɪəl",
        .meaning = "放射状的",
        .example = "radial roads leading out of the city centre",
        .example_cn = "从市中心向外辐射的道路"
    },
    {
        .word = "photoelectric",
        .phonetic_us = ",fotoɪ'lɛktrɪk",
        .phonetic_uk = ",fəʊtəʊɪ'lektrɪk",
        .meaning = "光电的",
        .example = "Advanced imported photoelectric supervision system is used.",
        .example_cn = "采用先进的进口光电眼监控系统。"
    },
    {
        .word = "optical",
        .phonetic_us = "'ɑptɪkl",
        .phonetic_uk = "'ɒptɪk(ə)l",
        .meaning = "光的；光学的",
        .example = "microscopes and other optical instruments",
        .example_cn = "显微镜和其他光学仪器"
    },
    {
        .word = "shrub",
        .phonetic_us = "ʃrʌb",
        .phonetic_uk = "ʃrʌb",
        .meaning = "灌木，灌木丛",
        .example = "...flowering shrubs.",
        .example_cn = "…开花的灌木。"
    },
    {
        .word = "irrigation",
        .phonetic_us = "ˌɪrɪˈɡeʃn",
        .phonetic_uk = "",
        .meaning = "灌溉；（医）冲洗法",
        .example = "irrigation channels",
        .example_cn = "灌溉渠"
    },
    {
        .word = "inertia",
        .phonetic_us = "ɪ'nɝʃə",
        .phonetic_uk = "ɪ'nɜːʃə",
        .meaning = "惯性；无力",
        .example = "Inertia carried the plane onto the ground.",
        .example_cn = "飞机靠惯性着陆。"
    },
    {
        .word = "orchestra",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "管弦乐队",
        .example = "the Berlin Symphony Orchestra",
        .example_cn = "柏林交响乐团"
    },
    {
        .word = "blast",
        .phonetic_us = "blæst",
        .phonetic_uk = "blɑːst",
        .meaning = "管乐器的声音",
        .example = "The station master gave a blast on his whistle and we were off.",
        .example_cn = "站长一声哨响，我们出发了。"
    },
    {
        .word = "pipe",
        .phonetic_us = "paɪp",
        .phonetic_uk = "paɪp",
        .meaning = "管乐器",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "coffin",
        .phonetic_us = "'kɔfɪn",
        .phonetic_uk = "'kɒfɪn",
        .meaning = "棺材，灵柩",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "bureaucracy",
        .phonetic_us = "bjʊ'rɑkrəsi",
        .phonetic_uk = ",bjʊ(ə)'rɒkrəsɪ",
        .meaning = "官僚主义；官僚机构",
        .example = "the reduction of unnecessary bureaucracy",
        .example_cn = "消除不必要的官僚体制"
    },
    {
        .word = "monster",
        .phonetic_us = "'mɑnstɚ",
        .phonetic_uk = "'mɒnstə",
        .meaning = "怪物；畸形的动植物",
        .example = "the remains of a prehistoric monster",
        .example_cn = "史前怪兽的遗骸"
    },
    {
        .word = "client",
        .phonetic_us = "'klaɪənt",
        .phonetic_uk = "'klaɪənt",
        .meaning = "顾客；诉讼委托人",
        .example = "a meeting with an important client",
        .example_cn = "与一位重要客户的会面"
    },
    {
        .word = "obstinate",
        .phonetic_us = "'ɑbstɪnət",
        .phonetic_uk = "'ɒbstɪnət",
        .meaning = "固执的；顽强的",
        .example = "He was the most obstinate man I’ve ever met.",
        .example_cn = "他是我遇到过的最固执的人。"
    },
    {
        .word = "inherent",
        .phonetic_us = "ɪn'hɪrənt",
        .phonetic_uk = "ɪn'hɪər(ə)nt; -'her(ə)nt",
        .meaning = "固有的，生来的",
        .example = "Every business has its own inherent risks.",
        .example_cn = "每笔生意本身都有风险。"
    },
    {
        .word = "fixture",
        .phonetic_us = "'fɪkstʃɚ",
        .phonetic_uk = "'fɪkstʃə; -tjə",
        .meaning = "固定设备",
        .example = "light fixtures",
        .example_cn = "照明设备"
    },
    {
        .word = "pluck",
        .phonetic_us = "plʌk",
        .phonetic_uk = "plʌk",
        .meaning = "鼓起（勇气），振作",
        .example = "He finally plucked up enough courage to ask her out.",
        .example_cn = "他终于鼓起勇气约她出去。"
    },
    {
        .word = "agitation",
        .phonetic_us = ",ædʒɪ'teʃən",
        .phonetic_uk = "ædʒɪ'teɪʃ(ə)n",
        .meaning = "鼓动，煸动；搅动",
        .example = "mass agitation for political reform",
        .example_cn = "要求政治改革的大骚动"
    },
    {
        .word = "skeleton",
        .phonetic_us = "'skɛlɪtn",
        .phonetic_uk = "'skelɪt(ə)n",
        .meaning = "骨骼，骷髅；骨架",
        .example = "the human skeleton",
        .example_cn = "人体骨骼"
    },
    {
        .word = "thigh",
        .phonetic_us = "θaɪ",
        .phonetic_uk = "θaɪ",
        .meaning = "股，大腿",
        .example = "The shorts are so small I can't fit my thighs into any of them.",
        .example_cn = "短裤太小了，我的大腿塞不进去。"
    },
    {
        .word = "cereal",
        .phonetic_us = "'sɪrɪəl",
        .phonetic_uk = "'sɪərɪəl",
        .meaning = "谷类，五谷，禾谷",
        .example = "cereal crops",
        .example_cn = "谷类作物"
    },
    {
        .word = "antique",
        .phonetic_us = "æn'tik",
        .phonetic_uk = "æn'tiːk",
        .meaning = "古代的",
        .example = "an antique rosewood desk",
        .example_cn = "古董红木书桌"
    },
    {
        .word = "assessment",
        .phonetic_us = "ə'sɛsmənt",
        .phonetic_uk = "ə'sesmənt",
        .meaning = "估定；查定",
        .example = "a reading assessment test",
        .example_cn = "阅读评估测试"
    },
    {
        .word = "constitute",
        .phonetic_us = "'kɑnstətut",
        .phonetic_uk = "'kɒnstɪtjuːt",
        .meaning = "构成，组成",
        .example = "We must redefine what constitutes a family.",
        .example_cn = "我们必须对家庭的构成重新定义。"
    },
    {
        .word = "hound",
        .phonetic_us = "haʊnd",
        .phonetic_uk = "haʊnd",
        .meaning = "猎犬",
        .example = "Rainey's chief interest in life is hunting with hounds.",
        .example_cn = "雷尼一生中的主要嗜好是带着猎犬去打猎。"
    },
    {
        .word = "gutter",
        .phonetic_us = "'gʌtɚ",
        .phonetic_uk = "'gʌtə",
        .meaning = "沟，边沟；檐槽",
        .example = "The gutters were blocked and overflowing.",
        .example_cn = "排水沟堵住了，水都溢出来了。"
    },
    {
        .word = "tribute",
        .phonetic_us = "'trɪbjut",
        .phonetic_uk = "'trɪbjuːt",
        .meaning = "献礼；贡物",
        .example = "This book is a fitting tribute to the bravery of the pioneers.",
        .example_cn = "本书是对先驱们大无畏精神恰如其分的献礼。"
    },
    {
        .word = "number",
        .phonetic_us = "'nʌmbɚ",
        .phonetic_uk = "'nʌmbə",
        .meaning = "共计，达…之数",
        .example = "The crowd numbered more than a thousand.",
        .example_cn = "聚集的人群共计一千多人。"
    },
    {
        .word = "commonwealth",
        .phonetic_us = "'kɑmən'wɛlθ",
        .phonetic_uk = "'kɒmənwelθ",
        .meaning = "联邦",
        .example = "...the Commonwealth of Australia.",
        .example_cn = "…澳大利亚联邦。"
    },
    {
        .word = "arch",
        .phonetic_us = "ɑrtʃ",
        .phonetic_uk = "ɑːtʃ",
        .meaning = "拱门",
        .example = "Go through the arch and follow the path.",
        .example_cn = "穿过拱门沿小径往前走。"
    },
    {
        .word = "vault",
        .phonetic_us = "vɔlt",
        .phonetic_uk = "vɔːlt",
        .meaning = "拱顶；（教堂的）地下墓室",
        .example = "...the vault of a great cathedral.",
        .example_cn = "一座大教堂的拱顶"
    },
    {
        .word = "mercury",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "汞，水银",
        .example = "Mercury is used in batteries, pesticides, and thermometers.",
        .example_cn = "水银用于电池、杀虫剂与温度计中。"
    },
    {
        .word = "consolidate",
        .phonetic_us = "kən'sɑlɪdet",
        .phonetic_uk = "kən'sɒlɪdeɪt",
        .meaning = "巩固；合并",
        .example = "The company has consolidated its position as the country’s leading gas supplier.",
        .example_cn = "这家公司巩固了作为该国主要煤气供应商的地位。"
    },
    {
        .word = "impartial",
        .phonetic_us = "ɪm'pɑrʃəl",
        .phonetic_uk = "ɪm'pɑːʃ(ə)l",
        .meaning = "公正的，无偏见的",
        .example = "We offer impartial advice on tax and insurance.",
        .example_cn = "我们就税收和保险问题提供公充的建议。"
    },
    {
        .word = "convention",
        .phonetic_us = "kən'vɛnʃən",
        .phonetic_uk = "kən'venʃ(ə)n",
        .meaning = "公约，（换俘等）协定",
        .example = "...the U.N. convention on climate change.",
        .example_cn = "…关于气候变化的联合国公约。"
    },
    {
        .word = "duke",
        .phonetic_us = "dʊk",
        .phonetic_uk = "djuːk",
        .meaning = "公爵；君主",
        .example = "the Duke of Edinburgh",
        .example_cn = "爱丁堡公爵"
    },
    {
        .word = "rooster",
        .phonetic_us = "'rustɚ",
        .phonetic_uk = "'ruːstə",
        .meaning = "公鸡",
        .example = "I heard a rooster crow.",
        .example_cn = "我听见雄鸡啼叫。"
    },
    {
        .word = "studio",
        .phonetic_us = "'studɪo",
        .phonetic_uk = "'stjuːdɪəʊ",
        .meaning = "播音室；工作室",
        .example = "a recording studio in Nashville",
        .example_cn = "在纳什维尔的一间录音室"
    },
    {
        .word = "earnings",
        .phonetic_us = "'ɝnɪŋz",
        .phonetic_uk = "'ɜːnɪŋz",
        .meaning = "工资，收入；收益",
        .example = "an employee’s average weekly earnings",
        .example_cn = "雇员的平均周薪"
    },
    {
        .word = "implement",
        .phonetic_us = "'ɪmplɪmɛnt",
        .phonetic_uk = "'ɪmplɪm(ə)nt",
        .meaning = "工具",
        .example = "...writing implements.",
        .example_cn = "…书写用具。"
    },
    {
        .word = "workpiece",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "工（作）件",
        .example = "The workpiece is already on the lathe.",
        .example_cn = "工件已经上了车床。"
    },
    {
        .word = "combat",
        .phonetic_us = "'kɑmbæt",
        .phonetic_uk = "'kɒmbæt; 'kʌm-",
        .meaning = "跟…战斗，格斗",
        .example = "to combat crime/terrorism/inflation/disease",
        .example_cn = "打击犯罪／打击恐怖主义／抑制通货膨胀／与疾病作斗争"
    },
    {
        .word = "impart",
        .phonetic_us = "ɪm'pɑrt",
        .phonetic_uk = "ɪm'pɑːt",
        .meaning = "给予；传递；告诉",
        .example = "Use a piece of fresh ginger to impart a East Asian flavour to simple ingredients.",
        .example_cn = "用一片鲜姜给简单的原料添上东亚的风味。"
    },
    {
        .word = "energize",
        .phonetic_us = "'ɛnɚdʒaɪz",
        .phonetic_uk = "'enədʒaɪz",
        .meaning = "供给…能量",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "vaccinate",
        .phonetic_us = "'væksə'net",
        .phonetic_uk = "'væksɪneɪt",
        .meaning = "给…接种疫苗",
        .example = "All children should be vaccinated against measles.",
        .example_cn = "所有儿童都应该接种麻疹疫苗。"
    },
    {
        .word = "flavour",
        .phonetic_us = "'fleivə",
        .phonetic_uk = "'fleɪvə",
        .meaning = "给…调味",
        .example = "Lime preserved in salt is a North African speciality which is used to flavour chicken dishes.",
        .example_cn = "用盐腌的酸橙是用来给鸡肉调味的一种北非特产。"
    },
    {
        .word = "insulator",
        .phonetic_us = "'ɪnsəletɚ",
        .phonetic_uk = "'ɪnsjʊleɪtə",
        .meaning = "隔离者；绝缘体",
        .example = "Wood is an excellent insulator.",
        .example_cn = "木材是很好的绝缘体。"
    },
    {
        .word = "lattice",
        .phonetic_us = "'lætɪs",
        .phonetic_uk = "'lætɪs",
        .meaning = "格子结构",
        .example = "We were crawling along the narrow steel lattice of the bridge.",
        .example_cn = "我们沿着大桥窄窄的钢制格子爬行着。"
    },
    {
        .word = "dove",
        .phonetic_us = "dʌv; dov",
        .phonetic_uk = "dʌv",
        .meaning = "鸽子，斑鸠",
        .example = "A dove cooed softly.",
        .example_cn = "一只鸽子轻柔地咕咕叫。"
    },
    {
        .word = "reveal",
        .phonetic_us = "rɪ'vil",
        .phonetic_uk = "rɪ'viːl",
        .meaning = "告诉，揭示，泄露",
        .example = "He may be prosecuted for revealing secrets about the security agency.",
        .example_cn = "他可能因泄露安全部门的机密而被起诉。"
    },
    {
        .word = "plateau",
        .phonetic_us = "plæ'to",
        .phonetic_uk = "'plætəʊ",
        .meaning = "高原；平稳时期",
        .example = "A broad valley opened up leading to a high, flat plateau of cultivated land.",
        .example_cn = "一个宽阔的山谷展开，通向一片平坦的高原耕地。"
    },
    {
        .word = "lofty",
        .phonetic_us = "'lɔfti",
        .phonetic_uk = "'lɒftɪ",
        .meaning = "高耸的；高尚的",
        .example = "He stayed at the Four Seasons Hotel, from whose lofty heights he could see across New York.",
        .example_cn = "他住在四季酒店，从酒店高处可以看到纽约的全景。"
    },
    {
        .word = "tower",
        .phonetic_us = "'taʊɚ",
        .phonetic_uk = "'taʊə",
        .meaning = "高耸，屹立；翱翔",
        .example = "The cliffs towered above them.",
        .example_cn = "悬崖峭壁高耸于他们上方。"
    },
    {
        .word = "elevation",
        .phonetic_us = ",ɛlɪ'veʃən",
        .phonetic_uk = ",elɪ'veɪʃ(ə)n",
        .meaning = "高度，海拔",
        .example = "The city is at an elevation of 2 000 metres.",
        .example_cn = "这座城市海拔2000米。"
    },
    {
        .word = "intervene",
        .phonetic_us = ",ɪntɚ'vin",
        .phonetic_uk = "ɪntə'viːn",
        .meaning = "干涉，干预",
        .example = "The army will have to intervene to prevent further fighting.",
        .example_cn = "军队将不得不干预以阻止进一步的战斗。"
    },
    {
        .word = "dry",
        .phonetic_us = "draɪ",
        .phonetic_uk = "draɪ",
        .meaning = "干巴巴的，枯燥的",
        .example = "Government reports tend to make dry reading.",
        .example_cn = "政府报告读起来往往枯燥无味。"
    },
    {
        .word = "olive",
        .phonetic_us = "'ɑlɪv",
        .phonetic_uk = "'ɒlɪv",
        .meaning = "橄榄；橄榄树",
        .example = "...a pile of black olives.",
        .example_cn = "…一堆黑橄榄。"
    },
    {
        .word = "sentiment",
        .phonetic_us = "'sɛntɪmənt",
        .phonetic_uk = "'sentɪm(ə)nt",
        .meaning = "感情；情绪",
        .example = "the spread of nationalist sentiments",
        .example_cn = "民族主义情绪的传播"
    },
    {
        .word = "perception",
        .phonetic_us = "pɚ'sɛpʃən",
        .phonetic_uk = "pə'sepʃ(ə)n",
        .meaning = "感知；理解力",
        .example = "our perception of reality",
        .example_cn = "我们对现实的认识"
    },
    {
        .word = "sensation",
        .phonetic_us = "sɛn'seʃən",
        .phonetic_uk = "sen'seɪʃ(ə)n",
        .meaning = "感觉，知觉；轰动",
        .example = "One sign of a heart attack is a tingling sensation in the left arm.",
        .example_cn = "心脏病发作的一个征兆是左臂有刺痛感。"
    },
    {
        .word = "Thanksgiving",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "感恩节",
        .example = "We always eat turkey on Thanksgiving.",
        .example_cn = "我们过感恩节时总是吃火鸡。"
    },
    {
        .word = "chill",
        .phonetic_us = "tʃɪl",
        .phonetic_uk = "tʃɪl",
        .meaning = "感到寒冷；冷藏",
        .example = "The wind blew across her body, chilling her wet skin.",
        .example_cn = "风吹在她身上，她湿漉漉的皮肤感到非常寒冷。"
    },
    {
        .word = "outline",
        .phonetic_us = "'aʊtlaɪn",
        .phonetic_uk = "'aʊtlaɪn",
        .meaning = "概述，概括",
        .example = "The new president outlined plans to deal with crime, drugs, and education.",
        .example_cn = "新总统概述了解决犯罪、毒品和教育问题的计划。"
    },
    {
        .word = "notion",
        .phonetic_us = "'noʃən",
        .phonetic_uk = "'nəʊʃ(ə)n",
        .meaning = "概念；看法",
        .example = "She had no notion what he meant.",
        .example_cn = "她根本不明白他是什么意思。"
    },
    {
        .word = "conception",
        .phonetic_us = "kən'sɛpʃən",
        .phonetic_uk = "kən'sepʃ(ə)n",
        .meaning = "概念，观念，想法",
        .example = "the conception of parliamentary democracy",
        .example_cn = "议会民主的概念"
    },
    {
        .word = "summary",
        .phonetic_us = "'sʌməri",
        .phonetic_uk = "'sʌm(ə)rɪ",
        .meaning = "概括的；速决的",
        .example = "a summary financial statement",
        .example_cn = "财务汇总报表"
    },
    {
        .word = "generalize",
        .phonetic_us = "'dʒɛnrəlaɪz",
        .phonetic_uk = "ˈdʒɛnrəˌlaɪz",
        .meaning = "概括出",
        .example = "She has a tendency to generalize from her husband to all men.",
        .example_cn = "她总爱把自己对丈夫的看法推及所有的男人。"
    },
    {
        .word = "impress",
        .phonetic_us = "ɪm'prɛs",
        .phonetic_uk = "ɪm'pres",
        .meaning = "盖印，在…打记号",
        .example = "patterns impressed in the clay",
        .example_cn = "压印在黏土上的图案"
    },
    {
        .word = "mend",
        .phonetic_us = "mɛnd",
        .phonetic_uk = "mend",
        .meaning = "修理；改正",
        .example = "Could you mend my bike for me?",
        .example_cn = "你能帮我修一下自行车吗？"
    },
    {
        .word = "duplicate",
        .phonetic_us = "'duplɪket",
        .phonetic_uk = "ˈdjuːplɪkeɪt",
        .meaning = "复制品",
        .example = "She kept both the duplicate and the original.",
        .example_cn = "她把复制本和原本都保留着。"
    },
    {
        .word = "complication",
        .phonetic_us = ",kɑmplɪ'keʃən",
        .phonetic_uk = "kɒmplɪ'keɪʃ(ə)n",
        .meaning = "复杂，混乱；并发症",
        .example = "The fact that the plane was late added a further complication to our journey.",
        .example_cn = "飞机误点给我们的旅行带来了更大的麻烦。"
    },
    {
        .word = "complexity",
        .phonetic_us = "kəm'plɛksəti",
        .phonetic_uk = "kəm'pleksətɪ",
        .meaning = "复杂（性）",
        .example = "a design of great complexity",
        .example_cn = "一项非常复杂的设计"
    },
    {
        .word = "satellite",
        .phonetic_us = "'sætəlaɪt",
        .phonetic_uk = "'sætəlaɪt",
        .meaning = "附属国",
        .example = "a satellite country",
        .example_cn = "卫星国"
    },
    {
        .word = "appendix",
        .phonetic_us = "ə'pɛndɪks",
        .phonetic_uk = "ə'pendɪks",
        .meaning = "附录；阑尾",
        .example = "See Appendix 2.6.",
        .example_cn = "见附录2.6。"
    },
    {
        .word = "extra",
        .phonetic_us = "'ɛkstrə",
        .phonetic_uk = "'ekstrə",
        .meaning = "附加物；额外的东西",
        .example = "I earn extra for working on Sunday.",
        .example_cn = "我星期天工作挣外快。"
    },
    {
        .word = "incidentally",
        .phonetic_us = ",ɪnsɪ'dɛntli",
        .phonetic_uk = "ɪnsɪ'dent(ə)lɪ",
        .meaning = "附带地；顺便提及",
        .example = "Incidentally, where were you born?",
        .example_cn = "顺便问一下，你在哪儿出生的？"
    },
    {
        .word = "charge",
        .phonetic_us = "tʃɑrdʒ",
        .phonetic_uk = "tʃɑːdʒ",
        .meaning = "负荷；充电",
        .example = "Leave the battery on charge all night.",
        .example_cn = "让电池充一晚上的电"
    },
    {
        .word = "negative",
        .phonetic_us = "'nɛɡətɪv",
        .phonetic_uk = "'negətɪv",
        .meaning = "负的；（结果）阴性的",
        .example = "a negative trade balance",
        .example_cn = "贸易逆差"
    },
    {
        .word = "corrosion",
        .phonetic_us = "kə'roʒən",
        .phonetic_uk = "kə'rəʊʒ(ə)n",
        .meaning = "腐蚀，侵蚀；锈",
        .example = "They are sprayed with oil to prevent corrosion.",
        .example_cn = "它们被喷了油以防腐蚀。"
    },
    {
        .word = "erosion",
        .phonetic_us = "ɪ'roʒən",
        .phonetic_uk = "ɪ'rəʊʒ(ə)n",
        .meaning = "腐蚀，侵蚀；糜烂",
        .example = "the problem of soil erosion",
        .example_cn = "水土流失的问题"
    },
    {
        .word = "subsidiary",
        .phonetic_us = "səb'sɪdɪɛri",
        .phonetic_uk = "səb'sɪdɪərɪ",
        .meaning = "辅助的，补充的",
        .example = "The marketing department has always played a subsidiary role to the sales department.",
        .example_cn = "营销部一直都扮演着销售部的辅助角色。"
    },
    {
        .word = "coach",
        .phonetic_us = "kotʃ",
        .phonetic_uk = "kəʊtʃ",
        .meaning = "指导，训练；辅导",
        .example = "Nigel coaches a cricket team in his spare time.",
        .example_cn = "奈杰尔业余时间担任一个板球队的教练。"
    },
    {
        .word = "answer",
        .phonetic_us = "'ænsɚ",
        .phonetic_uk = "'ɑːnsə",
        .meaning = "符合，适合",
        .example = "Does this answer your requirements?",
        .example_cn = "这个符合你的要求吗？"
    },
    {
        .word = "emerge",
        .phonetic_us = "ɪ'mɝdʒ",
        .phonetic_uk = "ɪ'mɜːdʒ",
        .meaning = "浮现，出现；显露",
        .example = "The flowers emerge in the spring.",
        .example_cn = "花儿在春天开放。"
    },
    {
        .word = "obedient",
        .phonetic_us = "oˈbidiənt",
        .phonetic_uk = "ə'biːdɪənt",
        .meaning = "服从的，顺从的",
        .example = "an obedient child",
        .example_cn = "听话的孩子"
    },
    {
        .word = "obedience",
        .phonetic_us = "ə'bidjəns",
        .phonetic_uk = "ə'biːdɪəns",
        .meaning = "服从，顺从",
        .example = "obedience classes for dogs and their owners",
        .example_cn = "为狗和主人安排的服从训练课"
    },
    {
        .word = "maintenance",
        .phonetic_us = "'mentənəns",
        .phonetic_uk = "'meɪnt(ə)nəns; -tɪn-",
        .meaning = "扶养费；维持",
        .example = "They have to find the fathers who abandon their children and make them pay maintenance.",
        .example_cn = "他们必须找到那些抛弃子女的父亲，让他们支付抚养费。"
    },
    {
        .word = "veto",
        .phonetic_us = "'vito",
        .phonetic_uk = "'viːtəʊ",
        .meaning = "否决，否决权；禁止",
        .example = "The Senate had a sufficient majority to override the presidential veto (= not accept his refusal ).",
        .example_cn = "参议院有足够的多数票可以推翻总统的否决。"
    },
    {
        .word = "denial",
        .phonetic_us = "dɪ'naɪəl",
        .phonetic_uk = "dɪ'naɪ(ə)l",
        .meaning = "否定；拒绝相信",
        .example = "The government issued an official denial of the rumour.",
        .example_cn = "政府发表了正式声明，否认谣言。"
    },
    {
        .word = "Buddhism",
        .phonetic_us = "'bʊdɪzəm",
        .phonetic_uk = "'bʊdɪz(ə)m",
        .meaning = "佛教，释教",
        .example = "Mr White has converted to Buddhism.",
        .example_cn = "怀特先生已改信佛教。"
    },
    {
        .word = "dedicate",
        .phonetic_us = "'dɛdɪket",
        .phonetic_uk = "'dedɪkeɪt",
        .meaning = "奉献；献身",
        .example = "The actress now dedicates herself to children’s charity work.",
        .example_cn = "这名女演员现在致力于儿童慈善工作。"
    },
    {
        .word = "flatter",
        .phonetic_us = "'flætɚ",
        .phonetic_uk = "'flætə",
        .meaning = "奉承，阿谀，谄媚",
        .example = "Perry would always flatter Mrs. Mitchell by praising her cooking.",
        .example_cn = "佩里常常奉承米切尔太太，称赞她的烹调手艺。"
    },
    {
        .word = "pineapple",
        .phonetic_us = "'paɪn'æpl",
        .phonetic_uk = "'paɪnæp(ə)l",
        .meaning = "凤梨，波萝",
        .example = "pineapple chunks",
        .example_cn = "菠萝块"
    },
    {
        .word = "seam",
        .phonetic_us = "sim",
        .phonetic_uk = "siːm",
        .meaning = "缝口；接缝；骨缝",
        .example = "She was repairing Billy’s trousers, where the seam had come undone.",
        .example_cn = "她在补比利裤子的开线处。"
    },
    {
        .word = "landscape",
        .phonetic_us = "'lænd'skep",
        .phonetic_uk = "'læn(d)skeɪp",
        .meaning = "风景，景色，景致",
        .example = "the beauty of the New England landscape",
        .example_cn = "新英格兰风光之美"
    },
    {
        .word = "windmill",
        .phonetic_us = "'wɪnd'mɪl",
        .phonetic_uk = "'wɪn(d)mɪl",
        .meaning = "风车",
        .example = "The sails of the windmill are now at rest.",
        .example_cn = "风车的帆叶现在静止不动了。"
    },
    {
        .word = "plump",
        .phonetic_us = "plʌmp",
        .phonetic_uk = "plʌmp",
        .meaning = "丰满的",
        .example = "The nurse was a cheerful plump woman.",
        .example_cn = "那护士是个性格开朗、体形丰满的女人。"
    },
    {
        .word = "abundance",
        .phonetic_us = "ə'bʌndəns",
        .phonetic_uk = "ə'bʌnd(ə)ns",
        .meaning = "丰富，充裕",
        .example = "an abundance of wavy red hair",
        .example_cn = "浓密的红色鬈发"
    },
    {
        .word = "indignation",
        .phonetic_us = ",ɪndɪɡ'neʃən",
        .phonetic_uk = "ɪndɪg'neɪʃ(ə)n",
        .meaning = "愤怒，愤慨，义愤",
        .example = "To his indignation, Charles found that his name was not on the list.",
        .example_cn = "查尔斯发现他的名字没有出现在名单上，这让他深感愤慨。"
    },
    {
        .word = "shatter",
        .phonetic_us = "'ʃætɚ",
        .phonetic_uk = "'ʃætə",
        .meaning = "粉碎，破碎；毁坏",
        .example = "The explosion shattered the building.",
        .example_cn = "这次爆炸把大楼炸成一片废墟。"
    },
    {
        .word = "molecular",
        .phonetic_us = "mə'lɛkjəlɚ",
        .phonetic_uk = "mə'lekjʊlə",
        .meaning = "分子的；克分子的",
        .example = "...the molecular structure of fuel.",
        .example_cn = "…燃料的分子结构。"
    },
    {
        .word = "limb",
        .phonetic_us = "lɪm",
        .phonetic_uk = "lɪm",
        .meaning = "肢；手臂；腿",
        .example = "an artificial limb",
        .example_cn = "假肢"
    },
    {
        .word = "offset",
        .phonetic_us = ",ɔf'sɛt",
        .phonetic_uk = "'ɒfset",
        .meaning = "抵销",
        .example = "He was able to offset his travel expenses against tax.",
        .example_cn = "他可以用旅费抵税。"
    },
    {
        .word = "fraction",
        .phonetic_us = "'frækʃən",
        .phonetic_uk = "'frækʃ(ə)n",
        .meaning = "分数",
        .example = "The students had a grasp of decimals, percentages and fractions.",
        .example_cn = "学生们掌握了小数、百分数和分数。"
    },
    {
        .word = "distract",
        .phonetic_us = "dɪ'strækt",
        .phonetic_uk = "dɪ'strækt",
        .meaning = "分散（心思）；打扰",
        .example = "Try not to distract the other students.",
        .example_cn = "尽量不要让其他学生分心。"
    },
    {
        .word = "installment",
        .phonetic_us = "ɪn'stɔlmənt",
        .phonetic_uk = "ɪn'stɔ:lmənt",
        .meaning = "分期付款",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "split",
        .phonetic_us = "splɪt",
        .phonetic_uk = "splɪt",
        .meaning = "分裂，分化，派系",
        .example = "The argument could lead to a damaging split in the party.",
        .example_cn = "这场争吵可能会导致党内出现分裂，对该党产生不利影响。"
    },
    {
        .word = "detach",
        .phonetic_us = "dɪ'tætʃ",
        .phonetic_uk = "dɪ'tætʃ",
        .meaning = "分开；派遣（军队）",
        .example = "Please detach and fill out the application form.",
        .example_cn = "请撕下申请表并填好。"
    },
    {
        .word = "partition",
        .phonetic_us = "pɑr'tɪʃən",
        .phonetic_uk = "pɑː'tɪʃ(ə)n",
        .meaning = "分开，分割；隔墙",
        .example = "the partition of Germany after the war",
        .example_cn = "战后对德国的分割"
    },
    {
        .word = "interface",
        .phonetic_us = "'ɪntɚ'fes",
        .phonetic_uk = "'ɪntəfeɪs",
        .meaning = "分界面",
        .example = "...the development of better user interfaces.",
        .example_cn = "…更好用户界面的开发。"
    },
    {
        .word = "relay",
        .phonetic_us = "rɪ'le",
        .phonetic_uk = "'riːleɪ",
        .meaning = "分程传递；使接替；转播",
        .example = "He quickly relayed this news to the other members of staff.",
        .example_cn = "他马上就把这个消息转告给了其他员工。"
    },
    {
        .word = "diverge",
        .phonetic_us = "daɪ'vɝdʒ",
        .phonetic_uk = "daɪ'vɜːdʒ; dɪ-",
        .meaning = "分岔；分歧",
        .example = "The parallel lines appear to diverge.",
        .example_cn = "这些平行线像是岔开了。"
    },
    {
        .word = "litter",
        .phonetic_us = "'lɪtɚ",
        .phonetic_uk = "'lɪtə",
        .meaning = "废物；杂乱",
        .example = "People who drop litter can be fined in some cities.",
        .example_cn = "在有些城市，乱扔垃圾的人会被罚款。"
    },
    {
        .word = "abolish",
        .phonetic_us = "ə'bɑlɪʃ",
        .phonetic_uk = "ə'bɒlɪʃ",
        .meaning = "废除，取消",
        .example = "Slavery was abolished in the US in the 19th century.",
        .example_cn = "美国于19世纪废除了奴隶制。"
    },
    {
        .word = "gangster",
        .phonetic_us = "'ɡæŋstɚ",
        .phonetic_uk = "'gæŋstə",
        .meaning = "匪徒，歹徒，暴徒",
        .example = "...a gangster film.",
        .example_cn = "…一部黑帮片。"
    },
    {
        .word = "extraordinarily",
        .phonetic_us = "ɪk'strɔdɪn(ə)rəlɪ",
        .phonetic_uk = "ɪk'strɔːd(ə)n(ə)rəlɪ",
        .meaning = "非常地，特别地",
        .example = "We were extraordinarily lucky.",
        .example_cn = "我们极其幸运。"
    },
    {
        .word = "fly",
        .phonetic_us = "flaɪ",
        .phonetic_uk = "flaɪ",
        .meaning = "飞跑；逃跑，消失",
        .example = "Ellen flew across the room and greeted her uncle with a kiss.",
        .example_cn = "埃伦从房间那头飞奔过来，给了她叔叔一个吻。"
    },
    {
        .word = "aviation",
        .phonetic_us = ",evɪ'eʃən",
        .phonetic_uk = "eɪvɪ'eɪʃ(ə)n",
        .meaning = "飞行（术）",
        .example = "...the aviation industry.",
        .example_cn = "…航空工业。"
    },
    {
        .word = "indulge",
        .phonetic_us = "ɪn'dʌldʒ",
        .phonetic_uk = "ɪn'dʌldʒ",
        .meaning = "放纵（感情），纵情",
        .example = "He returned to Britain so that he could indulge his passion for football...",
        .example_cn = "他重返英国，为的是可以尽情释放自己对足球的激情。"
    },
    {
        .word = "herd",
        .phonetic_us = "hɝd",
        .phonetic_uk = "hɜːd",
        .meaning = "成群；放牧",
        .example = "The prisoners were herded together.",
        .example_cn = "犯人们被集合起来。"
    },
    {
        .word = "magnify",
        .phonetic_us = "'mæɡnɪfaɪ",
        .phonetic_uk = "'mægnɪfaɪ",
        .meaning = "放大，扩大",
        .example = "At the Sheffield arena, the speakers were magnified ten times on a giant screen.",
        .example_cn = "在谢菲尔德体育馆，演讲者在一个巨大的屏幕上被放大了十倍。"
    },
    {
        .word = "imitation",
        .phonetic_us = ",ɪmɪ'teʃən",
        .phonetic_uk = "ɪmɪ'teɪʃ(ə)n",
        .meaning = "仿制品，伪制物",
        .example = "She wore an imitation of a sailor’s hat.",
        .example_cn = "她戴着一顶仿制的水手帽。"
    },
    {
        .word = "pattern",
        .phonetic_us = "'pætɚn",
        .phonetic_uk = "'pæt(ə)n",
        .meaning = "仿制，仿造，模仿",
        .example = "The exam system is patterned after the one used in Japan.",
        .example_cn = "这种考试制度是仿效日本建立的。"
    },
    {
        .word = "reproduce",
        .phonetic_us = ",riprə'dus",
        .phonetic_uk = "riːprə'djuːs",
        .meaning = "仿造",
        .example = "The effect has proved hard to reproduce.",
        .example_cn = "这种效果经证实很难再造。"
    },
    {
        .word = "estate",
        .phonetic_us = "ɪ'stet",
        .phonetic_uk = "ɪ'steɪt; e-",
        .meaning = "财产，产业；房地产",
        .example = "The property is part of the deceased’s estate.",
        .example_cn = "该产业是死者遗产的一部分。"
    },
    {
        .word = "hamper",
        .phonetic_us = "'hæmpɚ",
        .phonetic_uk = "'hæmpə",
        .meaning = "妨碍，阻碍，牵制",
        .example = "She tried to run, but was hampered by her heavy suitcase.",
        .example_cn = "她想跑，但沉重的旅行箱拖累了她。"
    },
    {
        .word = "handicap",
        .phonetic_us = "'hændɪ'kæp",
        .phonetic_uk = "'hændɪkæp",
        .meaning = "妨碍，使不利",
        .example = "The charity is handicapped by lack of funds.",
        .example_cn = "这个慈善机构因为缺乏资金难以开展工作。"
    },
    {
        .word = "handy",
        .phonetic_us = "'hændi",
        .phonetic_uk = "'hændɪ",
        .meaning = "方便的；便于使用的",
        .example = "a handy little tool",
        .example_cn = "好用的小工具"
    },
    {
        .word = "offence",
        .phonetic_us = "ə'fɛns",
        .phonetic_uk = "ə'fens",
        .meaning = "犯罪，犯规；冒犯",
        .example = "His solicitor said he committed the offence because he was heavily in debt.",
        .example_cn = "他的律师说他犯罪是因为欠下巨债。"
    },
    {
        .word = "blunder",
        .phonetic_us = "'blʌndɚ",
        .phonetic_uk = "'blʌndə",
        .meaning = "犯大错",
        .example = "They blundered badly when they gave him the job.",
        .example_cn = "他们犯了大错，让他做这份工作。"
    },
    {
        .word = "mirror",
        .phonetic_us = "'mɪrɚ",
        .phonetic_uk = "'mɪrə",
        .meaning = "反映，借鉴",
        .example = "We believe the polls are an accurate mirror of public opinion.",
        .example_cn = "我们相信民意测验是准确反映公众意见的一面镜子。"
    },
    {
        .word = "reactor",
        .phonetic_us = "rɪ'æktɚ",
        .phonetic_uk = "rɪ'æktə",
        .meaning = "反应堆",
        .example = "They shut down the nuclear reactor for safety reasons.",
        .example_cn = "出于安全原因他们关闭了核反应堆。"
    },
    {
        .word = "echo",
        .phonetic_us = "'ɛko",
        .phonetic_uk = "'ekəʊ",
        .meaning = "回响",
        .example = "The sound of an engine echoed back from the thick forest.",
        .example_cn = "从茂密的森林里传来引擎的回声。"
    },
    {
        .word = "contrary",
        .phonetic_us = "'kɑntrɛri",
        .phonetic_uk = "'kɒntrərɪ",
        .meaning = "反对命题",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "contradict",
        .phonetic_us = "'kɑntrə'dɪkt",
        .phonetic_uk = "kɒntrə'dɪkt",
        .meaning = "反驳，否认",
        .example = "Deborah opened her mouth to contradict, but closed it again.",
        .example_cn = "黛博拉张口想要反驳，但又把嘴闭上了。"
    },
    {
        .word = "propagation",
        .phonetic_us = ",prɑpə'geʃən",
        .phonetic_uk = ",prɒpə'ɡeɪʃən",
        .meaning = "繁殖；传播；蔓延",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "propagate",
        .phonetic_us = "'prɑpə'get",
        .phonetic_uk = "'prɒpəgeɪt",
        .meaning = "传播，普及；繁殖",
        .example = "The group launched a website to propagate its ideas.",
        .example_cn = "这个团体建了一个网站来宣扬他们的主张。"
    },
    {
        .word = "toss",
        .phonetic_us = "tɔs",
        .phonetic_uk = "tɒs",
        .meaning = "翻来覆去",
        .example = "I’ve been tossing and turning all night.",
        .example_cn = "我一晚上辗转反侧。"
    },
    {
        .word = "decree",
        .phonetic_us = "dɪ'kri",
        .phonetic_uk = "dɪ'kriː",
        .meaning = "法令，政令",
        .example = "The Emperor issued the decree repealing martial law.",
        .example_cn = "皇帝下诏令取消了军事管制。"
    },
    {
        .word = "flannel",
        .phonetic_us = "'flænl",
        .phonetic_uk = "'flæn(ə)l",
        .meaning = "法兰绒",
        .example = "a flannel shirt",
        .example_cn = "法兰绒衬衫"
    },
    {
        .word = "valve",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "阀，阀门；电子管",
        .example = "heart valves",
        .example_cn = "心脏瓣膜"
    },
    {
        .word = "originate",
        .phonetic_us = "əˈrɪdʒəˌnet",
        .phonetic_uk = "ə'rɪdʒɪneɪt; ɒ-",
        .meaning = "发源；首创",
        .example = "How did the plan originate?",
        .example_cn = "这个计划最早是怎么想到的？"
    },
    {
        .word = "spokesman",
        .phonetic_us = "'spoksmən",
        .phonetic_uk = "'spəʊksmən",
        .meaning = "发言人，代言人",
        .example = "a White House spokesman",
        .example_cn = "白宫发言人"
    },
    {
        .word = "outlet",
        .phonetic_us = "'aʊtlɛt",
        .phonetic_uk = "'aʊtlet",
        .meaning = "发泄（感情等）的方法",
        .example = "Is football a good outlet for men’s aggression?",
        .example_cn = "足球是男人宣泄好斗情绪的有效途径吗？"
    },
    {
        .word = "incidence",
        .phonetic_us = "'ɪnsɪdəns",
        .phonetic_uk = "'ɪnsɪd(ə)ns",
        .meaning = "发生率，影响；入射",
        .example = "an area with a high incidence of crime",
        .example_cn = "犯罪率高的地区"
    },
    {
        .word = "generate",
        .phonetic_us = "'dʒɛnəret",
        .phonetic_uk = "'dʒenəreɪt",
        .meaning = "发生，产生；生成",
        .example = "to generate electricity/heat/power",
        .example_cn = "发电；产生热 / 动力"
    },
    {
        .word = "invoice",
        .phonetic_us = "'ɪnvɔɪs",
        .phonetic_uk = "'ɪnvɒɪs",
        .meaning = "发票，发货清单",
        .example = "We will then send you an invoice for the total course fees.",
        .example_cn = "然后我们将寄给你一张全部课程费用的发票。"
    },
    {
        .word = "detector",
        .phonetic_us = "dɪ'tɛktɚ",
        .phonetic_uk = "dɪ'tektə",
        .meaning = "发觉者，探测器",
        .example = "a smoke detector",
        .example_cn = "烟雾探测器"
    },
    {
        .word = "flame",
        .phonetic_us = "flem",
        .phonetic_uk = "fleɪm",
        .meaning = "燃烧",
        .example = "A great fire flamed in an open fireplace.",
        .example_cn = "敞开的壁炉里火烧得很旺。"
    },
    {
        .word = "exert",
        .phonetic_us = "ɪɡ'zɝt",
        .phonetic_uk = "ɪg'zɜːt; eg-",
        .meaning = "发挥（威力），施加",
        .example = "They exerted considerable influence within the school.",
        .example_cn = "他们在校内施加了很大的影响力。"
    },
    {
        .word = "luminous",
        .phonetic_us = "'lʊmənəs",
        .phonetic_uk = "'luːmɪnəs",
        .meaning = "发光的；夜明的",
        .example = "luminous paint",
        .example_cn = "发光涂料"
    },
    {
        .word = "beam",
        .phonetic_us = "bim",
        .phonetic_uk = "biːm",
        .meaning = "发光，发热；开怀大笑",
        .example = "The sun beamed through the clouds.",
        .example_cn = "阳光穿透了云层。"
    },
    {
        .word = "motive",
        .phonetic_us = "'motɪv",
        .phonetic_uk = "'məʊtɪv",
        .meaning = "发动的，运动的",
        .example = "Water provided the motive power for the mill.",
        .example_cn = "水为磨坊提供了动力。"
    },
    {
        .word = "dynamo",
        .phonetic_us = "'daɪnəmo",
        .phonetic_uk = "'daɪnəməʊ",
        .meaning = "发电机",
        .example = "bicycle lights powered by a dynamo",
        .example_cn = "以直流发电机供电的自行车车灯"
    },
    {
        .word = "rattle",
        .phonetic_us = "'rætl",
        .phonetic_uk = "'ræt(ə)l",
        .meaning = "发出格格声",
        .example = "Every time a bus went past, the windows rattled.",
        .example_cn = "每逢公共汽车经过这里，窗户都格格作响。"
    },
    {
        .word = "dioxide",
        .phonetic_us = "daɪ'ɑksaɪd",
        .phonetic_uk = "daɪ'ɒksaɪd",
        .meaning = "二氧化物",
        .example = "carbon/sulphur dioxide",
        .example_cn = "二氧化碳／硫"
    },
    {
        .word = "bait",
        .phonetic_us = "bet",
        .phonetic_uk = "beɪt",
        .meaning = "饵；引诱物",
        .example = "We used worms as bait.",
        .example_cn = "我们用小虫子作诱饵。"
    },
    {
        .word = "subsequent",
        .phonetic_us = "'sʌbsɪkwənt",
        .phonetic_uk = "'sʌbsɪkw(ə)nt",
        .meaning = "尔后的",
        .example = "These skills were passed on to subsequent generations.",
        .example_cn = "这些技能代代相传。"
    },
    {
        .word = "whereas",
        .phonetic_us = "'wɛr'æz",
        .phonetic_uk = "weər'æz",
        .meaning = "而，却，反之",
        .example = "The old system was fairly complicated whereas the new system is really very simple.",
        .example_cn = "旧系统相当复杂，而新系统却很简单。"
    },
    {
        .word = "youngster",
        .phonetic_us = "'jʌŋstɚ",
        .phonetic_uk = "'jʌŋstə",
        .meaning = "儿童，少年，年轻人",
        .example = "Other youngsters are not so lucky.",
        .example_cn = "其他的年轻人没有这么幸运。"
    },
    {
        .word = "offspring",
        .phonetic_us = "'ɔfsprɪŋ",
        .phonetic_uk = "'ɒfsprɪŋ",
        .meaning = "儿女，子孙，后代",
        .example = "a young mother trying to control her offspring",
        .example_cn = "一个想管住自己孩子的年轻妈妈"
    },
    {
        .word = "malice",
        .phonetic_us = "'mælɪs",
        .phonetic_uk = "'mælɪs",
        .meaning = "恶意；蓄意犯罪",
        .example = "James bore her no malice (= did not feel any malice towards her ) .",
        .example_cn = "詹姆斯对她并无恶意。"
    },
    {
        .word = "spite",
        .phonetic_us = "spaɪt",
        .phonetic_uk = "spaɪt",
        .meaning = "恶意，怨恨",
        .example = "She broke it just out of spite.",
        .example_cn = "她就是出于恶意把它打破的。"
    },
    {
        .word = "nightmare",
        .phonetic_us = "'naɪt'mɛr",
        .phonetic_uk = "'naɪtmeə",
        .meaning = "恶梦；经常的恐惧",
        .example = "a recurring nightmare",
        .example_cn = "一再出现的噩梦"
    },
    {
        .word = "yoke",
        .phonetic_us = "jok",
        .phonetic_uk = "jəʊk",
        .meaning = "轭，牛轭；枷锁",
        .example = "the yoke of imperialism",
        .example_cn = "帝国主义的枷锁"
    },
    {
        .word = "deprive",
        .phonetic_us = "dɪ'praɪv",
        .phonetic_uk = "dɪ'praɪv",
        .meaning = "夺去；使（人）失去",
        .example = "A lot of these children have been deprived of a normal home life.",
        .example_cn = "这些孩子中有许多被剥夺了正常的家庭生活。"
    },
    {
        .word = "mountainous",
        .phonetic_us = "'maʊntənəs",
        .phonetic_uk = "'maʊntɪnəs",
        .meaning = "多山的；山一般的",
        .example = "the mountainous coast of Wales",
        .example_cn = "威尔士多山的海岸"
    },
    {
        .word = "windy",
        .phonetic_us = "'wɪndi",
        .phonetic_uk = "'wɪndɪ",
        .meaning = "多风的，刮风的",
        .example = "It’s too windy for a picnic.",
        .example_cn = "风太大，不适合野餐。"
    },
    {
        .word = "versatile",
        .phonetic_us = "'vɝsətl",
        .phonetic_uk = "'vɜːsətaɪl",
        .meaning = "多方面的；通用的",
        .example = "The potato is an extremely versatile vegetable.",
        .example_cn = "马铃薯是一种用途极广的蔬菜。"
    },
    {
        .word = "stew",
        .phonetic_us = "stu, stju",
        .phonetic_uk = "stjuː",
        .meaning = "炖",
        .example = "Stew the apple and blackberries to make a thick pulp.",
        .example_cn = "把苹果和黑莓炖成浓稠的果浆。"
    },
    {
        .word = "mop",
        .phonetic_us = "mɑp",
        .phonetic_uk = "mɒp",
        .meaning = "拖把，墩布；洗碗刷",
        .example = "a mop and bucket",
        .example_cn = "拖把和水桶"
    },
    {
        .word = "halve",
        .phonetic_us = "hæv",
        .phonetic_uk = "hɑːv",
        .meaning = "对分；平摊",
        .example = "Halve the potatoes lengthwise.",
        .example_cn = "把马铃薯竖着切成两半。"
    },
    {
        .word = "symmetrical",
        .phonetic_us = "sɪ'mɛtrɪkl",
        .phonetic_uk = "sɪ'metrɪk(ə)l",
        .meaning = "对称的，匀称的",
        .example = "The pattern was perfectly symmetrical.",
        .example_cn = "该图案完全对称。"
    },
    {
        .word = "symmetry",
        .phonetic_us = "'sɪmətri",
        .phonetic_uk = "'sɪmɪtrɪ",
        .meaning = "对称（性），匀称",
        .example = "the symmetry of the design",
        .example_cn = "图案的对称性"
    },
    {
        .word = "provoke",
        .phonetic_us = "prə'vok",
        .phonetic_uk = "prə'vəʊk",
        .meaning = "对…挑衅；激发",
        .example = "Paul tried to provoke Fletch into a fight.",
        .example_cn = "保罗试图激怒弗莱琪打一架。"
    },
    {
        .word = "resent",
        .phonetic_us = "rɪ'zɛnt",
        .phonetic_uk = "rɪ'zent",
        .meaning = "对…不满，怨恨",
        .example = "Paul resented the fact that Carol didn’t trust him.",
        .example_cn = "保罗非常气愤，因为卡萝尔不信任他。"
    },
    {
        .word = "alignment",
        .phonetic_us = "ə'laɪnmənt",
        .phonetic_uk = "ə'laɪnm(ə)nt",
        .meaning = "排成直线；结盟，联合",
        .example = "the geometrical alignment of the Sun, Moon, and Earth at the eclipse",
        .example_cn = "日蚀或月蚀发生时太阳、月亮和地球成几何直线的排列"
    },
    {
        .word = "assert",
        .phonetic_us = "ə'sɝt",
        .phonetic_uk = "ə'sɜːt",
        .meaning = "断言，宣称；维护",
        .example = "She continued to assert that she was innocent.",
        .example_cn = "她仍然坚称自己无辜。"
    },
    {
        .word = "affirm",
        .phonetic_us = "ə'fɝm",
        .phonetic_uk = "ə'fɜːm",
        .meaning = "断言，证实",
        .example = "The general affirmed rumors of an attack.",
        .example_cn = "将军证实了袭击的传闻。"
    },
    {
        .word = "shortage",
        .phonetic_us = "'ʃɔrtɪdʒ",
        .phonetic_uk = "'ʃɔːtɪdʒ",
        .meaning = "短缺，不足额",
        .example = "There is no heating available due to fuel shortages.",
        .example_cn = "因为燃料短缺，所以没有供暖。"
    },
    {
        .word = "ferry",
        .phonetic_us = "'fɛri",
        .phonetic_uk = "'ferɪ",
        .meaning = "渡船",
        .example = "They had recrossed the River Gambia by ferry.",
        .example_cn = "他们乘船又一次渡过了冈比亚河。"
    },
    {
        .word = "jealousy",
        .phonetic_us = "'dʒɛləsi",
        .phonetic_uk = "'dʒeləsɪ",
        .meaning = "妒忌，嫉妒，猜忌",
        .example = "Sexual jealousy is a common motive for murder.",
        .example_cn = "性嫉妒是常见的谋杀动机。"
    },
    {
        .word = "cuckoo",
        .phonetic_us = "'kʊku",
        .phonetic_uk = "'kʊkuː",
        .meaning = "杜鹃，布谷鸟",
        .example = "In England the cuckoo is the herald of spring.",
        .example_cn = "在英国杜鹃鸟是报春的使者。"
    },
    {
        .word = "gamble",
        .phonetic_us = "'ɡæmbl",
        .phonetic_uk = "'gæmb(ə)l",
        .meaning = "赌博",
        .example = "Ellen had to admit the gamble had paid off (= succeeded ).",
        .example_cn = "埃伦不得不承认这一次赌赢了。"
    },
    {
        .word = "jam",
        .phonetic_us = "dʒæm",
        .phonetic_uk = "dʒæm",
        .meaning = "堵塞",
        .example = "Sorry we’re late. We got stuck in a traffic jam.",
        .example_cn = "对不起，我们来晚了，路上堵车。"
    },
    {
        .word = "distinct",
        .phonetic_us = "dɪ'stɪŋkt",
        .phonetic_uk = "dɪ'stɪŋ(k)t",
        .meaning = "清楚的",
        .example = "The outline of the ship became more distinct.",
        .example_cn = "船的轮廓变得更加清晰了。"
    },
    {
        .word = "solo",
        .phonetic_us = "'solo",
        .phonetic_uk = "'səʊləʊ",
        .meaning = "独唱，独奏；独唱曲",
        .example = "a gorgeous piano solo",
        .example_cn = "一首极其美妙的钢琴独奏曲"
    },
    {
        .word = "dictator",
        .phonetic_us = "'dɪktetɚ",
        .phonetic_uk = "dɪk'teɪtə",
        .meaning = "独裁者，专政者",
        .example = "the downfall of the hated dictator",
        .example_cn = "遭人痛恨的独裁者的垮台"
    },
    {
        .word = "linger",
        .phonetic_us = "'lɪŋɡɚ",
        .phonetic_uk = "'lɪŋgə",
        .meaning = "逗留，徘徊；拖延",
        .example = "I spent a week at Kandersteg and could happily have lingered on.",
        .example_cn = "我在坎德施泰格逗留了一个星期，本来还可以开开心心地多待几天。"
    },
    {
        .word = "tease",
        .phonetic_us = "tiz",
        .phonetic_uk = "tiːz",
        .meaning = "逗乐，戏弄",
        .example = "Don’t get upset. I was only teasing .",
        .example_cn = "别生气，我只是在逗你玩。"
    },
    {
        .word = "fighter",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "战斗机；斗争者",
        .example = "He was shot down by enemy fighters.",
        .example_cn = "他被敌军战斗机击落。"
    },
    {
        .word = "champion",
        .phonetic_us = "'tʃæmpɪən",
        .phonetic_uk = "'tʃæmpɪən",
        .meaning = "斗士；提倡者",
        .example = "a champion of women’s rights",
        .example_cn = "妇女权利捍卫者"
    },
    {
        .word = "insight",
        .phonetic_us = "'ɪn'saɪt",
        .phonetic_uk = "'ɪnsaɪt",
        .meaning = "洞察力；洞悉，见识",
        .example = "a writer of great insight",
        .example_cn = "有深刻洞察力的作家"
    },
    {
        .word = "cavity",
        .phonetic_us = "'kævəti",
        .phonetic_uk = "'kævɪtɪ",
        .meaning = "洞，穴，空腔",
        .example = "Put herbs inside the body cavity of the fish.",
        .example_cn = "把香草放进鱼肚里。"
    },
    {
        .word = "jelly",
        .phonetic_us = "'dʒɛli",
        .phonetic_uk = "'dʒelɪ",
        .meaning = "冻，果冻；胶状物",
        .example = "raspberry jelly",
        .example_cn = "山莓果冻"
    },
    {
        .word = "mobilize",
        .phonetic_us = "'mobəlaɪz",
        .phonetic_uk = "'məʊbəlaɪz",
        .meaning = "动员，动员起来",
        .example = "an attempt to mobilize popular opinion",
        .example_cn = "鼓动公众舆论的尝试"
    },
    {
        .word = "grease",
        .phonetic_us = "gris",
        .phonetic_uk = "griːs",
        .meaning = "动物脂，脂肪",
        .example = "plates covered with grease",
        .example_cn = "油腻的盘子"
    },
    {
        .word = "disturbance",
        .phonetic_us = "dɪ'stɝbəns",
        .phonetic_uk = "dɪ'stɜːb(ə)ns",
        .meaning = "动乱；干扰",
        .example = "There were disturbances in the crowd as fans left the stadium.",
        .example_cn = "球迷离开体育场时，人群中发生了骚乱。"
    },
    {
        .word = "kinetic",
        .phonetic_us = "kɪ'nɛtɪk",
        .phonetic_uk = "kɪ'netɪk; kaɪ-",
        .meaning = "动力（学）的；活动的",
        .example = "kinetic energy",
        .example_cn = "动能"
    },
    {
        .word = "orient",
        .phonetic_us = "'orɪənt",
        .phonetic_uk = "'ɔːrɪənt; 'ɒr-",
        .meaning = "东方；亚洲，远东",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "location",
        .phonetic_us = "lo'keʃən",
        .phonetic_uk = "lə(ʊ)'keɪʃ(ə)n",
        .meaning = "定位，测位",
        .example = "The main problem for engineers was the location of underground rivers in the area.",
        .example_cn = "工程师们面临的主要难题是要确定该地区地下河的位置。"
    },
    {
        .word = "theorem",
        .phonetic_us = "'θiərəm",
        .phonetic_uk = "'θɪərəm",
        .meaning = "定理；原理，原则",
        .example = "a mathematical theorem",
        .example_cn = "数学定理"
    },
    {
        .word = "subscribe",
        .phonetic_us = "səb'skraɪb",
        .phonetic_uk = "səb'skraɪb",
        .meaning = "订购；认购；预订",
        .example = "My main reason for subscribing to New Scientist is to keep abreast of advances in science.",
        .example_cn = "我订阅《新科学家》的主要原因是要跟上科学的进步。"
    },
    {
        .word = "summit",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "顶点，最高点；极度",
        .example = "His election as President represented the summit of his career.",
        .example_cn = "他当选总统意味着他到达了事业的顶峰。"
    },
    {
        .word = "sculpture",
        .phonetic_us = "'skʌlptʃɚ",
        .phonetic_uk = "'skʌlptʃə",
        .meaning = "雕刻品；雕刻（术）",
        .example = "a sculpture of an elephant",
        .example_cn = "一尊大象雕塑"
    },
    {
        .word = "electronics",
        .phonetic_us = "ɪ,lɛk'trɑnɪks",
        .phonetic_uk = "ɪlek'trɒnɪks; el-",
        .meaning = "电子学",
        .example = "an electronics engineer",
        .example_cn = "电子工程师"
    },
    {
        .word = "pressure",
        .phonetic_us = "'prɛʃɚ",
        .phonetic_uk = "'preʃə",
        .meaning = "大气压力",
        .example = "A ridge of high pressure is building up strongly over the Atlantic.",
        .example_cn = "一个强大的高压脊正在大西洋上空形成。"
    },
    {
        .word = "capacitor",
        .phonetic_us = "kə'pæsɪtɚ",
        .phonetic_uk = "kə'pæsɪtə",
        .meaning = "电容器",
        .example = "The second resistor has been replaced by a capacitor.",
        .example_cn = "第二个电阻已由一个电容所代替。"
    },
    {
        .word = "capacitance",
        .phonetic_us = "kə'pæsətns",
        .phonetic_uk = "kə'pæsɪt(ə)ns",
        .meaning = "电容，电容量",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "electrode",
        .phonetic_us = "ɪ'lɛktrod",
        .phonetic_uk = "ɪ'lektrəʊd",
        .meaning = "电极；电焊条",
        .example = "The monkeys have electrodes implanted into the brain to measure their brain activity.",
        .example_cn = "这些猴子的脑中植入了电极，以监测其大脑活动。"
    },
    {
        .word = "electrician",
        .phonetic_us = "ɪ'lɛk'trɪʃən",
        .phonetic_uk = ",ɪlek'trɪʃ(ə)n; ,el-; ,iːl-",
        .meaning = "电工，电气技师",
        .example = "The electrician refitted my old radio set.",
        .example_cn = "电工将我的旧收音机加以改装。"
    },
    {
        .word = "telex",
        .phonetic_us = "'tɛlɛks",
        .phonetic_uk = "'teleks",
        .meaning = "电传，用户电报",
        .example = "He sent a telex to the British High Commission in Delhi.",
        .example_cn = "他给德里的英国高级专员公署发了份电传。"
    },
    {
        .word = "kindle",
        .phonetic_us = "'kɪndl",
        .phonetic_uk = "'kɪnd(ə)l",
        .meaning = "点燃，着火",
        .example = "We watched as the fire slowly kindled.",
        .example_cn = "我们看着火慢慢地燃烧起来。"
    },
    {
        .word = "geology",
        .phonetic_us = "dʒɪ'ɑlədʒi",
        .phonetic_uk = "dʒɪ'ɒlədʒɪ",
        .meaning = "地质学；（某地）地质",
        .example = "He was visiting professor of geology at the University of Georgia.",
        .example_cn = "他曾是佐治亚大学的地质学客座教授。"
    },
    {
        .word = "basement",
        .phonetic_us = "'besmənt",
        .phonetic_uk = "'beɪsm(ə)nt",
        .meaning = "地下室；地窖；底层",
        .example = "They bought an old schoolhouse to live in and built a workshop in the basement.",
        .example_cn = "他们买了座旧校舍居住，还在地下室建了个作坊。"
    },
    {
        .word = "geographical",
        .phonetic_us = "dʒɪə'græfɪkl",
        .phonetic_uk = "dʒɪə'græfɪk(ə)l",
        .meaning = "地理的；地区（性）的",
        .example = "their geographical proximity to Japan (= nearness to Japan )",
        .example_cn = "它们和日本相邻的地理位置"
    },
    {
        .word = "magistrate",
        .phonetic_us = "'mædʒɪs'tret",
        .phonetic_uk = "'mædʒɪstrət; -streɪt",
        .meaning = "地方法官",
        .example = "She will face a local magistrate on Tuesday.",
        .example_cn = "她将在星期二面见一位地方治安法官。"
    },
    {
        .word = "mortgage",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "抵押贷款",
        .example = "Your building society or bank will help arrange a mortgage.",
        .example_cn = "你加入的购房互助协会或银行将会给你安排抵押贷款。"
    },
    {
        .word = "hostile",
        .phonetic_us = "ˈhɑstəl",
        .phonetic_uk = "'hɒstaɪl",
        .meaning = "敌对的；不友好的",
        .example = "Southampton fans gave their former coach a hostile reception.",
        .example_cn = "南安普敦队的球迷对球队的前任教练很不友善。"
    },
    {
        .word = "whisper",
        .phonetic_us = "'wɪspɚ",
        .phonetic_uk = "'wɪspə",
        .meaning = "低声地讲；私下说",
        .example = "You don’t have to whisper, no one can hear us.",
        .example_cn = "你不必轻声轻语，没人听得到我们说话。"
    },
    {
        .word = "underestimate",
        .phonetic_us = "/ˌʌndərˈestɪmeɪt/",
        .phonetic_uk = "ʌndər'estɪmeɪt",
        .meaning = "低估，看轻",
        .example = "We underestimated how long it would take to get there.",
        .example_cn = "我们低估了到那里所需的时间。"
    },
    {
        .word = "murmur",
        .phonetic_us = "'mɝmɚ",
        .phonetic_uk = "'mɜːmə",
        .meaning = "低沉连续的声音",
        .example = "The piano music mixes with the murmur of conversation.",
        .example_cn = "钢琴的弹奏声混杂着低低的交谈声。"
    },
    {
        .word = "equivalent",
        .phonetic_us = "ɪ'kwɪvələnt",
        .phonetic_uk = "ɪ'kwɪv(ə)l(ə)nt",
        .meaning = "等面（体）积的",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "enroll",
        .phonetic_us = "ɪn'rol",
        .phonetic_uk = "ɪn'rəʊl",
        .meaning = "登记，招收，参军",
        .example = "You need to enroll before the end of August.",
        .example_cn = "你必须在八月底前注册。"
    },
    {
        .word = "burner",
        .phonetic_us = "'bɝnɚ",
        .phonetic_uk = "'bɜːnə",
        .meaning = "煤气头",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "triumphant",
        .phonetic_us = "traɪ'ʌmfənt",
        .phonetic_uk = "traɪ'ʌmf(ə)nt",
        .meaning = "得胜的；得意洋洋的",
        .example = "the triumphant army",
        .example_cn = "得胜的军队"
    },
    {
        .word = "clatter",
        .phonetic_us = "'klætɚ",
        .phonetic_uk = "'klætə",
        .meaning = "得得声，卡嗒声",
        .example = "the clatter of horses' hoofs",
        .example_cn = "嗒嗒的马蹄声"
    },
    {
        .word = "morality",
        .phonetic_us = "məˈræləti",
        .phonetic_uk = "məˈræləti",
        .meaning = "道德，美德，品行",
        .example = "the decline in standards of personal morality",
        .example_cn = "个人道德标准的下降"
    },
    {
        .word = "theft",
        .phonetic_us = "θɛft",
        .phonetic_uk = "θeft",
        .meaning = "盗窃，偷窃（行为）",
        .example = "There have been a number of thefts in the area.",
        .example_cn = "该地区发生了几宗偷窃案。"
    },
    {
        .word = "attendance",
        .phonetic_us = "ə'tɛndəns",
        .phonetic_uk = "ə'tend(ə)ns",
        .meaning = "到场；出席人数",
        .example = "The doctor will have a record of her attendances.",
        .example_cn = "医生会记录她的出诊次数。"
    },
    {
        .word = "between",
        .phonetic_us = "bɪ'twin",
        .phonetic_uk = "bɪ'twiːn",
        .meaning = "当中，中间",
        .example = "The house was near a park but there was a road in between.",
        .example_cn = "房子在一处公园附近，但两者之间隔着一条马路。"
    },
    {
        .word = "yolk",
        .phonetic_us = "jok",
        .phonetic_uk = "jəʊk",
        .meaning = "蛋黄，卵黄",
        .example = "Only the yolk contains cholesterol.",
        .example_cn = "只有蛋黄含胆固醇。"
    },
    {
        .word = "cartridge",
        .phonetic_us = "'kɑrtrɪdʒ",
        .phonetic_uk = "'kɑːtrɪdʒ",
        .meaning = "弹药筒",
        .example = "Only four of the five spent cartridges were recovered by police.",
        .example_cn = "5个子弹壳中只有4个被警方收回。"
    },
    {
        .word = "detain",
        .phonetic_us = "dɪ'ten",
        .phonetic_uk = "dɪ'teɪn",
        .meaning = "扣押，拘留；耽搁",
        .example = "Two suspects have been detained by the police for questioning .",
        .example_cn = "两名嫌疑人被警方拘留审问。"
    },
    {
        .word = "simple",
        .phonetic_us = "'sɪmpl",
        .phonetic_uk = "'sɪmp(ə)l",
        .meaning = "单纯的；迟钝的",
        .example = "Completing the race is not just a simple matter of physical fitness.",
        .example_cn = "跑完比赛不仅仅是纯粹的体力问题。"
    },
    {
        .word = "simplicity",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "单纯，质朴",
        .example = "Mona wrote with a beautiful simplicity of style.",
        .example_cn = "莫娜的文笔朴实优美。"
    },
    {
        .word = "fill",
        .phonetic_us = "fɪl",
        .phonetic_uk = "fɪl",
        .meaning = "担任（职务）；填补",
        .example = "Women fill 35% of senior management positions.",
        .example_cn = "女性担任35%的高级管理职位。"
    },
    {
        .word = "jug",
        .phonetic_us = "dʒʌɡ",
        .phonetic_uk = "dʒʌg",
        .meaning = "带柄水罐，大壶",
        .example = "a five-gallon jug of beer",
        .example_cn = "五加仑装的啤酒罐"
    },
    {
        .word = "algebra",
        .phonetic_us = "'ældʒɪbrə",
        .phonetic_uk = "'ældʒɪbrə",
        .meaning = "代数学",
        .example = "He was not good at algebra in middle school.",
        .example_cn = "他中学时不擅长代数。"
    },
    {
        .word = "attorney",
        .phonetic_us = "ə'tɝni",
        .phonetic_uk = "ə'tɜːnɪ",
        .meaning = "代理人；辩护律师",
        .example = "...a prosecuting attorney.",
        .example_cn = "…一位公诉律师。"
    },
    {
        .word = "deputy",
        .phonetic_us = "'dɛpjuti",
        .phonetic_uk = "'depjʊtɪ",
        .meaning = "代理人",
        .example = "the Deputy Secretary of State",
        .example_cn = "助理国务卿"
    },
    {
        .word = "representative",
        .phonetic_us = "'rɛprɪ'zɛntətɪv",
        .phonetic_uk = "reprɪ'zentətɪv",
        .meaning = "代表性的；代议制的",
        .example = "The latest incident is representative of a wider trend.",
        .example_cn = "最近发生的事件代表了一个更大的趋势。"
    },
    {
        .word = "delegate",
        .phonetic_us = "ˈdɛləgɪt; (for v.,) ˈdɛləˌgeɪt",
        .phonetic_uk = "ˈdɛlɪˌɡeɪt; -ɡɪt; (for v.,) ˈdɛlɪˌɡeɪt",
        .meaning = "代表，委员，特派员",
        .example = "Around 350 delegates attended the conference.",
        .example_cn = "大约有350名代表参加了大会。"
    },
    {
        .word = "gorilla",
        .phonetic_us = "ɡə'rɪlə",
        .phonetic_uk = "gə'rɪlə",
        .meaning = "大猩猩",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "magnitude",
        .phonetic_us = "'mæɡnɪtud",
        .phonetic_uk = "'mægnɪtjuːd",
        .meaning = "重大；星等",
        .example = "an increase of this order of magnitude",
        .example_cn = "如此大幅度的增长"
    },
    {
        .word = "massacre",
        .phonetic_us = "'mæsəkɚ",
        .phonetic_uk = "'mæsəkə",
        .meaning = "大屠杀，残杀",
        .example = "the only survivor of the massacre",
        .example_cn = "这场大屠杀的唯一幸存者"
    },
    {
        .word = "stride",
        .phonetic_us = "straɪd",
        .phonetic_uk = "straɪd",
        .meaning = "大踏步走",
        .example = "He strode toward her.",
        .example_cn = "他大步向她走去。"
    },
    {
        .word = "embassy",
        .phonetic_us = "'ɛmbəsi",
        .phonetic_uk = "'embəsɪ",
        .meaning = "大使馆；大使的职务",
        .example = "the American Embassy in Paris",
        .example_cn = "美国驻巴黎大使馆"
    },
    {
        .word = "ambassador",
        .phonetic_us = "æm'bæsədɚ",
        .phonetic_uk = "æm'bæsədə",
        .meaning = "大使，使节",
        .example = "the US ambassador to Spain",
        .example_cn = "美国驻西班牙大使"
    },
    {
        .word = "mansion",
        .phonetic_us = "'mænʃən",
        .phonetic_uk = "'mænʃ(ə)n",
        .meaning = "大厦，大楼；宅第",
        .example = "a beautiful country mansion",
        .example_cn = "漂亮的乡村宅第"
    },
    {
        .word = "multitude",
        .phonetic_us = "ˈmʌltɪˌtud, -ˌtjud",
        .phonetic_uk = "'mʌltɪtjuːd",
        .meaning = "大批，大群；大量",
        .example = "I had never seen such a multitude of stars before.",
        .example_cn = "我以前从未见过这么多的星星。"
    },
    {
        .word = "barley",
        .phonetic_us = "'bɑrli",
        .phonetic_uk = "'bɑːlɪ",
        .meaning = "大麦",
        .example = "...fields of ripening wheat and barley.",
        .example_cn = "…快要成熟的小麦和大麦田。"
    },
    {
        .word = "continental",
        .phonetic_us = ",kɑntɪ'nɛntl",
        .phonetic_uk = "kɒntɪ'nent(ə)l",
        .meaning = "大陆的，大陆性的",
        .example = "the warming-up of continental interiors",
        .example_cn = "内陆地区的变暖"
    },
    {
        .word = "infinity",
        .phonetic_us = "ɪn'fɪnəti",
        .phonetic_uk = "ɪn'fɪnɪtɪ",
        .meaning = "无穷大",
        .example = "In the equation below, as E goes to zero, n approaches infinity.",
        .example_cn = "在下面的方程式中，E趋向于零时，n接近无穷大。"
    },
    {
        .word = "steak",
        .phonetic_us = "stek",
        .phonetic_uk = "steɪk",
        .meaning = "大块牛肉；牛排",
        .example = "...a steak sizzling on the grill.",
        .example_cn = "…一块儿在烤架上滋滋作响的牛排。"
    },
    {
        .word = "butt",
        .phonetic_us = "bʌt",
        .phonetic_uk = "bʌt",
        .meaning = "大酒桶，桶",
        .example = "a rainwater butt",
        .example_cn = "接雨水的大桶"
    },
    {
        .word = "largely",
        .phonetic_us = "'lɑrdʒli",
        .phonetic_uk = "'lɑːdʒlɪ",
        .meaning = "主要地",
        .example = "The state of Nevada is largely desert.",
        .example_cn = "内华达州大部分是沙漠。"
    },
    {
        .word = "widely",
        .phonetic_us = "'waɪdli",
        .phonetic_uk = "'waɪdlɪ",
        .meaning = "大大地",
        .example = "The quality of the applicants varies widely.",
        .example_cn = "申请人的素质差异很大。"
    },
    {
        .word = "prairie",
        .phonetic_us = "'prɛri",
        .phonetic_uk = "'preərɪ",
        .meaning = "大草原，牧场",
        .example = "Andrew traversed the prairie on horseback.",
        .example_cn = "安德鲁骑马穿越大草原。"
    },
    {
        .word = "smash",
        .phonetic_us = "smæʃ",
        .phonetic_uk = "smæʃ",
        .meaning = "打碎，打破，粉碎",
        .example = "Vandals had smashed all the windows.",
        .example_cn = "破坏分子打碎了所有的窗子。"
    },
    {
        .word = "sneeze",
        .phonetic_us = "sniz",
        .phonetic_uk = "sniːz",
        .meaning = "打喷嚏",
        .example = "She started coughing and sneezing.",
        .example_cn = "她开始咳嗽、打喷嚏。"
    },
    {
        .word = "lighter",
        .phonetic_us = "'laɪtɚ",
        .phonetic_uk = "'laɪtə",
        .meaning = "打火机，引燃器",
        .example = "a cigarette lighter",
        .example_cn = "香烟打火机"
    },
    {
        .word = "snore",
        .phonetic_us = "snɔr",
        .phonetic_uk = "snɔː",
        .meaning = "打鼾，打呼噜",
        .example = "He could hear the old man snoring.",
        .example_cn = "他听到老人在打鼾。"
    },
    {
        .word = "thresh",
        .phonetic_us = "θrɛʃ",
        .phonetic_uk = "θreʃ",
        .meaning = "打谷，脱粒",
        .example = "The grain was still sown, cut and threshed as it was a hundred years ago.",
        .example_cn = "谷物的播种、收割、脱粒方法还和一百年前一样。"
    },
    {
        .word = "forge",
        .phonetic_us = "fɔrdʒ",
        .phonetic_uk = "fɔːdʒ",
        .meaning = "打（铁等），锻造",
        .example = "swords forged from steel",
        .example_cn = "用钢锻造的刀剑"
    },
    {
        .word = "passport",
        .phonetic_us = "'pæspɔrt",
        .phonetic_uk = "'pɑːspɔːt",
        .meaning = "达到目的的手段",
        .example = "The only passport to success is hard work.",
        .example_cn = "获得成功的唯一途径就是艰苦奋斗。"
    },
    {
        .word = "inaccessible",
        .phonetic_us = ",ɪnæk'sɛsəbl",
        .phonetic_uk = "ɪnək'sesɪb(ə)l",
        .meaning = "达不到的，难接近的",
        .example = "In winter, the villages are inaccessible by road.",
        .example_cn = "冬天时，进入这些村子的路很难走。"
    },
    {
        .word = "frustrate",
        .phonetic_us = "'frʌstret",
        .phonetic_uk = "frʌ'streɪt; 'frʌs-",
        .meaning = "挫败",
        .example = "Their attempts to speak to him were frustrated by the guards.",
        .example_cn = "他们想跟他说话，但被警卫拦住了。"
    },
    {
        .word = "latent",
        .phonetic_us = "'letnt",
        .phonetic_uk = "'leɪt(ə)nt",
        .meaning = "存在但看不见的",
        .example = "The virus remains latent in the body for many years.",
        .example_cn = "这种病毒会在体内潜伏许多年。"
    },
    {
        .word = "frail",
        .phonetic_us = "frel",
        .phonetic_uk = "freɪl",
        .meaning = "脆弱的",
        .example = "Human nature is frail.",
        .example_cn = "人性脆弱。"
    },
    {
        .word = "fragile",
        .phonetic_us = "'frædʒəl",
        .phonetic_uk = "'frædʒaɪl",
        .meaning = "脆弱的；体质弱的",
        .example = "The economy remains extremely fragile.",
        .example_cn = "经济仍然极其脆弱。"
    },
    {
        .word = "crisp",
        .phonetic_us = "krɪsp",
        .phonetic_uk = "krɪsp",
        .meaning = "脆的",
        .example = "a crisp green salad",
        .example_cn = "脆爽的蔬菜色拉"
    },
    {
        .word = "catalyst",
        .phonetic_us = "'kætəlɪst",
        .phonetic_uk = "'kæt(ə)lɪst",
        .meaning = "催化剂；刺激因素",
        .example = "They hope his election will act as a catalyst for reform.",
        .example_cn = "他们希望他的当选会成为改革的催化剂。"
    },
    {
        .word = "promotion",
        .phonetic_us = "prə'moʃən",
        .phonetic_uk = "prə'məʊʃn",
        .meaning = "促进；提升",
        .example = "a society for the promotion of religious tolerance",
        .example_cn = "一个促进宗教包容的团体"
    },
    {
        .word = "reckless",
        .phonetic_us = "'rɛkləs",
        .phonetic_uk = "'reklɪs",
        .meaning = "粗心大意的；鲁莽的",
        .example = "He was accused of causing death by reckless driving .",
        .example_cn = "他被控因鲁莽驾驶致人死亡。"
    },
    {
        .word = "vulgar",
        .phonetic_us = "'vʌlɡɚ",
        .phonetic_uk = "'vʌlgə",
        .meaning = "粗俗的，庸俗的",
        .example = "vulgar behaviour",
        .example_cn = "粗俗的行为"
    },
    {
        .word = "massive",
        .phonetic_us = "'mæsɪv",
        .phonetic_uk = "'mæsɪv",
        .meaning = "粗大的；大而重的",
        .example = "The bell is massive, weighing over 40 tons.",
        .example_cn = "那口钟非常大，有40多吨重。"
    },
    {
        .word = "harsh",
        .phonetic_us = "hɑrʃ",
        .phonetic_uk = "hɑːʃ",
        .meaning = "粗糙的；严厉的",
        .example = "My skin is quite sensitive and I find some soaps too harsh.",
        .example_cn = "我的皮肤很敏感，我觉得有些肥皂刺激性太强。"
    },
    {
        .word = "jungle",
        .phonetic_us = "'dʒʌŋɡl",
        .phonetic_uk = "'dʒʌŋg(ə)l",
        .meaning = "丛林，密林，莽丛",
        .example = "the Amazon jungle",
        .example_cn = "亚马孙丛林"
    },
    {
        .word = "follow",
        .phonetic_us = "'fɑlo",
        .phonetic_uk = "'fɒləʊ",
        .meaning = "从事（职业），经营",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "overflow",
        .phonetic_us = ",ovɚ'flo",
        .phonetic_uk = "əʊvə'fləʊ",
        .meaning = "从…中溢出",
        .example = "The drains flooded and water overflowed down the main street.",
        .example_cn = "下水道被淹，水溢到了大街上。"
    },
    {
        .word = "smart",
        .phonetic_us = "smɑrt",
        .phonetic_uk = "smɑːt",
        .meaning = "刺疼，扎疼，剧痛",
        .example = "My eyes were smarting with the smoke.",
        .example_cn = "我的眼睛被烟熏得发痛。"
    },
    {
        .word = "prick",
        .phonetic_us = "prɪk",
        .phonetic_uk = "prɪk",
        .meaning = "刺（穿）",
        .example = "Prick the sausages before you grill them.",
        .example_cn = "烤之前把香肠戳孔。"
    },
    {
        .word = "thereafter",
        .phonetic_us = ",ðɛr'æftɚ",
        .phonetic_uk = "ðeər'ɑːftə",
        .meaning = "此后，以后",
        .example = "10,000 men had volunteered by the end of September; thereafter, approximately 1,000 men enlisted each month.",
        .example_cn = "到9月底时已有10,000人志愿参军，此后，每个月差不多有1,000人应征入伍。"
    },
    {
        .word = "magnetism",
        .phonetic_us = "'mægnə'tɪzəm",
        .phonetic_uk = "'mægnɪtɪz(ə)m",
        .meaning = "磁；魅力",
        .example = "...his research in electricity and magnetism.",
        .example_cn = "…他在电、磁领域的研究。"
    },
    {
        .word = "porcelain",
        .phonetic_us = "ˈpɔrsələn",
        .phonetic_uk = "'pɔːs(ə)lɪn",
        .meaning = "瓷",
        .example = "a porcelain vase",
        .example_cn = "瓷花瓶"
    },
    {
        .word = "initial",
        .phonetic_us = "ɪ'nɪʃəl",
        .phonetic_uk = "ɪ'nɪʃəl",
        .meaning = "词首的",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "glossary",
        .phonetic_us = "'ɡlɑsəri",
        .phonetic_uk = "'glɒs(ə)rɪ",
        .meaning = "词汇表；术语汇编",
        .example = "A glossary of terms is included for the reader's convenience.",
        .example_cn = "为了方便读者，还收录了术语汇编。"
    },
    {
        .word = "vocabulary",
        .phonetic_us = "və'kæbjəlɛri",
        .phonetic_uk = "və(ʊ)'kæbjʊlərɪ",
        .meaning = "词汇表，词汇汇编",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "stem",
        .phonetic_us = "stɛm",
        .phonetic_uk = "stem",
        .meaning = "词干",
        .example = "‘Writ ’ is the stem of the forms ‘writes ’, ‘writing ’ and ‘written ’.",
        .example_cn = "writ是writes、writing和written三个词的词干。"
    },
    {
        .word = "poke",
        .phonetic_us = "pok",
        .phonetic_uk = "pəʊk",
        .meaning = "戳，刺；伸（头等）",
        .example = "Andy poked the fish with his finger to see if it was still alive.",
        .example_cn = "安迪用手指戳了戳那条鱼，看它是否还活着。"
    },
    {
        .word = "lipstick",
        .phonetic_us = "'lɪpstɪk",
        .phonetic_uk = "'lɪpstɪk",
        .meaning = "唇膏，口红",
        .example = "She was wearing red lipstick.",
        .example_cn = "她涂着红色唇膏。"
    },
    {
        .word = "stainless",
        .phonetic_us = "ˈsteɪnlɪs",
        .phonetic_uk = "'steɪnlɪs",
        .meaning = "不锈的；纯洁的",
        .example = "stainless steel",
        .example_cn = "不锈钢"
    },
    {
        .word = "sheer",
        .phonetic_us = "ʃɪr",
        .phonetic_uk = "ʃɪə",
        .meaning = "纯粹的；全然的",
        .example = "The concert was sheer delight.",
        .example_cn = "这场音乐会是一次十足的享受。"
    },
    {
        .word = "perpendicular",
        .phonetic_us = "'pɝpən'dɪkjəlɚ",
        .phonetic_uk = ",pɜːp(ə)n'dɪkjʊlə",
        .meaning = "垂直的",
        .example = "a perpendicular line",
        .example_cn = "垂直线"
    },
    {
        .word = "author",
        .phonetic_us = "'ɔθɚ",
        .phonetic_uk = "'ɔːθə",
        .meaning = "创造者，创始人",
        .example = "the author of the state reforms",
        .example_cn = "州政府改革的发起者"
    },
    {
        .word = "innovation",
        .phonetic_us = ",ɪnə'veʃən",
        .phonetic_uk = "ˌɪnəˈveɪʃn",
        .meaning = "创新，改革；新设施",
        .example = "We must encourage innovation if the company is to remain competitive.",
        .example_cn = "公司要想保持竞争力，就必须鼓励革新。"
    },
    {
        .word = "initiative",
        .phonetic_us = "ɪ'nɪʃətɪv",
        .phonetic_uk = "ɪ'nɪʃɪətɪv; -ʃə-",
        .meaning = "倡议；新方案",
        .example = "a United Nations peace initiative",
        .example_cn = "联合国的和平倡议"
    },
    {
        .word = "puff",
        .phonetic_us = "pʌf",
        .phonetic_uk = "pʌf",
        .meaning = "喘气；喷（烟等）",
        .example = "George puffed and panted and he tried to keep up.",
        .example_cn = "乔治喘着粗气想跟上。"
    },
    {
        .word = "shipwreck",
        .phonetic_us = "'ʃɪprɛk",
        .phonetic_uk = "'ʃɪprek",
        .meaning = "船舶失事",
        .example = "survivors of the shipwreck",
        .example_cn = "此次海难的幸存者"
    },
    {
        .word = "report",
        .phonetic_us = "rɪ'pɔrt",
        .phonetic_uk = "rɪ'pɔːt",
        .meaning = "传说，议论",
        .example = "Government officials have denied reports of rebel advances.",
        .example_cn = "政府官员否认了有关叛军正在推进的传言。"
    },
    {
        .word = "infectious",
        .phonetic_us = "ɪn'fɛkʃəs",
        .phonetic_uk = "ɪn'fekʃəs",
        .meaning = "传染的；感染性的",
        .example = "infectious diseases",
        .example_cn = "传染性疾病"
    },
    {
        .word = "romance",
        .phonetic_us = "ro'mæns",
        .phonetic_uk = "rə(ʊ)'mæns; 'rəʊmæns",
        .meaning = "传奇；浪漫文学",
        .example = "a Medieval romance",
        .example_cn = "中世纪的传奇故事"
    },
    {
        .word = "herald",
        .phonetic_us = "'hɛrəld",
        .phonetic_uk = "'her(ə)ld",
        .meaning = "传令官；通报者",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "missionary",
        .phonetic_us = "'mɪʃənɛri",
        .phonetic_uk = "'mɪʃ(ə)n(ə)rɪ",
        .meaning = "传教士",
        .example = "My mother would still like me to be a missionary in Africa.",
        .example_cn = "我母亲还是想让我在非洲做一名传教士。"
    },
    {
        .word = "sensor",
        .phonetic_us = "'sɛnsɚ",
        .phonetic_uk = "'sensə",
        .meaning = "传感器，灵敏元件",
        .example = "The latest Japanese vacuum cleaners contain sensors that detect the amount of dust and type of floor.",
        .example_cn = "日本最新款吸尘器装有传感器，能测出灰尘量和地板类型。"
    },
    {
        .word = "circular",
        .phonetic_us = "'sɝkjəlɚ",
        .phonetic_uk = "'sɜːkjʊlə",
        .meaning = "传单，通报，通函",
        .example = "The proposal has been widely publicized in press information circulars sent to 1,800 newspapers.",
        .example_cn = "通过向1800份报纸发送新闻通告，这项提议得到了广泛地宣传。"
    },
    {
        .word = "leaflet",
        .phonetic_us = "'liflət",
        .phonetic_uk = "ˈliːflət",
        .meaning = "传单",
        .example = "a leaflet on skin cancer",
        .example_cn = "有关皮肤癌的宣传页"
    },
    {
        .word = "convey",
        .phonetic_us = "kən've",
        .phonetic_uk = "kən'veɪ",
        .meaning = "传达；传播；转让",
        .example = "All this information can be conveyed in a simple diagram.",
        .example_cn = "所有这些信息可以通过一张简单的图表来表示。"
    },
    {
        .word = "pierce",
        .phonetic_us = "pɪrs",
        .phonetic_uk = "pɪəs",
        .meaning = "穿透，戳穿",
        .example = "Steam the corn until it can easily be pierced with a fork.",
        .example_cn = "把玉米蒸到用叉子可以轻易扎透。"
    },
    {
        .word = "penetration",
        .phonetic_us = ",pɛnɪ'treʃən",
        .phonetic_uk = "penɪ'treɪʃ(ə)n",
        .meaning = "穿入；渗透",
        .example = "The floor is sealed to prevent water penetration.",
        .example_cn = "地板加了密封涂料防止渗水。"
    },
    {
        .word = "antenna",
        .phonetic_us = "æn'tɛnə",
        .phonetic_uk = "æn'tenə",
        .meaning = "触角；天线",
        .example = "The minister was praised for his acute political antennae (= ability to understand complicated political situations) .",
        .example_cn = "这位部长以政治触觉敏锐而为人称道。"
    },
    {
        .word = "virgin",
        .phonetic_us = "'vɝdʒɪn",
        .phonetic_uk = "'vɜːdʒɪn",
        .meaning = "处女",
        .example = "I was a virgin until I was thirty years old.",
        .example_cn = "我到30岁时还是个处女。"
    },
    {
        .word = "transaction",
        .phonetic_us = "træn'zækʃən",
        .phonetic_uk = "træn'zækʃ(ə)n; trɑːn-; -'sæk-",
        .meaning = "交易；处理",
        .example = "The bank charges a fixed rate for each transaction.",
        .example_cn = "银行对每一笔业务收取固定费用。"
    },
    {
        .word = "penalty",
        .phonetic_us = "'pɛnəlti",
        .phonetic_uk = "'pen(ə)ltɪ",
        .meaning = "处罚，刑罚，罚款",
        .example = "No littering. Penalty $500.",
        .example_cn = "禁止乱扔垃圾。 违者罚款500美元。"
    },
    {
        .word = "exclusive",
        .phonetic_us = "ɪk'sklusɪv",
        .phonetic_uk = "ɪk'skluːsɪv; ek-",
        .meaning = "除外的",
        .example = "Our prices are exclusive of sales tax.",
        .example_cn = "我们的价格不包括销售税。"
    },
    {
        .word = "notorious",
        .phonetic_us = "no'tɔrɪəs",
        .phonetic_uk = "nə(ʊ)'tɔːrɪəs",
        .meaning = "臭名昭著的",
        .example = "a notorious computer hacker",
        .example_cn = "声名狼藉的电脑黑客"
    },
    {
        .word = "scandal",
        .phonetic_us = "'skændl",
        .phonetic_uk = "'skænd(ə)l",
        .meaning = "丑事，丑闻；耻辱",
        .example = "It caused quite a scandal when he left his wife.",
        .example_cn = "他离开妻子成了一大丑闻。"
    },
    {
        .word = "specimen",
        .phonetic_us = "'spɛsəmən",
        .phonetic_uk = "'spesɪmɪn",
        .meaning = "抽样，样品",
        .example = "a blood specimen",
        .example_cn = "血样"
    },
    {
        .word = "extraction",
        .phonetic_us = "ɪk'strækʃən",
        .phonetic_uk = "ɪk'strækʃ(ə)n; ek-",
        .meaning = "抽出；提取法",
        .example = "the extraction of salt from seawater",
        .example_cn = "从海水中提取盐"
    },
    {
        .word = "adore",
        .phonetic_us = "ə'dɔr",
        .phonetic_uk = "ə'dɔː",
        .meaning = "崇拜，爱慕；很喜欢",
        .example = "It's obvious that she adores him.",
        .example_cn = "她显然深深地爱着他。"
    },
    {
        .word = "worship",
        .phonetic_us = "'wɝʃɪp",
        .phonetic_uk = "'wə:ʃip",
        .meaning = "崇拜；做礼拜",
        .example = "He absolutely worships her.",
        .example_cn = "他太崇拜她了。"
    },
    {
        .word = "bug",
        .phonetic_us = "bʌɡ",
        .phonetic_uk = "bʌg",
        .meaning = "虫子；臭虫",
        .example = "We noticed tiny bugs that were all over the walls.",
        .example_cn = "我们发现墙上爬满了小虫。"
    },
    {
        .word = "punch",
        .phonetic_us = "",
        .phonetic_uk = "pʌn(t)ʃ",
        .meaning = "打孔",
        .example = "The guard punched my ticket and I got on.",
        .example_cn = "守卫在我的票上打孔后，我就上去了。"
    },
    {
        .word = "strife",
        .phonetic_us = "straɪf",
        .phonetic_uk = "straɪf",
        .meaning = "冲突，竞争",
        .example = "a time of political strife",
        .example_cn = "政治纷争四起的时代"
    },
    {
        .word = "equator",
        .phonetic_us = "ɪ'kwetɚ",
        .phonetic_uk = "ɪ'kweɪtə",
        .meaning = "赤道，天球赤道",
        .example = "a small village near the equator",
        .example_cn = "赤道附近的小村庄"
    },
    {
        .word = "gear",
        .phonetic_us = "ɡɪr",
        .phonetic_uk = "gɪə",
        .meaning = "齿轮，传动装置",
        .example = "Careless use of the clutch may damage the gears.",
        .example_cn = "离合器使用不慎可能会损坏传动装置。"
    },
    {
        .word = "persist",
        .phonetic_us = "pɚ'sɪst",
        .phonetic_uk = "pə'sɪst",
        .meaning = "持续，存留",
        .example = "If the pain persists, you must see a doctor.",
        .example_cn = "如果一直痛，你就必须去看医生了。"
    },
    {
        .word = "breakfast",
        .phonetic_us = "'brɛkfəst",
        .phonetic_uk = "'brekfəst",
        .meaning = "吃早餐",
        .example = "All the ladies breakfasted in their rooms.",
        .example_cn = "所有女士在她们房间里用了早餐。"
    },
    {
        .word = "dine",
        .phonetic_us = "daɪn",
        .phonetic_uk = "daɪn",
        .meaning = "吃饭",
        .example = "He was dining with friends at the Ritz.",
        .example_cn = "他和朋友在里茨饭店一起进餐。"
    },
    {
        .word = "proceeding",
        .phonetic_us = "prə'sidɪŋ",
        .phonetic_uk = "prəʊ'siːdɪŋ",
        .meaning = "程序，行动，事项",
        .example = "The proceedings of the inquiry will take place in private.",
        .example_cn = "调查行动将秘密进行。"
    },
    {
        .word = "length",
        .phonetic_us = "[leŋθ]",
        .phonetic_uk = "leŋθ",
        .meaning = "长度",
        .example = "It is about a metre in length.",
        .example_cn = "它大约有一米长。"
    },
    {
        .word = "acknowledge",
        .phonetic_us = "ək'nɑlɪdʒ",
        .phonetic_uk = "ək'nɒlɪdʒ",
        .meaning = "承认；告知收到",
        .example = "The family acknowledge the need for change.",
        .example_cn = "全家人都承认需要改变一下。"
    },
    {
        .word = "shoulder",
        .phonetic_us = "'ʃoldɚ",
        .phonetic_uk = "'ʃəʊldə",
        .meaning = "承担；挑起",
        .example = "The residents are being asked to shoulder the costs of the repairs.",
        .example_cn = "居民们被要求承担这笔修理费用。"
    },
    {
        .word = "integrity",
        .phonetic_us = "ɪn'tɛɡrəti",
        .phonetic_uk = "ɪn'tegrɪtɪ",
        .meaning = "诚实，正直",
        .example = "I have always regarded him as a man of integrity.",
        .example_cn = "我一直把他当作一个正直诚实的人。"
    },
    {
        .word = "offer",
        .phonetic_us = "'ɔfɚ",
        .phonetic_uk = "'ɒfə",
        .meaning = "出现",
        .example = "I’ll raise the subject when a suitable occasion offers itself.",
        .example_cn = "等有合适的机会，我会把这件事提出来的。"
    },
    {
        .word = "membership",
        .phonetic_us = "'mɛmbɚʃɪp",
        .phonetic_uk = "'membəʃɪp",
        .meaning = "成员资格；会员人数",
        .example = "You should carry your membership card with you at all times.",
        .example_cn = "你应该随身携带会员卡。"
    },
    {
        .word = "systematic",
        .phonetic_us = "'sɪstə'mætɪk",
        .phonetic_uk = "sɪstə'mætɪk",
        .meaning = "成体系的",
        .example = "a systematic approach to solving the problem",
        .example_cn = "系统解决问题的办法"
    },
    {
        .word = "kit",
        .phonetic_us = "",
        .phonetic_uk = "kɪt",
        .meaning = "成套工具；用具包",
        .example = "Sally keeps her make-up kit in her bag.",
        .example_cn = "萨莉把化妆包放在手提包里。"
    },
    {
        .word = "commend",
        .phonetic_us = "kə'mɛnd",
        .phonetic_uk = "kə'mend",
        .meaning = "称赞，表扬；推荐",
        .example = "The paper was highly commended in the UK Press Awards.",
        .example_cn = "该报获得了“英国新闻奖”的高度褒奖。"
    },
    {
        .word = "brood",
        .phonetic_us = "brud",
        .phonetic_uk = "bruːd",
        .meaning = "沉思，郁闭地沉思",
        .example = "Don’t sit at home brooding all day.",
        .example_cn = "别整天坐在家里闷闷不乐的。"
    },
    {
        .word = "muse",
        .phonetic_us = "mjuz",
        .phonetic_uk = "mjuːz",
        .meaning = "沉思，默想，冥想",
        .example = "He mused on how different his life would have been, had he not met Louisa.",
        .example_cn = "他默默地想，如果没有遇到路易莎，他的人生会有多么不同。"
    },
    {
        .word = "meditate",
        .phonetic_us = "'mɛdɪtet",
        .phonetic_uk = "'medɪteɪt",
        .meaning = "沉思；冥想",
        .example = "She sat quietly, meditating on the day’s events.",
        .example_cn = "她静静地坐着，思考着这一天发生的事。"
    },
    {
        .word = "hush",
        .phonetic_us = "hʌʃ",
        .phonetic_uk = "hʌʃ",
        .meaning = "沉默",
        .example = "A sudden hush fell over the crowd.",
        .example_cn = "人群突然变得鸦雀无声。"
    },
    {
        .word = "immerse",
        .phonetic_us = "ɪ'mɝs",
        .phonetic_uk = "ɪ'mɜːs",
        .meaning = "沉浸；给…施洗礼",
        .example = "She immersed herself in her work.",
        .example_cn = "她埋头工作。"
    },
    {
        .word = "repeal",
        .phonetic_us = "rɪ'pil",
        .phonetic_uk = "rɪ'piːl",
        .meaning = "撤销",
        .example = "The government has just repealed the law segregating public facilities.",
        .example_cn = "政府刚刚废除了隔离公共设施的法令。"
    },
    {
        .word = "lathe",
        .phonetic_us = "leð",
        .phonetic_uk = "leɪð",
        .meaning = "车床",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "row",
        .phonetic_us = "ro",
        .phonetic_uk = "rəʊ",
        .meaning = "吵架，口角",
        .example = "a family row",
        .example_cn = "家庭争吵"
    },
    {
        .word = "mock",
        .phonetic_us = "mɑk",
        .phonetic_uk = "mɒk",
        .meaning = "嘲弄，挖苦",
        .example = "Opposition MPs mocked the government’s decision.",
        .example_cn = "反对党议员讥笑政府的这一决策。"
    },
    {
        .word = "reign",
        .phonetic_us = "ren",
        .phonetic_uk = "reɪn",
        .meaning = "（某君主的）统治时期",
        .example = "changes that took place during Charlemagne’s reign",
        .example_cn = "查理曼大帝统治时期的变革"
    },
    {
        .word = "supersonic",
        .phonetic_us = ",supɚ'sɑnɪk",
        .phonetic_uk = "suːpə'sɒnɪk; sjuː-",
        .meaning = "超声的，超声速的",
        .example = "supersonic aircraft",
        .example_cn = "超音速飞机"
    },
    {
        .word = "ultrasonic",
        .phonetic_us = ",ʌltrə'sɑnɪk",
        .phonetic_uk = "ʌltrə'sɒnɪk",
        .meaning = "超声的",
        .example = "ultrasonic waves",
        .example_cn = "超声波"
    },
    {
        .word = "surpass",
        .phonetic_us = "sə'pæs",
        .phonetic_uk = "sə'pɑːs",
        .meaning = "超过，超越，胜过",
        .example = "He had surpassed all our expectations .",
        .example_cn = "他超越了我们所有的预期。"
    },
    {
        .word = "nickname",
        .phonetic_us = "'nɪk'nem",
        .phonetic_uk = "'nɪkneɪm",
        .meaning = "绰号，诨号",
        .example = "Stephen earned himself the nickname Hawkeye.",
        .example_cn = "斯蒂芬得了个“鹰眼”的绰号。"
    },
    {
        .word = "waggon",
        .phonetic_us = "'wægən",
        .phonetic_uk = "'wæɡən",
        .meaning = "敞蓬车厢",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "spectacle",
        .phonetic_us = "'spɛktəkl",
        .phonetic_uk = "'spektək(ə)l",
        .meaning = "场面，景象；奇观",
        .example = "a multimedia dance and opera spectacle",
        .example_cn = "盛大的多媒体舞蹈戏剧表演"
    },
    {
        .word = "resident",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "常住者",
        .example = "the residents of Westville",
        .example_cn = "韦斯特维尔的居民"
    },
    {
        .word = "haunt",
        .phonetic_us = "hɔnt",
        .phonetic_uk = "hɔːnt",
        .meaning = "（鬼魂）经常出没",
        .example = "The pub is said to be haunted by the ghost of a former landlord.",
        .example_cn = "据说这个酒吧里经常有一位前任房主的鬼魂出没。"
    },
    {
        .word = "visit",
        .phonetic_us = "'vɪzɪt",
        .phonetic_uk = "'vɪzɪt",
        .meaning = "拜访",
        .example = "Eric went to Seattle to visit his cousins.",
        .example_cn = "埃里克到西雅图去看望他的表兄弟。"
    },
    {
        .word = "frequent",
        .phonetic_us = "'frikwənt",
        .phonetic_uk = "'friːkw(ə)nt",
        .meaning = "常见的；频繁的",
        .example = "Trains rushed past at frequent intervals.",
        .example_cn = "火车频频驶过。"
    },
    {
        .word = "shovel",
        .phonetic_us = "'ʃʌvl",
        .phonetic_uk = "'ʃʌv(ə)l",
        .meaning = "铲，铁铲",
        .example = "...a coal shovel.",
        .example_cn = "…一把煤铲。"
    },
    {
        .word = "toad",
        .phonetic_us = "tod",
        .phonetic_uk = "təʊd",
        .meaning = "蟾蜍，癞蛤蟆",
        .example = "Toads have drier, lumpier skins than frogs and spend less time in the water.",
        .example_cn = "蟾蜍的皮比青蛙干燥，疙瘩也更多，呆在水中的时间比青蛙少。"
    },
    {
        .word = "diesel",
        .phonetic_us = "'dizl",
        .phonetic_uk = "'diːz(ə)l",
        .meaning = "柴油发动机，内燃机",
        .example = "Our new car is a diesel.",
        .example_cn = "我们的新车是柴油车。"
    },
    {
        .word = "errand",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "差使，差事",
        .example = "I seemed to spend my life running errands for people.",
        .example_cn = "我好像一辈子都在为别人跑腿。"
    },
    {
        .word = "ascertain",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "查明，确定，弄清",
        .example = "A postmortem was ordered to try to ascertain the cause of death.",
        .example_cn = "下令验尸以查明死因。"
    },
    {
        .word = "horizon",
        .phonetic_us = "hə'raɪzn",
        .phonetic_uk = "hə'raɪz(ə)n",
        .meaning = "地平线",
        .example = "We could see a ship on the horizon.",
        .example_cn = "我们能看见地平线上有一艘船。"
    },
    {
        .word = "tactics",
        .phonetic_us = "'tæktɪks",
        .phonetic_uk = "'tæktɪks",
        .meaning = "战术，兵法",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "grassy",
        .phonetic_us = "'ɡræsi",
        .phonetic_uk = "'grɑːsɪ",
        .meaning = "草多的",
        .example = "a grassy bank",
        .example_cn = "长满青草的河岸"
    },
    {
        .word = "herb",
        .phonetic_us = "ɝb",
        .phonetic_uk = "hɜːb",
        .meaning = "草本植物；香草",
        .example = "Sprinkle the dish with chopped fresh herbs.",
        .example_cn = "在菜肴上撒些切碎的新鲜香草。"
    },
    {
        .word = "groove",
        .phonetic_us = "ɡruv",
        .phonetic_uk = "gruːv",
        .meaning = "槽",
        .example = "The bolt slid easily into the groove.",
        .example_cn = "插销顺畅地滑入凹槽。"
    },
    {
        .word = "manipulate",
        .phonetic_us = "mə'nɪpjulet",
        .phonetic_uk = "mə'nɪpjʊleɪt",
        .meaning = "操作；操纵，控制",
        .example = "software designed to store and manipulate data",
        .example_cn = "用于存储和处理数据的软件"
    },
    {
        .word = "hatch",
        .phonetic_us = "hætʃ",
        .phonetic_uk = "hætʃ",
        .meaning = "策划；密谋",
        .example = "Have you been hatching up a deal with her?",
        .example_cn = "你是不是在和她密谋什么交易？"
    },
    {
        .word = "warehouse",
        .phonetic_us = "'wɛrhaʊs",
        .phonetic_uk = "'weəhaʊs",
        .meaning = "仓库，货栈",
        .example = "The goods have been sitting in a warehouse for months because a strike has prevented distribution.",
        .example_cn = "因为罢工无法发货，货物已经堆在仓库里好几个月了。"
    },
    {
        .word = "cruelty",
        .phonetic_us = "'krʊəlti",
        .phonetic_uk = "'krʊəltɪ",
        .meaning = "残酷；残酷行为",
        .example = "The children had suffered cruelty and neglect.",
        .example_cn = "这些孩子遭受虐待，无人照管。"
    },
    {
        .word = "napkin",
        .phonetic_us = "'næpkɪn",
        .phonetic_uk = "'næpkɪn",
        .meaning = "餐巾（纸）",
        .example = "...taking tiny bites of a hot dog and daintily wiping my lips with a napkin.",
        .example_cn = "…小口咬着热狗并用餐巾文雅地擦着我的嘴唇。"
    },
    {
        .word = "participate",
        .phonetic_us = "pɑr'tɪsə'pet",
        .phonetic_uk = "pɑː'tɪsɪpeɪt",
        .meaning = "参与",
        .example = "Some members refused to participate.",
        .example_cn = "有些会员拒绝参加。"
    },
    {
        .word = "senator",
        .phonetic_us = "'sɛnətɚ",
        .phonetic_uk = "'senətə",
        .meaning = "参议员",
        .example = "Senator Kennedy",
        .example_cn = "肯尼迪参议员"
    },
    {
        .word = "reference",
        .phonetic_us = "'rɛfrəns",
        .phonetic_uk = "'ref(ə)r(ə)ns",
        .meaning = "参考文献；参照物",
        .example = "a comprehensive list of references",
        .example_cn = "详尽的参考书目清单"
    },
    {
        .word = "participant",
        .phonetic_us = "pɑr'tɪsəpənt",
        .phonetic_uk = "pɑː'tɪsɪp(ə)nt",
        .meaning = "参加者",
        .example = "an active participant in the negotiations",
        .example_cn = "积极参与谈判的人"
    },
    {
        .word = "spectator",
        .phonetic_us = "'spɛktetɚ",
        .phonetic_uk = "spek'teɪtə",
        .meaning = "参观者，观众",
        .example = "The match attracted over 40,000 spectators.",
        .example_cn = "这场比赛吸引了四万多名观众。"
    },
    {
        .word = "parameter",
        .phonetic_us = "pə'ræmɪtɚ",
        .phonetic_uk = "pə'ræmɪtə",
        .meaning = "参（变）数；参量",
        .example = "...some of the parameters that determine the taste of a wine.",
        .example_cn = "…一些决定葡萄酒味道的参数。"
    },
    {
        .word = "recipe",
        .phonetic_us = "'rɛsəpi",
        .phonetic_uk = "'resɪpɪ",
        .meaning = "菜谱，烹饪法",
        .example = "a recipe book",
        .example_cn = "一本烹饪书"
    },
    {
        .word = "assumption",
        .phonetic_us = "ə'sʌmpʃən",
        .phonetic_uk = "ə'sʌm(p)ʃ(ə)n",
        .meaning = "假定",
        .example = "A lot of people make the assumption that poverty only exists in the Third World.",
        .example_cn = "许多人以为贫困仅仅存在于第三世界。"
    },
    {
        .word = "rule",
        .phonetic_us = "rul",
        .phonetic_uk = "ruːl",
        .meaning = "裁决，裁定",
        .example = "The judge ruled that she should have custody of the children.",
        .example_cn = "法官判定孩子的监护权归她。"
    },
    {
        .word = "substance",
        .phonetic_us = "'sʌbstəns",
        .phonetic_uk = "'sʌbst(ə)ns",
        .meaning = "内容，本旨；财产",
        .example = "The substance of his argument was that people on welfare should work.",
        .example_cn = "他论点的主旨是享受社会福利的人应该去工作。"
    },
    {
        .word = "friction",
        .phonetic_us = "'frɪkʃən",
        .phonetic_uk = "'frɪkʃ(ə)n",
        .meaning = "摩擦",
        .example = "Check your rope frequently, as friction against the rock can wear it away.",
        .example_cn = "要经常检查绳索，因为与岩石摩擦会使它磨损。"
    },
    {
        .word = "sermon",
        .phonetic_us = "'sɝmən",
        .phonetic_uk = "'sɜːmən",
        .meaning = "布道，讲道；说教",
        .example = "The vicar gave a sermon on charity.",
        .example_cn = "牧师作了一次关于仁爱的布道。"
    },
    {
        .word = "absent",
        .phonetic_us = "ˈæbsənt",
        .phonetic_uk = "'æbs(ə)nt",
        .meaning = "不在的",
        .example = "students who are regularly absent from school",
        .example_cn = "经常缺课的学生"
    },
    {
        .word = "disagreement",
        .phonetic_us = ",dɪsə'ɡrimənt",
        .phonetic_uk = "dɪsə'ɡriːmənt",
        .meaning = "争论；不一致",
        .example = "We’ve had a few disagreements , but we’re still good friends.",
        .example_cn = "虽然有过一些分歧，但我们仍是好朋友。"
    },
    {
        .word = "awkward",
        .phonetic_us = "'ɔkwɚd",
        .phonetic_uk = "'ɔːkwəd",
        .meaning = "令人尴尬的",
        .example = "I hoped he would stop asking awkward questions .",
        .example_cn = "我希望他不要再问令人难堪的问题。"
    },
    {
        .word = "immortal",
        .phonetic_us = "ɪ'mɔrtl",
        .phonetic_uk = "ɪ'mɔːt(ə)l",
        .meaning = "不朽的；永生的",
        .example = "Plato believed that the soul is immortal.",
        .example_cn = "柏拉图认为灵魂不灭。"
    },
    {
        .word = "wretched",
        .phonetic_us = "'rɛtʃɪd",
        .phonetic_uk = "'retʃɪd",
        .meaning = "不幸的",
        .example = "the poor, wretched girl",
        .example_cn = "极其不幸的可怜姑娘"
    },
    {
        .word = "misfortune",
        .phonetic_us = "'mɪs'fɔrtʃən",
        .phonetic_uk = "mɪs'fɔːtʃuːn; -tʃ(ə)n",
        .meaning = "不幸，灾祸，灾难",
        .example = "It seems the banks always profit from farmers’ misfortunes.",
        .example_cn = "银行似乎总是从农民的不幸中获益。"
    },
    {
        .word = "incompatible",
        .phonetic_us = ",ɪnkəm'pætəbl",
        .phonetic_uk = "ɪnkəm'pætɪb(ə)l",
        .meaning = "不相容的",
        .example = "Politeness and truth are often mutually incompatible.",
        .example_cn = "礼貌和实话往往互不相容。"
    },
    {
        .word = "instability",
        .phonetic_us = ",ɪnstə'bɪləti",
        .phonetic_uk = "ɪnstə'bɪlɪtɪ",
        .meaning = "不稳定性",
        .example = "the instability of the market",
        .example_cn = "市场的变化无常"
    },
    {
        .word = "incomplete",
        .phonetic_us = "'ɪnkəm'plit",
        .phonetic_uk = "ɪnkəm'pliːt",
        .meaning = "不完全的，未完成的",
        .example = "Unfortunately, I do not have the information because our records are incomplete.",
        .example_cn = "很遗憾，由于我们的记录不完整，我无法提供有关资料。"
    },
    {
        .word = "stuffy",
        .phonetic_us = "'stʌfi",
        .phonetic_uk = "'stʌfɪ",
        .meaning = "不透气的，闷热的",
        .example = "It’s getting stuffy in here – do you mind if I open the window?",
        .example_cn = "这里越来越闷了，我开开窗行吗？"
    },
    {
        .word = "opaque",
        .phonetic_us = "o'pek",
        .phonetic_uk = "ə(ʊ)'peɪk",
        .meaning = "不透明的",
        .example = "a shower with an opaque glass door",
        .example_cn = "装有不透明玻璃门的淋浴间"
    },
    {
        .word = "improper",
        .phonetic_us = "ɪm'prɑpɚ",
        .phonetic_uk = "ɪm'prɒpə",
        .meaning = "不适当的；不合理的",
        .example = "It would be improper of me to comment before the election outcome is known.",
        .example_cn = "在选举结果未知的情况下我作出评论是不恰当的。"
    },
    {
        .word = "dissatisfaction",
        .phonetic_us = "dɪs'sætɪs'fækʃən",
        .phonetic_uk = "dɪssætɪs'fækʃn",
        .meaning = "不满，不平",
        .example = "30% of customers expressed dissatisfaction with the service.",
        .example_cn = "30%的顾客对服务表示不满意。"
    },
    {
        .word = "watertight",
        .phonetic_us = "'wɔtɚtaɪt",
        .phonetic_uk = "'wɔːtətaɪt",
        .meaning = "不漏水的，防水的",
        .example = "a watertight container",
        .example_cn = "不漏水的容器"
    },
    {
        .word = "inevitably",
        .phonetic_us = "ɪn'ɛvɪtəbli",
        .phonetic_uk = "ɪ'nevɪtəblɪ; ɪn'evɪtəblɪ",
        .meaning = "不可避免地",
        .example = "The decision will inevitably lead to political tensions.",
        .example_cn = "该决定必然导致政治局势的紧张。"
    },
    {
        .word = "irrespective",
        .phonetic_us = ",ɪrɪ'spɛktɪv",
        .phonetic_uk = "ɪrɪ'spektɪv",
        .meaning = "不考虑的，不顾的",
        .example = "The course is open to anyone, irrespective of age.",
        .example_cn = "这门课任何人都可参加，没有年龄限制。"
    },
    {
        .word = "inaccurate",
        .phonetic_us = "ɪn'ækjərət",
        .phonetic_uk = "ɪn'ækjʊrət",
        .meaning = "不精密的，不准确的",
        .example = "A lot of what has been written about him is inaccurate.",
        .example_cn = "关于他的文字描述有大量失实之处。"
    },
    {
        .word = "unreasonable",
        .phonetic_us = "ʌn'riznəbl",
        .phonetic_uk = "ʌn'riːz(ə)nəb(ə)l",
        .meaning = "不讲道理的；过高的",
        .example = "I think he’s being unreasonable.",
        .example_cn = "我认为他是在无理取闹。"
    },
    {
        .word = "undesirable",
        .phonetic_us = ",ʌndɪ'zaɪərəbl",
        .phonetic_uk = "ʌndɪ'zaɪərəb(ə)l",
        .meaning = "不合需要的；讨厌的",
        .example = "punishment of undesirable behaviour",
        .example_cn = "对不良行为的惩罚"
    },
    {
        .word = "unfit",
        .phonetic_us = "",
        .phonetic_uk = "ʌn'fɪt",
        .meaning = "不合适的；无能力的",
        .example = "Jenkins is unfit for public office.",
        .example_cn = "詹金斯不适合担任公职。"
    },
    {
        .word = "absurd",
        .phonetic_us = "əbˈsɚd, -ˈzɚd",
        .phonetic_uk = "əb'sɜːd",
        .meaning = "不合理的，荒唐的",
        .example = "It seems an absurd idea.",
        .example_cn = "这似乎是个荒唐的想法。"
    },
    {
        .word = "irregularity",
        .phonetic_us = "ɪ'rɛgjə'lærəti",
        .phonetic_uk = "ɪ,regjʊ'lærɪtɪ",
        .meaning = "不规则；不整齐",
        .example = "a slight irregularity in his heartbeat",
        .example_cn = "他略微的心律不齐"
    },
    {
        .word = "disregard",
        .phonetic_us = ",dɪsrɪ'ɡɑrd",
        .phonetic_uk = "dɪsrɪ'gɑːd",
        .meaning = "不管，不顾",
        .example = "He ordered the jury to disregard the witness’s last statement.",
        .example_cn = "他指示陪审团忽略证人的最后一句话。"
    },
    {
        .word = "uncertain",
        .phonetic_us = "ʌn'sɝtn",
        .phonetic_uk = "ʌn'sɜːt(ə)n; -tɪn",
        .meaning = "不定的；无常的",
        .example = "He was uncertain how much further he could walk.",
        .example_cn = "他不清楚自己还能走多远。"
    },
    {
        .word = "impurity",
        .phonetic_us = "ɪm'pjʊrəti",
        .phonetic_uk = "ɪm'pjʊərɪtɪ",
        .meaning = "杂质；不纯",
        .example = "All natural minerals contain impurities.",
        .example_cn = "凡天然矿物都含有杂质。"
    },
    {
        .word = "inadequate",
        .phonetic_us = "ɪn'ædɪkwət",
        .phonetic_uk = "ɪn'ædɪkwət",
        .meaning = "不充足的，不适当的",
        .example = "inadequate resources",
        .example_cn = "资源缺乏"
    },
    {
        .word = "invariably",
        .phonetic_us = "ɪn'vɛrɪəbli",
        .phonetic_uk = "ɪn'veərɪəblɪ",
        .meaning = "不变地，永恒地",
        .example = "It invariably rains when I go there.",
        .example_cn = "我每次去那儿都下雨。"
    },
    {
        .word = "uneasy",
        .phonetic_us = "ʌn'izi",
        .phonetic_uk = "ʌn'iːzɪ",
        .meaning = "不安的；拘束的",
        .example = "She eventually fell into an uneasy sleep.",
        .example_cn = "她终于睡着了，但睡得并不踏实。"
    },
    {
        .word = "mammal",
        .phonetic_us = "'mæml",
        .phonetic_uk = "'mæm(ə)l",
        .meaning = "哺乳动物",
        .example = "Humans, dogs, elephants, and dolphins are all mammals, but birds, fish, and crocodiles are not.",
        .example_cn = "人、狗、大象和海豚都是哺乳动物，而鸟、鱼和鳄鱼则不是。"
    },
    {
        .word = "supplement",
        .phonetic_us = "'sʌplɪmənt",
        .phonetic_uk = "'sʌplɪm(ə)nt",
        .meaning = "补角",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "complement",
        .phonetic_us = "ˈkɑːmplɪment",
        .phonetic_uk = "'kɒmplɪm(ə)nt",
        .meaning = "补充",
        .example = "The team needs players who complement each other.",
        .example_cn = "球队需要能够相互取长补短的队员。"
    },
    {
        .word = "compensation",
        .phonetic_us = ",kɑmpɛn'seʃən",
        .phonetic_uk = "kɒmpen'seɪʃ(ə)n",
        .meaning = "补偿，赔偿，赔偿费",
        .example = "People who are wrongly arrested may be paid compensation .",
        .example_cn = "被误抓的人有可能得到补偿费。"
    },
    {
        .word = "humanitarian",
        .phonetic_us = "hju,mænɪ'tɛrɪən",
        .phonetic_uk = "hjʊ,mænɪ'teərɪən",
        .meaning = "博爱的",
        .example = "Humanitarian aid is being sent to the refugees.",
        .example_cn = "正向难民提供人道主义援助。"
    },
    {
        .word = "barge",
        .phonetic_us = "bɑrdʒ",
        .phonetic_uk = "bɑːdʒ",
        .meaning = "驳船；大型游船",
        .example = "Carrying goods by train costs nearly three times more than carrying them by barge.",
        .example_cn = "通过铁路运货的成本比驳船运货成本高出近3倍。"
    },
    {
        .word = "fluctuation",
        .phonetic_us = ",flʌktʃʊ'eʃən",
        .phonetic_uk = ",flʌktʃʊ'eɪʃ(ə)n; -tjʊ-",
        .meaning = "波动",
        .example = "Prices are subject to fluctuation.",
        .example_cn = "价格可能会有波动。"
    },
    {
        .word = "fluctuate",
        .phonetic_us = "'flʌktʃʊ'et",
        .phonetic_uk = "'flʌktʃʊeɪt; -tjʊ-",
        .meaning = "波动，使波动",
        .example = "Insect populations fluctuate wildly from year to year.",
        .example_cn = "昆虫的数量每年变化很大。"
    },
    {
        .word = "invalid",
        .phonetic_us = "ˈɪnvəlɪd；ɪnˈvælɪd",
        .phonetic_uk = "ˈɪnvəlɪd；ɪnˈvælɪd",
        .meaning = "病人",
        .example = "I hate being treated as an invalid.",
        .example_cn = "我讨厌被当作病人对待。"
    },
    {
        .word = "ward",
        .phonetic_us = "wɔrd",
        .phonetic_uk = "wɔːd",
        .meaning = "病房，病室；监房",
        .example = "the other patients in the ward",
        .example_cn = "病房里的其他病人"
    },
    {
        .word = "strength",
        .phonetic_us = "strɛŋθ",
        .phonetic_uk = "streŋθ; streŋkθ",
        .meaning = "兵力；强度",
        .example = "The police force is below strength at the moment (= there are fewer police than there should be ).",
        .example_cn = "目前警力不足。"
    },
    {
        .word = "icy",
        .phonetic_us = "'aɪsi",
        .phonetic_uk = "'aɪsɪ",
        .meaning = "冰冷的；冷冰冰的",
        .example = "an icy wind",
        .example_cn = "刺骨寒风"
    },
    {
        .word = "objective",
        .phonetic_us = "əb'dʒɛktɪv",
        .phonetic_uk = "əb'dʒektɪv",
        .meaning = "目标",
        .example = "He vowed to achieve certain objectives before the end of his presidency.",
        .example_cn = "他立誓要在他的总统任期结束之前实现某些目标。"
    },
    {
        .word = "villa",
        .phonetic_us = "'vɪlə",
        .phonetic_uk = "'vɪlə",
        .meaning = "别墅",
        .example = "We rented a holiday villa in Spain.",
        .example_cn = "我们在西班牙租了一座假日别墅。"
    },
    {
        .word = "characterize",
        .phonetic_us = "'kærəktə'raɪz",
        .phonetic_uk = "'kærəktəraiz",
        .meaning = "表现…的特性",
        .example = "The group was characterized as being well-educated and liberal.",
        .example_cn = "该群体被描绘成受过良好教育，思想开明。"
    },
    {
        .word = "signify",
        .phonetic_us = "'sɪɡnɪfaɪ",
        .phonetic_uk = "'sɪgnɪfaɪ",
        .meaning = "表示，意味着",
        .example = "Some tribes use special facial markings to signify status.",
        .example_cn = "有些部落使用特殊的面部标记来表示地位。"
    },
    {
        .word = "manifest",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "表明",
        .example = "The shareholders have manifested their intention to sell the shares.",
        .example_cn = "股东们表明了要出售股票的意图。"
    },
    {
        .word = "seemingly",
        .phonetic_us = "'simɪŋli",
        .phonetic_uk = "'siːmɪŋlɪ",
        .meaning = "表面上，外表上",
        .example = "seemingly unrelated bits of information",
        .example_cn = "似乎互不相关的零星信息"
    },
    {
        .word = "superficial",
        .phonetic_us = ",supɚ'fɪʃl",
        .phonetic_uk = ",suːpə'fɪʃ(ə)l; ,sjuː-",
        .meaning = "表面的；肤浅的",
        .example = "Despite their superficial similarities, the two novels are, in fact, very different.",
        .example_cn = "这两本小说尽管表面上有相似之处，但实际上大不一样。"
    },
    {
        .word = "criterion",
        .phonetic_us = "kraɪˈtɪriən",
        .phonetic_uk = "kraɪ'tɪərɪən",
        .meaning = "标准，准则，尺度",
        .example = "the criteria we use to select candidates",
        .example_cn = "我们挑选候选人的标准"
    },
    {
        .word = "norm",
        .phonetic_us = "nɔrm",
        .phonetic_uk = "nɔːm",
        .meaning = "标准，规范；平均数",
        .example = "Joyce’s style of writing was a striking departure from the literary norm.",
        .example_cn = "乔伊斯的写作风格与传统的文学风格大相径庭。"
    },
    {
        .word = "heading",
        .phonetic_us = "'hɛdɪŋ",
        .phonetic_uk = "'hedɪŋ",
        .meaning = "标题，题词，题名",
        .example = "chapter headings",
        .example_cn = "章节标题"
    },
    {
        .word = "reason",
        .phonetic_us = "ˈrizən",
        .phonetic_uk = "'riːz(ə)n",
        .meaning = "论证，推断",
        .example = "They reasoned that other businesses would soon copy the idea.",
        .example_cn = "他们推断其他企业也会很快仿效这个点子。"
    },
    {
        .word = "advocate",
        .phonetic_us = "ˈædvəkeɪt；-et",
        .phonetic_uk = "'ædvəkeɪt；-ət",
        .meaning = "拥护",
        .example = "Extremists were openly advocating violence.",
        .example_cn = "极端主义者公开鼓吹使用暴力。"
    },
    {
        .word = "discrimination",
        .phonetic_us = "dɪ,skrɪmɪ'neʃən",
        .phonetic_uk = "dɪ,skrɪmɪ'neɪʃ(ə)n",
        .meaning = "歧视；辨别；识别力",
        .example = "laws to prevent discrimination",
        .example_cn = "防止歧视的法律"
    },
    {
        .word = "transform",
        .phonetic_us = "træns'fɔrm",
        .phonetic_uk = "træns'fɔːm; trɑːns-; -nz-",
        .meaning = "变换",
        .example = "Your metabolic rate is the speed at which your body transforms food into energy.",
        .example_cn = "你的新陈代谢率就是你身体将食物转换成能量的速度。"
    },
    {
        .word = "loosen",
        .phonetic_us = "'lusn",
        .phonetic_uk = "'luːs(ə)n",
        .meaning = "变松",
        .example = "You’ll need a spanner to loosen that bolt.",
        .example_cn = "你需要扳手来拧开那个螺栓。"
    },
    {
        .word = "alteration",
        .phonetic_us = ",ɔltə'reʃən",
        .phonetic_uk = "ɔːltə'reɪʃ(ə)n; 'ɒl-",
        .meaning = "变更，改变",
        .example = "If you make alterations to the Windows setup, save the new settings before closing.",
        .example_cn = "如果更改了视窗操作系统的设置，关闭前要保存新的设置。"
    },
    {
        .word = "fall",
        .phonetic_us = "fɔl",
        .phonetic_uk = "fɔːl",
        .meaning = "变成，成为，陷入",
        .example = "He had fallen asleep on the sofa.",
        .example_cn = "他在沙发上睡着了。"
    },
    {
        .word = "program",
        .phonetic_us = "'proɡræm",
        .phonetic_uk = "'prəʊɡræm",
        .meaning = "编制程序",
        .example = "Any large high-speed computer can be programmed to learn.",
        .example_cn = "任何大型高速计算机都可以通过编程获得学习能力。"
    },
    {
        .word = "edit",
        .phonetic_us = "'ɛdɪt",
        .phonetic_uk = "'edɪt",
        .meaning = "编辑，编纂；校订",
        .example = "a collection of essays edited by John Gay",
        .example_cn = "由约翰·盖伊编辑的论文集"
    },
    {
        .word = "verge",
        .phonetic_us = "vɝdʒ",
        .phonetic_uk = "vɜːdʒ",
        .meaning = "边缘，边界",
        .example = "They set up camp on the verge of the desert.",
        .example_cn = "他们在沙漠边缘扎下了营地。"
    },
    {
        .word = "rim",
        .phonetic_us = "rɪm",
        .phonetic_uk = "rɪm",
        .meaning = "边；边缘，（眼镜）框",
        .example = "the rim of a glass",
        .example_cn = "玻璃杯口"
    },
    {
        .word = "hearth",
        .phonetic_us = "hɑrθ",
        .phonetic_uk = "hɑːθ",
        .meaning = "壁炉地面；炉边",
        .example = "It was winter and there was a huge fire roaring in the hearth.",
        .example_cn = "时值冬天，壁炉里的炉火在熊熊燃烧。"
    },
    {
        .word = "fireplace",
        .phonetic_us = "'faɪɚples",
        .phonetic_uk = "'faɪəpleɪs",
        .meaning = "壁炉",
        .example = "In the evenings, we gathered around the fireplace and talked in hushed whispers.",
        .example_cn = "晚上，我们聚集在壁炉周围轻声交谈。"
    },
    {
        .word = "patron",
        .phonetic_us = "'petrən",
        .phonetic_uk = "'peɪtr(ə)n",
        .meaning = "庇护人；赞助人",
        .example = "a wealthy patron",
        .example_cn = "富有的赞助人"
    },
    {
        .word = "diploma",
        .phonetic_us = "dɪ'plomə",
        .phonetic_uk = "dɪ'pləʊmə",
        .meaning = "毕业文凭，学位证书",
        .example = "a High School diploma",
        .example_cn = "高中毕业文凭"
    },
    {
        .word = "indispensable",
        .phonetic_us = "'ɪndɪ'spɛnsəbl",
        .phonetic_uk = "ɪndɪ'spensəb(ə)l",
        .meaning = "必不可少的，必需的",
        .example = "Mobile phones have become an indispensable part of our lives.",
        .example_cn = "移动电话已经成为我们生活中的必需品。"
    },
    {
        .word = "sullen",
        .phonetic_us = "'sʌlən",
        .phonetic_uk = "'sʌlən",
        .meaning = "绷着脸不高兴的",
        .example = "Bill sat in sullen silence and refused to eat his lunch.",
        .example_cn = "比尔一声不响，闷闷不乐地坐着，不肯吃午饭。"
    },
    {
        .word = "bandage",
        .phonetic_us = "'bændɪdʒ",
        .phonetic_uk = "'bændɪdʒ",
        .meaning = "绷带，包带",
        .example = "We put some ointment and a bandage on his knee.",
        .example_cn = "我们在他的膝盖上涂了些药膏，还缠了一条绷带。"
    },
    {
        .word = "breakdown",
        .phonetic_us = "'brek'daʊn",
        .phonetic_uk = "'breɪkdaʊn",
        .meaning = "崩溃，倒塌，失败",
        .example = "A sudden rise in oil prices could lead to a breakdown of the economy.",
        .example_cn = "油价暴涨会导致经济崩溃。"
    },
    {
        .word = "essence",
        .phonetic_us = "'ɛsns",
        .phonetic_uk = "'es(ə)ns",
        .meaning = "本质，本体",
        .example = "In essence his message was very simple.",
        .example_cn = "实质上他想表达的意思很简单。"
    },
    {
        .word = "captive",
        .phonetic_us = "'kæptɪv",
        .phonetic_uk = "'kæptɪv",
        .meaning = "被俘虏的",
        .example = "captive soldiers",
        .example_cn = "被俘的士兵"
    },
    {
        .word = "reverse",
        .phonetic_us = "rɪ'vɝs",
        .phonetic_uk = "rɪ'vɜːs",
        .meaning = "背面，反面",
        .example = "The British ten-pence coin has a lion on the reverse.",
        .example_cn = "英国十便士硬币的背面图案是一头狮子。"
    },
    {
        .word = "deviation",
        .phonetic_us = "'divɪ'eʃən",
        .phonetic_uk = "diːvɪ'eɪʃ(ə)n",
        .meaning = "背离，偏离；偏差",
        .example = "deviation from the normal procedure",
        .example_cn = "背离正常的程序"
    },
    {
        .word = "arctic",
        .phonetic_us = "'ɑrktɪk",
        .phonetic_uk = "'ɑːktɪk",
        .meaning = "北极的",
        .example = "the Arctic island of Novaya Zemlya",
        .example_cn = "北极的新地岛"
    },
    {
        .word = "tragic",
        .phonetic_us = "'trædʒɪk",
        .phonetic_uk = "'trædʒɪk",
        .meaning = "悲惨的；悲剧的",
        .example = "The parents were not to blame for the tragic death of their son.",
        .example_cn = "儿子的惨死不是他父母的错。"
    },
    {
        .word = "woe",
        .phonetic_us = "wo",
        .phonetic_uk = "wəʊ",
        .meaning = "悲哀，悲痛，苦恼",
        .example = "He listened to my tale of woe.",
        .example_cn = "他听了我悲伤的故事。"
    },
    {
        .word = "grief",
        .phonetic_us = "ɡrif",
        .phonetic_uk = "griːf",
        .meaning = "悲哀，悲痛，悲伤",
        .example = "The grief she felt over Helen’s death was almost unbearable.",
        .example_cn = "她因海伦的去世而悲痛难当。"
    },
    {
        .word = "firework",
        .phonetic_us = "'faɪɚwɝk",
        .phonetic_uk = "'faɪəwɜːk",
        .meaning = "爆竹，花炮，烟火",
        .example = "a New Year’s Eve fireworks display",
        .example_cn = "除夕夜的烟火表演"
    },
    {
        .word = "storm",
        .phonetic_us = "stɔrm",
        .phonetic_uk = "stɔːm",
        .meaning = "爆发",
        .example = "The governor found himself at the center of a political storm .",
        .example_cn = "州长发现自己处于一场政治风暴的中心。"
    },
    {
        .word = "tyranny",
        .phonetic_us = "'tɪrəni",
        .phonetic_uk = "'tɪr(ə)nɪ",
        .meaning = "暴政，专制；残暴",
        .example = "organizations which have criticized the tyrannies of the government",
        .example_cn = "批判政府暴政的组织"
    },
    {
        .word = "wrath",
        .phonetic_us = "ræθ",
        .phonetic_uk = "rɒθ; rɔːθ",
        .meaning = "暴怒，狂怒，愤慨",
        .example = "He was scared of incurring his father’s wrath .",
        .example_cn = "他害怕惹他父亲大发脾气。"
    },
    {
        .word = "tyrant",
        .phonetic_us = "'taɪrənt",
        .phonetic_uk = "'taɪr(ə)nt",
        .meaning = "暴君；专制君主",
        .example = "The country had long been ruled by tyrants.",
        .example_cn = "这个国家长期受暴君统治。"
    },
    {
        .word = "panther",
        .phonetic_us = "'pænθɚ",
        .phonetic_uk = "'pænθə",
        .meaning = "豹，黑豹；美洲狮",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "leopard",
        .phonetic_us = "'lɛpɚd",
        .phonetic_uk = "'lepəd",
        .meaning = "豹",
        .example = "The young leopard separated from its mother would be eaten by other beast.",
        .example_cn = "与母亲离散的幼豹很可能被其他的野兽吃掉。"
    },
    {
        .word = "grumble",
        .phonetic_us = "'ɡrʌmbl",
        .phonetic_uk = "'grʌmb(ə)l",
        .meaning = "抱怨，发牢骚",
        .example = "‘This is boring,’ Kathleen grumbled.",
        .example_cn = "“这真无聊。”凯瑟琳抱怨道。"
    },
    {
        .word = "announce",
        .phonetic_us = "ə'naʊns",
        .phonetic_uk = "ə'naʊns",
        .meaning = "报告…的来到",
        .example = "All visitors to the apartment building must be announced.",
        .example_cn = "那幢公寓楼的访客都必须通报。"
    },
    {
        .word = "vengeance",
        .phonetic_us = "'vɛndʒəns",
        .phonetic_uk = "'ven(d)ʒ(ə)ns",
        .meaning = "报复，报仇，复仇",
        .example = "a desire for vengeance",
        .example_cn = "复仇的愿望"
    },
    {
        .word = "fortress",
        .phonetic_us = "'fɔrtrəs",
        .phonetic_uk = "'fɔːtrɪs",
        .meaning = "堡垒，要塞",
        .example = "a 13th-century fortress",
        .example_cn = "一座13世纪的城堡"
    },
    {
        .word = "assurance",
        .phonetic_us = "ə'ʃʊrəns",
        .phonetic_uk = "ə'ʃʊər(ə)ns",
        .meaning = "保证",
        .example = "Despite my repeated assurances, Rob still looked very nervous.",
        .example_cn = "尽管我再三保证，罗布看起来还是很紧张。"
    },
    {
        .word = "fuse",
        .phonetic_us = "fjuz",
        .phonetic_uk = "fjuːz",
        .meaning = "保险丝；导火线",
        .example = "two 13 amp fuses",
        .example_cn = "两根13安培的保险丝"
    },
    {
        .word = "reservation",
        .phonetic_us = ",rɛzɚ'veʃən",
        .phonetic_uk = "rezə'veɪʃ(ə)n",
        .meaning = "预定，预订；保留意见",
        .example = "a dinner reservation",
        .example_cn = "预订晚餐"
    },
    {
        .word = "safeguard",
        .phonetic_us = "'sefɡɑrd",
        .phonetic_uk = "'seɪfgɑːd",
        .meaning = "保护措施",
        .example = "International safeguards prevent the increase of nuclear weapons.",
        .example_cn = "国际安全条约防止核武器数量增加。"
    },
    {
        .word = "preservation",
        .phonetic_us = ",prɛzɚ'veʃən",
        .phonetic_uk = "prezə'veɪʃ(ə)n",
        .meaning = "保存，储藏；保持",
        .example = "methods of food preservation",
        .example_cn = "保存食物的各种方法"
    },
    {
        .word = "saturation",
        .phonetic_us = "'sætʃə'reʃən",
        .phonetic_uk = "sætʃə'reɪʃ(ə)n",
        .meaning = "饱和（状态）；浸透",
        .example = "a business beset by price wars and market saturation (= the fact that no new customers can be found)",
        .example_cn = "一家受价格战和市场饱和困扰的企业"
    },
    {
        .word = "mist",
        .phonetic_us = "mɪst",
        .phonetic_uk = "mɪst",
        .meaning = "薄雾",
        .example = "We could just see the outline of the house through the mist.",
        .example_cn = "薄雾中我们只能看到房子的轮廓。"
    },
    {
        .word = "chip",
        .phonetic_us = "tʃɪp",
        .phonetic_uk = "tʃɪp",
        .meaning = "薄片，碎片",
        .example = "Wood chips covered the floor of the workshop.",
        .example_cn = "工场的地板上满是木屑。"
    },
    {
        .word = "inclusive",
        .phonetic_us = "ɪn'klusɪv",
        .phonetic_uk = "ɪn'kluːsɪv",
        .meaning = "包括的",
        .example = "The fully inclusive fare for the trip is £22.",
        .example_cn = "这次出行的全部费用为22英镑。"
    },
    {
        .word = "siege",
        .phonetic_us = "sidʒ",
        .phonetic_uk = "siːdʒ",
        .meaning = "包围，围攻，围困",
        .example = "The siege lasted almost four months.",
        .example_cn = "这次封锁历时近四个月。"
    },
    {
        .word = "embrace",
        .phonetic_us = "ɪm'bres",
        .phonetic_uk = "ɪm'breɪs; em-",
        .meaning = "包括，包含",
        .example = "This course embraces several different aspects of psychology.",
        .example_cn = "这门课程涉及心理学的几个不同方面。"
    },
    {
        .word = "baseball",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "棒球运动；棒球",
        .example = "a baseball bat/team/stadium",
        .example_cn = "棒球球棒 / 球队 / 球场"
    },
    {
        .word = "hemisphere",
        .phonetic_us = "'hɛmɪsfɪr",
        .phonetic_uk = "'hemɪsfɪə",
        .meaning = "半球",
        .example = "the Northern hemisphere",
        .example_cn = "北半球"
    },
    {
        .word = "radius",
        .phonetic_us = "'redɪəs",
        .phonetic_uk = "'reɪdɪəs",
        .meaning = "半径距离，半径范围",
        .example = "The shock of the explosion was felt over a radius of forty miles.",
        .example_cn = "爆炸引起的剧烈震动在方圆40英里内都能感觉得到。"
    },
    {
        .word = "scar",
        .phonetic_us = "skɑr",
        .phonetic_uk = "skɑː",
        .meaning = "瘢痕",
        .example = "a deep cut that could leave a permanent scar",
        .example_cn = "可能会留下永久性疤痕的一道很深的伤口"
    },
    {
        .word = "liner",
        .phonetic_us = "'laɪnɚ",
        .phonetic_uk = "'laɪnə",
        .meaning = "班船，定期班机",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "trigger",
        .phonetic_us = "'trɪɡɚ",
        .phonetic_uk = "'trɪgə",
        .meaning = "扳机",
        .example = "He took aim and squeezed the trigger.",
        .example_cn = "他瞄准目标，扣动了扳机。"
    },
    {
        .word = "tar",
        .phonetic_us = "tɑr",
        .phonetic_uk = "tɑː",
        .meaning = "柏油；焦油",
        .example = "The oil has hardened to tar.",
        .example_cn = "油已经硬化成柏油了。"
    },
    {
        .word = "blind",
        .phonetic_us = "blaɪnd",
        .phonetic_uk = "blaɪnd",
        .meaning = "百叶窗；窗帘；遮帘",
        .example = "The blinds were drawn (=  pulled down  ) to protect the new furniture from the sun.",
        .example_cn = "窗帘都放了下来，避免太阳光照在新的家具上。"
    },
    {
        .word = "shutter",
        .phonetic_us = "'ʃʌtɚ",
        .phonetic_uk = "'ʃʌtə",
        .meaning = "百叶窗；（相机）快门",
        .example = "She opened the shutters and gazed out over village roofs.",
        .example_cn = "她打开了百叶窗，朝村里的房顶望去。"
    },
    {
        .word = "lily",
        .phonetic_us = "'lɪli",
        .phonetic_uk = "'lɪlɪ",
        .meaning = "百合，百合花",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "millionaire",
        .phonetic_us = ",mɪljə'nɛr",
        .phonetic_uk = "mɪljə'neə",
        .meaning = "百分富翁，巨富",
        .example = "an American millionaire",
        .example_cn = "一位美国百万富翁"
    },
    {
        .word = "white",
        .phonetic_us = "waɪt",
        .phonetic_uk = "wʌɪt",
        .meaning = "白种（人）的",
        .example = "young white males",
        .example_cn = "年轻的白种男性"
    },
    {
        .word = "blond",
        .phonetic_us = "blɑnd",
        .phonetic_uk = "blɒnd",
        .meaning = "白肤金发碧眼的人",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "idiot",
        .phonetic_us = "'ɪdɪət",
        .phonetic_uk = "'ɪdɪət",
        .meaning = "白痴；傻子",
        .example = "You're an idiot!",
        .example_cn = "你是个白痴！"
    },
    {
        .word = "bank",
        .phonetic_us = "bæŋk",
        .phonetic_uk = "bæŋk",
        .meaning = "把钱存入银行",
        .example = "Did you bank that check?",
        .example_cn = "你把那张支票存入银行了吗？"
    },
    {
        .word = "tabulate",
        .phonetic_us = "'tæbjulet",
        .phonetic_uk = "'tæbjʊleɪt",
        .meaning = "把…制成表",
        .example = "Results for the test programme haven't been tabulated.",
        .example_cn = "试验项目的结果还没有制成表格。"
    },
    {
        .word = "bestow",
        .phonetic_us = "bɪ'sto",
        .phonetic_uk = "bɪ'stəʊ",
        .meaning = "把…赠与",
        .example = "honours bestowed on him by the Queen",
        .example_cn = "女王授予他的荣誉"
    },
    {
        .word = "subdivide",
        .phonetic_us = "'sʌbdɪvaɪd",
        .phonetic_uk = "sʌbdɪ'vaɪd",
        .meaning = "把…再分",
        .example = "Over time, developers subdivided the land.",
        .example_cn = "开发商们渐渐地把这块土地进行了再分割。"
    },
    {
        .word = "dock",
        .phonetic_us = "dɑk",
        .phonetic_uk = "dɒk",
        .meaning = "把…引入船坞",
        .example = "We docked at Rangoon the next morning.",
        .example_cn = "第二天早晨我们在仰光停靠码头。"
    },
    {
        .word = "straighten",
        .phonetic_us = "'stretn",
        .phonetic_uk = "'streɪt(ə)n",
        .meaning = "把…弄直；挺起来",
        .example = "Can you straighten your leg?",
        .example_cn = "你能把腿伸直吗？"
    },
    {
        .word = "flatten",
        .phonetic_us = "'flætn",
        .phonetic_uk = "'flæt(ə)n",
        .meaning = "把…弄平；击倒",
        .example = "Use a rolling pin to flatten the dough.",
        .example_cn = "用擀面杖把面团擀平。"
    },
    {
        .word = "ascribe",
        .phonetic_us = "ə'skraɪb",
        .phonetic_uk = "ə'skraɪb",
        .meaning = "把…归于",
        .example = "The report ascribes the rise in childhood asthma to the increase in pollution.",
        .example_cn = "这份报告认为儿童哮喘发病率上升是因为污染加剧。"
    },
    {
        .word = "except",
        .phonetic_us = "ɪk'sɛpt",
        .phonetic_uk = "ɪk'sept; ek-",
        .meaning = "把…除外，除去",
        .example = "High technology equipment would be excepted from any trade agreement.",
        .example_cn = "任何贸易协定都不会把高科技设备包括在内。"
    },
    {
        .word = "entitle",
        .phonetic_us = "ɪn'taɪtl",
        .phonetic_uk = "ɪn'taɪt(ə)l; en-",
        .meaning = "把…称作",
        .example = "a documentary entitled ‘The Price of Perfection’",
        .example_cn = "一部名为《完美的代价》的纪录片"
    },
    {
        .word = "ballet",
        .phonetic_us = "bæ'le",
        .phonetic_uk = "'bæleɪ; -lɪ",
        .meaning = "芭蕾舞；芭蕾舞剧",
        .example = "She wants to be a ballet dancer .",
        .example_cn = "她想当芭蕾舞演员。"
    },
    {
        .word = "haughty",
        .phonetic_us = "'hɔti",
        .phonetic_uk = "'hɔːtɪ",
        .meaning = "傲慢的，轻蔑的",
        .example = "a haughty laugh",
        .example_cn = "傲慢的大笑"
    },
    {
        .word = "foul",
        .phonetic_us = "faʊl",
        .phonetic_uk = "faʊl",
        .meaning = "肮脏的；丑恶的",
        .example = "extractor fans to remove foul air from the tunnel",
        .example_cn = "排出隧道污浊空气的排气扇"
    },
    {
        .word = "assassinate",
        .phonetic_us = "ə'sæsn'et",
        .phonetic_uk = "ə'sæsɪneɪt",
        .meaning = "暗杀，行刺；中伤",
        .example = "a plot to assassinate the President",
        .example_cn = "刺杀总统的阴谋"
    },
    {
        .word = "burial",
        .phonetic_us = "'bɛrɪəl",
        .phonetic_uk = "'berɪəl",
        .meaning = "安葬，埋葬；埋藏",
        .example = "The priest prepared the body for burial.",
        .example_cn = "牧师为尸体做好了下葬的准备。"
    },
    {
        .word = "luxurious",
        .phonetic_us = "lʌɡ'ʒʊrɪəs",
        .phonetic_uk = "lʌg'ʒʊərɪəs; lʌg'zjʊə-; lʌk'sjʊə-",
        .meaning = "爱好奢侈的，豪华的",
        .example = "a luxurious 30-room villa",
        .example_cn = "一栋有30个房间的豪华度假别墅"
    },
    {
        .word = "patriot",
        .phonetic_us = "'petrɪət",
        .phonetic_uk = "'pætrɪət; 'peɪt-",
        .meaning = "爱国者，爱国主义者",
        .example = "It has been suggested the founders were not true patriots but men out to protect their own interests.",
        .example_cn = "有人指出创建者并非真正的爱国者，而是一些维护自己利益的人。"
    },
    {
        .word = "patriotic",
        .phonetic_us = "ˈpeɪtriˈɑtɪk",
        .phonetic_uk = "ˌpætrɪˈɒtɪk",
        .meaning = "爱国的",
        .example = "patriotic songs",
        .example_cn = "爱国歌曲"
    },
    {
        .word = "dwarf",
        .phonetic_us = "dwɔrf",
        .phonetic_uk = "dwɔːf",
        .meaning = "矮子，侏儒",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "stout",
        .phonetic_us = "staʊt",
        .phonetic_uk = "staʊt",
        .meaning = "肥胖的；厚实牢固的",
        .example = "a short, stout man",
        .example_cn = "一个矮胖的男人"
    },
    {
        .word = "alas",
        .phonetic_us = "ə'læs",
        .phonetic_uk = "ə'læs; ə'lɑːs",
        .meaning = "唉，哎呀",
        .example = "For many people, alas, hunger is part of everyday life.",
        .example_cn = "唉，对很多人来说，挨饿是家常便饭。"
    },
    {
        .word = "Egyptian",
        .phonetic_us = "",
        .phonetic_uk = "ɪ'dʒɪpʃ(ə)n",
        .meaning = "埃及的",
        .example = "...the Egyptian pharaoh.",
        .example_cn = "...古埃及法老。"
    },
    {
        .word = "pathetic",
        .phonetic_us = "pə'θɛtɪk",
        .phonetic_uk = "pə'θetɪk",
        .meaning = "哀婉动人的；可怜的",
        .example = "The child looked a pathetic sight.",
        .example_cn = "那个孩子看上去很可怜。"
    },
    {
        .word = "should",
        .phonetic_us = "ʃəd; strong form ʃʊd",
        .phonetic_uk = "ʃəd; strong form ʃʊd",
        .meaning = "应该；竟然会",
        .example = "He shouldn’t be so selfish.",
        .example_cn = "他不该这么自私。"
    },
    {
        .word = "ought",
        .phonetic_us = "ɔt",
        .phonetic_uk = "ɔːt",
        .meaning = "早应该，本应",
        .example = "I realize I ought to have told you about it.",
        .example_cn = "我意识到我本该告诉你这件事的。"
    },
    {
        .word = "scripture",
        .phonetic_us = "'skrɪptʃɚ",
        .phonetic_uk = "'skrɪptʃə",
        .meaning = "《圣经》；圣书",
        .example = "the way God is portrayed in Scripture",
        .example_cn = "《圣经》中对上帝的描写"
    },
    {
        .word = "referee",
        .phonetic_us = ",rɛfə'ri",
        .phonetic_uk = "refə'riː",
        .meaning = "（足球等）裁判员",
        .example = "He was sent off for arguing with the referee.",
        .example_cn = "他因为和裁判发生争执而被罚出场。"
    },
    {
        .word = "pendulum",
        .phonetic_us = "'pɛndʒələm",
        .phonetic_uk = "'pendjʊləm",
        .meaning = "（钟等的）摆",
        .example = "The political pendulum has swung in favour of the liberals.",
        .example_cn = "政治的钟摆已经摆向了自由派。"
    },
    {
        .word = "shuttle",
        .phonetic_us = "'ʃʌtl",
        .phonetic_uk = "'ʃʌt(ə)l",
        .meaning = "（织机的）梭",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "outbreak",
        .phonetic_us = "'aʊtbrek",
        .phonetic_uk = "'aʊtbreɪk",
        .meaning = "（战争、愤怒等）爆发",
        .example = "the outbreak of war",
        .example_cn = "战争的爆发"
    },
    {
        .word = "market",
        .phonetic_us = "'mɑrkɪt",
        .phonetic_uk = "'mɑːkɪt",
        .meaning = "推销",
        .example = "If you could ever figure out how to market this you’d make a fortune.",
        .example_cn = "如果能想出办法来推销这个东西，你就发财了。"
    },
    {
        .word = "gross",
        .phonetic_us = "ɡros",
        .phonetic_uk = "grəʊs",
        .meaning = "（语言、举止）粗俗的",
        .example = "He abused the Admiral in the grossest terms.",
        .example_cn = "他用最粗俗的字眼辱骂那位海军上将。"
    },
    {
        .word = "heave",
        .phonetic_us = "hiv",
        .phonetic_uk = "hiːv",
        .meaning = "（用力地）举起；抛",
        .example = "Alan heaved his suitcase onto his bed.",
        .example_cn = "艾伦把他的手提箱拖到床上。"
    },
    {
        .word = "pop",
        .phonetic_us = "pɑp",
        .phonetic_uk = "pɒp",
        .meaning = "（意外地）出现",
        .example = "The window opened and a dog's head popped out.",
        .example_cn = "窗子打开了，冷不防一只狗探出头来。"
    },
    {
        .word = "lining",
        .phonetic_us = "'laɪnɪŋ",
        .phonetic_uk = "'laɪnɪŋ",
        .meaning = "（衣服里的）衬里",
        .example = "a jacket with a silk lining",
        .example_cn = "有丝绸衬里的夹克"
    },
    {
        .word = "mild",
        .phonetic_us = "maɪld",
        .phonetic_uk = "maɪld",
        .meaning = "味淡的",
        .example = "a mild curry",
        .example_cn = "淡味咖喱"
    },
    {
        .word = "panel",
        .phonetic_us = "'pænl",
        .phonetic_uk = "'pæn(ə)l",
        .meaning = "（选定的）专门小组",
        .example = "A panel of experts has looked at the proposal.",
        .example_cn = "一组专家审核了那项提议。"
    },
    {
        .word = "rigorous",
        .phonetic_us = "'rɪɡərəs",
        .phonetic_uk = "'rɪg(ə)rəs",
        .meaning = "严格的",
        .example = "The work failed to meet their rigorous standards.",
        .example_cn = "工作没有达到他们的严格标准。"
    },
    {
        .word = "climax",
        .phonetic_us = "'klaɪmæks",
        .phonetic_uk = "'klaɪmæks",
        .meaning = "顶点",
        .example = "The festival reaches its climax with the traditional boat-burning ceremony.",
        .example_cn = "传统的烧船仪式将节庆活动推向了高潮。"
    },
    {
        .word = "epoch",
        .phonetic_us = "'ɛpək",
        .phonetic_uk = "'iːpɒk; 'epɒk",
        .meaning = "（新）时代；历元",
        .example = "the Victorian epoch",
        .example_cn = "维多利亚时代"
    },
    {
        .word = "shrimp",
        .phonetic_us = "ʃrɪmp",
        .phonetic_uk = "ʃrɪmp",
        .meaning = "（小）虾，河虾，褐虾",
        .example = "Add the shrimp and cook for 30 seconds.",
        .example_cn = "放入小虾，煮 30 秒。"
    },
    {
        .word = "peak",
        .phonetic_us = "pik",
        .phonetic_uk = "piːk",
        .meaning = "（物体的）尖端",
        .example = "Whisk the egg whites until they form stiff peaks.",
        .example_cn = "将蛋清搅打至起尖发稠。"
    },
    {
        .word = "cane",
        .phonetic_us = "ken",
        .phonetic_uk = "keɪn",
        .meaning = "（藤等）茎；手杖",
        .example = "a cane chair",
        .example_cn = "藤椅"
    },
    {
        .word = "drain",
        .phonetic_us = "dren",
        .phonetic_uk = "dreɪn",
        .meaning = "（水等）流掉",
        .example = "I watched the bath water drain away.",
        .example_cn = "我看着浴缸里的水流光。"
    },
    {
        .word = "switch",
        .phonetic_us = "swɪtʃ",
        .phonetic_uk = "swɪtʃ",
        .meaning = "（树木的）软枝条",
        .example = "a riding switch",
        .example_cn = "马鞭"
    },
    {
        .word = "board",
        .phonetic_us = "bɔrd",
        .phonetic_uk = "bɔːd",
        .meaning = "付费（在某人家里）膳宿",
        .example = "She always had one or two students boarding with her.",
        .example_cn = "她的家总有一两名寄宿学生。"
    },
    {
        .word = "immigrate",
        .phonetic_us = "'ɪmɪɡret",
        .phonetic_uk = "'ɪmɪgreɪt",
        .meaning = "（使）移居入境",
        .example = "His father and mother immigrated when he was two.",
        .example_cn = "他的父母在他两岁时移民到这里。"
    },
    {
        .word = "disperse",
        .phonetic_us = "dɪ'spɝs",
        .phonetic_uk = "dɪ'spɜːs",
        .meaning = "（使）分散；驱散",
        .example = "Police used tear gas to disperse the crowd.",
        .example_cn = "警察用催泪瓦斯驱散人群。"
    },
    {
        .word = "lump",
        .phonetic_us = "lʌmp",
        .phonetic_uk = "lʌmp",
        .meaning = "（使）成团，结块",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "deviate",
        .phonetic_us = "'divɪet",
        .phonetic_uk = "'diːvɪeɪt",
        .meaning = "（使）背离，偏离",
        .example = "The plane had to deviate from its normal flight path.",
        .example_cn = "飞机不得不偏离正常的航线。"
    },
    {
        .word = "pose",
        .phonetic_us = "poz",
        .phonetic_uk = "pəʊz",
        .meaning = "（使）摆好姿势",
        .example = "We posed for photographs.",
        .example_cn = "我们摆好姿势准备拍照。"
    },
    {
        .word = "expenditure",
        .phonetic_us = "ɪk'spɛndɪtʃɚ",
        .phonetic_uk = "ɪk'spendɪtʃə; ek-",
        .meaning = "（时间等）支出，消费",
        .example = "the expenditure of time and money on your house or garden",
        .example_cn = "你在房子或花园上所花费的时间和金钱"
    },
    {
        .word = "elapse",
        .phonetic_us = "ɪ'læps",
        .phonetic_uk = "ɪ'læps",
        .meaning = "（时间）过去，消逝",
        .example = "Several months elapsed before his case was brought to trial.",
        .example_cn = "过了几个月他的案子才开审。"
    },
    {
        .word = "hoarse",
        .phonetic_us = "hɔrs",
        .phonetic_uk = "hɔːs",
        .meaning = "（声音）嘶哑的",
        .example = "He was hoarse from laughing.",
        .example_cn = "他笑得嗓子都沙哑了。"
    },
    {
        .word = "clearing",
        .phonetic_us = "'klɪrɪŋ",
        .phonetic_uk = "'klɪərɪŋ",
        .meaning = "（森林中的）空旷地",
        .example = "A helicopter landed in a clearing in the dense jungle.",
        .example_cn = "一架直升机在茂密丛林中的一片空地着陆了。"
    },
    {
        .word = "shade",
        .phonetic_us = "ʃed",
        .phonetic_uk = "ʃeɪd",
        .meaning = "（色彩的）浓淡，深浅",
        .example = "a delicate/pale/rich/soft shade of red",
        .example_cn = "淡 / 浅 / 艳 / 柔和的红色"
    },
    {
        .word = "eclipse",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "（日，月）食",
        .example = "an eclipse of the sun",
        .example_cn = "日食"
    },
    {
        .word = "constitution",
        .phonetic_us = "'kɑnstə'tʊʃən",
        .phonetic_uk = "kɒnstɪ'tjuːʃ(ə)n",
        .meaning = "（人的）体格，素质",
        .example = "She’s got a strong constitution – she’ll recover in no time.",
        .example_cn = "她体质强壮，很快就会恢复。"
    },
    {
        .word = "spill",
        .phonetic_us = "spɪl",
        .phonetic_uk = "spɪl",
        .meaning = "（人）摔下，跌下",
        .example = "Tyson broke a rib when he took a spill on his motorcycle.",
        .example_cn = "泰森从摩托车上摔下来，断了一根肋骨。"
    },
    {
        .word = "unanimous",
        .phonetic_us = "jʊ'nænəməs",
        .phonetic_uk = "juː'nænɪməs",
        .meaning = "（全体）一致的",
        .example = "It was decided by a unanimous vote that the school should close.",
        .example_cn = "关闭学校是大家一致通过的决定。"
    },
    {
        .word = "quiver",
        .phonetic_us = "'kwɪvɚ",
        .phonetic_uk = "'kwɪvə",
        .meaning = "（轻微地）颤动",
        .example = "The child was quivering in her arms.",
        .example_cn = "那孩子在她怀里发抖。"
    },
    {
        .word = "perch",
        .phonetic_us = "pɝtʃ",
        .phonetic_uk = "pɜːtʃ",
        .meaning = "（禽鸟的）栖木",
        .example = "A small, yellow bird in a cage sat on its perch outside the house.",
        .example_cn = "屋外，一只小黄鸟站在鸟笼的栖木上。"
    },
    {
        .word = "span",
        .phonetic_us = "spæn",
        .phonetic_uk = "spæn",
        .meaning = "（桥墩间的）墩距",
        .example = "The bridge crosses the river in a single span.",
        .example_cn = "河上的桥为单跨桥。"
    },
    {
        .word = "pier",
        .phonetic_us = "pɪr",
        .phonetic_uk = "pɪə",
        .meaning = "码头；（桥）墩",
        .example = "...Chicago's Navy Pier.",
        .example_cn = "…芝加哥的海军码头。"
    },
    {
        .word = "frock",
        .phonetic_us = "frɑk",
        .phonetic_uk = "frɒk",
        .meaning = "（女）连衣裙",
        .example = "a party frock",
        .example_cn = "宴会礼裙"
    },
    {
        .word = "flutter",
        .phonetic_us = "'flʌtɚ",
        .phonetic_uk = "'flʌtə",
        .meaning = "（鸟）振翼；飘动",
        .example = "A small bird fluttered past the window.",
        .example_cn = "一只小鸟拍打着翅膀飞过窗前。"
    },
    {
        .word = "resume",
        .phonetic_us = "",
        .phonetic_uk = "rɪˈzjuːm; ˈrɛzjʊmeɪ",
        .meaning = "（谋职者的）个人简历",
        .example = "Send a resume, please.",
        .example_cn = "请寄一份简历。"
    },
    {
        .word = "clown",
        .phonetic_us = "klaʊn",
        .phonetic_uk = "klaʊn",
        .meaning = "（马戏的）小丑，丑角",
        .example = "The performance of the clown kept the public rolling about.",
        .example_cn = "小丑的表演使观众笑得前仰后合。"
    },
    {
        .word = "pace",
        .phonetic_us = "pes",
        .phonetic_uk = "peɪs",
        .meaning = "踱步",
        .example = "I found Mark at the hospital, pacing restlessly up and down.",
        .example_cn = "我看见马克在医院里焦躁不安地踱来踱去。"
    },
    {
        .word = "lounge",
        .phonetic_us = "laʊndʒ",
        .phonetic_uk = "laʊn(d)ʒ",
        .meaning = "（旅馆等的）休息室",
        .example = "the television lounge",
        .example_cn = "电视放映室"
    },
    {
        .word = "pope",
        .phonetic_us = "pop",
        .phonetic_uk = "pəʊp",
        .meaning = "（罗马天主教的）教皇",
        .example = "The Pope will visit El Salvador this year.",
        .example_cn = "教皇今年将访问萨尔瓦多。"
    },
    {
        .word = "axle",
        .phonetic_us = "'æksl",
        .phonetic_uk = "'æks(ə)l",
        .meaning = "（轮）轴，车轴，心棒",
        .example = "the front/rear axle",
        .example_cn = "前 / 后车轴"
    },
    {
        .word = "measurement",
        .phonetic_us = "'mɛʒɚmənt",
        .phonetic_uk = "'meʒəm(ə)nt",
        .meaning = "（量得的）尺寸，大小",
        .example = "What’s your waist measurement?",
        .example_cn = "你腰围是多少？"
    },
    {
        .word = "realization",
        .phonetic_us = ",riələ'zeʃən",
        .phonetic_uk = "riːəlaɪ'zeɪʃn",
        .meaning = "（理想等的）实现",
        .example = "the realization of his dreams",
        .example_cn = "他的梦想成真"
    },
    {
        .word = "chord",
        .phonetic_us = "kɔrd",
        .phonetic_uk = "kɔːd",
        .meaning = "和弦",
        .example = "the opening chords of 'Stairway to Heaven'",
        .example_cn = "《通往天堂的阶梯》的开篇和弦"
    },
    {
        .word = "pyjamas",
        .phonetic_us = "pə'dʒæməz",
        .phonetic_uk = "pə'dʒɑːməz",
        .meaning = "（宽大的）睡衣裤",
        .example = "striped pyjamas",
        .example_cn = "条纹睡衣裤"
    },
    {
        .word = "elegant",
        .phonetic_us = "'ɛləgənt",
        .phonetic_uk = "'elɪg(ə)nt",
        .meaning = "（举止、服饰等）雅致的",
        .example = "a tall, elegant young woman",
        .example_cn = "身材高挑、举止优雅的年轻女子"
    },
    {
        .word = "hard",
        .phonetic_us = "hɑrd",
        .phonetic_uk = "hɑːd",
        .meaning = "（酒）烈性的",
        .example = "hard liquor",
        .example_cn = "烈酒"
    },
    {
        .word = "refreshment",
        .phonetic_us = "ri'frɛʃmənt",
        .phonetic_uk = "rɪ'freʃm(ə)nt",
        .meaning = "（精力的）恢复，爽快",
        .example = "a place to rest and find refreshment for mind and body",
        .example_cn = "休息和恢复身心的场所"
    },
    {
        .word = "ticket",
        .phonetic_us = "'tɪkɪt",
        .phonetic_uk = "'tɪkɪt",
        .meaning = "（交通违章）罚款传票",
        .example = "Slow down or you'll get a ticket.",
        .example_cn = "开慢点儿，否则你会接到一张罚款通知单。"
    },
    {
        .word = "gesture",
        .phonetic_us = "'dʒɛstʃɚ",
        .phonetic_uk = "'dʒestʃə",
        .meaning = "（讲话时等）做手势",
        .example = "Brad gestured towards the door. ‘Get out.’",
        .example_cn = "布拉德指着门口说﹕“出去。”"
    },
    {
        .word = "situation",
        .phonetic_us = ",sɪtʃu'eʃən",
        .phonetic_uk = "sɪtjʊ'eɪʃ(ə)n",
        .meaning = "（建筑物等的）位置",
        .example = "The house is in a charming situation, on a wooded hillside.",
        .example_cn = "房子位于林木茂密的小山坡上，环境十分优美。"
    },
    {
        .word = "software",
        .phonetic_us = "'sɔftwɛr",
        .phonetic_uk = "'sɒf(t)weə",
        .meaning = "（计算机的）软件",
        .example = "She loaded the new software .",
        .example_cn = "她给电脑装上新的软件。"
    },
    {
        .word = "bishop",
        .phonetic_us = "'bɪʃəp",
        .phonetic_uk = "'bɪʃəp",
        .meaning = "（基督教的）主教",
        .example = "the Bishop of Durham",
        .example_cn = "达勒姆郡的主教"
    },
    {
        .word = "insert",
        .phonetic_us = "'ɪnsɝt",
        .phonetic_uk = "ɪn'sɜːt",
        .meaning = "插入，放进",
        .example = "His hand shook slightly as he inserted the key into the lock.",
        .example_cn = "他把钥匙插进锁里，手微微颤抖。"
    },
    {
        .word = "kernel",
        .phonetic_us = "'kɝnl",
        .phonetic_uk = "'kɜːn(ə)l",
        .meaning = "（果实的）核；谷粒",
        .example = "The nutshell includes the kernel.",
        .example_cn = "果壳裹着果仁。"
    },
    {
        .word = "wisdom",
        .phonetic_us = "'wɪzdəm",
        .phonetic_uk = "'wɪzdəm",
        .meaning = "智慧",
        .example = "a man of great wisdom",
        .example_cn = "一个有大智慧的男人"
    },
    {
        .word = "growl",
        .phonetic_us = "ɡraʊl",
        .phonetic_uk = "graʊl",
        .meaning = "（狗等）嗥叫；咆哮",
        .example = "The dog growled at me.",
        .example_cn = "那狗冲着我低声吼叫。"
    },
    {
        .word = "shaft",
        .phonetic_us = "ʃæft",
        .phonetic_uk = "ʃɑːft",
        .meaning = "（工具的）柄，杆状物",
        .example = "golf clubs with steel shafts",
        .example_cn = "带钢柄的高尔夫球棒"
    },
    {
        .word = "buzz",
        .phonetic_us = "bʌz",
        .phonetic_uk = "bʌz",
        .meaning = "（蜂等）嗡嗡叫",
        .example = "a loud buzzing noise",
        .example_cn = "很大的嗡嗡声"
    },
    {
        .word = "breed",
        .phonetic_us = "brid",
        .phonetic_uk = "briːd",
        .meaning = "（动物）品种",
        .example = "Spaniels are my favourite breed of dog.",
        .example_cn = "西班牙猎犬是我最喜欢的犬种。"
    },
    {
        .word = "ear",
        .phonetic_us = "ɪr",
        .phonetic_uk = "ɪə",
        .meaning = "（稻麦等的）穗",
        .example = "an ear of corn",
        .example_cn = "玉米穗"
    },
    {
        .word = "dean",
        .phonetic_us = "din",
        .phonetic_uk = "diːn",
        .meaning = "（大学）院长，系主任",
        .example = "the admissions dean",
        .example_cn = "招生主任"
    },
    {
        .word = "fertile",
        .phonetic_us = "ˈfɝtəl; (canadian) ˈfɝˌtaɪl",
        .phonetic_uk = "'fɜːtaɪl",
        .meaning = "（创造力）丰富的",
        .example = "the product of a fertile imagination",
        .example_cn = "想象力丰富的产物"
    },
    {
        .word = "sink",
        .phonetic_us = "sɪŋk",
        .phonetic_uk = "sɪŋk",
        .meaning = "（厨房内的）洗涤槽",
        .example = "Dirty plates were piled high in the sink.",
        .example_cn = "脏盘子在洗涤槽里堆得很高。"
    },
    {
        .word = "versus",
        .phonetic_us = "'vɝsəs",
        .phonetic_uk = "'vɜːsəs",
        .meaning = "（比赛等中）对",
        .example = "the New York Knicks versus the LA Lakers",
        .example_cn = "纽约尼克斯队对洛杉矶湖人队"
    },
    {
        .word = "ranch",
        .phonetic_us = "ræntʃ",
        .phonetic_uk = "rɑːn(t)ʃ",
        .meaning = "（北美洲的）大牧场",
        .example = "He lives on a cattle ranch in Texas.",
        .example_cn = "他住在德克萨斯州的一个养牛的大牧场里。"
    },
    {
        .word = "grope",
        .phonetic_us = "ɡrop",
        .phonetic_uk = "grəʊp",
        .meaning = "（暗中）摸索，探索",
        .example = "Ginny groped for her glasses on the bedside table.",
        .example_cn = "金尼在床头柜上摸着找眼镜。"
    },
    {
        .word = "pedlar",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "（挨户兜售的）小贩",
        .example = "The pedlar sponged money off us.",
        .example_cn = "那个小商贩骗了我们的钱。"
    },
    {
        .word = "rally",
        .phonetic_us = "'ræli",
        .phonetic_uk = "'rælɪ",
        .meaning = "集合",
        .example = "an attempt to rally support for the party",
        .example_cn = "为政党争取支持的努力"
    },
    {
        .word = "squat",
        .phonetic_us = "skwɑt",
        .phonetic_uk = "skwɒt",
        .meaning = "（使）蹲下",
        .example = "He squatted down beside the little girl.",
        .example_cn = "他在小女孩身边蹲了下来。"
    },
    {
        .word = "fling",
        .phonetic_us = "flɪŋ",
        .phonetic_uk = "flɪŋ",
        .meaning = "（用力）扔，抛",
        .example = "He flung the box into the river.",
        .example_cn = "他把盒子扔进河里。"
    },
    {
        .word = "scrub",
        .phonetic_us = "skrʌb",
        .phonetic_uk = "skrʌb",
        .meaning = "擦洗，擦净",
        .example = "She was on her hands and knees scrubbing the floor.",
        .example_cn = "她正趴着擦地板。"
    },
    {
        .word = "tread",
        .phonetic_us = "trɛd",
        .phonetic_uk = "tred",
        .meaning = "踩，踏，践踏",
        .example = "Sorry, did I tread on your foot?",
        .example_cn = "对不起，我踩到你的脚了吗？"
    },
    {
        .word = "crack",
        .phonetic_us = "kræk",
        .phonetic_uk = "kræk",
        .meaning = "发出爆裂声",
        .example = "Thunder cracked overhead.",
        .example_cn = "雷声在头顶炸响。"
    },
    {
        .word = "slander",
        .phonetic_us = "'slændɚ",
        .phonetic_uk = "'slɑːndə",
        .meaning = "诽谤，诋毁",
        .example = "a vicious slander on the company's good name",
        .example_cn = "对那家公司良好声誉的恶意诽谤"
    },
    {
        .word = "escort",
        .phonetic_us = "ˈeskɔːrt",
        .phonetic_uk = "'eskɔːt",
        .meaning = "护卫，护送",
        .example = "The shipment was escorted by guards.",
        .example_cn = "货物的运输由卫兵护送。"
    },
    {
        .word = "swell",
        .phonetic_us = "swɛl",
        .phonetic_uk = "swel",
        .meaning = "使膨胀；隆起",
        .example = "Her ankle was already starting to swell.",
        .example_cn = "她的脚踝已经开始肿起来了。"
    },
    {
        .word = "menace",
        .phonetic_us = "'mɛnəs",
        .phonetic_uk = "'menəs",
        .meaning = "威胁",
        .example = "There was menace in his voice.",
        .example_cn = "他的语气里带着威胁。"
    },
    {
        .word = "tramp",
        .phonetic_us = "træmp",
        .phonetic_uk = "træmp",
        .meaning = "以沉重的脚步走（过）",
        .example = "The walk involved tramping through mud.",
        .example_cn = "走这段路要在泥地中跋涉。"
    },
    {
        .word = "trample",
        .phonetic_us = "'træmpl",
        .phonetic_uk = "'træmp(ə)l",
        .meaning = "践踏，蹂躏",
        .example = "There was a small fence to stop people trampling on the flowers.",
        .example_cn = "有一道小小的围栏，防止人们践踏花草。"
    },
    {
        .word = "suicide",
        .phonetic_us = "'suɪsaɪd",
        .phonetic_uk = "'s(j)uːɪsaɪd",
        .meaning = "自杀",
        .example = "More people commit suicide at Christmas than at any other time.",
        .example_cn = "圣诞节期间自杀的人比其他任何时候都多。"
    },
    {
        .word = "tighten",
        .phonetic_us = "'taɪtn",
        .phonetic_uk = "'taɪt(ə)n",
        .meaning = "（使）变紧",
        .example = "Tighten the screws firmly.",
        .example_cn = "把螺丝拧紧。"
    },
    {
        .word = "jingle",
        .phonetic_us = "'dʒɪŋgl",
        .phonetic_uk = "'dʒɪŋg(ə)l",
        .meaning = "（使）丁当响",
        .example = "He jingled his car keys.",
        .example_cn = "他把汽车钥匙弄得叮当响。"
    },
    {
        .word = "fret",
        .phonetic_us = "frɛt",
        .phonetic_uk = "fret",
        .meaning = "（使）烦恼",
        .example = "Don’t fret – everything will be all right.",
        .example_cn = "别担心——一切都会好的。"
    },
    {
        .word = "thrill",
        .phonetic_us = "θrɪl",
        .phonetic_uk = "θrɪl",
        .meaning = "（使）激动",
        .example = "His music continues to thrill audiences.",
        .example_cn = "他的音乐依然能扣人心弦。"
    },
    {
        .word = "deflect",
        .phonetic_us = "dɪ'flɛkt",
        .phonetic_uk = "dɪ'flekt",
        .meaning = "（使）偏斜",
        .example = "He deflected the blow with his forearm.",
        .example_cn = "他用前臂挡开了打来的一拳。"
    },
    {
        .word = "tilt",
        .phonetic_us = "tɪlt",
        .phonetic_uk = "tɪlt",
        .meaning = "（使）倾斜",
        .example = "My mother tilted her head and smiled.",
        .example_cn = "我妈妈歪着头笑了。"
    },
    {
        .word = "revolve",
        .phonetic_us = "rɪ'vɔlv",
        .phonetic_uk = "rɪ'vɒlv",
        .meaning = "（使）旋转",
        .example = "The wheel began to revolve.",
        .example_cn = "轮子开始旋转。"
    },
    {
        .word = "rotate",
        .phonetic_us = "'rotet",
        .phonetic_uk = "rə(ʊ)'teɪt",
        .meaning = "（使）旋转",
        .example = "The Earth rotates on its axis once every 24 hours.",
        .example_cn = "地球每24小时绕地轴自转一周。"
    },
    {
        .word = "compensate",
        .phonetic_us = "'kɑmpɛnset",
        .phonetic_uk = "'kɒmpenseɪt",
        .meaning = "补偿，赔偿",
        .example = "the government’s promise to compensate victims of the flood",
        .example_cn = "政府对水灾灾民给予补偿的许诺"
    },
    {
        .word = "default",
        .phonetic_us = "dɪ'fɔlt",
        .phonetic_uk = "dɪ'fɔːlt; 'diːfɔːlt",
        .meaning = "不履行义务",
        .example = "Mortgage defaults have risen in the last year.",
        .example_cn = "按揭借款违约在近一年里呈上升趋势。"
    },
    {
        .word = "infer",
        .phonetic_us = "ɪn'fɝ",
        .phonetic_uk = "ɪn'fɜː",
        .meaning = "推断",
        .example = "A lot can be inferred from these statistics.",
        .example_cn = "根据这些统计资料可以推断出很多事情。"
    },
    {
        .word = "repay",
        .phonetic_us = "ri'pɛi",
        .phonetic_uk = "riː'peɪ; rɪ-",
        .meaning = "偿还；报答",
        .example = "Your mortgage will be repaid over 25 years.",
        .example_cn = "你的按揭贷款将在25年内还清。"
    },
    {
        .word = "scoff",
        .phonetic_us = "skɔf",
        .phonetic_uk = "skɒf",
        .meaning = "嘲笑，嘲弄",
        .example = "‘You, a scientist!’ he scoffed.",
        .example_cn = "“就你，还科学家！”他讥笑道。"
    },
    {
        .word = "hoe",
        .phonetic_us = "ho",
        .phonetic_uk = "həʊ",
        .meaning = "锄地",
        .example = "to hoe the flower beds",
        .example_cn = "用锄头给花坛除草松土"
    },
    {
        .word = "retort",
        .phonetic_us = "rɪ'tɔrt",
        .phonetic_uk = "rɪ'tɔːt",
        .meaning = "反击；反驳",
        .example = "‘It’s all your fault!’ he retorted.",
        .example_cn = "“那都是你的错！”他反驳道。"
    },
    {
        .word = "broaden",
        .phonetic_us = "'brɔdn",
        .phonetic_uk = "'brɔːd(ə)n",
        .meaning = "放宽，变阔",
        .example = "Mark’s smile broadened.",
        .example_cn = "马克笑得更加灿烂了。"
    },
    {
        .word = "decompose",
        .phonetic_us = ",dikəm'poz",
        .phonetic_uk = "diːkəm'pəʊz",
        .meaning = "腐败；分解",
        .example = "As the waste materials decompose, they produce methane gas.",
        .example_cn = "废物腐烂时会产生沼气。"
    },
    {
        .word = "chorus",
        .phonetic_us = "'kɔrəs",
        .phonetic_uk = "'kɔːrəs",
        .meaning = "合唱，齐声说",
        .example = "\"Hi,\" they chorused.",
        .example_cn = "“嗨，”他们齐声说道。"
    },
    {
        .word = "supervise",
        .phonetic_us = "'sʊpɚ'vaɪz",
        .phonetic_uk = "'suːpəvaɪz; 'sjuː-",
        .meaning = "监督，监视",
        .example = "Griffiths closely supervised the research.",
        .example_cn = "格里菲思密切指导该项研究。"
    },
    {
        .word = "beware",
        .phonetic_us = "bɪ'wɛr",
        .phonetic_uk = "bɪ'weə",
        .meaning = "谨防，当心",
        .example = "Police warned drivers to beware.",
        .example_cn = "警方提醒司机小心行驶。"
    },
    {
        .word = "grab",
        .phonetic_us = "ɡræb",
        .phonetic_uk = "græb",
        .meaning = "攫取，抓取",
        .example = "I grabbed my bag and ran off.",
        .example_cn = "我抓起我的包就跑。"
    },
    {
        .word = "entreat",
        .phonetic_us = "ɪn'trit",
        .phonetic_uk = "ɪn'triːt; en-",
        .meaning = "恳求",
        .example = "His friends entreated him not to go.",
        .example_cn = "他的朋友们恳求他不要去。"
    },
    {
        .word = "concentrate",
        .phonetic_us = "'kɑnsn'tret",
        .phonetic_uk = "'kɒns(ə)ntreɪt",
        .meaning = "浓缩，提浓",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "urge",
        .phonetic_us = "ɝdʒ",
        .phonetic_uk = "'ɜːdʒ",
        .meaning = "强烈希望",
        .example = "The charity urged quick action.",
        .example_cn = "慈善机构敦促迅速采取行动。"
    },
    {
        .word = "riot",
        .phonetic_us = "'raɪət",
        .phonetic_uk = "'raɪət",
        .meaning = "骚乱，暴乱",
        .example = "urban riots",
        .example_cn = "城市骚乱"
    },
    {
        .word = "shrug",
        .phonetic_us = "ʃrʌɡ",
        .phonetic_uk = "ʃrʌg",
        .meaning = "耸（肩）",
        .example = "I just shrugged my shoulders and ignored him.",
        .example_cn = "我只是耸耸肩，没有理睬他。"
    },
    {
        .word = "revive",
        .phonetic_us = "rɪ'vaɪv",
        .phonetic_uk = "rɪ'vaɪv",
        .meaning = "苏醒；复兴",
        .example = "The paramedics couldn't revive her.",
        .example_cn = "护理人员无法使她苏醒。"
    },
    {
        .word = "terminate",
        .phonetic_us = "'tɝmɪnet",
        .phonetic_uk = "'tɜːmɪneɪt",
        .meaning = "停止，终止",
        .example = "The court ruled that the contract must be terminated.",
        .example_cn = "法庭裁决该合同必须终止。"
    },
    {
        .word = "solidify",
        .phonetic_us = "sə'lɪdɪfaɪ",
        .phonetic_uk = "sə'lɪdɪfaɪ",
        .meaning = "凝固",
        .example = "The volcanic lava solidifies as it cools.",
        .example_cn = "火山熔岩冷却后变成固体。"
    },
    {
        .word = "dazzle",
        .phonetic_us = "'dæzl",
        .phonetic_uk = "'dæz(ə)l",
        .meaning = "使目眩；使倾倒",
        .example = "a deer dazzled by the headlights",
        .example_cn = "被车头灯光照得目眩的鹿"
    },
    {
        .word = "transplant",
        .phonetic_us = "træns'plænt",
        .phonetic_uk = "træns'plɑːnt; trɑːns-; -nz-",
        .meaning = "移植（器官、皮肤等）；移植，移种（植物）",
        .example = "Surgeons have successfully transplanted a liver into a four-year-old boy.",
        .example_cn = "外科医生成功地给一个四岁的男孩移植了肝脏。"
    },
    {
        .word = "xerox",
        .phonetic_us = "",
        .phonetic_uk = "",
        .meaning = "用静电复印",
        .example = "Could you xerox this letter, please?",
        .example_cn = "请复印一下这封信好吗？"
    },
    {
        .word = "peck",
        .phonetic_us = "pɛk",
        .phonetic_uk = "pek",
        .meaning = "啄，啄起",
        .example = "birds pecking at breadcrumbs on the pavement",
        .example_cn = "在人行道上啄食面包屑的鸟儿"
    },
    {
        .word = "trot",
        .phonetic_us = "trɑt",
        .phonetic_uk = "trɒt",
        .meaning = "（马）小跑",
        .example = "Alan took the reins and the small horse started trotting.",
        .example_cn = "艾伦抓住缰绳，小马开始慢跑起来。"
    },
    {
        .word = "ridicule",
        .phonetic_us = "'rɪdɪ'kjʊl",
        .phonetic_uk = "'rɪdɪkjuːl",
        .meaning = "嘲弄，挖苦",
        .example = "At the time, his ideas were ridiculed.",
        .example_cn = "当时他的观点被人讥笑。"
    },
    {
        .word = "chatter",
        .phonetic_us = "'tʃætɚ",
        .phonetic_uk = "'tʃætə",
        .meaning = "喋喋不休",
        .example = "She chattered away happily until she noticed I wasn’t listening.",
        .example_cn = "她开心地说个不停，直到发觉我没在听才停下来。"
    },
    {
        .word = "sneer",
        .phonetic_us = "snɪr",
        .phonetic_uk = "snɪə",
        .meaning = "冷笑；嘲笑",
        .example = "‘Is that your best outfit?’ he sneered.",
        .example_cn = "“那就是你最好的衣服了？”他讥笑道。"
    },
    {
        .word = "boycott",
        .phonetic_us = "'bɔɪkɑt",
        .phonetic_uk = "'bɒɪkɒt",
        .meaning = "联合抵制",
        .example = "We boycott all products tested on animals.",
        .example_cn = "我们抵制所有拿动物做试验的产品。"
    },
    {
        .word = "plunder",
        .phonetic_us = "'plʌndɚ",
        .phonetic_uk = "'plʌndə",
        .meaning = "掠夺，劫掠",
        .example = "The rich provinces of Asia Minor were plundered by the invaders.",
        .example_cn = "小亚细亚的富饶地区遭到侵略者的劫掠。"
    },
    {
        .word = "endeavor",
        .phonetic_us = "ɪn'dɛvɚ",
        .phonetic_uk = "ɪn'devə",
        .meaning = "努力，尽力",
        .example = "We always endeavor to please our customers.",
        .example_cn = "我们总是竭尽全力让顾客满意。"
    },
    {
        .word = "scramble",
        .phonetic_us = "'skræmbl",
        .phonetic_uk = "'skræmb(ə)l",
        .meaning = "爬行，攀登",
        .example = "They tried to scramble up the cliff.",
        .example_cn = "他们想爬上悬崖。"
    },
    {
        .word = "flap",
        .phonetic_us = "flæp",
        .phonetic_uk = "flæp",
        .meaning = "拍打",
        .example = "The sails flapped in the breeze.",
        .example_cn = "风帆在微风中摆动。"
    },
    {
        .word = "slaughter",
        .phonetic_us = "'slɔtɚ",
        .phonetic_uk = "'slɔːtə",
        .meaning = "屠杀；屠宰",
        .example = "Men, women and children were slaughtered and villages destroyed.",
        .example_cn = "村庄被毁，男人、女人和儿童惨遭杀戮。"
    },
    {
        .word = "tow",
        .phonetic_us = "to",
        .phonetic_uk = "təʊ",
        .meaning = "拖引，牵引",
        .example = "The ship had to be towed into the harbor.",
        .example_cn = "那艘轮船不得不被拖进港口。"
    },
    {
        .word = "credit",
        .phonetic_us = "'krɛdɪt",
        .phonetic_uk = "'kredɪt",
        .meaning = "相信，信任",
        .example = "We found his statement hard to credit.",
        .example_cn = "我们觉得他的说法令人难以信服。"
    },
    {
        .word = "clockwise",
        .phonetic_us = "'klɑk'waɪz",
        .phonetic_uk = "'klɒkwaɪz",
        .meaning = "顺时针方向转地",
        .example = "Screw the lid on clockwise.",
        .example_cn = "按顺时针方向拧紧盖子。"
    },
    {
        .word = "headlong",
        .phonetic_us = "'hɛdlɔŋ",
        .phonetic_uk = "'hedlɒŋ",
        .meaning = "头向前地",
        .example = "I fell headlong into a pool of icy water.",
        .example_cn = "我一个倒栽葱跌入了冰冷的池水中。"
    },
    {
        .word = "counter",
        .phonetic_us = "'kaʊntɚ",
        .phonetic_uk = "'kaʊntə",
        .meaning = "相反地",
        .example = "Some actions by the authorities ran counter to the President’s call for leniency.",
        .example_cn = "当局的某些行为和总统呼吁的宽容背道而驰。"
    },
    {
        .word = "eastward",
        .phonetic_us = "'istwɚdz",
        .phonetic_uk = "'iːstwəd",
        .meaning = "向东",
        .example = "A powerful snow storm is moving eastward.",
        .example_cn = "一场强暴风雪正在东移。"
    },
    {
        .word = "Moslem",
        .phonetic_us = "'mɑzləm",
        .phonetic_uk = "'mɒzləm",
        .meaning = "穆斯林",
        .example = "",
        .example_cn = ""
    },
    {
        .word = "melancholy",
        .phonetic_us = "'mɛlənkɑli",
        .phonetic_uk = "'melənkəlɪ",
        .meaning = "忧郁的",
        .example = "He sank into deep melancholy.",
        .example_cn = "他陷入深深的忧郁之中。"
    },
    {
        .word = "bulletin",
        .phonetic_us = "'bʊlətɪn",
        .phonetic_uk = "'bʊlɪtɪn",
        .meaning = "告示，公告，公报",
        .example = "At 3:30 p.m. a bulletin was released announcing that the president was out of immediate danger.",
        .example_cn = "下午3:30发布了公告，宣布总统暂时脱离了危险。"
    },
    {
        .word = "allowance",
        .phonetic_us = "ə'laʊəns",
        .phonetic_uk = "ə'laʊəns",
        .meaning = "津贴，补助费",
        .example = "Sales staff get a generous mileage allowance or a company car.",
        .example_cn = "销售人员有优厚的里程补贴或者公司提供的专用汽车。"
    }
};

/** @brief 六级词库单词数量 */
#define CET6_WORD_COUNT 2078

/**
 * @brief 根据索引获取单词
 * @param index 单词索引 (0 ~ CET6_WORD_COUNT-1)
 * @return 单词数据指针，索引无效返回 NULL
 */
const word_entry_t *cet6_get_word_by_index(uint32_t index);

#ifdef __cplusplus
}
#endif

#endif /* CET6_VOCABULARY_H */
