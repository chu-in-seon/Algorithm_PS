#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    const size_t arrSize = absolutes.size();
    for (int i = 0; i < arrSize; i++) {
        answer += (true == signs[i]) ? absolutes[i] : (absolutes[i] * -1);
    }
    return answer;
}