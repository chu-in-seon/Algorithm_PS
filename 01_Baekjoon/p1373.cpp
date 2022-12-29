#include <iostream>
#include <math.h>
#include <string>
#include <vector>
using namespace std;
vector<int> res;
int main() {
    ios::sync_with_stdio(false);
    string inp;
    int cal = 0;
    cin >> inp;
    for(int i = inp.size() - 1; i >= 0; i--) {
        int idx = i + 1, num;
        num = inp[i] - '0';
        if (idx % 3 == 1) num *= 1;
        else if (idx % 3 == 2) num *= 2;
        else {
            num *= 4;
	    cal += num;
	    res.push_back(cal);
	    cal = 0;
	    continue;
        }
	cal += num;
	if(i == 0) {
	    res[res.size() - 1] += num;
	}

    }
    for(int i = res.size() - 1; i >= 0; i--) {
        cout << res[i];
    }
    return 0;

}
    
