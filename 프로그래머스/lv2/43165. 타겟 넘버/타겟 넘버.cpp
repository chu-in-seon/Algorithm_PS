#include <vector>
using namespace std;

int dfs(vector<int> &numbers, int numbersSize, int target, int index, int sum) {
    int retVal = 0;
    if (index == numbersSize) {
        if (target == sum) {
            return 1;
        }
        return 0;
    }
    
    retVal += dfs(numbers, numbersSize, target, index + 1, sum + numbers[index]);
    retVal += dfs(numbers, numbersSize, target, index + 1, sum + (numbers[index] * -1));

    return retVal;
}

int solution(vector<int> numbers, int target) {
    int answer = 0;
    const size_t numbersSize = numbers.size();
    answer = dfs(numbers, numbersSize, target, 0, 0);
    return answer;
}