#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <double> v1(n);
    vector <double> v2(n);
    vector <double> v3(n);
    
    if (n > 10)
        return 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i] >> v2[i] >> v3[i];
        if (v1[i] + v2[i] > v3[i])
        {
            cout <<"Case #" << i +1 << ": " <<"true" << endl;
        }
        else
            cout << "Case #" << i +1 << ": " <<"false" << endl;
    }
    return 0;
}