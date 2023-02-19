#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main() {
	char str[101] = { 0, };
	cin.getline(str, 101);
	while (str[0] != NULL) {
		int cnt = 0;
		for (char a = 'a'; a != '{'; a++) {
			for (int i = 0; str[i] != NULL; i++) {
				if (a == str[i]) {
					cnt++;
				}
			}
		}
		cout << cnt << " ";
		cnt = 0;
		for (char a = 'A'; a != '['; a++) {
			for (int i = 0; str[i] != NULL; i++) {
				if (a == str[i]) {
					cnt++;
				}
			}
		}
		cout << cnt << " ";
		cnt = 0;
		for (char a = '0'; a != ':'; a++) {
			for (int i = 0; str[i] != NULL; i++) {
				if (a == str[i]) {
					cnt++;
				}
			}
		}
		cout << cnt << " ";
		cnt = 0;
		for (int i = 0; str[i] != NULL; i++) {
			if (str[i] == ' ') {
				cnt++;
			}
		}
		cout << cnt << endl;
		cnt = 0;
		cin.getline(str, 101);
	}
	return 0;
}
