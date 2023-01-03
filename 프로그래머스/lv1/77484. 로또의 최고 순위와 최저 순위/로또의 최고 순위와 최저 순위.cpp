#include <string>
#include <vector>
#include <algorithm>

#define MAX_NUM 6

using namespace std;

int orderHelper(int count) {
    int retVal = 6;
    switch (count)
    {
    case 2:
        retVal = 5;
        break;
    case 3:
        retVal = 4;
        break;
    case 4:
        retVal = 3;
        break;
    case 5:
        retVal = 2;  
        break;
    case 6:
        retVal = 1;
        break;
    default:
        break;
    }

    return retVal;
}

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    int min = 0, max = 0;
    for (int idx = 0; idx < MAX_NUM; idx++)
    {
        if (win_nums.end() != find(win_nums.begin(), win_nums.end(), lottos[idx]))
        {
            max++;
            min++;
            continue;
        }

        if (lottos[idx] == 0)
        {
            max++;
        }
    }

    vector<int> answer({orderHelper(max), orderHelper(min)});
    return answer;
}