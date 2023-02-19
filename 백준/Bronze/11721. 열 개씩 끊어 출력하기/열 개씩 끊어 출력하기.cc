#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
	char str[101];
	scanf("%s", &str);
	for (int i = 0; i < 101; i++) {
		if (str[i] == '\0') break;
		if (i % 10 == 0 && i != 0) cout << endl;
		cout << str[i];
	}
	return 0;
}