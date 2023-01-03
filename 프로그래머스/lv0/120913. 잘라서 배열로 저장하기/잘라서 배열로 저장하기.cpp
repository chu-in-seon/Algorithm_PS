#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    const int myStrSize = my_str.length();
    for (int idx = 0; idx < myStrSize; idx += n) {
        if (idx >= myStrSize) {
            break;
        }

        string sub;
        if (idx + n >= myStrSize) {
            sub = my_str.substr(idx, myStrSize - idx);
        }
        else {
            sub = my_str.substr(idx, n);

        }
        answer.push_back(sub);
    }
    
    return answer;
}