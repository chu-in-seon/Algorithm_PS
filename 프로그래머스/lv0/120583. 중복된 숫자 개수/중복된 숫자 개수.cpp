#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    for (const int item : array) {
        if ( n == item ) {
            answer++;
        }
    }
    return answer;
}