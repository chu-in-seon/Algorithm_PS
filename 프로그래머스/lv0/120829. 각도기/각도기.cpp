#include <string>
#include <vector>

using namespace std;

int solution(int angle) {
    if (90 == angle) {
        return 2;
    }
    else if(180 == angle) {
        return 4;
    }
    else if (0 < angle && 90 > angle) {
        return 1;
    }
    else {
        return 3;
    }
}