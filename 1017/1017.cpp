#include <iostream>
using namespace std;

int main()
{
    string a;
    int b, t = 0;
    cin >> a >> b;
    t = (a[0] - '0') / b;
    int len  = a.length();
    if (len == 1 || t != 0 && len > 1)
       cout << t;
    int temp = (a[0] - '0') % b;
    for (int i = 1; i < len; i++)
    {
        t = (temp * 10 + (a[i]- '0')) / b;
        cout << t;
        temp = (temp * 10 + (a[i]- '0')) % b;
    }
    cout << " " << temp;
    return 0; 
}