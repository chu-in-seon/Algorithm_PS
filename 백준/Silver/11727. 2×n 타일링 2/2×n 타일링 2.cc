#include <iostream>
using namespace std;
int arr[1001] = { 0, 1, 3, };
int main() {
	int inp;
	for (int i = 3; i <= 1000; i++)
		arr[i] = (arr[i - 2] * 2 + arr[i - 1]) % 10007;
	cin >> inp;
	cout << arr[inp] << endl;
	return 0;
}