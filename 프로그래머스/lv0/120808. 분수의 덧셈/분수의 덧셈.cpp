#include <vector>
#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while(0 != b) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

vector<int> solution(int denum1, int num1, int denum2, int num2) {   
    pair<int, int> fraction1(make_pair(denum1, num1)), fraction2(make_pair(denum2, num2));
    fraction1.first *= num2; fraction1.second *= num2;
    fraction2.first *= num1; fraction2.second *= num1;
    
    int denum = fraction1.first + fraction2.first;
    int num = fraction1.second;
    int gcdVal = gcd(denum, num);
    if (1 != gcdVal) {
        denum /= gcdVal;  
        num /= gcdVal;
    }
    vector<int> answer{denum, num};
    return answer;
}