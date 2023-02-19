#include <iostream>
#define MAX 16
unsigned int apartment[MAX][MAX] = {{0,},};

int main()
{
    // create DP table
    for (int idx = 0; idx < MAX; idx++)
        apartment[0][idx] = idx + 1;

    for (int i = 1; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            int result = 0;
            for (int k = 0; k <= j; k++) {
                result += apartment[i - 1][k];
            }
            apartment[i][j] = result;
        }
    }

    int T = 0, k = 0, n = 0;
    std::cin >> T;
    for (int idx = 0; idx < T; idx++) {
        std::cin >> k >> n;
        std::cout << apartment[k][n-1] << std::endl;
    }

    return 0;
}