#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    int32_t prevPos = 0;
    int32_t curPos = s.find(' ');
    vector<int32_t> numList;

    while (string::npos != curPos) {
        string substr = s.substr(prevPos, curPos - prevPos);
        numList.push_back(atoi(substr.c_str()));
        prevPos = curPos + 1;
        curPos = s.find(' ', prevPos);
    }
    numList.push_back(atoi(s.substr(prevPos, curPos - prevPos).c_str()));

    int32_t max = INT32_MIN;
    int32_t min = INT32_MAX;
    for (const int32_t num : numList) {
        if (max < num) {
            max = num;
        }
        
        if( min > num) {
            min = num;
        }
    }
    
    answer = to_string(min) + ' ' + to_string(max);
    return answer;
}