#  1006. 换个格式输出整数 (15)
让我们用字母B来表示“百”、字母S表示“十”，用“12…n”来表示个位数字n（<10），换个格式来输出任一个不超过3位的正整数。例如234应该被输出为BBSSS1234，因为它有2个“百”、3个“十”、以及个位的4。

# 输入格式
每个测试输入包含1个测试用例，给出正整数n（<1000）。

# 输出格式：
每个测试用例的输出占一行，用规定的格式输出n。

# 输入样例：
234

# 输出样例:
BBSSS1234

# 分析思路：
输入一个小于1000的数字n我们先统计百位 十位 个位的数字记录下来，
n / 100 （百位）
(n%100) / 10 （十位）  
(n%100) % 10 （个位）
再for循环按B S 1,2……n输出。