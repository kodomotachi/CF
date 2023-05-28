#include <bits/stdc++.h>
using namespace std;
// WA on test 2
void solve()
{
	int n;
	cin >> n;
	int a[n];
	map<int, int> cnt;
	for (int i = 0; i < n; i++)
		cin >> a[i], cnt[abs((i + 1) - a[i])]++;
	int maxx = 0, pos = 0;
	for (int i = 1; i <= n; i++)
		if (maxx < cnt[i])
			maxx = cnt[i], pos = i;
	cout << pos << "\n";
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