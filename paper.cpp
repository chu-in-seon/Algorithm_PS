#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
ifstream inp("paper.inp");
ofstream out("paper.out");
struct info {
	long long x;
	long long y;
	long long xp;
	long long yp;
	info(long long x, long long y, long long xp, long long yp) {
		this->x = x;
		this->y = y;
		this->xp = xp;
		this->yp = yp;
	}
};
bool operator<(info &a, info &b) {
	if (a.x == b.x) {
		if (a.y == b.y) {
			if (a.xp == b.xp)
				return a.yp < b.yp;
			return a.xp < b.xp;
		}
		return a.y < b.y;
	}
	return a.x < b.x;
}
long long table[10005][10005];
vector<info> v;
vector<info> inform;
vector<long long> xs, ys;
int main() {
	int Case = 0, papers = 0, x_p = 0, y_p = 0, a = 0, b = 0, arrsize = 0;
	long long tx = 0, ty = 0, tw = 0, th = 0, m_x = 0, m_y = 0;
	long long flag = 1, answer1 = 0, answer2 = 0, answer3 = 0;
	inp >> Case;
	papers = Case;
	while (Case--) {
		inp >> tx >> ty >> tw >> th;
		v.push_back(info(tx, ty, tx + tw, ty + th));
	}
	inform = v;
	arrsize = v.size();
	for (int i = 0; i < arrsize; i++) {
		xs.push_back(v[i].x);
		xs.push_back(v[i].xp);
		ys.push_back(v[i].y);
		ys.push_back(v[i].yp);
	}
	sort(xs.begin(), xs.end());
	sort(ys.begin(), ys.end());
	xs.resize(unique(xs.begin(), xs.begin() + xs.size()) - xs.begin());
	ys.resize(unique(ys.begin(), ys.begin() + ys.size()) - ys.begin());
	for (int i = 0; i < arrsize; i++) {
		int sy = lower_bound(ys.begin(), ys.end(), v[i].y) - ys.begin() + 1;
		int sx = lower_bound(xs.begin(), xs.end(), v[i].x) - xs.begin() + 1;
		int syp = lower_bound(ys.begin(), ys.end(), v[i].yp) - ys.begin() + 1;
		int sxp = lower_bound(xs.begin(), xs.end(), v[i].xp) - xs.begin() + 1;
		inform[i].y = sy;
		inform[i].x = sx;
		inform[i].xp = sxp;
		inform[i].yp = syp;
	}
	for (int n = 0; n < arrsize; n++) {
		for (int i = inform[n].x; i < inform[n].xp; i++) {
			for (int j = inform[n].y; j < inform[n].yp; j++) {
				table[i][j] = n + 1;
			}
		}
	}
	for (int n = 0; n < arrsize; n++) {
		int cnt = 0, size = 0;
		for (int i = inform[n].x; i < inform[n].xp; i++) {
			for (int j = inform[n].y; j < inform[n].yp; j++) {
				if (table[i][j] == n + 1)
					cnt++;
			}
		}
		size = (inform[n].xp - inform[n].x) * (inform[n].yp - inform[n].y);
		if (cnt == size) { //good
			answer3++;
		}
		else if (cnt == 0) { //bad
			answer1++;
		}
		else if (cnt < size && cnt > 0) { //so so
			answer2++;
		}
	}
	out << answer1 << " " << answer2 << " " << answer3 << "\n";
	inp.close();
	out.close();
	return 0;
}