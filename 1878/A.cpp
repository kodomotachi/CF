#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n, k;
	cin >> n >> k;
	int a[n];
	map<int, int> cnt;
	for (int &x : a)
		cin >> x, cnt[x]++;
	return cout << (cnt[k] ? "YES\n" : "NO\n"), void();
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