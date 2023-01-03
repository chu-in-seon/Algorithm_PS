#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    for (const auto item : array) {
        string strItem = to_string(item);
        size_t strItemSize = strItem.length();
        for (int idx = 0; idx < strItemSize; idx++) {
            if ('7' == strItem[idx]) {
                answer++;
            }
        }
    }
    return answer;
}