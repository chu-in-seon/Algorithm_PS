#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;
vector<int> info[1001];
bool visit[1001];
queue<int> que;

void DFS(int s) {
	visit[s] = true;
	cout << s << " ";
	for (int i = 0; i < info[s].size(); i++) {
		if (!visit[info[s][i]])
			DFS(info[s][i]);
	}
}

int main() {
	int n, m, v, a, b;
	cin >> n >> m >> v;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		info[a].push_back(b);
		info[b].push_back(a);
	}
	for (int i = 0; i <= n; i++) {
		sort(info[i].begin(), info[i].end());
	}
	//DFS
	DFS(v);
	cout << "\n";
	//BFS
	memset(visit, false, sizeof(visit));
	visit[v] = true;
	que.push(v);
	cout << v << " ";
	while (!que.empty()) {
		int cur = que.front();
		que.pop();
		for (int i = 0; i < info[cur].size(); i++) {
			int des = info[cur][i];
			if (!visit[des]) {
				que.push(des);
				visit[des] = true;
				cout << des << " ";
			}
		}
	}
	cout << "\n";
	return 0;
}