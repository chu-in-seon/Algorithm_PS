#include <iostream>
#include <algorithm>
using namespace std;
const int dx[] = { 0,0,-1,1 };
const int dy[] = { -1,1,0,0 };
char map[25][25];
bool visit[25][25];
int N, k, cnt[625];
void dfs(int x, int y) {
	visit[x][y] = true;
	map[x][y] = k;
	cnt[k]++;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i], ny = y + dy[i];
		if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
		if (map[nx][ny] == '1') dfs(nx, ny);
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] == '1' && !visit[i][j]) {
				dfs(i, j);
				++k;
			}
		}
	}
	std::sort(cnt, cnt + k);
	cout << k << '\n';
	for (int i = 0; i < k; i++) cout << cnt[i] << '\n';
	return 0;
}