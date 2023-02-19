#include <iostream>

using namespace std;

int main() {
	int T, a, b;
	cin >> T;
	int sum = 0;
	for (int i = 0; i < T; i++) {
		cin >> a >> b;
		sum = a + b;
		cout << sum << endl;
	}

	return 0;
}