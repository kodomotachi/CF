#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	int a[n], b[n];
	for (int &x : a)
		cin >> x;
	for (int &x : b)
		cin >> x;
	map<int, int> cnt_a, cnt_b;
	cnt_a[a[0]] = 1;
	cnt_b[b[0]] = 1;
	int cnt = 1;
	for (int i = 1; i < n; i++)
	{
		if (a[i] == a[i - 1])
			++cnt;
		else
			cnt = 1;
		cnt_a[a[i]] = max(cnt, cnt_a[a[i]]);
	}
	cnt = 1;
	for (int i = 1; i < n; i++)
	{
		if (b[i] == b[i - 1])
			cnt++;
		else
			cnt = 1;
		cnt_b[b[i]] = max(cnt, cnt_b[b[i]]);
	}
	int res = 0;
	for (int x : a)
		res = max(res, cnt_a[x] + cnt_b[x]);
	for (int x : b)
		res = max(res, cnt_a[x] + cnt_b[x]);
	cout << res << "\n";
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