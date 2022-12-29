#include <iostream>
#define MOD 1000000000
using namespace std;
int dp[101][10][1 << 10];
int main() {
	ios::sync_with_stdio(false);
	int n, full, ans;
	cin >> n;
	full = (1 << 10) - 1;
	for (int j = 1; j <= 9; j++) dp[1][j][1 << j] = 1;
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			for (int k = 0; k <= full; k++) {
				if (j == 0)
					dp[i][0][k | (1 << 0)] = (dp[i][0][k | (1 << 0)] + dp[i - 1][1][k]) % MOD;
				else if (j == 9)
					dp[i][9][k | (1 << 9)] = (dp[i][9][k | (1 << 9)] + dp[i - 1][8][k]) % MOD;
				else {
					dp[i][j][k | (1 << j)] = (dp[i][j][k | (1 << j)] + dp[i - 1][j - 1][k]) % MOD;
					dp[i][j][k | (1 << j)] = (dp[i][j][k | (1 << j)] + dp[i - 1][j + 1][k]) % MOD;
				}
			}
		}
	}
	for (int j = 0; j <= 9; j++)
		ans = (ans + dp[n][j][full]) % MOD;
	cout << ans << "\n";
	return 0;
}



//#include<iostream>
//using namespace std;
//#define MOD 1000000000
//int dp[105][10][1 << 10], n, ans;
//int dfs(int idx, int num, int bit) {
//	if (dp[idx][num][bit]) return dp[idx][num][bit];
//	if (idx == n) return bit == (1 << 10) - 1 ? 1 : 0;
//	int res = 0;
//	if (num + 1 < 10) res += dfs(idx + 1, num + 1, bit | 1 << (num + 1));
//	if (num - 1 >= 0) res += dfs(idx + 1, num - 1, bit | 1 << (num - 1));
//	res %= MOD;
//	return dp[idx][num][bit] = res;
//}
//int main() {
//	cin >> n;
//	for (int i = 1; i < 10; i++) {
//		ans += dfs(1, i, 1 << i);
//		ans %= MOD;
//	}
//	cout << ans << endl;
//	return 0;
//}

// 계단 수 1562번

//#include <iostream>
//using namespace std;
//#define MOD 1000000000
//#define MAX_SIZE 101
//#define MAX_BIT (1<<10)-1
//typedef long long int ll;
//ll dp[MAX_SIZE][10][MAX_BIT];
//int main(void) {
//	int n;
//	cin >> n;
//	n = 10;
//	for (int i = 1; i < 10; i++) {
//		dp[1][i][(1 << i)] = 1;
//	}
//	for (int i = 2; i <= n; i++) {
//		for (int j = 0; j < 10; j++) {
//			if (j == 0) {
//				for (int k = 1; k <= MAX_BIT; k++) {
//					dp[i][j][k | (1 << j)] += dp[i - 1][1][k];
//				}
//			}
//			else if (j == 9) {
//				for (int k = 1; k <= MAX_BIT; k++) {
//					dp[i][j][k | (1 << j)] += dp[i - 1][8][k];
//				}
//			}
//			else {
//				for (int k = 1; k <= MAX_BIT; k++) {
//					dp[i][j][k | (1 << j)] += (dp[i - 1][j - 1][k] + dp[i - 1][j + 1][k]) % MOD;
//				}
//			}
//		}
//	}
//
//	ll ret = 0;
//	for (int i = 0; i < 10; i++) {
//		ret = (ret + dp[n][i][MAX_BIT]) % MOD;
//	}
//	cout << ret;
//}