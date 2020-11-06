#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long n;
	long long a, m, k, mod;
	cin >> n >> a >> m >> k >> mod;
	vector<long long> v(100333);
	for (int i = 0; i < n; ++i)
	{
		v[a] += 1;
		a = (a * m + k) % mod;
	}
	long long sum = 0;
	long long p = 1;
	for (long long i = 0; i < 100333; i++)
	{
		if (v[i] != 0)
		{
			for (long long j = 1; j <= v[i]; j++)
			{
				sum += i * p;
				p++;
			}
			sum %= 1000000007;
		}
	}
	cout << sum % 1000000007;
	return 0;
}