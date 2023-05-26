#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	double a, b;
	cin >> a >> b;
	double minx = 10000000;
	int n;
	cin >> n;
	while (n--)
	{
		double x, y, v;
		cin >> x >> y >> v;
		minx = min(minx, (sqrt((a - x) * (a - x) + (b - y) * (b - y))) / v);
	}
	return cout << fixed << setprecision(6) << minx, 0;
}