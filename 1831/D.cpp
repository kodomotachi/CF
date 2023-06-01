#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	int a[n], b[n];
	int ans = 0;
	for (int &x : a)
		cin >> x;
	for (int &x : b)
		cin >> x;
	for (int x : a)
		if ((double)x <= (double)sqrt(2 * n))
			ans++;
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