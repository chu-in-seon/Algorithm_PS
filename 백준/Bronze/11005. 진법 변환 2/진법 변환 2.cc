#include <iostream>
#include <vector>
using namespace std;
vector<char> v;
int main() {
    ios::sync_with_stdio(false);
    long a, b;
    cin >> a >> b;
    while(a !=  0) {
        int t = a % b;
        if (t > 9) v.push_back(char('A' + t - 10));
        else v.push_back(char('0' + t));
        a /= b;
    }
    for(int i = v.size() - 1; i >= 0; i--)
        cout << v[i];
    return 0;
}
    