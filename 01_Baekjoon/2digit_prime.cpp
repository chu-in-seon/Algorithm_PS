#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>
#include <fstream>
using namespace std;
ifstream inp("2digit_prime.inp");
ofstream out("2digit_prime.out");
int Test_case;
char str[7];
int main() {
	inp >> Test_case;
	while (Test_case--) {
		int a = 0, b = 0, cnt = 0;
		inp >> a >> b;
		for (int i = a; i <= b; i++) {
			bool flag = false;
			sprintf(str, "%d",i);
			int len = (int)log10((double)i) + 1;
			for (int j = 0; j < len; j++) {
				for (int k = 0; k < len; k++) {
					if (j != k && str[j] != '0') {
						int number = (str[j] - 48) * 10 + (str[k] - 48);
						if (number % 2 != 0 && number % 3 != 0 && number % 5 != 0 && number % 7 != 0) {
							cnt++;
							flag = true;
							break;
						}
					}
				}
				if (flag) break;
			}
		}
		out << cnt << "\n";
	}
	inp.close();
	out.close();
	return 0;
}