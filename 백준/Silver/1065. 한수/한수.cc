#include<iostream>
#define IOS_PREDEFINE() \
( \
    (cin.tie(NULL)), \
    (cout.tie(NULL)), \ 
    (std::ios::sync_with_stdio(false)), \
    (void) 0 \
)
using namespace std;
bool getHan(int n)
{
    int arr[3] = {0,};
    int reminder = n, idx = 0;
    bool isHan = false;
    while(reminder)
    {
        arr[idx++] = reminder % 10;
        reminder /= 10;
    } 
    if( (arr[0] - arr[1]) == (arr[1] - arr[2]))
    {
        return true;
    }
    return false;
}
int main()
{
    IOS_PREDEFINE();
    int target = 0;
    cin >> target;
    int han = 0;
    for(int idx = 1; idx <= target; idx++)
    {
        if (idx < 100) 
        {
            han++;
            continue;
        }
        if(idx == 1000)
            break;
        if (true == getHan(idx))
        {
            han++;
        }
    }
    cout << han << '\n';
    return 0;
}