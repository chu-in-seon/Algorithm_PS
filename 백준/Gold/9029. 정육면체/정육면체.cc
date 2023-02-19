#include <iostream>
#include <algorithm>
#include <fstream>
#define INF 0xffffff
#define INDEX 201
using namespace std;
int cube[INDEX][INDEX][INDEX];
int TestCase, cnt = 0;
int W, L, H;
class Cube {
public:
	Cube() {
		for (int i = 1; i < INDEX; i++) {
			cube[i][i][i] = 1;
			cube[i][1][1] = i;
			cube[1][i][1] = i;
			cube[1][1][i] = i;
			if (i >= 2) {
				for (int j = 2; j < INDEX; j++) {
					cube[1][i][j] += cube[1][i][j - 1] + i;
					cube[i][1][j] += cube[i][1][j - 1] + i;
					cube[i][j][1] += cube[i][j - 1][1] + i;
				}
			}
		}
		for (int i = 2; i < INDEX; i++) {
			for (int j = i; j < INDEX; j++) {
				for (int k = j; k < INDEX; k++) {
					if (i == j && j == k) continue;
					int temp1 = INF, temp2 = INF, temp3 = INF;
					for (int m = 1; m <= i / 2; m++) {
						if (cube[m][j][k] + cube[i - m][j][k] < temp1)
							temp1 = cube[m][j][k] + cube[i - m][j][k];
					}
					for (int m = 1; m <= j / 2; m++) {
						if (cube[i][m][k] + cube[i][j - m][k] < temp2)
							temp2 = cube[i][m][k] + cube[i][j - m][k];
					}
					for (int m = 1; m <= k / 2; m++) {
						if (cube[i][j][m] + cube[i][j][k - m] < temp3)
							temp3 = cube[i][j][m] + cube[i][j][k - m];
					}
					cube[i][j][k] = ((temp1 < temp2) ? temp1 : temp2) < temp3 ? ((temp1 < temp2) ? temp1 : temp2) : temp3;
					cube[i][k][j] = cube[j][i][k] = cube[j][k][i] = cube[k][i][j] = cube[k][j][i] = cube[i][j][k];
				}
			}
		}
	}
};
int main() {
	cin >> TestCase;
	Cube();
	while (TestCase--) {
		cin >> W;
		cin >> L;
		cin >> H;
		cout << cube[W][L][H] << endl;
	}
	return 0;
}