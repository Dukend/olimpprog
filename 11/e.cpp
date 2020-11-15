#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}