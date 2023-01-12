#include <string>
#include <algorithm>

using namespace std;

string solution(string my_string, string letter) {
    const size_t strLen = my_string.length();
    string answer = my_string;
    for (int idx = 0; idx < strLen; idx++) {
        string::const_iterator it = find(answer.begin(), answer.end(), letter[0]);
        if (answer.end() == it) {
            break;
        }
        answer.erase(it);
    }
    return answer;
}