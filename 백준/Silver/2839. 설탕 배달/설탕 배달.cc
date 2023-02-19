#include <iostream>
using namespace std;
int main() {
	int n, pack_5kg, pack_3kg;
	cin >> n;
	pack_5kg = n / 5;
	n %= 5;
	while (pack_5kg >= 0) {
		if (!(n % 3)) {
			pack_3kg = n / 3;
			n %= 3;
			break;
		}
		pack_5kg--;
		n += 5;
	}
	if (n == 0) {
		cout << pack_3kg + pack_5kg << endl;
	}
	else cout << -1 << endl;
	return 0;
}