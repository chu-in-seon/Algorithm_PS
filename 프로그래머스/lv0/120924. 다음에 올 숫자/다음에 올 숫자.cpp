#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    // If arithmetic sequence
    if (abs(common[1] - common[0]) == abs(common[2] - common[1])) {
        answer = common.back() + (common[2] - common[1]);
    }
    // If geometric sequence
    else if (0 == (common[1] / common[0]) % (common[2] / common[1])) {
        answer = common.back() * (common[2] / common[1]);
    }

    return answer;
}