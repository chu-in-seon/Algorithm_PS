#include <vector>
using namespace std;

int dfs(vector<vector<int>> &computers, int n, int i) {
    if (0 == computers[i][i]) {
        return 0;
    }
    computers[i][i] = 0;
    for (int j = 0; j < n; j++) {
        if (1 == computers[i][j]) {
            dfs(computers, n, j);
        }
    }

    return 1;
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    for (int i = 0; i < n; i++) {
        if ( 1 == computers[i][i] && 1 == dfs(computers, n, i) ) {
            answer++;
        }
    }

    return answer;
}