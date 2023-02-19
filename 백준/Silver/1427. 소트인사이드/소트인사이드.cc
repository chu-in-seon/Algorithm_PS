#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
	string inp, t_char;
	int temp = 0;
	vector<int> arr;
	getline(cin, inp);
	for (int i = 0; i < inp.size(); i++) {
		t_char = inp.at(i);
		temp = atoi(t_char.c_str());
		arr.push_back(temp);
	}
	sort(arr.begin(), arr.end(), greater<int>());
	for (int i = 0; i < arr.size(); i++) {
		cout << arr.at(i);
	}
	cout << endl;
	return 0;
}