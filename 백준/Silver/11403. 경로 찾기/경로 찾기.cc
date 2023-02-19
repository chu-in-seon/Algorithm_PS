#include <iostream>
#include <string.h>
#include <queue>
using namespace std;
int v[101][101];
queue<int> q;
bool visit[101];
int main() {
    int N, num, cur_node;
    bool first = false;
    cin >> N;
    memset(visit, false, sizeof(visit));
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> num;
            if(num == 1) {
                v[i][j] = 1;
            }
        }
    }
    for(int i = 0; i < N; i++) {
        q.push(i);
        first = false;
        while(!q.empty()) {
            cur_node = q.front();
            q.pop();
            if(visit[cur_node] == true) continue;
            if(first) visit[cur_node] = true;
            else first = true;
            for(int j = 0; j < N; j++) {
                if(v[cur_node][j] == 1) {
                    q.push(j);
                }
            }
        }
        for(int j = 0; j < N; j++) {
            cout << visit[j] << " ";
        }
        cout << "\n";
        memset(visit, false, sizeof(visit));
    }
    return 0;
}
