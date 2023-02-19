#include <iostream>
#include <string.h>
using namespace std;
int island_map[51][51];
int dir[2][8] = {{0, 1, 1, 1, 0, -1, -1, -1},
                 {1, 1, 0, -1, -1, -1, 0, 1}};
int width, height;
bool isRight(int newX, int newY) {
    return ((newX > -1 && newX < height) && (newY > -1 && newY < width));
}
void dfs(int x, int y) {
    int newX = 0;
    int newY = 0;
    for(int i = 0; i < 8; i++) {
        newX = x + dir[0][i];
        newY = y + dir[1][i];
        if(isRight(newX, newY) && island_map[newX][newY] == 1) {
            island_map[newX][newY] = 0;
            dfs(newX, newY);
        }
    }
}

int main() {
    int island_cnt = 0;
    while(true) {
        cin >> width >> height;
        if(width == 0 && height == 0) return 0;
        for(int i = 0; i < height; i++) {
            for(int j = 0; j < width; j++) {
                cin >> island_map[i][j];
            }
        }
        for(int i = 0; i < height; i++) {
            for(int j = 0; j < width; j++) {
                if(island_map[i][j] == 1) {
                    island_map[i][j] = 0;
                    dfs(i, j);
                    island_cnt++;
                }
            }
        }
        cout << island_cnt << "\n";
        island_cnt = 0;
        memset(island_map, 0, sizeof(island_map[0]));
        memset(island_map, 0, sizeof(island_map[1]));
    }
    return 0;
}
