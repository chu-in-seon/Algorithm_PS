#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
	int size, sum = 0, num;
	string input, tmp;
	scanf("%d", &size);
	cin >> input;
	for (int i = 0; i < size; i++) {
		tmp = input.substr(i, 1);
		num = stoi(tmp);
		sum += num;
	}
	cout << sum;
	return 0;
}