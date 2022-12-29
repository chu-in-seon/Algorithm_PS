#include <iostream>
#include <fstream>
#include <string>
using namespace std;
ifstream inp("spreadsheet.inp");
ofstream out("spreadsheet.out");
int main() {
	int Test_Case = 0, last_position = 0;
	inp >> Test_Case;
	while (Test_Case--) {
		string inp_str;
		last_position = 0;
		bool isnum = false;
		inp >> inp_str;
		for (int i = 0; i < inp_str.length(); i++) {
			if (inp_str[i] > 'A' && inp_str[i] <= 'Z')
				last_position = i;
		}
		for (int i = 0; i <= last_position; i++) {
			if (inp_str[i] < 'A' || inp_str[i] > 'Z') {
				isnum = true;
			}
		}
		if (!isnum) { // BC23->RXCY
			int col = 0, row = 0, i;
			string result = "R";
			for (i = 0; inp_str[i] >= 'A' && inp_str[i] <= 'Z'; i++) {
				col = col * 26 + inp_str[i] - 'A' + 1;
			}
			result += inp_str.substr(i);
			result += "C";
			string t_col, begin = "0";
			while (col) {
				string tmp = begin;
				int num = col % 10;
				tmp[0] = begin[0] + num;
				t_col = tmp + t_col;
				col /= 10;
			}
			result += t_col;
			int sum = 0;
			for (int i = 0; i < 3000 * 5; i++) {
				for (int j = 0; j < 3000 * 5; j++) {
					sum += i + j;
				}
			}
			out << result << "\n";
		}
		else { //RXCY->BC23
			string row = "\0", result = "\0";
			int col = 0;
			int i = 0;
			for (i = 1; inp_str[i] != 'C'; i++) {
				row += inp_str[i];
			}
			for (i += 1; i < inp_str.length(); i++) {
				col = col * 10 + inp_str[i] - '0';
			}
			string t_col, begin = "A";
			while (col) {
				string tmp = begin;
				int num = col % 26;
				if (num == 0) num = 26;
				tmp[0] = begin[0] - 1 + num;
				t_col = tmp + t_col;
				col = (col - 1) / 26;
			}
			result = t_col + row;
			int sum = 0;
			for (int i = 0; i < 3000 * 5; i++) {
				for (int j = 0; j < 3000 * 5; j++) {
					sum += i + j;
				}
			}
			out << result << "\n";

		}
	}
	return 0;
}