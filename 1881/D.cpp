#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(0) -> sync_with_stdio(0);

	freopen("mowing.in", "r", stdin);
	freopen("mowing.out", "w", stdout);

	int ans = INT_MAX, x = 0, y = 0, timer = 0, n;

	cin >> n;

	map<pair<int, int>, int> cnt;

	for (int i = 0; i < n; i++)
	{
		int dx, dy, number_of_step;
		char s;

		cin >> s >> number_of_step;

		if (s == 'N')
			dx = 0, dy = 1;
		else if (s == 'S')
			dx = 0, dy = -1;
		else if (s == 'E')
			dx = 1, dy = 0;
		else if (s == 'W')
			dx = -1, dy = 0;

		for (int i = 0; i < number_of_step; i++)
		{
			timer++;
			x += dx;
			y += dy;
			if (cnt.count({x, y}))
				ans = min(ans, timer - cnt[{x, y}]);

			cnt[{x, y}] = timer;
		}
	}

	return cout << (ans == INT_MAX ? -1 : ans), 0;
}