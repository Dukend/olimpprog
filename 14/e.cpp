#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Edge
{
	ll to, w;
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	ll n, q;
	cin >> n >> q;
	vector<vector<Edge>> edges(n);
	for (ll i = 0; i < n; i++)
	{
		for (ll j = 0; j < n; j++)
		{
			ll x;
			cin >> x;
			if (j < i + 1)
			{
				continue;
			}
			edges[i].push_back(Edge{j, x});
			edges[j].push_back(Edge{i, x});
		}
	}

	for (ll f = 0; f < q; f++)
	{
		vector<ll> dis(n, LONG_MAX);
		vector<ll> relaxed(n, 0);
		ll k;
		cin >> k;
		k--;
		dis[k] = 0;

		for (ll i = 0; i < n; i++)
		{
			ll u = -1;
			for (ll j = 0; j < n; j++)
			{
				if (!relaxed[j] && (u == -1 || dis[j] < dis[u]))
				{
					u = j;
				}
			}
			relaxed[u] = 1;

			for (const Edge &e : edges[u])
			{
				if (dis[e.to] > dis[u] + e.w)
				{
					dis[e.to] = dis[u] + e.w;
				}
			}
		}

		for (ll i = 0; i < n; i++)
		{
			if (dis[i] == LONG_MAX)
			{
				cout << "-1 ";
			}
			else
			{
				cout << dis[i] << ' ';
			}
		}
		cout << '\n';
	}

	return 0;
}