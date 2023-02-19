#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	char str[1001][1001] = { 0, };
	cin.getline(str[0], 1001);
	string strarr[1001] = { "", };
	strarr[0] = str[0];
	for (int i = 1; str[0][i] != NULL; i++) {
		int cnt = 0;
		for (int j = i; str[0][j] != NULL; j++) {
			str[i][cnt] = str[0][j];
			cnt++;
		}
		strarr[i] = str[i];
	}
	int length = strarr[0].length();
	sort(strarr, strarr + length);
	for (int i = 0; i < length; i++) {
		cout << strarr[i] << '\n';
	}
	return 0;
}