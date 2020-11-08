#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1000000007;
int main()
{

	long long n, k;
	cin >> n >> k;
	vector<long long> v(n + 1);
	v[0] = 1;
	for (long long i = 1; i <= n; ++i)
	{
		for (long long j = 1; j <= min(i, k); ++j)
		{
			v[i] += v[i - j];
		}
		v[i] %= MOD;
	}
	cout << v[n];
	return 0;
}