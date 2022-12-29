#include <iostream>
#include <fstream>
#define MAX 23
using namespace std;
ifstream inp("pole.inp");
ofstream out("pole.out");
long long dp[MAX][MAX][MAX];
int main() {
	for (int i = 0; i < MAX; i++) {
		dp[i][i][1] = 1;
		dp[i][1][i] = 1;
		dp[1][i][i] = 1;
	}
	for (int i = 1; i < MAX; i++) {
		for (int j = 1; j < MAX; j++) {
			for (int k = 1; k < MAX; k++) {
				dp[i][j][k] = dp[i - 1][j - 1][k] + (dp[i - 1][j][k] * (i - 2)) + dp[i - 1][j][k - 1];
			}
		}
	}
	int Test_Case = 0, n = 0, l = 0, r = 0;
	inp >> Test_Case;
	while (Test_Case--) {
		inp >> n >> l >> r;
		out << dp[n][l][r] / 2 << "\n";
	}
	return 0;
}