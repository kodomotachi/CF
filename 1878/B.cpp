#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n, 0);
	a[0] = 1;
	a[1] = 3;
	for (int i = 2; i < n; i++)
		a[i] = a[i - 1] + 2;
	for (int &x : a)
		cout << x << " ";
	cout << "\n";
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