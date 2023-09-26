#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int n;
	cin >> n;
	 ll a[n], b[n];
	 for (ll &x : a)
		cin >> x;
	for (ll &x : b)
		cin >> x;
	map<int, set<int>> cnt_a, cnt_b;
	for (int i = 0; i < n; i++)
	{
		cnt_a[a[i]].insert(b[i]);
		cnt_b[b[i]].insert(a[i]);
	}
	for (int i = 0; i < n; i++)
		if (cnt_a[a[i]].size() != 1 || cnt_b[b[i]].size() != 1)
			return cout << "NO", 0;
	int Cnt_a = n, Cnt_b = 1;
	map<int, int> ans_a, ans_b;
	map<int, bool> check_a, check_b;
	for (int i = 0; i < n; i++)
	{
		if (check_a[a[i]] == false && check_b[b[i]] == false)
			ans_a[a[i]] = Cnt_a--, ans_b[b[i]] = Cnt_b++, check_a[a[i]] = true, check_b[b[i]] = true;
	}
	for (int i = 1; i <= n; i++)
	{
		if (ans_a[i] == 0)
			ans_a[i] = Cnt_a--;
		if (ans_b[i] == 0)
			ans_b[i] = Cnt_b++;
	}
	if (n == 1)
		return cout << "YES\n1\n1", 0;
	cout << "YES\n";
	for (int i = 1; i <= n; i++)
		cout << ans_a[i] << " ";
	cout << "\n";
	for (int i = 1; i <= n; i++)
		cout << ans_b[i] << " ";
	return 0;
}