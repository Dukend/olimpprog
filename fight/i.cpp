#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
long long MOD = pow(10, 9) + 7;
ll BinPow(ll a, ll n)
{
	ll res = 1;
	while (n != 0)
	{
		if (n % 2 != 0)
			res = res * a % MOD;
		a = a * a % MOD;
		n /= 2;
	}
	return res;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	ll n, k;
	cin >> n >> k;
	vector<ll> v(n + 1);
	vector<ll> zero(n + 1);
	zero[0] = 0;
	v[0] = 1;

	for (ll i = 0; i < n; i++)
	{
		ll tmp;
		cin >> tmp;
		if (tmp == 0)
		{
			zero[i + 1] = zero[i] + 1;
			v[i + 1] = 1;
		}
		else
		{
			zero[i + 1] = zero[i];
			v[i + 1] = v[i] * tmp;
			v[i + 1] %= MOD;
		}
	}

	for (ll i = 0; i < k; i++)
	{
		ll l, r;
		cin >> l >> r;

		if (zero[r] == zero[l - 1])
			cout << v[r] * BinPow(v[l - 1], MOD - 2) % MOD << '\n';
		else
			cout << 0 << '\n';
	}

	return 0;
}