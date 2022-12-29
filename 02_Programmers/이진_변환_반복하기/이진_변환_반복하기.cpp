#include <string>
#include <vector>
#include <algorithm>

using namespace std;

std::string toBinary(int n)
{
    std::string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}
vector<int> solution(string s) {
    vector<int> answer;
    int loopCnt = 0, zeroCnt = 0;
    while (true) {
        loopCnt++;
        string::iterator it = std::find(s.begin(), s.end(), '0');
        while (s.end() != it) {
            zeroCnt++;
            s.erase(it);
            it = std::find(s.begin(), s.end(), '0');
        }

        size_t sLength = s.length();
        if (1 == sLength) {
            break;
        }
        s = toBinary(sLength);
    }

    answer.push_back(loopCnt);
    answer.push_back(zeroCnt);
    return answer;
}
