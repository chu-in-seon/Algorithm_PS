#include <iostream>

using namespace std;
long long gcd(long long a, long long b) {
	if (b == 0) return a;
	gcd(b, a%b);
}
int main() {
	int testCase = 0;
	long long bignum = 0, smallnum = 0;
	cin >> testCase;
	while (testCase--) {
		int numcnt = 0;
		cin >> numcnt;
		long long testnum[100] = { 0, };
		long long totalsum = 0;
		for (int i = 0; i < numcnt; i++) {
			cin >> testnum[i];
		}
		for (int i = 0; i < numcnt - 1; i++) {
			for (int j = i + 1; j < numcnt; j++) {
				bignum = (testnum[i] > testnum[j]) ? testnum[i] : testnum[j];
				smallnum = (testnum[i] > testnum[j]) ? testnum[j] : testnum[i];
				totalsum += gcd(bignum, smallnum);
			}
		}

		cout << totalsum << endl;
	}

	return 0;
}