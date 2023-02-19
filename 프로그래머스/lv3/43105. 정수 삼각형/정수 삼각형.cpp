#include <iostream>
#include <vector>
#define MAX 502
using namespace std;

static uint32_t dpTable[MAX][MAX] = {{0, },};

void initializeDPTabel(const vector<vector<int>> &triangle) {
    dpTable[0][0] = triangle[0][0];
    dpTable[1][0] = dpTable[0][0] + triangle[1][0];
    dpTable[1][1] = dpTable[0][0] + triangle[1][1];
    
    size_t triangleHeight = triangle.size();
    for (int i = 1; i < triangleHeight - 1; i++) {
        for (int j = 0; j < i + 1; j++) {
            uint32_t val = dpTable[i][j] + triangle[i+1][j];
            if (dpTable[i+1][j] < val) {
                dpTable[i+1][j] = val;
            }
            
            val = dpTable[i][j] + triangle[i+1][j+1];
            if (dpTable[i+1][j+1] < val) {
                dpTable[i+1][j+1] = val;
            }
        }
    }
}

int solution(vector<vector<int>> triangle) {
    if (1 == triangle.size()) {
        return triangle[0][0];
    }
    initializeDPTabel(triangle);

    int answer = 0;
    int height = static_cast<int>(triangle.size());
    int length = static_cast<int>(triangle[height-1].size());
    for (int i = 0; i < length; i++) {
        if (answer < dpTable[height - 1][i]) {
            answer = dpTable[height - 1][i];
        }
    }    
    
    return answer;
}