#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007;
long long end(long long z, long long n)
{
	long long res = 1;
	while (n != 0)
	{
		if (n % 2 != 0)
			res = (res * z) % MOD;
		z = (z * z) % MOD;
		n /= 2;
	}
	return res;
}
int main()
{
	long long t, res = 0;
	cin >> t;
	for (long long i = 0; i < t; i++)
	{
		long long b, q, n;
		cin >> b >> q >> n;
		if (q != 1)
		{
			res = (b * (1 - end(q, n))) % MOD;
			res = res * end(1 - q, MOD - 2);
			res %= MOD;
			cout << res << endl;
		}
		else
			cout << (b * n) % MOD << endl;
	}
	return 0;
}