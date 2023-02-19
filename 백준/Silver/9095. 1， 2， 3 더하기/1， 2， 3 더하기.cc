#include <iostream>
#include <vector>

using namespace std;

int arr[2][12];

int main() {
	int Test_Case, num;
	vector<int> num_arr;
	arr[0][0] = 0; arr[0][1] = 1; arr[0][2] = 2; arr[0][3] = 4;
	arr[1][0] = 0; arr[1][1] = 1; arr[1][2] = 2; arr[1][3] = 3;
	for (int i = 4; i < 12; i++) {
		arr[0][i] = arr[0][i - 1] + arr[1][i - 1];
		arr[1][i] = arr[1][i - 3] + arr[1][i - 2] + arr[1][i - 1];
	}
	cin >> Test_Case;
	for (int i = 0; i < Test_Case; i++) {
		cin >> num;
		num_arr.push_back(num);
	}

	for (int i = 0; i < Test_Case; i++) {
		cout << arr[0][num_arr.at(i)] << endl;
	}
	return 0;
}