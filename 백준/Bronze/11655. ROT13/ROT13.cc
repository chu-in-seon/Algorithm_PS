#include <iostream>
using namespace std;

int main() {
	char str[101] = { 0, };
	cin.getline(str, 101);
	for (int i = 0; str[i] != NULL; i++) {
		if (str[i] >= 'n' && str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= 13;
		}
		else if (str[i] < 'n' && str[i] >= 'a' && str[i] <= 'z') {
			str[i] += 13;
		}
		if (str[i] >= 'N' && str[i] >= 'A' && str[i] <= 'Z') {
			str[i] -= 13;
		}
		else if (str[i] < 'N' && str[i] >= 'A' && str[i] <= 'Z') {
			str[i] += 13;
		}
	}

	cout << str << endl;
	return 0;
}