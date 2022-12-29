#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i = 1; i <= n; i++) {
        int pivot = i, sumVal = 0;
        while(n >= sumVal) {
            if (n == sumVal) {
                answer++;
                break;
            }
            sumVal += pivot;
            pivot++;
        }
    }
    return answer;
}
