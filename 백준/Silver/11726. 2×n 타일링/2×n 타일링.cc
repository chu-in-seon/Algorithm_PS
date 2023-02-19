#define _CRT_SECURE_NO_WARNINGS
#define MAX 1001
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	int N = 0;
	cin >> N;
	int rectangle[MAX] = { 0, };

	rectangle[0] = 1; rectangle[1] = 1;
	
	for (int i = 2; i <= N; i++) {
		rectangle[i] = (rectangle[i - 1] + rectangle[i - 2]) % 10007;
	}

	cout << rectangle[N] << endl;
	return 0;
}