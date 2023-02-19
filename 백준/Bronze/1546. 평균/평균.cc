#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int testCase;
	double max = 0, sum = 0;
	double ave = 0.0;
	double scores[1000] = { 0, };
	cin >> testCase;
	for (int i = 0; i < testCase; i++) {
		cin >> scores[i];
		if (max < scores[i]) max = scores[i];
	}
	for (int i = 0; i < testCase; i++) {
		scores[i] = scores[i] / max * 100;
		sum += scores[i];
	}
	ave = sum / testCase;
	printf("%.2f", ave);

	return 0;
}