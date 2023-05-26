#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int n;
	cin >> n;
	int a[n];
	for (int &x : a)
		cin >> x;
	int ans1 = INT_MAX, ans2 = INT_MAX, bit = 0;
	string s[n];
	for (int i = 0; i < n; i++)
		cin >> s[i];
	for (int i = 0; i < n; i++)
	{
		if (s[i] >= s[i + 1] && i < n - 1)
		{
			if (ans1 == INT_MAX)
				ans1 = 0;
			ans1 += a[i];
		}
		if (s[i] <= s[i - 1] && i > 0)
		{
			if (ans2 == INT_MAX)
				ans2 = 0;
			ans2 += a[i];
		}
	}
	cout << ans1 << " " << ans2;
	// return cout << min(ans1, ans2), 0;
}