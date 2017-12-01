#include <iostream>
#include <string.h>
using namespace std;
int map[102][102], N,
dx[4] = { -1, 1, 0, 0 }, dy[4] = { 0, 0, -1, 1 };
bool visit[102][102];
void dfs(int i, int j, int hei) {
	if (map[i][j] < hei || i < 0 || j < 0 || i >= N || j >= N) return;
	visit[i][j] = true;
	for (int k = 0; k < 4; k++) {
		int x = i + dx[k], y = j + dy[k];
		if (x >= 0 && y >= 0 && x < N && y < N && !visit[x][y]) dfs(x, y, hei);
	}
	return;
}
int main() {
	ios::sync_with_stdio(false);
	int min = 999, max = 0, res = 1;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
			if (map[i][j] < min) min = map[i][j];
			if (map[i][j] > max) max = map[i][j];
		}
	}
	for (int i = min; i <= max; i++) {
		int cnt = 0;
		memset(visit, false, sizeof(visit));
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				if (map[j][k] >= i && !visit[j][k]) {
					cnt++;
					dfs(j, k, i);

				}
			}
		}
		if (cnt > res) res = cnt;
	}
	cout << res << '\n';
	return 0;
}