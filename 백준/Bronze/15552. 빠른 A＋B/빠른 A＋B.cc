#include<iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    std::ios::sync_with_stdio(false);
    int testCase = 0;
    cin >> testCase;
    unsigned int a = 0, b = 0;
    while(testCase--)
    {
        cin >> a >> b;
        cout << a + b << '\n';
    }
    return 0;
}