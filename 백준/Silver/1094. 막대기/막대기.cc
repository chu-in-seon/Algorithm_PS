#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int N = 0, res = 0, arr[8] = { 0, };
	cin >> N;
	for(int i = 0; i < 8; i++) {
		if (N % 2 == 1) res++;
		arr[i] = N % 2;
		N /= 2;
	}
	cout << res;
	return 0;
}