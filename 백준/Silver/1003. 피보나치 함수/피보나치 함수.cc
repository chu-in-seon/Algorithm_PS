#include <iostream>
#include <vector>
using namespace std;
int arr[2][41];
int main() {
	int Test_Case = 0, tmp;
	vector<int> inp;

	arr[0][0] = 1; arr[1][0] = 0; arr[0][1] = 0; arr[1][1] = 1;
	for (int i = 2; i < 41; i++) {
		arr[0][i] = arr[0][i - 2] + arr[0][i - 1];
		arr[1][i] = arr[1][i - 2] + arr[1][i - 1];
	}

	cin >> Test_Case;
	for (int i = 0; i < Test_Case; i++) {
		cin >> tmp;
		inp.push_back(tmp);
	}

	for (int i = 0; i < inp.size(); i++) 
		cout << arr[0][inp.at(i)] << " " << arr[1][inp.at(i)] << " " << endl;
	
	return 0;
}