#include <iostream>
#include <string>
using namespace std;

int main()
{
    int sum = 0;
    string s;
    cin >> s;
    string pinyin[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    
    for (int i = 0; i < s.size(); i++)
    {
        sum += stoi(s.substr(i, 1));// stoi把数字字符串转换成int类型输出
    }
    string num = to_string(sum);
    for (int i = 0; i < num.size(); i++)
    {
        if(i != 0)
            cout << " " ;
        cout << pinyin[num[i] - '0']; //'0'表示0的ASCII码值，将字符串转换成整型数据
        // cout << pinyin[stoi(num.substr(i, 1))]; //第二种写法
    }
    return 0;
    
}