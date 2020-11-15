#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 1111111111111;
using namespace std;

int n;
vector<vector<int>> c(n);
vector<vector<ll>> memo(n, vector<ll>(1 << n, -1));

ll dp(int last, int mask)
{
	if (memo[last][mask] != -1)
		return memo[last][mask];
	ll result = 0;
	int prev = mask ^ (1 << last);
	for (int i = 0; i < n; ++i)
		if ((prev & (1 << i)) && c[last][i])
			result += dp(i, prev);
	memo[last][mask] = result;
	return result;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	c = vector<vector<int>>(n);
	memo = vector<vector<ll>>(n, vector<ll>(1 << n, -1));
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			int a;
			cin >> a;
			c[i].push_back(a);
		}
	}
	for (int i = 0; i < n; ++i)
	{
		memo[i][0] = 0;
		for (int i = 1, j = 0; i <= pow(2, n - 1); i *= 2, j++)
			memo[j][i] = 1;
		ll result = 0;
		for (int last = 0; last < n; ++last)
			result += dp(last, (1 << n) - 1);
		if (n == 1)
			cout << 0 << endl;
		else
			cout << result << endl;
		return 0;
	}
}