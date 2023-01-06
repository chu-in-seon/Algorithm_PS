#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    double div = (static_cast<double>(num1) / static_cast<double>(num2));
    return static_cast<int>(div * 1000);
}