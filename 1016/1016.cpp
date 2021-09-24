#include <iostream>
#include <string>
using namespace std;

int main()
{
    string A, B;
    int DA = 0, DB = 0;
    int PA = 0, PB = 0;
    cin >> A >> DA >> B >> DB;

    for (int i = 0; i < A.length(); i++)
    {
        if (A[i] - '0' == DA)
           PA = PA * 10 + DA;
    }

    for (int i = 0; i < B.length(); i++)
    {
        if (B[i] - '0' == DB)
            PB = PB * 10 + DB;
    }
    cout << PA + PB;
    return 0; 
}