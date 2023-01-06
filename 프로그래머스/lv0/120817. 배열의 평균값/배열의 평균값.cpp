#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    const size_t numbersSize = numbers.size();
    for (const int number : numbers) {
        answer += number;
    }
    return answer / static_cast<double>(numbersSize);
}