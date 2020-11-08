#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007;

long long fact(long long n)
{
	long long res = 1;
	while (n > 1)
	{
		res = res * n % MOD;
		n--;
	}
	return res;
}

long long evc(long long a, long long b, long long &x, long long &y)
{
	long long xx = 0, yy = 0, g = 0;
	if (a == 0)
	{
		x = 0, y = 1;
		return b;
	}
	g = evc(b % a, a, xx, yy);
	x = yy - xx * (b / a);
	y = xx;
	return g;
}

int main()
{
	vector<long long> v(26);
	long long total = 0;

	char ch;
	while (cin >> ch)
		v[ch - 'a']++, total++;
	long long res;
	{
		long long k = 1, in = 0, null = 0;
		res = fact(total);
		for (int i = 0; i < 26; i++)
		{
			if (v[i] < 2)
				continue;
			k = k * fact(v[i]) % MOD;
		}
		evc(k, MOD, in, null);
		res = (MOD + res * in % MOD) % MOD;
	}
	cout << res;
	return 0;
}