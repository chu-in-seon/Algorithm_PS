#include <iostream>
#include <string.h>
#include <algorithm>
#include <queue>

using namespace std;

vector<int> v[1001];
queue<int> q;
bool isVisit[1001];

void dfs(int start) {
    isVisit[start] = true;
    cout << start << " ";
    for(int i = 0; i < v[start].size(); i++) {
        if(!isVisit[v[start][i]])
            dfs(v[start][i]);
    }
}

int main() {
    int N, M, V, s, d;
    cin >> N >> M >> V;
    for(int i = 0; i < M; i++) {
        cin >> s >> d;
        v[s].push_back(d);
        v[d].push_back(s);
    }
    for(int i = 0; i <= N; i++) {
        sort(v[i].begin(), v[i].end());
    }
    ///DFS
    dfs(V);
    cout << "\n";
    memset(isVisit, false, sizeof(isVisit));

    ///BFS
    q.push(V);
    isVisit[V] = true;
    cout << V << " ";

    while(!q.empty()) {
        int cur_pos = q.front();
        q.pop();
        //isVisit[cur_pos] = true;
        for(int i = 0; i < v[cur_pos].size(); i++) {
            int ter = v[cur_pos][i];
            if(!isVisit[ter]) {
                q.push(ter);
                isVisit[ter] = true;
                cout << ter << " ";
            }
        }
    }
    cout << "\n";
    return 0;
}
