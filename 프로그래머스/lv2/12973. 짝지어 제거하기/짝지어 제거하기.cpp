#include <iostream>
#include <string>
#include <stack>

using namespace std;

int solution(string s)
{
    int answer = 0;
    stack<char> charStack;
    const size_t sLen = s.length();
    if ( 1 == sLen % 2 ) {
        return 0;
    }

    for (int i = 0; i < sLen; i++) {
        const char charElement = s[i];
        if ( (true == charStack.empty()) || (charElement != charStack.top()) ) {
            charStack.push(charElement);
        }
        else {
            charStack.pop();
        }
    }

    if (true == charStack.empty()) {
        answer = 1;
    }
    return answer;
}