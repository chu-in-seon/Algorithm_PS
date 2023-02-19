#include <iostream>
#include <vector>
using namespace std;
int main() {
	int testCase, tmp;
	vector<int> scores;
	cin >> testCase;
	while (testCase--) {
		int man_cnt, sum = 0, ave = 0, good = 0;
		cin >> man_cnt;
		scores.reserve(man_cnt);
		for (int i = 0; i < man_cnt; i++) {
			cin >> tmp;
			scores.push_back(tmp);
			sum += tmp;
		}
		ave = (double)sum / man_cnt;
		for (int i = 0; i < man_cnt; i++) {
			if (scores.at(i) > ave) good++;
		}
		double point = ((double)good / (double)man_cnt) * 100;
		printf("%.3f%%\n", point);
		scores.clear();
	}
	return 0;
}