#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    while(0 != b) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int solution(vector<int> arr) {
    const size_t arrSize = arr.size();
    long long gcdVal = arr[0];
    long long lcmVal = arr[0];
    for (int i = 1; i < arrSize; i++) {
        gcdVal = gcd(lcmVal, arr[i]);
        lcmVal = lcmVal * arr[i] / gcdVal;
    }
    return lcmVal;
}