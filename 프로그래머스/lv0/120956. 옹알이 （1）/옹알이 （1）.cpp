#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    vector<string> pronoList{"aya", "ye", "woo", "ma"};
    int answer = 0;

    for (string &babblingItem : babbling) {
        int32_t findCnt = 0;
        while(true) {
            bool isFindProno = false;
            for (const string pronoItem : pronoList) {
                const size_t foundIdx = babblingItem.find(pronoItem);
                if (string::npos != foundIdx) {
                    babblingItem.erase(foundIdx, pronoItem.size());
                    babblingItem.insert(foundIdx, "1");
                    findCnt++;
                    isFindProno = true;
                }
            }

            if (false == isFindProno) {
                break;
            }
        }
        
        if (findCnt == babblingItem.size()) {
            answer++;
        }
        findCnt = 0;
    }
        
    return answer;
}