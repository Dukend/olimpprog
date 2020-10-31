#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1000000007;
int mod(long long a, long long z)
{
	if (a >= 0 && z > 0)
		return a % z;
	if (a < 0 && z > 0)
		return (z + a % z) % z;
	if (a >= 0 && z < 0)
		return a % z;
	if (a < 0 && z < 0)
		return -(z - a % z) % z;

	return 0;
}
int main()
{
	long long n, k;
	cin >> n >> k;
	vector<long long> v(2, 1);
	long long sum = 2;
	for (long long i = 2; i <= n; ++i)
	{
		v.push_back(sum);
		if (i < k)
			sum = mod(2 * v[i], MOD);
		else
			sum = mod(2 * v[i] - v[i - k], MOD);
	}
	cout << v[n];
	return 0;
}