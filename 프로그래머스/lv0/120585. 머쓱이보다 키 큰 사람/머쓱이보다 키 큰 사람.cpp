#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;
    for (const int item : array) {
        if (height < item) {
            answer++;
        }
    }
    return answer;
}