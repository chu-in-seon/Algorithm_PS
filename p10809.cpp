#include <iostream>
#include <string>
using namespace std;
int main() {
	string inp;	cin >> inp; int val = 0, al[26], visit[26];
	for (int i = 0; i < 26; i++) {
		al[i] = -1;
		visit[i] = false;
	}
	for (int i = 0; i < inp.length(); i++) {
		int idx = inp[i] - 'a';
		if (!visit[idx] && al[idx] == -1) {
			al[idx] = val;
			visit[idx] = true;
		}
		val++;
	}
	for (int i = 0; i < 26; i++) cout << (al[i] == -1 ? -1 : al[i]) << ' ';
}