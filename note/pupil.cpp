#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n, m;
	cin >> n >> m;
	if (m == 1)
		return cout << "1\n", void();
	if (n % 3 == 2)
		return cout << n - 1 << "\n", void();
	cout << (n % 3 == 1 ? n / 3 + 1 : (n / 3) * 2) << "\n";
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