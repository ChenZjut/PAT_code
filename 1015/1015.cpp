#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct student
{
    int num, de, cai;
};

int cmp(student a, student b)
{
    if ((a.de + a.cai) != (b.de + b.cai))
    {
        return (a.de + a.cai) > (b.de + b.cai);
    }
    else if (a.de != b.de)
    {
        return a.de > b.de;
    }
    else
        return a.num < b.num;
}

int main()
{
    int n, low, high;
    cin >> n >> low >> high;
    student temp;
    vector<student> stu[4];
    int count = n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp.num >> temp.de >> temp.cai;

        if (temp.de < low || temp.cai < low)
        {
            count--;
        }
        else if (temp.de >= high && temp.cai >= high)
        {
            stu[0].push_back(temp);
        }
        else if (temp.de >= high && temp.cai < high)
        {
            stu[1].push_back(temp);
        }
        else if (temp.de < high && temp.cai < high && temp.de >= temp.cai)
        {
            stu[2].push_back(temp);
        }
        else
            stu[3].push_back(temp);
    } 

    cout << count << endl;
    for (int i = 0; i < 4; i++)
    {
        sort(stu[i].begin(), stu[i].end(), cmp);
        for (int j = 0; j < stu[i].size(); j++)
            cout << stu[i][j].num << " " << stu[i][j].de << " " << stu[i][j].cai << endl;
    }
    
    return 0; 
}