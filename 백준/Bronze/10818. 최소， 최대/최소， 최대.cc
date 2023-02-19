#include<iostream>
#define IOS_PREDEFINE() \
( \
    (cin.tie(NULL)), \
    (cout.tie(NULL)), \ 
    (std::ios::sync_with_stdio(false)), \
    (void) 0 \
)
using namespace std;
int main()
{
    IOS_PREDEFINE();
    int testCase = 0, num = 0;
    cin >> testCase;
    int max = -1000001, min = 1000001;
    while(testCase--)
    {
        cin >> num;
        if (max < num)
        {
            max = num;
        }
        if (min > num)
        {
            min = num;
        }
    }
    cout << min << ' ' << max;
    return 0;
}