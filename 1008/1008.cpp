#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    cin >> m;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    int temp;
    for (int i = 0; i < m; i++)
    {
        temp = v[n - 1];
        for (int j = n - 2; j >= 0; j--)
        {
            v[j + 1] = v[j];
        }
        v[0] = temp;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << v[i];
        if (i != n - 1)
        {
            cout << " ";
        }
    }
    return 0;
}