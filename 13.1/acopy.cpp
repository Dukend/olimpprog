#include <bits/stdc++.h>
#define ll long long
#define field vector<string>
#define gra vector<vector<ll>>
using namespace std;
ll counter = 0;
void dfs(ll u, const gra &gr, vector<ll> &used, vector<ll> &ans)
{
	if (used[u])
	{
		return;
	}
	used[u] = 1;
	ans[u] = counter;
	counter++;
	for (ll v : gr[u])
	{
		dfs(v, gr, used, ans);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	ll n, m, k;
	cin >> n >> m >> k;
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

	vector<ll> used(n);
	vector<ll> ans(n, -1);
	dfs(k - 1, gr, used, ans);
	for (ll i = 0; i < n; i++)
	{
		cout << ans[i] << ' ';
	}
	return 0;
}