#include <iostream>
#include <fstream>
#include <string.h>
#define MAX 20161213
using namespace std;
int calender[MAX];
int main() {
	ifstream inp("timeline.inp");
	ofstream out("timeline.out");
	int Test_Case = 0, rep = 0;
	int a = 0, b = 0, c = 0, start = 0, end = 0, line = 0, max = 0;
	char t = '\0';
	inp >> Test_Case;
	while (Test_Case--) {
		memset(calender, 0, sizeof(calender));
		line = 0; 
		max = 0;
		inp >> rep;
		for (int i = 0; i < rep; i++) {
			start = 0; end = 0;
			inp >> a >> t >> b >> t >> c;
			start = (a * 10000) + (b * 100) + c;
			inp >> a >> t >> b >> t >> c;
			end = (a * 10000) + (b * 100) + c;
			calender[start]++;
			calender[end]--;
		}
		for (int i = 0; i < MAX; i++) {
			line += calender[i];
			if (line > max) {
				max = line;
			}
		}
		out << max << '\n';
	}
	inp.close();
	out.close();
	return 0;
}