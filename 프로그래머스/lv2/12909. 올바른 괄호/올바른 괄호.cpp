#include <string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = false;
    const size_t sSize = s.length();
    int openCnt = 0;
        for(int i = 0; i < sSize; i++) {
            openCnt = (s[i] == '(') ? openCnt + 1 : openCnt - 1;
            if (0 > openCnt) {
                cout << "false" << endl;
                return false;
            }
        }

        if (0 == openCnt) {
            cout << "true" << endl;
            return true;
        }
    cout << "false" << endl;
    return answer;
}