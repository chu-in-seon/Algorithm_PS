#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int dp[17], t[17], p[17];
int n = 0;
int quit(int day) {
	if (day == n + 1)
		return 0;
	if (day > n)
		return -999999;
	int& re = dp[day];
	if (re != -1) return re;
	re = 0;
	for (int i = day; i <= n; i++)
		re = max(re, quit(i + t[i]) + p[i]);
	return re;
}
int main() {
	cin >> n;
	fill(dp, dp + n + 1, -1);
	for (int i = 1; i <= n; i++) {
		cin >> t[i] >> p[i];
	}
	int res = quit(1);
	cout << res << "\n";
	return 0;
}