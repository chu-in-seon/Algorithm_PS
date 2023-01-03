#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string A, string B) {
    int answer = 0;
    size_t aStrSize = A.length();
    if (0 == A.compare(B)) {
        return answer;
    }
    
    for(int idx = 1; idx <= aStrSize; idx++) {
        answer++;
        A.insert(A.begin(), A.back());
        A.pop_back();
        if (0 == A.compare(B)) {
            break;
        }

        if (idx == aStrSize) {
            answer = -1;
        }
    }
    return answer;
}