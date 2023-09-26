#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
	int n;
	cin >> n;
	ll a[n];
	for (ll &x : a)
		cin >> x;
	int cnt = 0;
	for (int i = n - 1; i > 0; i--)
	{
		if (a[i - 1] < a[i])
		{
			a[i - 1] += a[i];
			a[i] = 0;
		}
	} 
	for (ll x : a)
		cnt += (x ? 1 : 0);
	cout << cnt << "\n";
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