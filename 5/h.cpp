#include <bits/stdc++.h>
using namespace std;
unsigned powmod(unsigned base, unsigned exp, unsigned modulo)
{
	unsigned res = 1;

	while (exp != 0)
	{
		if ((exp & 1) != 0)
		{
			res = (1ll * res * base) % modulo;
		}

		base = (1ll * base * base) % modulo;
		exp >>= 1;
	}

	return res;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	for (int k; k < t; k++)
	{
		unsigned a, n, modulo = pow(10, 9) + 7;
		cin >> a >> n;
		cout << powmod(a, n, modulo) << endl;
	}
	return 0;
}