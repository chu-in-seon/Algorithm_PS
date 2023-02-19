#include <iostream>

using namespace std;

int main() {
    int a, b;
    
    cin >> a >> b;
    int add = a + b;
    int sub = a - b;
    int mul = a * b;
    int div = a / b;
    int rest = a % b;
    
    cout << add << endl << sub << endl << mul << endl << div << endl << rest;
    return 0;
}