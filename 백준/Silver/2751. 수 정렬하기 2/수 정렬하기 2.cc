#include <iostream>
#include <functional>
#include <queue>
using namespace std;
priority_queue<int, vector<int>, greater<int> > pq;
int main() {
    ios::sync_with_stdio(false);
    int n = 0, t = 0, pivot = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> t;
        pq.push(t);
    }
    while(!pq.empty()) {
        cout << pq.top() << "\n";
        pq.pop();
    }
    return 0;
}