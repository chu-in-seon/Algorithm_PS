#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

vector<int> solution(vector<string> operations) {
    vector<int> answer;
    for (const string operation : operations) {
        char operChar[4];
        int num = 0;
        sscanf(operation.c_str(), "%s %d", operChar, &num);
        if ('I' == operChar[0]) {
            answer.push_back(num);
            sort(answer.begin(), answer.end(), greater<int>());
        }
        else if (('D' == operChar[0]) && (1 == num) && (false == answer.empty())) {
            answer.erase(answer.begin());
        }
        else if (('D'== operChar[0]) && (-1 == num) && (false == answer.empty())) {
            answer.erase(answer.end() - 1);
        }
    }

    if (true == answer.empty()) {
        return {0, 0};
    }

    return {answer.front(), answer.back()};
}