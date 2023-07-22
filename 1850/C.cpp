#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	char a[8][8];
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			cin >> a[i][j];
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
			if (a[j][i] != '.')
				s.push_back(a[j][i]);
		if (s != "")
			return cout << s << "\n", void();
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