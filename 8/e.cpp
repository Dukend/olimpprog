#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll n, m, i = 0, j = 0, ans = 0;
	cin >> n >> m;
	vector<vector<ll>> vec(n, vector<ll>(m));
	vector<vector<ll>> dp(n, vector<ll>(m, -1));
	for (ll i = 0; i < n; ++i)
		for (ll j = 0; j < m; ++j)
			cin >> vec[i][j];
	dp[0][0] = vec[0][0];
	while (true)
	{
		ll a = i, b = j;
		while (a < n && b >= 0)
		{
			ll v1 = 0, v2 = 0, v3 = 0, v4 = 0;
			bool sta = false;
			if (a - 2 >= 0 && b - 1 >= 0 && dp[a - 2][b - 1] != -1)
			{
				v1 = dp[a - 2][b - 1];
				sta = true;
			}
			if (a - 1 >= 0 && b - 2 >= 0 && dp[a - 1][b - 2] != -1)
			{
				v3 = dp[a - 1][b - 2];
				sta = true;
			}
			if (a + 1 < n && b - 2 >= 0 && dp[a + 1][b - 2] != -1)
			{
				v4 = dp[a + 1][b - 2];
				sta = true;
			}
			if (a - 2 >= 0 && b + 1 < m && dp[a - 2][b + 1] != -1)
			{
				v2 = dp[a - 2][b + 1];
				sta = true;
			}
			ll s = -1;
			if (sta)
				s = max(max(v1, v2), max(v3, v4)) + vec[a][b];
			dp[a][b] = max(dp[a][b], s);
			if (dp[a][b] > ans)
				ans = dp[a][b];
			a++;
			b--;
		}

		if (j < m - 1)
			++j;
		else if (i < n - 1)
			++i;
		else
			break;
	}
	cout << ans << endl;
	return 0;
}