#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    if (0 == n) {
        return 0;
    }
    else if (1 == n || 2 == n) {
        return 1;
    }
    vector<int> fibValues{0, 1, 1, };
    fibValues.reserve(n + 1);
    for (int i = 3; i < n + 1; i++) {
        fibValues[i] = (fibValues[i-2] + fibValues[i-1]) % 1234567;
    }

    return fibValues[n];
}
