#include <cmath>

using namespace std;
bool isPrime(int n) {
    if (n <= 1) { return false; }
    if (n % 2 == 0) { return (2 == n) ? true : false; }
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) { return false; }
    }

    return true;
}

int solution(int n) {
    int answer = 0;
    for (int i = 2; i <= n; i++) {
        if (true == isPrime(i)) {
            answer++;
        }
    }
    return answer;
}