#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(0) -> sync_with_stdio(0);

	double a = 0.001;
	double b = 0.00001;

	if (abs(a - b) > 1e-6)
		return cout << "true", 0;
	else
		return cout << "false", 0;

	return 0;
}