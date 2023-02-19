#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
	int Test_Case = 0;
	bool flag = true;
	string inp, tmp;
	vector<char> arr;
	getline(cin, tmp);
	Test_Case = atoi(tmp.c_str());
	for(int i = 0;i < Test_Case; i++) {
		getline(cin, inp);
		flag = true;
		for (int j = 0; j < inp.size(); j++) {
			if (inp.at(j) == '(')  {
				arr.push_back(inp.at(j));
			}
			else if (inp.at(j) == ')') {
				if (!arr.empty()) arr.pop_back();
				else {
					cout << "NO" << endl;
					flag = false;
					break;
				}
			}
		}
		if (arr.empty() && flag == true) cout << "YES" << endl;
		if(!arr.empty()) cout << "NO" << endl;
		arr.clear();
		inp = "";
	}
	return 0;
}