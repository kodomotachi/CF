#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long

void solve()
{
	ll n, k, x;
	cin >> n >> k >> x;
	if (x > (n * (n + 1)) / 2)
		return cout << "NO\n", void();
	if (x >= (k * (k + 1)) / 2 && x <= ((n * (n + 1)) / 2 - ((n - k + 1) * (n - k)) / 2))
		return cout << "YES\n", void();
	cout << "NO\n";
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