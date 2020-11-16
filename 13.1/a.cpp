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
vector<ll> getpath(ll s, ll f, const gra &gr)
{
	vector<ll> lvls = bfs(f, gr);
	vector<ll> path;
	path.push_back(s);
	while (path.back() != f)
	{
		int lvl = lvls[path.back()];
		for (ll prev : gr[path.back()])
		{
			if (lvls[prev] == lvl - 1)
			{
				path.push_back(prev);
				break;
			}
		}
	}
	return path;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	ll n, m, u, v;
	cin >> n >> m >> u >> v;
	gra gr(n);
	for (ll i = 0; i < m; i++)
	{
		ll x, y;
		cin >> x >> y;
		x -= 1;
		y -= 1;
		gr[x].push_back(y);
		gr[y].push_back(x);
	}

	vector<ll> ans = getpath(u,v, gr);
	for (ll i = 0; i < n; i++)
	{
		cout << ans[i] << ' ';
	}

	return 0;
}