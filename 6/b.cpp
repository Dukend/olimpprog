#include <bits/stdc++.h>
using namespace std;
const long long mod = 1000000007;

long long gh(long long l, long long r)
{
	vector<long long> dp(r + 1);
	dp[1] = 1;

	for (int i = 1; i < r; i++)
	{
		for (int j = 2; j * i <= r; j++)
		{
			dp[i * j] += dp[i];
			dp[i] %= mod;
		}
	}
	long long result = 0;
	for (long long i = l; i <= r; ++i)
	{
		result += dp[i];
		result %= mod;
	}
	return result;
}

int main()
{

	long long n, k;
	cin >> n >> k;
	cout << gh(n, k);

	return 0;
}