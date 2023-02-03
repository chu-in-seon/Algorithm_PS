#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int pivot = 1000000; pivot > 0; pivot /= 10) {
        int num = n / pivot;
        answer += num;
        n -= num * pivot;
    }
    return answer;
}