#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int roadMap[27][27] = {
    {
        0,
    },
};

int dfs(int i, int j)
{
    int retVal = 1;
    roadMap[i][j] = 0;
    if (1 == roadMap[i][j + 1]) {
        roadMap[i][j + 1] = 0;
        retVal += dfs(i, j + 1);
    }
    if (1 == roadMap[i + 1][j]) {
        roadMap[i + 1][j] = 0;
        retVal += dfs(i + 1, j);
    }
    if (1 == roadMap[i][j - 1]) {
        roadMap[i][j - 1] = 0;
        retVal += dfs(i, j - 1);
    }
    if (1 == roadMap[i - 1][j]) {
        roadMap[i - 1][j] = 0;
        retVal += dfs(i - 1, j);
    }

    return retVal;
}

int main(int argc, char **argv)
{
    int len = 0;
    cin >> len;
    for (int i = 1; i <= len; i++) {
        string tmp;
        cin >> tmp;
        for (int j = 1; j <= len; j++) {
            roadMap[i][j] = tmp[j - 1] - '0';
        }
    }

    vector<int> blocks;
    for (int i = 1; i <= len; i++) {
        for (int j = 1; j <= len; j++) {
            if (0 == roadMap[i][j]) {
                continue;
            }
            int blockCount = dfs(i, j);
            if (0 != blockCount) {
                blocks.push_back(blockCount);
            }
        }
    }

    cout << blocks.size() << '\n';
    sort(blocks.begin(), blocks.end());
    for (const auto block : blocks) {
        cout << block << '\n';
    }
    return 0;
}
