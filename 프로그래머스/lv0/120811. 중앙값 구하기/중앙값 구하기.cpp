#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    const size_t arraySize = array.size();
    sort(array.begin(), array.end());
    
    int answer = array[arraySize / 2];
    return answer;
}