#include <iostream>
using namespace std;

int main() {
	char str[101];
	cin.getline(str, 101);
	while (str[0] != NULL) {
		cout << str << endl;
		cin.getline(str, 101);
	}
	return 0;
}