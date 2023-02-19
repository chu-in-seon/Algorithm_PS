#include <iostream>

using namespace std;

int main() {
	int inp_num, orig, ten_digit, one_digit, sum_result, tmp_digit = 0, cnt = 0;
    cin >> inp_num;
    orig = inp_num;
    do {
        ten_digit = inp_num / 10;
        one_digit = inp_num % 10;
        if (inp_num < 10) { ten_digit = 0; }
        sum_result = tmp_digit = ten_digit + one_digit;
        if (sum_result >= 10) {
            tmp_digit = sum_result % 10;
        }
        one_digit *= 10;
        inp_num = one_digit + tmp_digit;
        cnt++;
    } while (orig != inp_num);
    cout << cnt << endl;
	return 0;
}