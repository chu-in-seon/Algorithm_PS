#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    uint64_t min = 0xffffffff;
    for (const int num : arr) {
        if (num < min) {
            min = num;
        }
    }
    vector<int>::iterator it = std::find(arr.begin(), arr.end(), min);
    arr.erase(it);
    if (0 == arr.size()) {
        arr.push_back(-1);
    }
    return arr;
}