#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	int a[n], b[n];
	int maxx_a = 0, maxx_b = 0, pos = -1;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i] >> b[i];
		if (a[i] <= 10)
			if (maxx_b < b[i])
				pos = i, maxx_b = b[i];
	}
	cout << pos + 1 << "\n";
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