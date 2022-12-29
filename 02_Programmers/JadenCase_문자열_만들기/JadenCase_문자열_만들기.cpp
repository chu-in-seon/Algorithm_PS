#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    const size_t sSize = s.length();
    for (int idx = 0;idx < sSize; idx++) {
        char c = s[idx];
        if (0 <= c-'0' && 9 >= c-'0') {
            continue;
        }

        if (0 == idx) {
            s[0] = toupper(c);
            continue;
        }

        if (' ' == s[idx-1]) {
            s[idx] = toupper(c);
            continue;
        }

        s[idx] = tolower(c);
    }

    answer = s;
    return answer;
}
