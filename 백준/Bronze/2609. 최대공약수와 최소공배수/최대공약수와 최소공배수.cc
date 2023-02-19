#include <iostream>
using namespace std;

int gcd(long a, long b) {
    return a % b == 0 ? b : gcd(b, a % b);
}

int main() {
    ios::sync_with_stdio(false);
    long a = 0, b = 0, g = 0;
    cin >> a >> b;
    g = gcd(a, b);
    cout << g << "\n" << (a * b) / g << "\n";
	return 0;
}