#include <iostream>
using namespace std;
struct square {
	int x1;
	int y1;
	int x2;
	int y2;
};
square s[4];
int field[101][101], cnt;
int main() {
	ios::sync_with_stdio(false);
	for (int i = 0; i < 4; i++) {
		cin >> s[i].x1 >> s[i].y1 >> s[i].x2 >> s[i].y2;
		for (int j = s[i].y1; j < s[i].y2; j++) {
			for (int k = s[i].x1; k < s[i].x2; k++) {
				field[j][k] = 1;
			}
		}
	}

	for (int i = 0; i <= 100; i++) {
		for (int j = 0; j <= 100; j++) {
			if (field[i][j]) cnt++;
		}
	}
	cout << cnt << '\n';
	return 0;
}