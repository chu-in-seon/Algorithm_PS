#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    const size_t arr1_col = arr1.size();
    const size_t arr1_row = arr1[0].size();
    const size_t arr2_row = arr2[0].size();

    for (int i = 0; i < arr1_col; i++) {
        vector<int> result_row;
        int resVal = 0;
        for (int j = 0; j < arr2_row; j++) {
            for(int k = 0; k < arr1_row; k++) {
                resVal += arr1[i][k] * arr2[k][j];
            }
            result_row.push_back(resVal);
            resVal = 0;
        }
        answer.push_back(result_row);
    }
    return answer;
}