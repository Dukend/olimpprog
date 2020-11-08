#include <bits/stdc++.h>
using namespace std;

int main()
{

	long long n, m;
	cin >> n >> m;

	vector<vector<long long>> dp(n + 1, vector<long long>(m + 1));

	for (long long i = 0; i < n; i++)
	{
		for (long long j = 0; j < m; j++)
		{
			cin >> dp[i][j];
		}
	}

	for (long long i = 0; i <= n; i++)
	{
		for (long long j = 0; j <= m; j++)
		{
			if (i == 0 && j == 0)
				continue;
			if (i == 0)
			{
				dp[i][j] += dp[i][j - 1];
				dp[i][j] %= 1000000007;
				continue;
			}

			if (j == 0)
			{
				dp[i][j] += dp[i - 1][j];
				dp[i][j] %= 1000000007;
				continue;
			}

			dp[i][j] += max(dp[i - 1][j], dp[i][j - 1]);
			dp[i][j] %= 1000000007;
		}
	}
	cout << dp[n][m];
	return 0;
}