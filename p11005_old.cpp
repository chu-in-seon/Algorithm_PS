#include <iostream>
#include <stack>
using namespace std;
stack<long> s;
void recur(long n, long b) {
    if(n < b) {
	s.push(n);
	return;
    }
    long mot = n / b, tra = n % b;
    s.push(tra);
    if(mot == 1) {
        s.push(mot);
        return;
    }
    else 
        return recur(n / b, b);
}

int main() {
    ios::sync_with_stdio(false);
    long N, B, size = 0;
    char A = 'A';
    cin >> N >> B;
    recur(N, B);
    size = s.size();
    for(int i = 0; i < size; i++) {
        long num = s.top();
        s.pop();
        if(num > 9) cout << char(A + num - 10);
        else cout << num;
    }
    return 0;
}
