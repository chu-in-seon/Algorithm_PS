#include <iostream>
#include <queue>
using namespace std;
typedef struct info {
    int floor;
    int cnt;
	info() {}
	info(int floor, int cnt) : floor(floor), cnt(cnt) {}
}info;
vector<bool> visit;
queue<info> q;
int main() {
    int F = 0, S = 0, G = 0, U = 0, D = 0, btn_cnt = 0, cur = 0;
    cin >> F >> S >> G >> U >> D; // F = 전체 층, S = 현재위치, G = 목표, U = 올라가는 층수, D = 내려가는 층수
    visit.resize(F+1);
    q.push(info(S, 0));
    while(!q.empty()) {
		info temp = q.front();
        cur = temp.floor;
        btn_cnt = temp.cnt;
        q.pop();
        if(!visit[cur]) {
            visit[cur] = true;
            if(cur == G) break;
            if(cur + U <= F)	q.push(info(cur + U, btn_cnt + 1));
            if(cur - D > 0)		q.push(info(cur - D, btn_cnt + 1));
        }
    }
    if (visit[G]) cout << btn_cnt;
    else cout << "use the stairs";
    return 0;
}
