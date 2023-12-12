#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(0) -> sync_with_stdio(0);

	int a, b, c, d;
	cin >> a >> b >> c >> d;

	map<int, bool> check;

	for (int i = a; i < b; i++)
		check[i] = true;

	for (int i = c; i < d; i++)
		check[i] = true;

	int ans = 0;

	for (int i = 0; i <= 100; i++)
		ans += (check[i] == true ? 1 : 0);
	
	return cout << ans, 0;
}