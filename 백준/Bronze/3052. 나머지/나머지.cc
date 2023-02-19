#include<iostream>
#include<set>
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
    const int INPUT_SIZE = 10;
    int inp = 0;
    std::set<int> result;
    for(int idx = 0; idx < INPUT_SIZE; idx++)
    {
        cin >> inp;
        result.insert(inp % 42);
    }

    cout << result.size() << '\n';
    return 0;
}