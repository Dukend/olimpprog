#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

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

	ll n, m;
	cin >> n >> m;

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
	vector<ll> parrents(n, -1);
	dis[0] = 0;

	priority_queue<Priority> pq;
	pq.push(Priority{0, 0});
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
				parrents[e.to] = u.vertex;
			}
			pq.push(Priority{dis[e.to], e.to});
		}
	}

	bool isok = true;
	vector<ll> path;
	ll s = n - 1;
	while (s != 0)
	{
		if (s == -1)
		{
			isok = false;
			break;
		}

		path.push_back(parrents[s] + 1);
		s = parrents[s];
	}

	if (isok)
	{
		for (ll i = path.size() - 1; i >= 0; i--)
		{
			cout << path[i] << ' ';
		}
		cout << n;
	}
	else
	{
		cout << -1;
	}

	return 0;
}