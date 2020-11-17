#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

struct Edge
{
	ll to, w;
};

struct Priority
{
	ll distance, vertex;
};

bool operator<(const Priority lhs, const Priority rhs)
{
	return lhs.distance > rhs.distance;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	ll n, m, s;
	cin >> n >> m >> s;
	s--;
	vector<vector<Edge>> edges(n);
	for (ll i = 0; i < m; i++)
	{
		ll u, v, w;
		cin >> u >> v >> w;
		u--;
		v--;
		edges[u].push_back(Edge{v, w});
		edges[v].push_back(Edge{u, w});
	}

	vector<ll> dis(n, LLONG_MAX);
	vector<ll> relaxed(n, 0);
	dis[s] = 0;

	priority_queue<Priority> pq;
	pq.push(Priority{0, s});
	while (!pq.empty())
	{
		Priority u = pq.top();
		pq.pop();
		if (relaxed[u.vertex])
		{
			continue;
		}
		relaxed[u.vertex] = 1;
		for (const Edge &e : edges[u.vertex])
		{
			if (dis[e.to] > dis[u.vertex] + e.w)
			{
				dis[e.to] = dis[u.vertex] + e.w;
			}
			pq.push(Priority{dis[e.to], e.to});
		}
	}

	for (ll i = 0; i < n; i++)
	{
		if (dis[i] == LLONG_MAX)
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