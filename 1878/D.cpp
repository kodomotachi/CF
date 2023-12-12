#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n, k;
	string s;
	cin >> n >> k >> s;
	int l[k], r[k];
	for (int &x : l)
		cin >> x;
	for (int &x : r)
		cin >> x;
	
	map<int, int> cnt;
	for (int i = 0; i < k; i++)
		for (int j = l[i]; j <= r[i]; j++)
			cnt[j] = l[i] + r[i] - j;

	vector<int> h(n + 1, 0);

	int q;
	cin >> q;
	int query[q];
	for (int &x : query)
		cin >> x, h[x]++, h[cnt[x]]++;

	for (int i = 0; i < k; i++)
	{
		int tmp = 0;
		for (int j = l[i]; j <= (l[i] + r[i]) / 2; j++)
		{
			tmp += h[j];
			if (tmp % 2)
				swap(s[j - 1], s[cnt[j] - 1]);
		}
	}

	cout << s << "\n";
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