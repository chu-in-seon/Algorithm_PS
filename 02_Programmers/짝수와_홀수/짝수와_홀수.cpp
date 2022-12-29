#include <string>
#include <vector>

#define ODD "Odd"
#define EVEN "Even"

using namespace std;

string solution(int num) {
    if (0 == num % 2) {
        return EVEN;
    }
    return ODD;
}
