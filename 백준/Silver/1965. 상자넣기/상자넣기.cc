#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int N, arr[1003] = { 0, }, max = 0, res = 0;
	int dp[1003] = { 0, };
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}
	dp[0] = 0;
	for (int i = 1; i <= N; i++) {
		max = 0;
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j]) {
				if (dp[j] > max) max = dp[j];
			}
		}

		dp[i] = max + 1;
		if (dp[i] > res) res = dp[i];
	}
	cout << res << '\n';
	return 0;
}