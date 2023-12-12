#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	int a[n];
	for (int &x : a)
		cin >> x;
	int ans[n + 1][32];
	memset(ans, 0, sizeof(ans));
	for (int i = 0; i < 32; i++)
		if (a[0] & (1 << i))
			ans[0][i] = 1;
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < 32; j++)
			if ((a[i] & (1 << j)))
				ans[i][j] = ans[i - 1][j] + 1;
			else
				ans[i][j] = ans[i - 1][j];
	}
	int q;
	cin >> q;
	while (q--)
	{
		int index, value;
		cin >> index >> value;
		index--;
		if (a[index] >= n)
		{
			int l = index, r = n - 1, check = 1;
			while (l <= r)
			{
				int mid = (l + r) / 2;
				int fine = 1, tmp  =0;
				for (int i = 0; i < 32; i++)
				{
					if (index == 0)
						if (ans[mid][i] >= mid + 1)
							tmp += p(2, j);
				}
			}
		}
		else
		{
			cout << "-1 ";
			continue
		}
	}
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