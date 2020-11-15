#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll n, res = LLONG_MAX;
	cin >> n;
	vector<vector<ll>> c(n, vector<ll>(n));
	for (ll i = 0; i < n; ++i)
		for (ll j = 0; j < n; ++j)
			cin >> c[i][j];
	vector<ll> v(n, 0);
	iota(v.begin(), v.end(), 0);
	do
	{
		ll cur = 0;
		for (ll i = 1; i < n; ++i)
		{
			cur += c[v[i - 1]][v[i]];
		}
		if (v[0] == 0)
			res = min(res, cur);

	} while (next_permutation(v.begin(), v.end()));
	cout << res;
}