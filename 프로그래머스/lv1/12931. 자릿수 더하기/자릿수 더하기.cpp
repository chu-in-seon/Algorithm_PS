#include <iostream>
using namespace std;
int solution(int n)
{
    int pivot = 10;
    int answer = 0;
    while(n) {
        answer += (n % pivot);
        n /= pivot;
    }
    cout << answer << endl;
    return answer;
}
