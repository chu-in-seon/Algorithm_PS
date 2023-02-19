#include <iostream>
using namespace std;
int main() {
    //ios::sync_with_stdio(false);
    int n = 0, t = 0, agree = 0, disagree = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> t;
        if(t) agree++;
        else disagree++;
    }
    if(agree >= disagree) cout << "Junhee is cute!\n";
    else cout << "Junhee is not cute!\n";
    return 0;
}      