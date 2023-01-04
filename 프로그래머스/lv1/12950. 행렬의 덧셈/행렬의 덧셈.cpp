#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    const size_t arr1_col = arr1.size();
    const size_t arr1_row = arr1[0].size();

    for (int i = 0; i < arr1_col; i++) {
        vector<int> tmp;
        for (int j = 0; j < arr1_row; j++) {
            tmp.push_back(arr1[i][j] + arr2[i][j]);
        }
        answer.push_back(tmp);
    }

    return answer;
}