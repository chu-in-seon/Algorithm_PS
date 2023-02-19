#include <iostream>

using namespace std;

int main() {
	int inp[8] = { 0, }, asc_cnt = 0, des_cnt = 0;
	int ascending[8], descending[8];
	for (int i = 0; i < 8; i++) { 
		cin >> inp[i];
		ascending[i] = i + 1; 
		descending[i] = 8 - i;
	}
	for (int i = 0; i < 8; i++) {
		if (inp[i] == ascending[i]) asc_cnt++;
		else if (inp[i] == descending[i]) des_cnt++;
	}
	
	if (asc_cnt == 8) cout << "ascending" << endl;
	else if(des_cnt == 8) cout << "descending" << endl;
	else cout << "mixed" << endl;

	return 0;
}