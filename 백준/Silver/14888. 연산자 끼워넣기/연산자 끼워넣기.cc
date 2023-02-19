#include <iostream>
#include <algorithm>
using namespace std;
int numbers[12];
int cnt = 0, gPlus = 0, gMinus = 0, gMul = 0, gDiv = 0;
int gMax = -0x7fffffff, gMin = 0x7fffffff;
void dfs(int num, int plus, int minus, int mul, int div, int result)
{
	if ( num == cnt )
	{
		gMin = min(gMin, result);
		gMax = max(gMax, result);
		return;
	}
	if ( plus < gPlus )
	{
		dfs(num + 1, plus + 1, minus, mul, div, result + numbers[num]);
	}
	if ( minus < gMinus )
	{
		dfs(num + 1, plus, minus + 1, mul, div, result - numbers[num]);
	}
	if ( mul < gMul )
	{
		dfs(num + 1, plus, minus, mul + 1, div, result * numbers[num]);
	}
	if ( div < gDiv )
	{
		dfs(num + 1, plus, minus, mul, div + 1, result / numbers[num]);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin >> cnt;
	for ( int i = 0; i < cnt; i++ )
	{
		cin >> numbers[i];
	}
	cin >> gPlus >> gMinus >> gMul >> gDiv;
	dfs(1, 0, 0, 0, 0, numbers[0]);
	cout << gMax << '\n' << gMin << '\n';
	return 0;
}