#include <iostream>

using namespace std;

int main()
{
    int a, x, flag = 0;
    while (cin >> a >> x)
    {
        if (x != 0)
        {
            if (flag == 1)
            {
                cout << " ";
            }
            cout << a * x << " " << x - 1; 
            flag = 1;
        }

        if (flag == 0)
           cout << "0 0";
    }
    
    return 0;
}
