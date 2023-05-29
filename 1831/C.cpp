#include <bits/stdc++.h>
using namespace std;

map<pair<int, int>, int> cnt;

int check(vector<vector<int>> &graph, int u, int v)
{
	int ans = 0;
	for (int i = 0; i < graph[v].size(); i++)
	{
		int x = 0;
		if(graph[v][i] == u)
			continue;
		if (cnt[{u, v}] > cnt[{v, graph[v][i]}])
			x++;
		ans = max(ans, x + check(graph, v, graph[v][i]));
	}
	return ans;
}

void solve()
{
	int n;
	cin >> n;
	vector<vector<int>> graph(n + 1);
	for (int i = 0, x, y; i < n - 1; i++)
	{
		cin >> x >> y;
		cnt[{x, y}] = i, cnt[{y, x}] = i;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}
	int ans = -INT_MAX;
	for (int x : graph[1])
		ans = max(ans, check(graph, 1, x));
	cout << ans + 1 << "\n";
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