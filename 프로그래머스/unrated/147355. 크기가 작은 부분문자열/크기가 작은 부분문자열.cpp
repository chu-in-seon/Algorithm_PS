#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    if (0 == t.compare(p)) {
        return 1;
    }

    int answer = 0;
    size_t tSize = t.length();
    size_t pSize = p.length();
    for(int i = 0; i < tSize - pSize + 1; i++) {
        for (int j = 0; j < pSize; j++) {
            int tNum = t[i + j] - '0';
            int pNum = p[j] - '0';           
            if (tNum > pNum) {
                break;
            }
            
            if (tNum < pNum) {
                answer++;
                break;
            }
            
            if (j == pSize - 1) {
                answer++;
            }
        }
    }
    return answer;
}