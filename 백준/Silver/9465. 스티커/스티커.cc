#define _CRT_SECURE_NO_WARNINGS
#define MAX 100001
#include <iostream>

using namespace std;

int sticker[2][MAX] = { 0, };
long long DP[2][MAX] = { 0, };

int main() {
	int T = 0;
	cin >> T;
	int max0 = 0, max1 = 0, flag = 0;
	while (T--) {
		int N;
		cin >> N;
		for (int i = 0; i < 2; i++) {
			for (int j = 1; j <= N; j++)
				cin >> sticker[i][j];
		}
		for (int i = 1; i <= N; i++) {
			DP[0][i] = (DP[0][i - 1] > DP[1][i - 1] + sticker[0][i]) ? DP[0][i - 1] : DP[1][i - 1] + sticker[0][i];
			DP[1][i] = (DP[1][i - 1] > DP[0][i - 1] + sticker[1][i]) ? DP[1][i - 1] : DP[0][i - 1] + sticker[1][i];
		}
		int max = (DP[0][N] > DP[1][N]) ? DP[0][N] : DP[1][N];
		cout << max << endl;
	}
	return 0;
}