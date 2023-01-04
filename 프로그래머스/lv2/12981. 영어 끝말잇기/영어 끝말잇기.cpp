#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer{0, 1};

    const size_t wordsSize = words.size();
    vector<string> calledStr;
    calledStr.push_back(words[0]);
    
    vector<int> answerCnt;
    answerCnt.resize(n);
    answerCnt[0]++;

    for (int i = 1; i < wordsSize; i++) {
        answer[0] = (i % n) + 1;
        answerCnt[(i % n)]++;
        if (words[i-1].back() != words[i].front()) {
            answer[1] = answerCnt[(i % n)];
            return answer;
        }
        
        if (calledStr.end() != find(calledStr.begin(), calledStr.end(), words[i])) {
            answer[1] = answerCnt[(i % n)];
            return answer;
        }
        calledStr.push_back(words[i]);
    }

    answer[0] = 0;
    answer[1] = 0;

    return answer;
}