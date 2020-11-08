#include <bits/stdc++.h>
using namespace std;
const long long mod = 1000000007;

long long gh(long long n, long long k, const vector<int> &dangers)
{
	vector<long long> dp(n + 1);
	dp[0] = 1;

	for (int i = 0; i < n; i++)
	{
		dp[i] %= mod;
		for (int j = 1; j <= k && j + i <= n; j++)
		{
			if (dangers[i + j] != -1 && dangers[i] != -1)
			{
				dp[i + j] += dp[i];
				dp[i + j] %= mod;
			}
		}
	}
	return dp[n];
}

int main()
{

	long long n, k, m;
	cin >> n >> k >> m;

	vector<int> da(n + 1);
	int t;
	for (int i = 0; i < m; i++)
	{
		cin >> t;
		da[t] = -1;
	}

	cout << gh(n, k, da);

	return 0;
}