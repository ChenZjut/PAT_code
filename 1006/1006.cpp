#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // 用来统计百 十 个位的数字
    int b, s, g;
    b = n / 100;
    s = (n % 100) / 10;
    g = (n % 100) % 10;
    // cout << b << s << g <<endl;
    
    for (int i = 0; i < b ; i++)
    {
        cout << 'B';
    }

    for (int i = 0; i < s; i++)
    {
        cout << 'S';
    }

    for (int i = 1; i <= g; i++)
    {
        cout << i;
    }
    return 0;
}