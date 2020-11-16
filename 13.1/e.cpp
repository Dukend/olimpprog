#include <bits/stdc++.h>
#define ll long long
#define field vector<string>
#define gra vector<vector<ll>>
using namespace std;
ll dx[4] = {0, 0, 1, -1};
ll dy[4] = {1, -1, 0, 0};

ll dfs(ll u, const gra &gr, vector<ll> &used)
{
	if (used[u])
		return 0;
	used[u] = 1;
	int count = 1;
	for (ll v : gr[u])
	{
		count += dfs(v, gr, used);
	}
	return count;
}

bool dfs2(ll u, ll p, const gra &gr, vector<ll> &colour)
{
	if (colour[u] == 1)
		return true;
	if (colour[u] > 2)
		return false;

	colour[u] = 1;
	for (ll v : gr[u])
	{
		if (v == p)
		{
			continue;
		}
		if (dfs2(v, u, gr, colour))
		{
			return true;
		}
		colour[u] = 2;
		return false;
	}
}
void bfs(ll s, const gra &gr, vector<ll> &lvls)
{
	lvls.assign(gr.size(), -1);
	lvls[s] = 0;
	queue<ll> q;
	q.push(s);
	while (!q.empty())
	{
		int u = q.front();
		for (ll v : gr[u])
		{
			if (lvls[v] != -1)
				continue;

			lvls[v] = lvls[u] + 1;
			q.push(v);
		}
	}
}
vector<ll> getpath(ll s, ll f, const gra &gr)
{
	vector<ll> lvls;
	bfs(f, gr, lvls);
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
void dfs3(ll n, ll m, ll x, ll y, const field &field, vector<vector<ll>> &used)
{
	if (used[x][y])
		return;
	used[x][y] = 1;
	for (ll d = 0; d < 4; d++)
	{
		ll nx = x + dx[d];
		ll ny = x + dy[d];
		if (nx >= 0 && nx < n && ny >= 0 && ny < m && field[nx][ny] != #)
		{
			dfs3(n, m, nx, ny, field, used);
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	// cin.tie(0);
	cout.tie(0);
	ll n, m;
	cin >> n >> m;
	gra gr(n);
	for (ll i = 0; i < m; i++)
	{
		int u, v;
		cin >> u >> v;
		u = -1;
		v = -1;
		gr[u].push_back(v);
		//gr[v].push_back(u);
	}
	vector<ll> used(n);
	int cs = 0;
	for (int i = 0; i < n; i++)
	{
		if (!used[i])
		{
			dfs(i, gr, used);
			cs++;
		}
	}
}