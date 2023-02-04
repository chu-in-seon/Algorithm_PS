#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    for (string str : s1) {
        if (s2.end() != find(s2.begin(), s2.end(), str)) {
            answer++;
        }
    }
    return answer;
}