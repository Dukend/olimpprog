#include <bits/stdc++.h>
using namespace std;

int main()
{

	long long n, m, k;
	cin >> n >> m >> k;

	vector<vector<long long>> dp(n + 1, vector<long long>(m + 1));
	long long x, y;
	for (int i = 0; i < k; i++)
	{
		cin >> x >> y;
		dp[x][y] = -1;
	}

	for (int i = 0; i <= n; i++)
	{
		if (dp[i][0] != -1)
		{
			dp[i][0] = 1;
		}
		else
		{
			break;
		}
	}
	for (int j = 0; j <= m; j++)
	{
		if (dp[0][j] != -1)
		{
			dp[0][j] = 1;
		}
		else
		{
			break;
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (dp[i][j] == -1)
			{
				continue;
			}
			if (dp[i - 1][j] == -1 && dp[i][j - 1] == -1)
			{
				continue;
			}
			if (dp[i - 1][j] == -1)
			{
				dp[i][j] = dp[i][j - 1];
				dp[i][j] %= 1000000007;
				continue;
			}
			if (dp[i][j - 1] == -1)
			{
				dp[i][j] = dp[i - 1][j];
				dp[i][j] %= 1000000007;
				continue;
			}
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
			dp[i][j] %= 1000000007;
		}
	}
	if (dp[n][m] == -1 || dp[0][0] == -1)
	{
		cout << 0;
	}
	else
	{
		cout << dp[n][m] % 1000000007;
	}

	return 0;
}