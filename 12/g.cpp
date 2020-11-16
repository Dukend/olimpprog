#include <bits/stdc++.h>

using namespace std;
long long MOD = 4294967296;
int main()
{
	long long n;
	cin >> n;
	long long q;
	vector<long long> v(n);
	for (int i = 0; i < n; i++)
	{
	}
	cout << q;
	return 0;
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void add(ll id, ll sl, ll sr, ll ql, ll qr, ll x, vector<ll> &data)
{
	if (ql <= sl && sr <= qr)
	{
		data[id] += x;
		return;
	}
	ll m = (sl + sr) / 2;
	if (ql <= m)
		add(id * 2 + 1, sl, m, ql, qr, x, data);
	if (m < qr)
		add(id * 2 + 2, m + 1, sr, ql, qr, x, data);
}

ll get(ll id, ll sl, ll sr, ll p, vector<ll> &data)
{
	if (sl == sr)
		return data[id];
	ll m = (sl + sr) / 2;
	if (p <= m)
		return get(id * 2 + 1, sl, m, p, data) + data[id];
	return get(id * 2 + 2, m + 1, sr, p, data) + data[id];
}

void build(ll id, ll sl, ll sr, const vector<ll> &a, vector<ll> &data)
{
	if (sl == sr)
	{
		data[id] = a[sl];
		return;
	}
	ll m = (sl + sr) / 2;
	build(id * 2 + 1, sl, m, a, data);
	build(id * 2 + 2, m + 1, sr, a, data);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<ll> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	vector<ll> data(n * 4);
	build(0, 0, n - 1, a, data);
	int k;
	cin >> k;
	int s, l, r, x;
	for (int i = 0; i < k; i++)
	{
		cin >> s >> l;
		if (s == 0)
		{
			cout << get(0, 0, n - 1, l - 1, data) << '\n';
		}
		else
		{
			cin >> r >> x;
			add(0, 0, n - 1, l - 1, r - 1, x, data);
		}
	}
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void add(ll id, ll sl, ll sr, ll ql, ll qr, ll x, vector<ll> &data)
{
	if (ql <= sl && sr <= qr)
	{
		data[id] += x;
		return;
	}
	ll m = (sl + sr) / 2;
	if (ql <= m)
		add(id * 2 + 1, sl, m, ql, qr, x, data);
	if (m < qr)
		add(id * 2 + 2, m + 1, sr, ql, qr, x, data);
}

ll get(ll id, ll sl, ll sr, ll p, vector<ll> &data)
{
	if (sl == sr)
		return data[id];
	ll m = (sl + sr) / 2;
	if (p <= m)
		return get(id * 2 + 1, sl, m, p, data) + data[id];
	return get(id * 2 + 2, m + 1, sr, p, data) + data[id];
}

void build(ll id, ll sl, ll sr, const vector<ll> &a, vector<ll> &data)
{
	if (sl == sr)
	{
		data[id] = a[sl];
		return;
	}
	ll m = (sl + sr) / 2;
	build(id * 2 + 1, sl, m, a, data);
	build(id * 2 + 2, m + 1, sr, a, data);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<ll> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	vector<ll> data(n * 4);
	build(0, 0, n - 1, a, data);
	int k;
	cin >> k;
	int s, l, r, x;
	for (int i = 0; i < k; i++)
	{
		cin >> s >> l;
		if (s == 0)
		{
			cout << get(0, 0, n - 1, l - 1, data) << '\n';
		}
		else
		{
			cin >> r >> x;
			add(0, 0, n - 1, l - 1, r - 1, x, data);
		}
	}
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void add(ll id, ll sl, ll sr, ll ql, ll qr, ll x, vector<ll> &data)
{
	if (ql <= sl && sr <= qr)
	{
		data[id] += x;
		return;
	}
	ll m = (sl + sr) / 2;
	if (ql <= m)
		add(id * 2 + 1, sl, m, ql, qr, x, data);
	if (m < qr)
		add(id * 2 + 2, m + 1, sr, ql, qr, x, data);
}

ll get(ll id, ll sl, ll sr, ll p, vector<ll> &data)
{
	if (sl == sr)
		return data[id];
	ll m = (sl + sr) / 2;
	if (p <= m)
		return get(id * 2 + 1, sl, m, p, data) + data[id];
	return get(id * 2 + 2, m + 1, sr, p, data) + data[id];
}

void build(ll id, ll sl, ll sr, const vector<ll> &a, vector<ll> &data)
{
	if (sl == sr)
	{
		data[id] = a[sl];
		return;
	}
	ll m = (sl + sr) / 2;
	build(id * 2 + 1, sl, m, a, data);
	build(id * 2 + 2, m + 1, sr, a, data);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<ll> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	vector<ll> data(n * 4);
	build(0, 0, n - 1, a, data);
	int k;
	cin >> k;
	int s, l, r, x;
	for (int i = 0; i < k; i++)
	{
		cin >> s >> l;
		if (s == 0)
		{
			cout << get(0, 0, n - 1, l - 1, data) << '\n';
		}
		else
		{
			cin >> r >> x;
			add(0, 0, n - 1, l - 1, r - 1, x, data);
		}
	}
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void add(ll id, ll sl, ll sr, ll ql, ll qr, ll x, vector<ll> &data)
{
	if (ql <= sl && sr <= qr)
	{
		data[id] += x;
		return;
	}
	ll m = (sl + sr) / 2;
	if (ql <= m)
		add(id * 2 + 1, sl, m, ql, qr, x, data);
	if (m < qr)
		add(id * 2 + 2, m + 1, sr, ql, qr, x, data);
}

ll get(ll id, ll sl, ll sr, ll p, vector<ll> &data)
{
	if (sl == sr)
		return data[id];
	ll m = (sl + sr) / 2;
	if (p <= m)
		return get(id * 2 + 1, sl, m, p, data) + data[id];
	return get(id * 2 + 2, m + 1, sr, p, data) + data[id];
}

void build(ll id, ll sl, ll sr, const vector<ll> &a, vector<ll> &data)
{
	if (sl == sr)
	{
		data[id] = a[sl];
		return;
	}
	ll m = (sl + sr) / 2;
	build(id * 2 + 1, sl, m, a, data);
	build(id * 2 + 2, m + 1, sr, a, data);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<ll> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	vector<ll> data(n * 4);
	build(0, 0, n - 1, a, data);
	int k;
	cin >> k;
	int s, l, r, x;
	for (int i = 0; i < k; i++)
	{
		cin >> s >> l;
		if (s == 0)
		{
			cout << get(0, 0, n - 1, l - 1, data) << '\n';
		}
		else
		{
			cin >> r >> x;
			add(0, 0, n - 1, l - 1, r - 1, x, data);
		}
	}
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void add(ll id, ll sl, ll sr, ll ql, ll qr, ll x, vector<ll> &data)
{
	if (ql <= sl && sr <= qr)
	{
		data[id] += x;
		return;
	}
	ll m = (sl + sr) / 2;
	if (ql <= m)
		add(id * 2 + 1, sl, m, ql, qr, x, data);
	if (m < qr)
		add(id * 2 + 2, m + 1, sr, ql, qr, x, data);
}

ll get(ll id, ll sl, ll sr, ll p, vector<ll> &data)
{
	if (sl == sr)
		return data[id];
	ll m = (sl + sr) / 2;
	if (p <= m)
		return get(id * 2 + 1, sl, m, p, data) + data[id];
	return get(id * 2 + 2, m + 1, sr, p, data) + data[id];
}

void build(ll id, ll sl, ll sr, const vector<ll> &a, vector<ll> &data)
{
	if (sl == sr)
	{
		data[id] = a[sl];
		return;
	}
	ll m = (sl + sr) / 2;
	build(id * 2 + 1, sl, m, a, data);
	build(id * 2 + 2, m + 1, sr, a, data);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<ll> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	vector<ll> data(n * 4);
	build(0, 0, n - 1, a, data);
	int k;
	cin >> k;
	int s, l, r, x;
	for (int i = 0; i < k; i++)
	{
		cin >> s >> l;
		if (s == 0)
		{
			cout << get(0, 0, n - 1, l - 1, data) << '\n';
		}
		else
		{
			cin >> r >> x;
			add(0, 0, n - 1, l - 1, r - 1, x, data);
		}
	}
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void add(ll id, ll sl, ll sr, ll ql, ll qr, ll x, vector<ll> &data)
{
	if (ql <= sl && sr <= qr)
	{
		data[id] += x;
		return;
	}
	ll m = (sl + sr) / 2;
	if (ql <= m)
		add(id * 2 + 1, sl, m, ql, qr, x, data);
	if (m < qr)
		add(id * 2 + 2, m + 1, sr, ql, qr, x, data);
}

ll get(ll id, ll sl, ll sr, ll p, vector<ll> &data)
{
	if (sl == sr)
		return data[id];
	ll m = (sl + sr) / 2;
	if (p <= m)
		return get(id * 2 + 1, sl, m, p, data) + data[id];
	return get(id * 2 + 2, m + 1, sr, p, data) + data[id];
}

void build(ll id, ll sl, ll sr, const vector<ll> &a, vector<ll> &data)
{
	if (sl == sr)
	{
		data[id] = a[sl];
		return;
	}
	ll m = (sl + sr) / 2;
	build(id * 2 + 1, sl, m, a, data);
	build(id * 2 + 2, m + 1, sr, a, data);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<ll> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	vector<ll> data(n * 4);
	build(0, 0, n - 1, a, data);
	int k;
	cin >> k;
	int s, l, r, x;
	for (int i = 0; i < k; i++)
	{
		cin >> s >> l;
		if (s == 0)
		{
			cout << get(0, 0, n - 1, l - 1, data) << '\n';
		}
		else
		{
			cin >> r >> x;
			add(0, 0, n - 1, l - 1, r - 1, x, data);
		}
	}
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void add(ll id, ll sl, ll sr, ll ql, ll qr, ll x, vector<ll> &data)
{
	if (ql <= sl && sr <= qr)
	{
		data[id] += x;
		return;
	}
	ll m = (sl + sr) / 2;
	if (ql <= m)
		add(id * 2 + 1, sl, m, ql, qr, x, data);
	if (m < qr)
		add(id * 2 + 2, m + 1, sr, ql, qr, x, data);
}

ll get(ll id, ll sl, ll sr, ll p, vector<ll> &data)
{
	if (sl == sr)
		return data[id];
	ll m = (sl + sr) / 2;
	if (p <= m)
		return get(id * 2 + 1, sl, m, p, data) + data[id];
	return get(id * 2 + 2, m + 1, sr, p, data) + data[id];
}

void build(ll id, ll sl, ll sr, const vector<ll> &a, vector<ll> &data)
{
	if (sl == sr)
	{
		data[id] = a[sl];
		return;
	}
	ll m = (sl + sr) / 2;
	build(id * 2 + 1, sl, m, a, data);
	build(id * 2 + 2, m + 1, sr, a, data);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<ll> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	vector<ll> data(n * 4);
	build(0, 0, n - 1, a, data);
	int k;
	cin >> k;
	int s, l, r, x;
	for (int i = 0; i < k; i++)
	{
		cin >> s >> l;
		if (s == 0)
		{
			cout << get(0, 0, n - 1, l - 1, data) << '\n';
		}
		else
		{
			cin >> r >> x;
			add(0, 0, n - 1, l - 1, r - 1, x, data);
		}
	}
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void add(ll id, ll sl, ll sr, ll ql, ll qr, ll x, vector<ll> &data)
{
	if (ql <= sl && sr <= qr)
	{
		data[id] += x;
		return;
	}
	ll m = (sl + sr) / 2;
	if (ql <= m)
		add(id * 2 + 1, sl, m, ql, qr, x, data);
	if (m < qr)
		add(id * 2 + 2, m + 1, sr, ql, qr, x, data);
}

ll get(ll id, ll sl, ll sr, ll p, vector<ll> &data)
{
	if (sl == sr)
		return data[id];
	ll m = (sl + sr) / 2;
	if (p <= m)
		return get(id * 2 + 1, sl, m, p, data) + data[id];
	return get(id * 2 + 2, m + 1, sr, p, data) + data[id];
}

void build(ll id, ll sl, ll sr, const vector<ll> &a, vector<ll> &data)
{
	if (sl == sr)
	{
		data[id] = a[sl];
		return;
	}
	ll m = (sl + sr) / 2;
	build(id * 2 + 1, sl, m, a, data);
	build(id * 2 + 2, m + 1, sr, a, data);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<ll> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	vector<ll> data(n * 4);
	build(0, 0, n - 1, a, data);
	int k;
	cin >> k;
	int s, l, r, x;
	for (int i = 0; i < k; i++)
	{
		cin >> s >> l;
		if (s == 0)
		{
			cout << get(0, 0, n - 1, l - 1, data) << '\n';
		}
		else
		{
			cin >> r >> x;
			add(0, 0, n - 1, l - 1, r - 1, x, data);
		}
	}
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void add(ll id, ll sl, ll sr, ll ql, ll qr, ll x, vector<ll> &data)
{
	if (ql <= sl && sr <= qr)
	{
		data[id] += x;
		return;
	}
	ll m = (sl + sr) / 2;
	if (ql <= m)
		add(id * 2 + 1, sl, m, ql, qr, x, data);
	if (m < qr)
		add(id * 2 + 2, m + 1, sr, ql, qr, x, data);
}

ll get(ll id, ll sl, ll sr, ll p, vector<ll> &data)
{
	if (sl == sr)
		return data[id];
	ll m = (sl + sr) / 2;
	if (p <= m)
		return get(id * 2 + 1, sl, m, p, data) + data[id];
	return get(id * 2 + 2, m + 1, sr, p, data) + data[id];
}

void build(ll id, ll sl, ll sr, const vector<ll> &a, vector<ll> &data)
{
	if (sl == sr)
	{
		data[id] = a[sl];
		return;
	}
	ll m = (sl + sr) / 2;
	build(id * 2 + 1, sl, m, a, data);
	build(id * 2 + 2, m + 1, sr, a, data);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<ll> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	vector<ll> data(n * 4);
	build(0, 0, n - 1, a, data);
	int k;
	cin >> k;
	int s, l, r, x;
	for (int i = 0; i < k; i++)
	{
		cin >> s >> l;
		if (s == 0)
		{
			cout << get(0, 0, n - 1, l - 1, data) << '\n';
		}
		else
		{
			cin >> r >> x;
			add(0, 0, n - 1, l - 1, r - 1, x, data);
		}
	}
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void add(ll id, ll sl, ll sr, ll ql, ll qr, ll x, vector<ll> &data)
{
	if (ql <= sl && sr <= qr)
	{
		data[id] += x;
		return;
	}
	ll m = (sl + sr) / 2;
	if (ql <= m)
		add(id * 2 + 1, sl, m, ql, qr, x, data);
	if (m < qr)
		add(id * 2 + 2, m + 1, sr, ql, qr, x, data);
}

ll get(ll id, ll sl, ll sr, ll p, vector<ll> &data)
{
	if (sl == sr)
		return data[id];
	ll m = (sl + sr) / 2;
	if (p <= m)
		return get(id * 2 + 1, sl, m, p, data) + data[id];
	return get(id * 2 + 2, m + 1, sr, p, data) + data[id];
}

void build(ll id, ll sl, ll sr, const vector<ll> &a, vector<ll> &data)
{
	if (sl == sr)
	{
		data[id] = a[sl];
		return;
	}
	ll m = (sl + sr) / 2;
	build(id * 2 + 1, sl, m, a, data);
	build(id * 2 + 2, m + 1, sr, a, data);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<ll> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	vector<ll> data(n * 4);
	build(0, 0, n - 1, a, data);
	int k;
	cin >> k;
	int s, l, r, x;
	for (int i = 0; i < k; i++)
	{
		cin >> s >> l;
		if (s == 0)
		{
			cout << get(0, 0, n - 1, l - 1, data) << '\n';
		}
		else
		{
			cin >> r >> x;
			add(0, 0, n - 1, l - 1, r - 1, x, data);
		}
	}
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void add(ll id, ll sl, ll sr, ll ql, ll qr, ll x, vector<ll> &data)
{
	if (ql <= sl && sr <= qr)
	{
		data[id] += x;
		return;
	}
	ll m = (sl + sr) / 2;
	if (ql <= m)
		add(id * 2 + 1, sl, m, ql, qr, x, data);
	if (m < qr)
		add(id * 2 + 2, m + 1, sr, ql, qr, x, data);
}

ll get(ll id, ll sl, ll sr, ll p, vector<ll> &data)
{
	if (sl == sr)
		return data[id];
	ll m = (sl + sr) / 2;
	if (p <= m)
		return get(id * 2 + 1, sl, m, p, data) + data[id];
	return get(id * 2 + 2, m + 1, sr, p, data) + data[id];
}

void build(ll id, ll sl, ll sr, const vector<ll> &a, vector<ll> &data)
{
	if (sl == sr)
	{
		data[id] = a[sl];
		return;
	}
	ll m = (sl + sr) / 2;
	build(id * 2 + 1, sl, m, a, data);
	build(id * 2 + 2, m + 1, sr, a, data);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<ll> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	vector<ll> data(n * 4);
	build(0, 0, n - 1, a, data);
	int k;
	cin >> k;
	int s, l, r, x;
	for (int i = 0; i < k; i++)
	{
		cin >> s >> l;
		if (s == 0)
		{
			cout << get(0, 0, n - 1, l - 1, data) << '\n';
		}
		else
		{
			cin >> r >> x;
			add(0, 0, n - 1, l - 1, r - 1, x, data);
		}
	}
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void add(ll id, ll sl, ll sr, ll ql, ll qr, ll x, vector<ll> &data)
{
	if (ql <= sl && sr <= qr)
	{
		data[id] += x;
		return;
	}
	ll m = (sl + sr) / 2;
	if (ql <= m)
		add(id * 2 + 1, sl, m, ql, qr, x, data);
	if (m < qr)
		add(id * 2 + 2, m + 1, sr, ql, qr, x, data);
}

ll get(ll id, ll sl, ll sr, ll p, vector<ll> &data)
{
	if (sl == sr)
		return data[id];
	ll m = (sl + sr) / 2;
	if (p <= m)
		return get(id * 2 + 1, sl, m, p, data) + data[id];
	return get(id * 2 + 2, m + 1, sr, p, data) + data[id];
}

void build(ll id, ll sl, ll sr, const vector<ll> &a, vector<ll> &data)
{
	if (sl == sr)
	{
		data[id] = a[sl];
		return;
	}
	ll m = (sl + sr) / 2;
	build(id * 2 + 1, sl, m, a, data);
	build(id * 2 + 2, m + 1, sr, a, data);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<ll> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	vector<ll> data(n * 4);
	build(0, 0, n - 1, a, data);
	int k;
	cin >> k;
	int s, l, r, x;
	for (int i = 0; i < k; i++)
	{
		cin >> s >> l;
		if (s == 0)
		{
			cout << get(0, 0, n - 1, l - 1, data) << '\n';
		}
		else
		{
			cin >> r >> x;
			add(0, 0, n - 1, l - 1, r - 1, x, data);
		}
	}
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void add(ll id, ll sl, ll sr, ll ql, ll qr, ll x, vector<ll> &data)
{
	if (ql <= sl && sr <= qr)
	{
		data[id] += x;
		return;
	}
	ll m = (sl + sr) / 2;
	if (ql <= m)
		add(id * 2 + 1, sl, m, ql, qr, x, data);
	if (m < qr)
		add(id * 2 + 2, m + 1, sr, ql, qr, x, data);
}

ll get(ll id, ll sl, ll sr, ll p, vector<ll> &data)
{
	if (sl == sr)
		return data[id];
	ll m = (sl + sr) / 2;
	if (p <= m)
		return get(id * 2 + 1, sl, m, p, data) + data[id];
	return get(id * 2 + 2, m + 1, sr, p, data) + data[id];
}

void build(ll id, ll sl, ll sr, const vector<ll> &a, vector<ll> &data)
{
	if (sl == sr)
	{
		data[id] = a[sl];
		return;
	}
	ll m = (sl + sr) / 2;
	build(id * 2 + 1, sl, m, a, data);
	build(id * 2 + 2, m + 1, sr, a, data);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<ll> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	vector<ll> data(n * 4);
	build(0, 0, n - 1, a, data);
	int k;
	cin >> k;
	int s, l, r, x;
	for (int i = 0; i < k; i++)
	{
		cin >> s >> l;
		if (s == 0)
		{
			cout << get(0, 0, n - 1, l - 1, data) << '\n';
		}
		else
		{
			cin >> r >> x;
			add(0, 0, n - 1, l - 1, r - 1, x, data);
		}
	}
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void add(ll id, ll sl, ll sr, ll ql, ll qr, ll x, vector<ll> &data)
{
	if (ql <= sl && sr <= qr)
	{
		data[id] += x;
		return;
	}
	ll m = (sl + sr) / 2;
	if (ql <= m)
		add(id * 2 + 1, sl, m, ql, qr, x, data);
	if (m < qr)
		add(id * 2 + 2, m + 1, sr, ql, qr, x, data);
}

ll get(ll id, ll sl, ll sr, ll p, vector<ll> &data)
{
	if (sl == sr)
		return data[id];
	ll m = (sl + sr) / 2;
	if (p <= m)
		return get(id * 2 + 1, sl, m, p, data) + data[id];
	return get(id * 2 + 2, m + 1, sr, p, data) + data[id];
}

void build(ll id, ll sl, ll sr, const vector<ll> &a, vector<ll> &data)
{
	if (sl == sr)
	{
		data[id] = a[sl];
		return;
	}
	ll m = (sl + sr) / 2;
	build(id * 2 + 1, sl, m, a, data);
	build(id * 2 + 2, m + 1, sr, a, data);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<ll> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	vector<ll> data(n * 4);
	build(0, 0, n - 1, a, data);
	int k;
	cin >> k;
	int s, l, r, x;
	for (int i = 0; i < k; i++)
	{
		cin >> s >> l;
		if (s == 0)
		{
			cout << get(0, 0, n - 1, l - 1, data) << '\n';
		}
		else
		{
			cin >> r >> x;
			add(0, 0, n - 1, l - 1, r - 1, x, data);
		}
	}
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void add(ll id, ll sl, ll sr, ll ql, ll qr, ll x, vector<ll> &data)
{
	if (ql <= sl && sr <= qr)
	{
		data[id] += x;
		return;
	}
	ll m = (sl + sr) / 2;
	if (ql <= m)
		add(id * 2 + 1, sl, m, ql, qr, x, data);
	if (m < qr)
		add(id * 2 + 2, m + 1, sr, ql, qr, x, data);
}

ll get(ll id, ll sl, ll sr, ll p, vector<ll> &data)
{
	if (sl == sr)
		return data[id];
	ll m = (sl + sr) / 2;
	if (p <= m)
		return get(id * 2 + 1, sl, m, p, data) + data[id];
	return get(id * 2 + 2, m + 1, sr, p, data) + data[id];
}

void build(ll id, ll sl, ll sr, const vector<ll> &a, vector<ll> &data)
{
	if (sl == sr)
	{
		data[id] = a[sl];
		return;
	}
	ll m = (sl + sr) / 2;
	build(id * 2 + 1, sl, m, a, data);
	build(id * 2 + 2, m + 1, sr, a, data);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<ll> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	vector<ll> data(n * 4);
	build(0, 0, n - 1, a, data);
	int k;
	cin >> k;
	int s, l, r, x;
	for (int i = 0; i < k; i++)
	{
		cin >> s >> l;
		if (s == 0)
		{
			cout << get(0, 0, n - 1, l - 1, data) << '\n';
		}
		else
		{
			cin >> r >> x;
			add(0, 0, n - 1, l - 1, r - 1, x, data);
		}
	}
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void add(ll id, ll sl, ll sr, ll ql, ll qr, ll x, vector<ll> &data)
{
	if (ql <= sl && sr <= qr)
	{
		data[id] += x;
		return;
	}
	ll m = (sl + sr) / 2;
	if (ql <= m)
		add(id * 2 + 1, sl, m, ql, qr, x, data);
	if (m < qr)
		add(id * 2 + 2, m + 1, sr, ql, qr, x, data);
}

ll get(ll id, ll sl, ll sr, ll p, vector<ll> &data)
{
	if (sl == sr)
		return data[id];
	ll m = (sl + sr) / 2;
	if (p <= m)
		return get(id * 2 + 1, sl, m, p, data) + data[id];
	return get(id * 2 + 2, m + 1, sr, p, data) + data[id];
}

void build(ll id, ll sl, ll sr, const vector<ll> &a, vector<ll> &data)
{
	if (sl == sr)
	{
		data[id] = a[sl];
		return;
	}
	ll m = (sl + sr) / 2;
	build(id * 2 + 1, sl, m, a, data);
	build(id * 2 + 2, m + 1, sr, a, data);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<ll> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	vector<ll> data(n * 4);
	build(0, 0, n - 1, a, data);
	int k;
	cin >> k;
	int s, l, r, x;
	for (int i = 0; i < k; i++)
	{
		cin >> s >> l;
		if (s == 0)
		{
			cout << get(0, 0, n - 1, l - 1, data) << '\n';
		}
		else
		{
			cin >> r >> x;
			add(0, 0, n - 1, l - 1, r - 1, x, data);
		}
	}
}
