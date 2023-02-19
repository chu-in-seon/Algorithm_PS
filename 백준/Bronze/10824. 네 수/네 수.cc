#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main() {
	unsigned long long num1, num2, num3, num4;
	cin >> num1 >> num2 >> num3 >> num4;
	string strnum1, strnum2, strnum3, strnum4;
	strnum1 = to_string(num1);
	strnum2 = to_string(num2);
	strnum3 = to_string(num3);
	strnum4 = to_string(num4);

	string ad1 = strnum1, ad2 = strnum3;
	ad1.append(strnum2);
	ad2.append(strnum4);

	unsigned long long real1 = stoll(ad1);
	unsigned long long real2 = stoll(ad2);

	cout << real1 + real2 << endl;

	return 0;
}