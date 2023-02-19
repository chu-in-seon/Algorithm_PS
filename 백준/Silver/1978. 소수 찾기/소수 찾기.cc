#include <iostream>
using namespace std;

int main() {
	int cnt = 0;
	cin >> cnt;
	int number[1000] = { 0, };
	int primenumbercnt = 0;
	for (int i = 0; i < cnt; i++) {
		cin >> number[i];
		int tmpcnt = 0;
		if (number[i] == 1 || number[i] == 0) continue;
		else {
			for (int j = number[i]; j > 1; j--) {
				if (number[i] % j == 0) tmpcnt++;
			}
			if (tmpcnt == 1) primenumbercnt++;
		}
	}
	
	cout << primenumbercnt;

	return 0;
}