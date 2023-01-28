#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

static map<char, std::vector<int> > numberSwitch{
    {'0', std::vector<int>{1, 1, 1, 0, 1, 1, 1}},
    {'1', std::vector<int>{0, 0, 1, 0, 0, 1, 0}},
    {'2', std::vector<int>{1, 0, 1, 1, 1, 0, 1}},
    {'3', std::vector<int>{1, 0, 1, 1, 0, 1, 1}},
    {'4', std::vector<int>{0, 1, 1, 1, 0, 1, 0}},
    {'5', std::vector<int>{1, 1, 0, 1, 0, 1, 1}},
    {'6', std::vector<int>{1, 1, 0, 1, 1, 1, 1}},
    {'7', std::vector<int>{1, 1, 1, 0, 0, 1, 0}},
    {'8', std::vector<int>{1, 1, 1, 1, 1, 1, 1}},
    {'9', std::vector<int>{1, 1, 1, 1, 0, 1, 1}},
    {' ', std::vector<int>{0, 0, 0, 0, 0, 0, 0}}};

int main() {
    int test_case = 0;
    cin >> test_case;
    for (int i = 0; i < test_case; i++) {
        string inp1, inp2;
        cin >> inp1 >> inp2;
        inp1.insert(inp1.begin(), 5-inp1.size(), ' ');
        inp2.insert(inp2.begin(), 5-inp2.size(), ' ');

        int answer = 0;
        for (int idx = 0; idx < 5; idx++) {
            for(int lightIdx = 0; lightIdx < 7; lightIdx++) {
                answer += (numberSwitch[inp1[idx]][lightIdx] != numberSwitch[inp2[idx]][lightIdx]) ? 1 : 0;
            }
        }
        cout << answer << endl;
    }
    return 0;
}
