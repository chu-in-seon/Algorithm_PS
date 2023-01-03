#include <string>
#include <vector>

using namespace std;

int solution(vector<int> box, int n) {
    int answer = 1;
    for (const int boxLen : box) {
        answer *= boxLen / n;
    } 
    return answer;
}