#include <bits/stdc++.h>
#define ll int
#define vec vector<int>
#define fori(k, n) for (ll i(k); i < n; ++i)
#define forj(k, n) for (ll j(k); j < n; ++j)
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	vec a(n);
	fori(0, n) cin >> a[i];
	ll mw = 0, m = 0;
	fori(0, n)
	{
		if (a[i] > m)
			m = a[i];
		mw += a[i];
	}
	vector<vector<ll>> dp(n, vector<ll>(mw + m + 1, n + 1));
	fori(0, n) forj(i, n) dp[j][a[i]] = 1;
	fori(1, n)
	{
		for (ll w = 0; w < mw; w++)
		{
			ll v = min(dp[i][w], dp[i - 1][w]);
			ll b = dp[i - 1][abs(w + a[i])];
			ll c = dp[i - 1][abs(w - a[i])];
			ll d = min(b, c) + 1;
			dp[i][w] = min(d, v);
		}
	}
	if (dp[n - 1][0] == n + 1)
		printf("-1");
	else
		printf("%d", dp[n - 1][0]);
}