#include <bits/stdc++.h>
using namespace std;
long long MOD = 1000000007;
long long BinPow(long long z, long long tmp)
{
	long long res = 1;
	while (tmp != 0)
	{
		if (tmp % 2 == 1)
			res = (res * z) % MOD;
		z = (z * z) % MOD;
		tmp /= 2;
	}
	return res;
}
struct q
{
	long long a, b;
};
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long n, k, ans = 0;
	cin >> n >> k;
	vector<q> v(n + 1);
	v[0] = {1, 0};
	long long tmp, zero = 0;
	for (long long i = 1; i <= n; i++)
	{
		cin >> tmp;
		if (tmp == 0)
		{
			zero++;
			v[i] = {1, zero};
		}
		else
			v[i] = {(v[i - 1].a * tmp) % MOD, zero};
	}
	for (long long i = 1; i <= k; i++)
	{
		long long l, r;
		cin >> l >> r;
		if (v[l].b != v[r].b)
			cout << 0 << endl;
		else
			cout << (v[r].a / v[l - 1].a) % MOD << endl;
	}
	return 0;
}