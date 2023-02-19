#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = N - 1; i >= 0; i--) {
		for (int j = N - 1; j >= 0; j--) {
			if (i >= j) cout << "*";
			else cout << " ";
		}
		for (int j = 0; j < N; j++) {
			if (i > j) cout << "*";
		}
		cout << endl;
	}
	return 0;
}