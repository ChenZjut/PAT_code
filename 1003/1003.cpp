#include <iostream>
#include <string>
using namespace std;

bool judge(string s)
{
    int x = 0, y = 0, z = 0;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    
    // 得出 P, T出现的位置记录下后面作判断用
    int posp, post;
    posp = s.find('P');
    post = s.find('T');
    
    for (int i =0; i < s.size(); i++)
    {
        // 首先判断P, A, T 都没有直接返回false
        if ((s.at(i) != 'P') && (s.at(i) != 'A') && (s.at(i) != 'T'))
            return false;
        // 有P, A, T 统计个数，需要满足P, T有且仅有一个, A的个数不为零
        if(s.at(i) == 'P')
            x++;
        else if(s.at(i) == 'A')
            y++;
        else if(s.at(i) == 'T')
            z++;
        // 这里是我没读懂的第三个条件，看大神们的意思是**P***T******,星号中间是A的个数，需要满足cnt1 * cnt2 = cnt3.因此需要统计A的个数.
        if (i < posp && s.at(i) == 'A')
            cnt1++;
        else if (i > posp && i < post && s.at(i) == 'A')
            cnt2++;
        else if (i > post && s.at(i) == 'A')
            cnt3++;
    }
    
    // 如果P， T个数不是1的话，或者A的个数为非正数，返回false
    if (x != 1 || z != 1 || y <=0)
        return false;    

    // T的位在P前面，即TP的情况false
    if (post <= posp)
        return false;
        
    // 判断A的个数，先排除APT这种情况，n * 0 = 0.    
    if(cnt1 != 0 && cnt2 == 0 && cnt3 == 0)
        return false;
    else if(cnt3 == cnt1 * cnt2)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (judge(s))
            cout << "YES" << endl;
        else
            cout<< "NO" <<endl;
    }
    return 0;
}