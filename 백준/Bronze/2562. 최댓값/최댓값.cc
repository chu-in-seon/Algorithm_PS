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
    const int NUM_COUNT = 9;
    int arr[NUM_COUNT] = {0, };
    int max = 0, maxIdx = NUM_COUNT + 1;
    for(int idx = 0; idx < NUM_COUNT; idx++)
    {
        cin >> arr[idx];
        if (max < arr[idx])
        {
            max = arr[idx];
            maxIdx = idx + 1;
        }
    }
    cout << max << '\n' << maxIdx;

    return 0;
}