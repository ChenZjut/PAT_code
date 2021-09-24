#  1017 A除以B (20)
本题要求计算 A/B，其中 A 是不超过 1000 位的正整数，B 是 1 位正整数。你需要输出商数 Q 和余数 R，使得 A=B×Q+R 成立。

# 输入格式
输入在一行中依次给出 A 和 B，中间以 1 空格分隔。

# 输出格式：
在一行中依次输出 Q 和 R，中间以 1 空格分隔。

# 输入样例：
```
123456789050987654321 7
```

# 输出样例:
```
17636684150141093474 3
```

# 分析思路：
模拟手动除法的过程，每次用第一位去除以B，如果得到的商不是0就输出，否则就*10+下一位，直到最后的数为余数。