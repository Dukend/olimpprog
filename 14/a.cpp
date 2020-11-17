#define ll long long
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <limits>
#include <queue>
struct edge
{
	int a, b, cost;
#include <bits/stdc++.h>
typedef long long ll;
	using namespace std;

	struct Edge
	{
		ll u, v, w;
	};

	int main()
	{
		ios::sync_with_stdio(false);
		cin.tie(nullptr);

		ll n, m, s;
		cin >> n >> m >> s;
		s--;
		vector<Edge> edges(m);
		for (ll i = 0; i < m; i++)
		{
			cin >> edges[i].u >> edges[i].v >> edges[i].w;
			edges[i].u--;
			edges[i].v--;
		}

		vector<ll> dis(n, LONG_MAX);
		dis[s] = 0;
		vector<ll> par(n, -1);
		for (ll i = 0; i < n; i++)
		{
			bool changed = false;
			for (const Edge &e : edges)
			{
				if (dis[e.v] > dis[e.u] + e.w)
				{
					dis[e.v] = dis[e.u] + e.w;
					changed = true;
				}
				if (dis[e.u] > dis[e.v] + e.w)
				{
					dis[e.u] = dis[e.v] + e.w;
					changed = true;
				}
			}
			if (!changed)
			{
				break;
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

		return 0;
	}
};

int n, m, v;
vector<edge> e;
const int INF = 1000000000;
int main()
{

	cin >> n >> m >> v;
	vector<int> d(n, INF);
	d[v] = 0;
	for (int i = 0; i < n - 1; ++i)
		for (int j = 0; j < m; ++j)
			if (d[e[j].a] < INF)
				d[e[j].b] = min(d[e[j].b], d[e[j].a] + e[j].cost);
	for (int i = 0; i < n; i++)
		cout << d(i);
	return 0;
}

#include <bits/stdc++.h>
#define ll long long
#define inf 100000
using namespace std;
struct Edges
{
	int u, v, w;
};
const int Vmax = 1000;
const int Emax = Vmax * (Vmax - 1) / 2;
int i, j, n, e, start;
Edges edge[Emax];
int d[Vmax];
//алгоритм Беллмана-Форда
void bellman_ford(int n, int s)
{
	int i, j;

	for (i = 0; i < n; i++)
		d[i] = inf;
	d[s] = 0;

	for (i = 0; i < n - 1; i++)
		for (j = 0; j < e; j++)
			if (d[edge[j].v] + edge[j].w < d[edge[j].u])
				d[edge[j].u] = d[edge[j].v] + edge[j].w;

	int main()
	{
		int w;

		cin >> n;
		e = 0;
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
			{
				cout << "Вес " << i + 1 << "->" << j + 1 << " > ";
				cin >> w;
				if (w != 0)
				{
					edge[e].v = i;
					edge[e].u = j;
					edge[e].w = w;
					e++;
				}
			}

		bellman_ford(n, start - 1);
		return 0;
	}
}