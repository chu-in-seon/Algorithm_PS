#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int ignition = 0, param = 0;
    for (int idx = 1; idx < num; idx++) { param += idx; }

    ignition = (total - param) / num;
    
    for(int idx = 0; idx < num; idx++) { answer.push_back(ignition + idx); }
    return answer;
}