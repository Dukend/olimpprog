#include <bits/stdc++.h>
using namespace std;

long long BinPow(long long z, long long tmp, long long MOD)
{
	long long res = 1;
	while (tmp != 0)
	{
		if (tmp % 2 != 0)
			res = (res * z) % MOD;
		z = (z * z) % MOD;
		tmp /= 2;
	}
	return res;
}
struct q
{
	long long a, b = -1;
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	long long n, k, ans = 0, l, r, tmp, zero = -1, MOD = pow(10, 9) + 7;
	cin >> n >> k;
	vector<q> v(n + 1);
	v[0].a = 1;
	for (int i = 1; i <= n; i++)
	{
		cin >> tmp;
		if (tmp == 0)
		{
			zero = i;
		}
		if (v[i - 1].a == 0)
		{
			v[i] = {tmp, zero};
		}
		else
		{
			v[i] = {(v[i - 1].a * tmp) % MOD, zero};
		}
	}

	for (int i = 1; i <= k; i++)
	{
		cin >> l >> r;
		if (v[l - 1].b >= l)
		{
			ans = 0;
		}
		else
		{
			if (v[l - 1].a == 0)
			{
				ans = v[r].a;
			}
			else
			{
				ans = (v[r].a * BinPow(v[l - 1].a, MOD - 2, MOD)) % MOD;
			}
		}
		cout << ans << "\n";
	}
	return 0;
}