#define _CRT_SECURE_NO_WARNINGS
#define MAX 101
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	int T = 0;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int N = 0;
		cin >> N;
		long long tri[MAX] = { 0, };
		tri[0] = 1; tri[1] = 1; tri[2] = 1; tri[3] = 2; tri[4] = 2;
		for (int j = 5; j <= N; j++) {
			tri[j] = (tri[j - 1] + tri[j - 5]);
		}
		cout << tri[N - 1] << endl;
	}
	return 0;
}