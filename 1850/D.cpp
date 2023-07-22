#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n, k;
	cin >> n >> k;
	int a[n];
	bool check[n];
	for (int &x : a)
		cin >> x;
	sort(a, a + n);
	int ans = 1, tmp = 1;
	for (int i = 0; i < n - 1; i++)
	{
		if (abs(a[i] - a[i + 1]) <= k)
			tmp++;
		else
			tmp = 1;
		ans = max(tmp, ans);
	}
	cout << n - ans << "\n";
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