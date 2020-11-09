#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	vector<vector<int>> dp(n, vector<int>(n));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cin >> dp[i][j];
		}
	}

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j != 0)
			{
				dp[i][j] += max(dp[i - 1][j], dp[i - 1][j - 1]);
			}
			else
			{
				if (j == 0)
				{
					dp[i][j] += dp[i - 1][j];
				}
			}
		}
	}

	int ans = dp[n - 1][0];
	for (int i = 1; i < n; i++)
	{
		ans = max(ans, dp[n - 1][i]);
	}
	cout << ans;
	return 0;
}