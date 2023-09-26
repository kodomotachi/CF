#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 4;
int n;
int a[MAXN];

int TimMin(int *a, int n)
{
	if (n <= 0)
	{
		cerr << "Kich thuoc khong hop le\n";
		return 0;
	}

	int min_val = a[0];
	for (int i = 1; i < n; i++)
		if (a[i] < min_val)
			min_val = a[i];
	return min_val;
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	return cout << TimMin(a, n), 0;
}