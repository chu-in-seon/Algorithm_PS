#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main() {
	char str[101] = { 0, };
	cin.getline(str, 101);
	
	for (char a = 'a'; a != '{'; a++) {
		int cnt = 0;
		for (int i = 0; i < 100; i++) {
			if (a == str[i]) cnt++;
		}
		cout << cnt << " ";
	}
	cout << endl;
	return 0;
}
