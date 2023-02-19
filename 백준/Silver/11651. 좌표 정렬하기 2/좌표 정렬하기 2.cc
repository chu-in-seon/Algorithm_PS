#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct _point {
	int x;
	int y;
	_point(int x, int y) {
		this->x = x;
		this->y = y;
	}
};
bool operator<(const _point &a, const _point &b) {
	if (a.y == b.y)
		return a.x < b.x;
	return a.y < b.y;
}
vector<_point> v;
int main() {
	ios::sync_with_stdio(false);
	int n, a = 0, b = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		v.push_back(_point(a, b));
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++) {
		cout << v[i].x << " " << v[i].y << "\n";
	}
	return 0;
}