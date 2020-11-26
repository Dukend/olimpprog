//
// Created by sakost on 10.12.2019.
//

#include <bits/stdc++.h>

#pragma optimize("tg", on)

using namespace std;

// definitions
typedef unsigned long long ull;
typedef long double ld;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<ld, ld> pld;
typedef pair<ll, ll> pll;
typedef pair<ull, ull> pull;

//const ll p = 31;
const ll P = 1000000007;
const ld INFLD = numeric_limits<ld>::max();
const ll INFL = numeric_limits<ll>::max();
const int INF = numeric_limits<int>::max();
const ld eps = numeric_limits<ld>::epsilon();
const ld pi = 3.14159265358979323846264338327950288419716939937510;
const ld d2r = pi / 180;
const ld r2d = 180 / pi;

#define timeit clock_t _begin = clock();
#define endtimeit           \
	clock_t _end = clock(); \
	cerr << "Elapsed seconds: " << double(_end - _begin) / CLOCKS_PER_SEC << endl;
#define fastIO                    \
	ios_base::sync_with_stdio(0); \
	cin.tie(0);                   \
	cout.tie(0)
#define fori(k, n) for (ll i(k); i < n; ++i)
#define forj(k, n) for (ll j(k); j < n; ++j)
#define formi(n, k) for (ll i(n); i > k; --i)
#define sz size()
#define forel(a) for (auto &el : a)
#define srt(a) sort(a.begin(), a.end())
#define srtf(a, func) sort(a.begin(), a.end(), func)
#define rvrs(a) reverse(a.begin(), a.end())
#define bg begin()
#define fs first
#define sc second
#ifdef _ONPC_
#define what(x) cerr << #x << " = " << x << endl
#else
#define what(x)
#endif

// simple functions
template <typename T>
inline T gcd(T a, T b)
{
	while (a)
	{
		b %= a;
		swap(a, b);
	}
	return b;
}

template <typename T>
inline T lcm(T a, T b)
{
	return a / gcd(a, b) * b;
}

//    // форд-белламн O(nm)
//    int n, m, s;
//    cin >> n >> m >> s;
//    graph g(n);
//    fori(0, m){
//        int u, v, w;
//        cin >> u >> v >> w;
//        u--;v--;
//        g[u].push_back({v, w});
////        g[v].push_back({u, w});
//    }
//    vector<int> d(n, INF), parents(n, -1);
//    d[s] = 0;
//    fori(1, n){
//        forj(0, n){
//            for (int ch = 0; ch < g[j].sz; ++ch) {
//                if(d[g[j][ch].to] > d[j] + g[j][ch].w){
//                    parents[g[j][ch].to] = d[j];
//                    d[g[j][ch].to] = d[j] + g[j][ch].w;
//                }
////                // если неоринт
////                if(d[j] > d[g[j][ch].to] + g[j][ch].w){
////                    d[j] = d[g[j][ch].to] + g[j][ch].w;
////                }
//            }
//        }
//    }

// Дейкстра O(n^2+m)
//    int n, m, s;
//    cin >> n >> m >> s;
//    graph edges(n);
//    fori(0, m){
//        int u, v, w;
//        cin >> u >> v >> w;
//        u--;v--;
//        edges[u].push_back({v, w});
//        edges[v].push_back({u, w});
//    }
//    vector<int> d(n, INF), relaxed(n, 0);
//    d[s] = 0;
//    fori(0, n){
//        int u = -1;
//        forj(0, n){
//            if(!relaxed[j] && (u == -1 || d[j] < d[u])){
//                u = j;
//            }
//        }relaxed[u] = 1;
//        forel(edges[u]){
//            if(d[el.to] > d[u] + el.w){
//                d[el.to] = d[u] + el.w;
//            }
//        }
//    }

// Дейкстра O(mlogn)
//    int n, m, s;
//    cin >> n >> m >> s;
//    graph edges(n);
//    fori(0, m){
//        int u, v, w;
//        cin >> u >> v >> w;
//        u--;v--;
//        edges[u].push_back({v, w});
//        edges[v].push_back({u, w});
//    }
//    vector<int> d(n, INF), relaxed(n, 0);
//    d[s] = 0;
//
//    priority_queue<Priority> pq;
//    pq.push({0, s});
//    while(!pq.empty()){
//        Priority u = pq.top();
//        pq.pop();
//        if(relaxed[u.vertex]) continue;
//        relaxed[u.vertex] = 1;
//        forel(edges[u.vertex]){
//            if(d[el.to] > d[u.vertex] + el.w){
//                d[el.to] = d[u.vertex] + el.w;
//                pq.push({d[el.to], el.to});
//            }
//        }
//    }

// Флойд-Уоршелл O(n^3)
//    int n, m, s;
//    cin >> n >> m >> s;
//    graph g(n, vector<int>(n));
//    fori(0, m){
//        int u, v, w;
//        cin >> u >> v >> w;
//        u--;v--;
//        g[u][v] = w;
//        g[v][u] = w;
//    }
//    for (int k = 0; k < n; ++k) {
//        fori(0, n){
//            forj(0, n){
//                if(g[i][j] > g[i][k] + g[k][j]){
//                    g[i][j] = g[i][k] + g[k][j];
//                }
//            }
//        }
//    }

struct Priority
{
	ll distance, vertex;
};

bool operator<(const Priority &l, const Priority &r)
{
	return l.distance < r.distance;
}

struct Edge
{
	ll to, w;
};

bool operator<(const Edge &lhs, const Edge &rhs)
{
	return lhs.to > rhs.to;
}
bool operator==(const Edge &l, const Edge &r)
{
	return l.to == r.to;
}

using graph = vector<vector<Edge>>;

void solve()
{
	int n, m, s;
	cin >> n >> m >> s;
	s--;
	graph edges(n);
	fori(0, m)
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

	priority_queue<Priority> pq;
	pq.push({INF, s});
	while (!pq.empty())
	{
		Priority u = pq.top();
		pq.pop();
		if (relaxed[u.vertex])
			continue;
		relaxed[u.vertex] = 1;
		forel(edges[u.vertex])
		{
			if (min(d[u.vertex], el.w) > d[el.to])
			{
				d[el.to] = min(d[u.vertex], el.w);
				pq.push({d[el.to], el.to});
			}
		}
	}
	forel(d)
	{
		if (el == INF)
			cout << -1 << ' ';
		else
			cout << el << ' ';
	}
}

signed main()
{
#ifdef _ONPC_
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#define TIMEIT
	timeit
#endif // _ONPC_

		fastIO;
	int t(1);
	//    cin >> t; //////////////////////////////// UNCOMMENT IF WITH TESTS ///////////////////////////////////////
	fori(0, t) solve();

#ifdef TIMEIT
	endtimeit
#endif // TIMEIT
		return 0;
}