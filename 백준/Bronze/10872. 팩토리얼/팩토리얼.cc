#include <iostream>
using namespace std;
int factorial(int num) {
	if (num == 1) return 1;
	else return num * factorial(num - 1);
}
int main() {
	int num = 0;
	int result = 0;
	cin >> num;
	if(num != 0) result = factorial(num);
	else result = 1;
	cout << result <<endl;

	return 0;
}