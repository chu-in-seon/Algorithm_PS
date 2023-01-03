#include <string>
#include <vector>

using namespace std;

static const int MAXIMUM_PARAM = 102;
int dpTable[102][102] = {0,};

void CreateDPTable() {
    for (int i = 2; i < MAXIMUM_PARAM; i++) {
        dpTable[i][1] = i - 1;
        dpTable[1][i] = i - 1;
    }

    for (int i = 2; i < MAXIMUM_PARAM; i++) {
        for (int j = 2; j < MAXIMUM_PARAM; j++) {
            dpTable[i][j] += dpTable[i][j-1] + i;
        }
    }
}

int solution(int M, int N) {
    CreateDPTable();
    return dpTable[M][N];
}