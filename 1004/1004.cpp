#include <iostream>
#include <string.h>

using namespace std;

struct student
{
    string name;
    string ID;
    int score;
};

int main()
{
    student stu[10000];
    int n;
    int max_score = -1, min_score =101;
    int max, min;
    cin >>n;
    for (int i = 0; i < n; i++)
    {
        cin >>stu[i].name >>stu[i].ID >> stu[i].score;
        
        if (stu[i].score > max_score)
        {
            max_score = stu[i].score;
            max = i;
        }
        
       if (stu[i].score < min_score)
        {
            min_score = stu[i].score;
            min = i;
        }
    }
    
    cout << stu[max].name << " " << stu[max].ID << endl;
    cout << stu[min].name << " " << stu[min].ID << endl;
    
    return 0;
    
    
}