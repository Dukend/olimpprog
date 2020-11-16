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
#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct segtree
{
	ll n;
	vector<ll> data;

	ll get(ll l, ll r)
	{
		return get(0, 0, n - 1, l, r);
	}
	void set(ll p, ll x)
	{
		return set(0, 0, n - 1, p, x);
	}
	ll get(ll id, ll sl, ll sr, ll ql, ll qr)
	{
		if (ql <= sl && sr <= qr)
			return data[id];
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(id * 2 + 1, sl, m, ql, qr);
		if (m < ql)
			return get(id * 2 + 2, m + 1, sr, ql, qr);
		return gcd(get(id * 2 + 1, sl, m, ql, qr), get(id * 2 + 2, m + 1, sr, ql, qr));
	}

	void set(ll id, ll sl, ll sr, ll p, ll x)
	{
		if (sl == sr)
		{
			data[id] += x;
			return;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
		{
			set(id * 2 + 1, sl, m, p, x);
		}
		else
		{
			set(id * 2 + 2, m + 1, sr, p, x);
		}
		data[id] = gcd(data[id * 2 + 1], data[id * 2 + 2]);
	}
	segtree(ll n_)
	{
		n = n_;
		data.resize(n * 4);
	}
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n;
	cin >> n;
	vector<ll> data(n * 4);
	vector<ll> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	seq(0, 0, n - 1, v, data);
	int q, l, r;
	cin >> q;

	for (int i = 0; i < q; i++)
	{
		cin >> l >> r;
		cout << get(0, 0, n - 1, l - 1, r - 1, data) << '\n';
	}
	return 0;
}