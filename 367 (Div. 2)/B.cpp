#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for (int &x : a)
		cin >> x;
	sort(a.begin(), a.end());
	int q;
	cin >> q;
	while (q--)
	{
		int x;
		cin >> x;
		cout << upper_bound(a.begin(), a.end(), x) - a.begin() << "\n";
	}
	return 0;
}