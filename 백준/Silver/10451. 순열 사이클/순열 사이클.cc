#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
bool visit[1002];
vector<pair<int, int> > v;
int main() {
	ios::sync_with_stdio(false);
	int Test_Case = 0;
	cin >> Test_Case;
	while (Test_Case--) {
		int N = 0, num, cnt = 0;
		cin >> N;
		for (int i = 0; i < N; i++) {
			cin >> num;
			v.push_back(make_pair(i+1, num));
		}
		for (int i = 1; i <= N; i++) {
			int ter = v[i-1].second;
			visit[ter] = true;
			if (v[i - 1].first == ter) cnt++;
			while (!visit[v[i - 1].first]) {
				if (visit[v[ter - 1].second]) {
					visit[v[ter - 1].first] = true;
					cnt++;
					break;
				}
				else {
					visit[ter] = true;
					ter = v[ter - 1].second;
				}
			}
		}
		cout << cnt << "\n";
		cnt = 0;
		memset(visit, false, 1001);
		v.clear();
	}

	return 0;
}