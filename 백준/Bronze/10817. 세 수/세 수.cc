#include <iostream>

using namespace std;

int main() {
	int num1, num2, num3;

	cin >> num1 >> num2 >> num3;

	if (num1 > num2) {
		if (num2 > num3 || num2 == num3) {
			cout << num2;
		}
		else if (num2 < num3) {
			if (num1 > num3) {
				cout << num3;
			}
			else if (num1 < num3 || num1 == num3) {
				cout << num1;
			}
		}
	}
	else if (num1 < num2) {
		if (num1 > num3 || num1 == num3) {
			cout << num1;
		}
		else if (num1 < num3) {
			if (num2 > num3 || num2 == num3) {
				cout << num3;
			}
			else if (num2 < num3) {
				cout << num2;
			}
		}
	}
	else if (num1 == num2) {
		cout << num1;
	}
	return 0;
}