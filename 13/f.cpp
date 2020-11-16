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
#include <stdio.h>
#define inf 1E9
#define NMAX 16
#define min(x, y) x < y ? x : y

int n, i, j, k, m, temp, ans, d[NMAX][NMAX], t[1 << NMAX][NMAX];
int get(int nmb, int x)
{
	return (x & (1 << nmb)) != 0;
}
int main(void)
{
	scanf("%d", &n);
	for (i = 0; i < n; ++i)
		for (j = 0; j < n; ++j)
			scanf("%d", &d[i][j]);
	t[1][0] = 0;
	m = 1 << n;
	for (i = 1; i < m; i += 2)
		for (j = (i == 1) ? 1 : 0; j < n; ++j)
		{
			t[i][j] = inf;
			if (j > 0 && get(j, i))
			{
				temp = i ^ (1 << j);
				for (k = 0; k < n; ++k)
					if (get(k, i) && d[k][j] > 0)
						t[i][j] = min(t[i][j], t[temp][k] + d[k][j]);
			}
		}
	for (j = 1, ans = inf; j < n; ++j)
		if (d[j][0] > 0)
			ans = min(ans, t[m - 1][j] + d[j][0]);
	if (ans == inf)
		printf("-1");
	else
		printf("%d", ans);
	return 0;
}