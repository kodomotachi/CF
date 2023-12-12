#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 4;

vector<vector<int>> graph(MAXN);
int color[MAXN];
bool visited[MAXN];

void dfs(int x, int par)
{
	visited[x] = true;
	color[x] = color[par] + 1;
	for (int u : graph[x])
		if (!visited[u])
			dfs(u, x);
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);

	freopen("planting.in", "r", stdin);
	freopen("planting.out", "w", stdout);

	int n;
	cin >> n;

	for (int i = 0, x, y; i < n - 1; i++)
		cin >> x >> y, graph[x].push_back(y), graph[y].push_back(x);

	int pos = 0, maxx = 0;
	for (int i = 1; i <= n; i++)
		if (maxx < graph[i].size())
			maxx = graph[i].size(), pos = i;

	dfs(pos, 0);

	return cout << *max_element(color, color + MAXN), 0;
}