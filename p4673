#include<iostream>
#define IOS_PREDEFINE() \
( \
    (cin.tie(NULL)), \
    (cout.tie(NULL)), \ 
    (std::ios::sync_with_stdio(false)), \
    (void) 0 \
)
using namespace std;
const int MAX = 10001;
int d(int n)
{
    int sum = 0;
    sum += n;
    int reminder = n;
    while(reminder)
    {
        sum += reminder % 10;
        reminder /= 10;
    }
    return sum;
}
int main()
{
    IOS_PREDEFINE();
    bool flag[MAX] = {false, }; 
    for(int idx = 1; idx < MAX; idx++)
    {
        int retVal = d(idx);
        if(MAX > retVal)
            flag[retVal] = true;
    }
    for(int idx = 1; idx < MAX; idx++)
    {
        if(false == flag[idx])
            cout << idx << '\n';
    }
    
    return 0;
}
