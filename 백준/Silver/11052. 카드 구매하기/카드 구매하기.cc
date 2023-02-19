#include <iostream>
#include <vector>

using namespace std;

int main() {
	int num, tmp, max = 0;
	vector<int> price, arr;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> tmp;
		price.push_back(tmp);
	}
	arr.push_back(0);
	for (int i = 0; i < num; i++) {
		arr.push_back(price.at(i));
	}

	for (int i = 2; i <= num; i++) {
		for (int j = i, k = 0; j >= 0, k <= i; j--, k++) {
			int temp = arr.at(k) + arr.at(j);
			if (max <= temp) max = temp;
		}
		arr.at(i) = max;
		max = 0;
	}
	cout << arr.at(arr.size() - 1) << endl;
	return 0;
}