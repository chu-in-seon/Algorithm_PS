#include <iostream>
#include <vector>
#include <queue>
#include <functional>

using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;
    size_t aSize = A.size();
    priority_queue<int, vector<int>, greater<int>> Apq;
    priority_queue<int> Bpq;
    for (int i = 0; i < aSize; i++) {
        Apq.push(A[i]);
        Bpq.push(B[i]);
    }

    while(!Apq.empty()) {
        answer += Apq.top() * Bpq.top();
        Apq.pop(), Bpq.pop();
    }

    return answer;
}