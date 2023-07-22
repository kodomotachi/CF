#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long

void solve()
{
	ll n, c;
	cin >> n >> c;
	ll a[n];
	for (ll &x : a)
		cin >> x;
	ll sum_c = 0, sum_b = 0, sum_a = 0;
	for (ll x : a)
		sum_c += x * x, sum_b += x * 4, sum_a += 4;
	sum_c -= c;
	
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