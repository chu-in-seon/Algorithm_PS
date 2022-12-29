#include <iostream>
using namespace std;
long gcd(long a, long b) {
    return (a % b == 0) ? b : gcd(b, a % b);
}
int main() {
    ios::sync_with_stdio(false);
    long a = 0, b = 0, size = 0;
    cin >> a >> b;
    size = gcd(a>b?a:b, a>b?b:a);
    for(long i = 0; i < size; i++) cout << 1;
    return 0;
}
