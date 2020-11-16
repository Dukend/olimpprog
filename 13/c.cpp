#include <bits/stdc++.h>
#define ll long long
#define field vector<string>
#define gra vector<vector<ll>>
using namespace std;
int n, m;
gra gr;
vector<int> used, path;
int dfs(int v)
{
	used[v] = 1;
	for (int u : gr[v])
	{
		if (used[u] == 0)
		{
			path[u] = v;
			dfs(u);
		}
	}
	used[v] = 2;
	return 0;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int x, y;
	cin >> n >> m >> x >> y;
	gr.resize(n);
	used = vector<int>(n, 0);
	path = vector<int>(n, -1);
	for (int i = 0; i < m; ++i)
	{
		int u, v;
		cin >> u >> v;
		gr[u - 1].push_back(v - 1);
		gr[v - 1].push_back(u - 1);
	}
	x--;
	y--;
	dfs(x);
	vector<int> pa;
	if (path[y] == -1)
	{
		if (x == y)
			cout << y + 1 << endl;
		else
			cout << -1 << endl;
	}
	else
	{
		while (path[y] != -1)
		{
			pa.push_back(y);
			y = path[y];
		}
		pa.push_back(y);
		reverse(pa.begin(), pa.end());
		for (int u : pa)
			cout << u + 1 << ' ';
		cout << endl;
	}
}