#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n, m;
	cin >> n >> m;
	vector<ll> res(n + 1);
	res[0] = res[1] = 1;
	for (ll i = 2; i < n + 1; ++i)
	{
		res[i] = 0;
		for (ll j = 0; j < i; j++)
		{
			res[i] += res[j] * res[i - j - 1];
			res[i] %= m;
		}
	}
	cout << res[n] % m << endl;
}