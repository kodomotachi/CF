#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	int a[n];
	for (int &x : a)
		cin >> x;
	int maxx = *max_element(a, a + n) + 1;
	for (int x : a)
		cout << abs(maxx - x) << " ";
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