#include <iostream>
#include <cmath>
using namespace std;
int diff[16] = { 0, };
double edgePoints[16] = { 0.0, };

int main(int argc, char** argv)
{
    diff[0] = 1;
    for (int i = 1; i < 16; i++) {
        diff[i] = diff[i-1] * 2;
    }
    
    edgePoints[0] = 2;
    for (int i = 1; i < 16; i++) {
        edgePoints[i] = edgePoints[i-1] + diff[i-1];
    }

    int TC = 0;
    cin >> TC;
    uint64_t result = static_cast<uint64_t>(pow(edgePoints[TC], 2));
    cout << result;

    return 0;
}
