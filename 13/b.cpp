#include <bits/stdc++.h>
#define ll long long
#define field vector<string>
#define gra vector<vector<ll>>
using namespace std;
vector<ll> bfs(ll s, const gra &gr)
{
	queue<ll> q;
	q.push(s);
	vector<ll> lvls;
	lvls.assign(gr.size(), -1);
	lvls[s] = 0;
	while (!q.empty())
	{
		int u = q.front();
		q.pop();
		for (ll v : gr[u])
		{
			if (lvls[v] != -1)
			{
				continue;
			}
			lvls[v] = lvls[u] + 1;
			q.push(v);
		}
	}
	return lvls;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	ll n, m, k;
	cin >> n >> m >> k;
	k--;
	gra gr(n);
	for (ll i = 0; i < m; i++)
	{
		ll u, v;
		cin >> u >> v;
		u -= 1;
		v -= 1;
		gr[u].push_back(v);
		gr[v].push_back(u);
	}

	vector<ll> v = bfs(k, gr);
	for (ll i = 0; i < n; i++)
	{
		cout << v[i] << ' ';
	}

	return 0;
}