#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int inputSize = static_cast<int>(arr.size());
    if ( 1 == inputSize )
    {
        answer.emplace_back(-1);
        return answer;
    }

    int max = 0x7fffffff;
    int minNumIndex = 0;
    for( int idx = 0; idx < inputSize; idx++ )
    {
        if( max > arr[idx] )
        {
            max = arr[idx];
            minNumIndex = idx;
        }
    }

    answer.reserve(inputSize - 1);
    for( int idx = 0; idx < inputSize; idx++ )
    {
        if( idx == minNumIndex )
        {
            continue;
        }
        answer.emplace_back(arr[idx]);
    }
    return answer;
}