#include <iostream>
using namespace std;
int gcd(long a, long b) {
    return a % b == 0 ? b : gcd(b, a % b);
}
int main() {
    ios::sync_with_stdio(false);
    int T = 0, a = 0, b = 0;
    long g_val = 0;
    cin >> T;
    for(int i = 0; i < T; i++) {
        cin >> a >> b;
        g_val = gcd(a, b);
        cout << a * b / g_val << "\n";
    }
    return 0;
}

