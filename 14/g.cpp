#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll INF = 9223372036854775807;
struct pr
{
	ll dis, dep;
};

bool operator<(const pr &l, const pr &r)
{
	return l.dis < r.dis;
}

struct Edge
{
	ll f, s;
};

bool operator<(const Edge &lhs, const Edge &rhs)
{
	return lhs.f > rhs.f;
}
bool operator==(const Edge &l, const Edge &r)
{
	return l.f == r.f;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m, s;
	cin >> n >> m >> s;
	s--;
	vector<vector<Edge>> edges(n);
	for (ll i = 0; i < m; ++i)
	{
		ll u, v, w;
		cin >> u >> v >> w;
		u--;
		v--;
		edges[u].push_back({v, w});
		edges[v].push_back({u, w});
	}
	vector<ll> d(n, 0), relaxed(n, 0);
	d[s] = INF;

	priority_queue<pr> pq;
	pq.push({INF, s});
	while (!pq.empty())
	{
		pr u = pq.top();
		pq.pop();
		if (relaxed[u.dep])
			continue;
		relaxed[u.dep] = 1;
		for (auto &elem : edges[u.dep])
		{
			if (min(d[u.dep], elem.s) > d[elem.f])
			{
				d[elem.f] = min(d[u.dep], elem.s);
				pq.push({d[elem.f], elem.f});
			}
		}
	}
	for (auto &elem : d)
	{
		if (elem == INF)
			cout << -1 << ' ';
		else
			cout << elem << ' ';
	}
	return 0;
}