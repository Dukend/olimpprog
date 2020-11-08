#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<vector<long long>> dp(101, vector<long long>(1001, 0));
	for (int j = 0; j <= 9; j++)
		dp[1][j] = 1;

	for (int i = 2; i < 101; i++)
	{
		for (int j = 0; j < 1001; j++)
		{
			for (int k = 0; k <= min(j, 9); k++)
			{
				dp[i][j] += dp[i - 1][j - k];
				dp[i][j] %= 1000000007;
			}
		}
	}
	long long n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		long long x, y;
		cin >> x >> y;
		cout << dp[x][y] << endl;
	}
	return 0;
}