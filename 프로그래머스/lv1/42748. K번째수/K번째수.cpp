#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;

    for (const vector<int> &command : commands) {
        vector<int> newArrForCommand(array.begin() + command[0] - 1, array.begin() + command[1]);
        sort(newArrForCommand.begin(), newArrForCommand.end());
        answer.push_back(newArrForCommand[command[2] - 1]);
    }
    
    return answer;
}