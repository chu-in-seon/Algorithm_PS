#include <iostream>

using namespace std;

int main() {
	int num;

	cin >> num;

	for (int i = 0; i < num; i++) {
		for (int j = num -1; j >= 0; j--) {
			if (j <= i) {
				cout << "*";
			}
			else cout << " ";
		}
		cout << endl;
	}

	return 0;

}