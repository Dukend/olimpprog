#include <bits/stdc++.h>
using namespace std;

int dp(int l, int r, vector<vector<int>> &memo, const vector<int> &rows, const vector<int> &cols)
{
	if (memo[l][r] != -1)
		return memo[l][r];
	if (l == r)
		return 0;

	int res = dp(l, l, memo, rows, cols) + dp(l + 1, r, memo, rows, cols) + rows[l] * cols[r] * cols[l];

	for (int k = l + 1; k < r; k++)
	{
		res = min(res, dp(l, k, memo, rows, cols) + dp(k + 1, r, memo, rows, cols) + rows[l] * cols[r] * cols[k]);
	}
	memo[l][r] = res;
	return res;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> rows(n);
	vector<int> cols(n);
	for (int i = 0; i < n; i++)
	{
		cin >> rows[i] >> cols[i];
	}

	vector<vector<int>> memo(n, vector<int>(n));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			memo[i][j] = -1;
		}
	}

	cout << dp(0, n - 1, memo, rows, cols);

	return 0;
}