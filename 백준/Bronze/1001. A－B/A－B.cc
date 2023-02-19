#include <iostream>

using namespace std;


int main() {
	int num1 = 0 , num2 = 0;
	int sum = 0;
	cin >> num1;
	cin >> num2;

	if ((num1 > 0) && (num2 < 10)) {
		sum = num1 - num2;
	}
	cout << sum << endl;
	return 0;
}