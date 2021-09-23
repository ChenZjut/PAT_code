#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
        if (v1[i] > 1000)
            return 0;
    }
    vector <int> v2;
    double A4 = 0.0; 
    int A1 = 0, A2 = 0, A3 = 0, count = 0, A5 = 0, flag = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        if(v1[i]%2 == 0 && v1[i]%5 == 0)
        {
            A1 += v1[i];
        }
        else if (v1[i]%5 == 1)
        {
            v2.push_back(v1[i]);
        }
        else if (v1[i]%5 == 2)
        {
            A3++;
        }
        else if (v1[i]%5 == 3)
        {
            count ++;
            A4 += v1[i];
        }
        else if (v1[i]%5 == 4)
        {
            if (v1[i] > A5)
            {
                A5 = v1[i];
            }
        }
    }
    
    for (int i = 0; i < v2.size(); i = i + 2)
    {
        int temp = v2[i] - v2[i + 1];
        A2 += temp; 
        flag = 1;
    }
    
    A4 /= count;
    if (isnan(A4))
        A4 = 0;

    if (A1)
        cout << A1 << " ";
    else
        cout <<"N ";
    
    if (flag == 1)
        cout << A2 <<" ";
    else
        cout << "N ";

    if (A3)
        cout << A3 << " ";
    else
        cout <<"N ";

    if (A4)
        cout << round(A4 * 10) / 10.0 << " ";
    else
        cout <<"N ";

    if (A5)
        cout << A5;
    else
        cout <<"N";

    return 0;
}