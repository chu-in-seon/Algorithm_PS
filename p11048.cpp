#include <iostream>
#include <algorithm>
using namespace std;
int dp[1005][1005];
int field[1005][1005];
int getmax(int a, int b, int c) {
	int t = b > c ? b : c;
	return a > t ? a : t;
}
int main() {
	std::ios::sync_with_stdio(false);
	int N, M, x = 1, y = 1, val = 0, res = 0;
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			cin >> field[i][j];
		}
	}
	dp[1][1] = field[1][1];
	for (int i = 2; i <= M; i++) dp[1][i] = field[1][i] + dp[1][i - 1];
	for (int i = 2; i <= N; i++) dp[i][1] = field[i][1] + dp[i - 1][1];
	for (int i = 2; i <= N; i++) {
		for (int j = 2; j <= M; j++) {
			int val = getmax(dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]);
			dp[i][j] = field[i][j] + val;
		}
	}
	cout << dp[N][M];
	return 0;
}