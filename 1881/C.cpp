#include <bits/stdc++.h>
using namespace std;

void rotateMatrix(std::vector<std::vector<char>>& matrix) {
    int n = matrix.size();

    // Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            std::swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Reverse each row
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            std::swap(matrix[i][j], matrix[i][n - j - 1]);
        }
    }
}

void solve()
{
	int n;
	cin >> n;
	vector<vector<char>> a(n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			char x;
			cin >> x;
			a[i].push_back(x);
		}
	vector<vector<char>> check(a);
	// rotateMatrix(check);
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n / 2; j++)
		{
			if (check[i][j] > check[i][n - j - 1])
				check[i][n - j - 1] = check[i][j];
			else
				check[i][j] = check[i][n - j - 1];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n / 2; j++)
		{
			if (check[j][i] > check[n - j - 1][i])
				check[n - j - 1][i] = check[j][i];
			else
				check[j][i] = check[n - j - 1][i];
		}
	}
	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cout << check[i][j] << " \n"[j == n - 1];
	cout << ans << "\n";
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