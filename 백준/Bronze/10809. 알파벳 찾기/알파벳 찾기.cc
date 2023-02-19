#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main() {
	char str[101] = { 0, };
	cin.getline(str, 101);
	
	for (char a = 'a'; a != '{'; a++) {
		int cnt = 0;
		int start = -1;
		for (int i = 0; i < 100; i++) {
			if (a == str[i] && start == -1) {
				start = i;
				break;
			}
			else if (str[i] == NULL) break;
		}
		cout << start << " ";
	}
	cout << endl;
	return 0;
}
