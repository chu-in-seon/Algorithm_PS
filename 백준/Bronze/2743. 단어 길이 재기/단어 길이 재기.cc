#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main() {
	char str[101] = { 0, };
	cin.getline(str, 101);
	int cnt = 0;
	for (int i = 0; i < 100; i++) {
		if (str[i] == '\0') {
			break;
		}
		else cnt++;
	}
	cout << cnt << endl;
	return 0;
}
