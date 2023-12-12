#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(0) -> sync_with_stdio(0);

	int n, m;
	cin >> n >> m;
	int a[n][m];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
			
	map<int, int> check;

	for (int j = 0; j < m; j++)
	{
		int tmp = INT_MAX;
		for (int i = 0; i < n; i++)
			tmp = min(tmp, a[i][j]);
		check[j] = tmp;
	}

	for (int i = 0; i < n; i++)
	{
		int maxx = *max_element(a[i], a[i] + m);
		for (int j = 0; j < m; j++)
			if (a[i][j] == maxx && a[i][j] == check[j])
				return cout << a[i][j], 0;
	}

	return 0;
}