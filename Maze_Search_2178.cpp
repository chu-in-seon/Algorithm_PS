#include <iostream>
#include <queue>
using namespace std;
typedef struct loc {
    int x;
    int y;
    int cnt;
    loc() {}
    loc(int x, int y, int cnt) :x(x), y(y), cnt(cnt) {}
}loc;
char maze[101][101];
queue<loc> q;
int main() {
    loc cur_loc;
    int N, M, atoi_num = 0;
    char t;
    cin >> N >> M;
    for(int i = 0; i < N; i++)
      for(int j = 0; j < M; j++)  cin >> maze[i][j];
    q.push(loc(0, 0, 1));
    while(!q.empty()) {
        loc temp = q.front();
        q.pop();
        if(maze[temp.x][temp.y] =='0') continue;
        maze[temp.x][temp.y] = '0';
        if(temp.x == N - 1 && temp.y == M - 1) {
            cout << temp.cnt;
            return 0;
        }
        if(temp.y + 1 < M && maze[temp.x][temp.y + 1] == '1')   q.push(loc(temp.x, temp.y+1, temp.cnt+1));
        if(temp.y - 1 >= 0 && maze[temp.x][temp.y - 1] == '1')  q.push(loc(temp.x, temp.y-1, temp.cnt+1));
        if(temp.x + 1 < N && maze[temp.x + 1][temp.y] == '1')   q.push(loc(temp.x+1, temp.y, temp.cnt+1));
        if(temp.x - 1 >= 0 && maze[temp.x - 1][temp.y] == '1')  q.push(loc(temp.x-1, temp.y, temp.cnt+1));
    }
    return 0;
}
