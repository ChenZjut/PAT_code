C++ (g++)
1
#include <iostream>
2
#include <string>
3
#include <stack>
4
using namespace std;
5
​
6
int main()
7
{
8
    stack <string> v;
9
    string s;
10
    while (cin >> s) v.push(s);
11
    cout << v.top();
12
    v.pop();
13
    while (!v.empty())
14
    {
15
        cout << " " << v.top();
16
        v.pop();
17
    }
18
    return 0;
19
}
