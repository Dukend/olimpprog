#include <bits/stdc++.h>
#define ll int
#define vec vector<ll>
#define fori(k, n) for (ll i(k); i < n; ++i)
#define forj(k, n) for (ll j(k); j < n; ++j)
using namespace std;
ll MOD = 1000000007;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	vec dp(n + 2, 0);
	vector<vector<long long>> ndp(n + 1, vector<long long>(n + 2, 0));
	ndp[n][n + 1] = 1;
	for (ll i = n - 1;; i--)
	{
		for (ll j = 1; j <= n - i; j++)
		{
			if (i > 0)
			{
				ll tmp = (ndp[i + j][n + 1] - ndp[i + j][j]) % MOD;
				ndp[i][j] = ndp[i][j - 1] + tmp;
			}
			else
			{
				dp[j] = (ndp[i + j][n + 1] - ndp[i + j][j]) % MOD;
				ndp[i][j] = ndp[i][j - 1] + dp[j];
			}
		}
		forj(n - i + 1, n + 2) ndp[i][j] = ndp[i][j - 1];
		if (i == 0)
			break;
	}
	ll ans = 0;
	fori(0, n + 2) ans = (ans + dp[i]) % MOD;
	printf("%ld", ans);
}