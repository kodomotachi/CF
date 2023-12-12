#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n, m;
	cin >> n >> m;
	string x, s;
	cin >> x >> s;
	for (int i = 0; i < 6; i++)
	{
		if (x.find(s) != -1)
			return cout << i << "\n", void();
		x += x;
	}
	cout << "-1\n";
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}