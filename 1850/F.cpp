#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	int a[n];
	for (int &x : a)
		cin >> x;
	int cnt_1 = 0;
	map<int, int> cnt;
	map<int, int> check;
	for (int x : a)
		if (x <= n)
			cnt[x]++;
	for (int i = 1; i <= n; i++)
	{
		if (cnt[i] == 0)
			continue;
		for (int j = i; j <= n; j += i)
			check[j] += cnt[i];
	}
	int ans = 0;
	for (int i = 0; i <= n + 1; i++)
		ans = max(ans, check[i]);
	cout << ans << "\n";
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