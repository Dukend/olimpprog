#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	ll n;
	cin >> n;
	vector<vector<ll>> dis(n, vector<ll>(n));
	for (ll i = 0; i < n; i++)
	{
		for (ll j = 0; j < n; j++)
		{
			cin >> dis[i][j];
		}
	}

	for (ll k = 0; k < n; k++)
	{
		for (ll i = 0; i < n; i++)
		{
			for (ll j = 0; j < n; j++)
			{
				if (dis[i][j] > dis[i][k] + dis[k][j])
				{
					dis[i][j] = dis[i][k] + dis[k][j];
				}
			}
		}
	}

	for (ll i = 0; i < n; i++)
	{
		for (ll j = 0; j < n; j++)
		{
			cout << dis[i][j] << ' ';
		}
		cout << '\n';
	}

	return 0;
}