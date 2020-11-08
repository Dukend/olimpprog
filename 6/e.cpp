#include <bits/stdc++.h>
using namespace std;
long long MOD = 1000000007;
int binpow(long long a, int n)
{
	long long res = 1;
	while (n != 0)
	{
		if (n % 2 != 0)
			res = (res * a) % MOD;

		a = (a * a) % MOD;
		n /= 2;
	}
	return res;
}

int main()
{
	int n, m;
	cin >> n >> m;
	long long ans = 1;
	if (m > n)
		swap(n, m);
	for (int i = 1; i <= n; i++)
	{
		ans = (ans * (m + i)) % MOD;
		ans *= binpow(i, MOD - 2);
		ans %= MOD;
	}
	cout << ans;
	return 0;
}