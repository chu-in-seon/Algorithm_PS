#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    string a;
    int b;
    cin >> a >> b;
    long long res = 0, po = 0;
    for(int i = 0 ; i < a.size(); i++) {
        po = pow(b, a.size() - i - 1);
        if (a[i] >= 'A') res += (a[i] - 'A' + 10) * po;
        else res += (a[i] - '0') * po;
    }
    cout << res << "\n";
    return 0;
}
