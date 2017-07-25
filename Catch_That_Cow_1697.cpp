#include <iostream>
#include <queue>
#define MAX 100005
using namespace std;
typedef struct info {
    int location;
    int cnt;
	info() {}
	info(int location, int cnt) : location(location), cnt(cnt) {}
}info;
bool visit[MAX];
queue<info> q;
int main() {
    int N, K, cur = 0, btn_cnt = 0; //수빈 위치 N, 동생 위치 K
    cin >> N >> K;
    q.push(info(N, 0));
    while(!q.empty()) {
		info temp = q.front();
        cur = temp.location;
        btn_cnt = temp.cnt;
        q.pop();
        if(!visit[cur]) {
            visit[cur] = true;
            if(cur == K) {
                cout << btn_cnt;
                return 0;
            }
            if(cur + 1 <= MAX)	q.push(info(cur + 1, btn_cnt + 1));
            if(cur - 1 >= 0)	q.push(info(cur - 1, btn_cnt + 1));
            if(cur * 2 <= MAX)	q.push(info(cur * 2, btn_cnt + 1));
        }
    }
    return 0;
}
