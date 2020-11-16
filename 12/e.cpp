#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
vector<vector<ll>> c;
ll dp(ll last, ll mask, vector<vector<ll>> &memo, vector<vector<ll>> c)
{
	if (memo[last][mask] != -1)
		return memo[last][mask];
	ll res = ULLONG_MAX;
	ll prev_mask = mask ^ (1 << last);
	for (ll i = 0; i < n; i++)
	{
		if (prev_mask & (1 << i))
		{
			res = min(res, dp(i, prev_mask, memo, c) + c[i][last]);
		}
	}
	memo[last][mask] = res;
	return res;
}
int main()
{

	cin >> n;
	if (n == 1)
	{
		cout << 0;
		return 0;
	}
	vector<vector<ll>> c(n, vector<ll>(n));
	for (ll i = 0; i < n; i++)
	{
		for (ll j = 0; j < n; j++)
		{
			cin >> c[i][j];
		}
	}
	ll res = ULLONG_MAX;
	vector<vector<ll>> memo(n, vector<ll>(1 << n, -1));

	for (ll last = 0; last < n; last++)
	{
		res = min(res, dp(last, (1 << n) - 1, memo, c));
	}

	cout << res;
	return 0;
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
		return get(id * 2 + 1, sl, m, ql, qr) + get(id * 2 + 2, m + 1, sr, ql, qr);
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
		data[id] = data[id * 2 + 1] + data[id * 2 + 2];
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
	bool chet;
	ll n;
	cin >> n;
	if (n % 2 == 0)
	{
		chet = true;
	}
	else
	{
		chet = false;
		n--;
	}
	segtree st(n);
	ll tmp;
	for (ll i = 0; i < n; i++)
	{
		cin >> tmp;
		st.set(i, tmp);
	}
	ll dop;
	if (!chet)
		cin >> dop;
	ll q, c, x, y;
	cin >> q;
	for (ll i = 0; i < q; i++)
	{
		cin >> c >> x >> y;
		if (c)
		{
			if (x - 1 != n)
				st.set(x - 1, y);
			else
				dop += y;
		}
		else
		{
			if (y - 1 != n)
				cout << st.get(x - 1, y - 1) << '\n';
			else
				cout << st.get(x - 1, y - 2) + dop << '\n';
		}
	}

	return 0;
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
		return get(id * 2 + 1, sl, m, ql, qr) + get(id * 2 + 2, m + 1, sr, ql, qr);
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
		data[id] = data[id * 2 + 1] + data[id * 2 + 2];
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
	bool chet;
	ll n;
	cin >> n;
	if (n % 2 == 0)
	{
		chet = true;
	}
	else
	{
		chet = false;
		n--;
	}
	segtree st(n);
	ll tmp;
	for (ll i = 0; i < n; i++)
	{
		cin >> tmp;
		st.set(i, tmp);
	}
	ll dop;
	if (!chet)
		cin >> dop;
	ll q, c, x, y;
	cin >> q;
	for (ll i = 0; i < q; i++)
	{
		cin >> c >> x >> y;
		if (c)
		{
			if (x - 1 != n)
				st.set(x - 1, y);
			else
				dop += y;
		}
		else
		{
			if (y - 1 != n)
				cout << st.get(x - 1, y - 1) << '\n';
			else
				cout << st.get(x - 1, y - 2) + dop << '\n';
		}
	}

	return 0;
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
		return get(id * 2 + 1, sl, m, ql, qr) + get(id * 2 + 2, m + 1, sr, ql, qr);
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
		data[id] = data[id * 2 + 1] + data[id * 2 + 2];
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
	bool chet;
	ll n;
	cin >> n;
	if (n % 2 == 0)
	{
		chet = true;
	}
	else
	{
		chet = false;
		n--;
	}
	segtree st(n);
	ll tmp;
	for (ll i = 0; i < n; i++)
	{
		cin >> tmp;
		st.set(i, tmp);
	}
	ll dop;
	if (!chet)
		cin >> dop;
	ll q, c, x, y;
	cin >> q;
	for (ll i = 0; i < q; i++)
	{
		cin >> c >> x >> y;
		if (c)
		{
			if (x - 1 != n)
				st.set(x - 1, y);
			else
				dop += y;
		}
		else
		{
			if (y - 1 != n)
				cout << st.get(x - 1, y - 1) << '\n';
			else
				cout << st.get(x - 1, y - 2) + dop << '\n';
		}
	}

	return 0;
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
		return get(id * 2 + 1, sl, m, ql, qr) + get(id * 2 + 2, m + 1, sr, ql, qr);
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
		data[id] = data[id * 2 + 1] + data[id * 2 + 2];
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
	bool chet;
	ll n;
	cin >> n;
	if (n % 2 == 0)
	{
		chet = true;
	}
	else
	{
		chet = false;
		n--;
	}
	segtree st(n);
	ll tmp;
	for (ll i = 0; i < n; i++)
	{
		cin >> tmp;
		st.set(i, tmp);
	}
	ll dop;
	if (!chet)
		cin >> dop;
	ll q, c, x, y;
	cin >> q;
	for (ll i = 0; i < q; i++)
	{
		cin >> c >> x >> y;
		if (c)
		{
			if (x - 1 != n)
				st.set(x - 1, y);
			else
				dop += y;
		}
		else
		{
			if (y - 1 != n)
				cout << st.get(x - 1, y - 1) << '\n';
			else
				cout << st.get(x - 1, y - 2) + dop << '\n';
		}
	}

	return 0;
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
		return get(id * 2 + 1, sl, m, ql, qr) + get(id * 2 + 2, m + 1, sr, ql, qr);
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
		data[id] = data[id * 2 + 1] + data[id * 2 + 2];
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
	bool chet;
	ll n;
	cin >> n;
	if (n % 2 == 0)
	{
		chet = true;
	}
	else
	{
		chet = false;
		n--;
	}
	segtree st(n);
	ll tmp;
	for (ll i = 0; i < n; i++)
	{
		cin >> tmp;
		st.set(i, tmp);
	}
	ll dop;
	if (!chet)
		cin >> dop;
	ll q, c, x, y;
	cin >> q;
	for (ll i = 0; i < q; i++)
	{
		cin >> c >> x >> y;
		if (c)
		{
			if (x - 1 != n)
				st.set(x - 1, y);
			else
				dop += y;
		}
		else
		{
			if (y - 1 != n)
				cout << st.get(x - 1, y - 1) << '\n';
			else
				cout << st.get(x - 1, y - 2) + dop << '\n';
		}
	}

	return 0;
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
		return get(id * 2 + 1, sl, m, ql, qr) + get(id * 2 + 2, m + 1, sr, ql, qr);
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
		data[id] = data[id * 2 + 1] + data[id * 2 + 2];
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
	bool chet;
	ll n;
	cin >> n;
	if (n % 2 == 0)
	{
		chet = true;
	}
	else
	{
		chet = false;
		n--;
	}
	segtree st(n);
	ll tmp;
	for (ll i = 0; i < n; i++)
	{
		cin >> tmp;
		st.set(i, tmp);
	}
	ll dop;
	if (!chet)
		cin >> dop;
	ll q, c, x, y;
	cin >> q;
	for (ll i = 0; i < q; i++)
	{
		cin >> c >> x >> y;
		if (c)
		{
			if (x - 1 != n)
				st.set(x - 1, y);
			else
				dop += y;
		}
		else
		{
			if (y - 1 != n)
				cout << st.get(x - 1, y - 1) << '\n';
			else
				cout << st.get(x - 1, y - 2) + dop << '\n';
		}
	}

	return 0;
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
		return get(id * 2 + 1, sl, m, ql, qr) + get(id * 2 + 2, m + 1, sr, ql, qr);
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
		data[id] = data[id * 2 + 1] + data[id * 2 + 2];
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
	bool chet;
	ll n;
	cin >> n;
	if (n % 2 == 0)
	{
		chet = true;
	}
	else
	{
		chet = false;
		n--;
	}
	segtree st(n);
	ll tmp;
	for (ll i = 0; i < n; i++)
	{
		cin >> tmp;
		st.set(i, tmp);
	}
	ll dop;
	if (!chet)
		cin >> dop;
	ll q, c, x, y;
	cin >> q;
	for (ll i = 0; i < q; i++)
	{
		cin >> c >> x >> y;
		if (c)
		{
			if (x - 1 != n)
				st.set(x - 1, y);
			else
				dop += y;
		}
		else
		{
			if (y - 1 != n)
				cout << st.get(x - 1, y - 1) << '\n';
			else
				cout << st.get(x - 1, y - 2) + dop << '\n';
		}
	}

	return 0;
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
		return get(id * 2 + 1, sl, m, ql, qr) + get(id * 2 + 2, m + 1, sr, ql, qr);
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
		data[id] = data[id * 2 + 1] + data[id * 2 + 2];
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
	bool chet;
	ll n;
	cin >> n;
	if (n % 2 == 0)
	{
		chet = true;
	}
	else
	{
		chet = false;
		n--;
	}
	segtree st(n);
	ll tmp;
	for (ll i = 0; i < n; i++)
	{
		cin >> tmp;
		st.set(i, tmp);
	}
	ll dop;
	if (!chet)
		cin >> dop;
	ll q, c, x, y;
	cin >> q;
	for (ll i = 0; i < q; i++)
	{
		cin >> c >> x >> y;
		if (c)
		{
			if (x - 1 != n)
				st.set(x - 1, y);
			else
				dop += y;
		}
		else
		{
			if (y - 1 != n)
				cout << st.get(x - 1, y - 1) << '\n';
			else
				cout << st.get(x - 1, y - 2) + dop << '\n';
		}
	}

	return 0;
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
		return get(id * 2 + 1, sl, m, ql, qr) + get(id * 2 + 2, m + 1, sr, ql, qr);
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
		data[id] = data[id * 2 + 1] + data[id * 2 + 2];
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
	bool chet;
	ll n;
	cin >> n;
	if (n % 2 == 0)
	{
		chet = true;
	}
	else
	{
		chet = false;
		n--;
	}
	segtree st(n);
	ll tmp;
	for (ll i = 0; i < n; i++)
	{
		cin >> tmp;
		st.set(i, tmp);
	}
	ll dop;
	if (!chet)
		cin >> dop;
	ll q, c, x, y;
	cin >> q;
	for (ll i = 0; i < q; i++)
	{
		cin >> c >> x >> y;
		if (c)
		{
			if (x - 1 != n)
				st.set(x - 1, y);
			else
				dop += y;
		}
		else
		{
			if (y - 1 != n)
				cout << st.get(x - 1, y - 1) << '\n';
			else
				cout << st.get(x - 1, y - 2) + dop << '\n';
		}
	}

	return 0;
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
		return get(id * 2 + 1, sl, m, ql, qr) + get(id * 2 + 2, m + 1, sr, ql, qr);
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
		data[id] = data[id * 2 + 1] + data[id * 2 + 2];
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
	bool chet;
	ll n;
	cin >> n;
	if (n % 2 == 0)
	{
		chet = true;
	}
	else
	{
		chet = false;
		n--;
	}
	segtree st(n);
	ll tmp;
	for (ll i = 0; i < n; i++)
	{
		cin >> tmp;
		st.set(i, tmp);
	}
	ll dop;
	if (!chet)
		cin >> dop;
	ll q, c, x, y;
	cin >> q;
	for (ll i = 0; i < q; i++)
	{
		cin >> c >> x >> y;
		if (c)
		{
			if (x - 1 != n)
				st.set(x - 1, y);
			else
				dop += y;
		}
		else
		{
			if (y - 1 != n)
				cout << st.get(x - 1, y - 1) << '\n';
			else
				cout << st.get(x - 1, y - 2) + dop << '\n';
		}
	}

	return 0;
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
		return get(id * 2 + 1, sl, m, ql, qr) + get(id * 2 + 2, m + 1, sr, ql, qr);
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
		data[id] = data[id * 2 + 1] + data[id * 2 + 2];
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
	bool chet;
	ll n;
	cin >> n;
	if (n % 2 == 0)
	{
		chet = true;
	}
	else
	{
		chet = false;
		n--;
	}
	segtree st(n);
	ll tmp;
	for (ll i = 0; i < n; i++)
	{
		cin >> tmp;
		st.set(i, tmp);
	}
	ll dop;
	if (!chet)
		cin >> dop;
	ll q, c, x, y;
	cin >> q;
	for (ll i = 0; i < q; i++)
	{
		cin >> c >> x >> y;
		if (c)
		{
			if (x - 1 != n)
				st.set(x - 1, y);
			else
				dop += y;
		}
		else
		{
			if (y - 1 != n)
				cout << st.get(x - 1, y - 1) << '\n';
			else
				cout << st.get(x - 1, y - 2) + dop << '\n';
		}
	}

	return 0;
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
		return get(id * 2 + 1, sl, m, ql, qr) + get(id * 2 + 2, m + 1, sr, ql, qr);
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
		data[id] = data[id * 2 + 1] + data[id * 2 + 2];
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
	bool chet;
	ll n;
	cin >> n;
	if (n % 2 == 0)
	{
		chet = true;
	}
	else
	{
		chet = false;
		n--;
	}
	segtree st(n);
	ll tmp;
	for (ll i = 0; i < n; i++)
	{
		cin >> tmp;
		st.set(i, tmp);
	}
	ll dop;
	if (!chet)
		cin >> dop;
	ll q, c, x, y;
	cin >> q;
	for (ll i = 0; i < q; i++)
	{
		cin >> c >> x >> y;
		if (c)
		{
			if (x - 1 != n)
				st.set(x - 1, y);
			else
				dop += y;
		}
		else
		{
			if (y - 1 != n)
				cout << st.get(x - 1, y - 1) << '\n';
			else
				cout << st.get(x - 1, y - 2) + dop << '\n';
		}
	}

	return 0;
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
		return get(id * 2 + 1, sl, m, ql, qr) + get(id * 2 + 2, m + 1, sr, ql, qr);
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
		data[id] = data[id * 2 + 1] + data[id * 2 + 2];
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
	bool chet;
	ll n;
	cin >> n;
	if (n % 2 == 0)
	{
		chet = true;
	}
	else
	{
		chet = false;
		n--;
	}
	segtree st(n);
	ll tmp;
	for (ll i = 0; i < n; i++)
	{
		cin >> tmp;
		st.set(i, tmp);
	}
	ll dop;
	if (!chet)
		cin >> dop;
	ll q, c, x, y;
	cin >> q;
	for (ll i = 0; i < q; i++)
	{
		cin >> c >> x >> y;
		if (c)
		{
			if (x - 1 != n)
				st.set(x - 1, y);
			else
				dop += y;
		}
		else
		{
			if (y - 1 != n)
				cout << st.get(x - 1, y - 1) << '\n';
			else
				cout << st.get(x - 1, y - 2) + dop << '\n';
		}
	}

	return 0;
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
		return get(id * 2 + 1, sl, m, ql, qr) + get(id * 2 + 2, m + 1, sr, ql, qr);
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
		data[id] = data[id * 2 + 1] + data[id * 2 + 2];
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
	bool chet;
	ll n;
	cin >> n;
	if (n % 2 == 0)
	{
		chet = true;
	}
	else
	{
		chet = false;
		n--;
	}
	segtree st(n);
	ll tmp;
	for (ll i = 0; i < n; i++)
	{
		cin >> tmp;
		st.set(i, tmp);
	}
	ll dop;
	if (!chet)
		cin >> dop;
	ll q, c, x, y;
	cin >> q;
	for (ll i = 0; i < q; i++)
	{
		cin >> c >> x >> y;
		if (c)
		{
			if (x - 1 != n)
				st.set(x - 1, y);
			else
				dop += y;
		}
		else
		{
			if (y - 1 != n)
				cout << st.get(x - 1, y - 1) << '\n';
			else
				cout << st.get(x - 1, y - 2) + dop << '\n';
		}
	}

	return 0;
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
		return get(id * 2 + 1, sl, m, ql, qr) + get(id * 2 + 2, m + 1, sr, ql, qr);
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
		data[id] = data[id * 2 + 1] + data[id * 2 + 2];
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
	bool chet;
	ll n;
	cin >> n;
	if (n % 2 == 0)
	{
		chet = true;
	}
	else
	{
		chet = false;
		n--;
	}
	segtree st(n);
	ll tmp;
	for (ll i = 0; i < n; i++)
	{
		cin >> tmp;
		st.set(i, tmp);
	}
	ll dop;
	if (!chet)
		cin >> dop;
	ll q, c, x, y;
	cin >> q;
	for (ll i = 0; i < q; i++)
	{
		cin >> c >> x >> y;
		if (c)
		{
			if (x - 1 != n)
				st.set(x - 1, y);
			else
				dop += y;
		}
		else
		{
			if (y - 1 != n)
				cout << st.get(x - 1, y - 1) << '\n';
			else
				cout << st.get(x - 1, y - 2) + dop << '\n';
		}
	}

	return 0;
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
		return get(id * 2 + 1, sl, m, ql, qr) + get(id * 2 + 2, m + 1, sr, ql, qr);
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
		data[id] = data[id * 2 + 1] + data[id * 2 + 2];
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
	bool chet;
	ll n;
	cin >> n;
	if (n % 2 == 0)
	{
		chet = true;
	}
	else
	{
		chet = false;
		n--;
	}
	segtree st(n);
	ll tmp;
	for (ll i = 0; i < n; i++)
	{
		cin >> tmp;
		st.set(i, tmp);
	}
	ll dop;
	if (!chet)
		cin >> dop;
	ll q, c, x, y;
	cin >> q;
	for (ll i = 0; i < q; i++)
	{
		cin >> c >> x >> y;
		if (c)
		{
			if (x - 1 != n)
				st.set(x - 1, y);
			else
				dop += y;
		}
		else
		{
			if (y - 1 != n)
				cout << st.get(x - 1, y - 1) << '\n';
			else
				cout << st.get(x - 1, y - 2) + dop << '\n';
		}
	}

	return 0;
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
		return get(id * 2 + 1, sl, m, ql, qr) + get(id * 2 + 2, m + 1, sr, ql, qr);
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
		data[id] = data[id * 2 + 1] + data[id * 2 + 2];
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
	bool chet;
	ll n;
	cin >> n;
	if (n % 2 == 0)
	{
		chet = true;
	}
	else
	{
		chet = false;
		n--;
	}
	segtree st(n);
	ll tmp;
	for (ll i = 0; i < n; i++)
	{
		cin >> tmp;
		st.set(i, tmp);
	}
	ll dop;
	if (!chet)
		cin >> dop;
	ll q, c, x, y;
	cin >> q;
	for (ll i = 0; i < q; i++)
	{
		cin >> c >> x >> y;
		if (c)
		{
			if (x - 1 != n)
				st.set(x - 1, y);
			else
				dop += y;
		}
		else
		{
			if (y - 1 != n)
				cout << st.get(x - 1, y - 1) << '\n';
			else
				cout << st.get(x - 1, y - 2) + dop << '\n';
		}
	}

	return 0;
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
		return get(id * 2 + 1, sl, m, ql, qr) + get(id * 2 + 2, m + 1, sr, ql, qr);
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
		data[id] = data[id * 2 + 1] + data[id * 2 + 2];
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
	bool chet;
	ll n;
	cin >> n;
	if (n % 2 == 0)
	{
		chet = true;
	}
	else
	{
		chet = false;
		n--;
	}
	segtree st(n);
	ll tmp;
	for (ll i = 0; i < n; i++)
	{
		cin >> tmp;
		st.set(i, tmp);
	}
	ll dop;
	if (!chet)
		cin >> dop;
	ll q, c, x, y;
	cin >> q;
	for (ll i = 0; i < q; i++)
	{
		cin >> c >> x >> y;
		if (c)
		{
			if (x - 1 != n)
				st.set(x - 1, y);
			else
				dop += y;
		}
		else
		{
			if (y - 1 != n)
				cout << st.get(x - 1, y - 1) << '\n';
			else
				cout << st.get(x - 1, y - 2) + dop << '\n';
		}
	}

	return 0;
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
		return get(id * 2 + 1, sl, m, ql, qr) + get(id * 2 + 2, m + 1, sr, ql, qr);
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
		data[id] = data[id * 2 + 1] + data[id * 2 + 2];
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
	bool chet;
	ll n;
	cin >> n;
	if (n % 2 == 0)
	{
		chet = true;
	}
	else
	{
		chet = false;
		n--;
	}
	segtree st(n);
	ll tmp;
	for (ll i = 0; i < n; i++)
	{
		cin >> tmp;
		st.set(i, tmp);
	}
	ll dop;
	if (!chet)
		cin >> dop;
	ll q, c, x, y;
	cin >> q;
	for (ll i = 0; i < q; i++)
	{
		cin >> c >> x >> y;
		if (c)
		{
			if (x - 1 != n)
				st.set(x - 1, y);
			else
				dop += y;
		}
		else
		{
			if (y - 1 != n)
				cout << st.get(x - 1, y - 1) << '\n';
			else
				cout << st.get(x - 1, y - 2) + dop << '\n';
		}
	}

	return 0;
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
		return get(id * 2 + 1, sl, m, ql, qr) + get(id * 2 + 2, m + 1, sr, ql, qr);
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
		data[id] = data[id * 2 + 1] + data[id * 2 + 2];
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
	bool chet;
	ll n;
	cin >> n;
	if (n % 2 == 0)
	{
		chet = true;
	}
	else
	{
		chet = false;
		n--;
	}
	segtree st(n);
	ll tmp;
	for (ll i = 0; i < n; i++)
	{
		cin >> tmp;
		st.set(i, tmp);
	}
	ll dop;
	if (!chet)
		cin >> dop;
	ll q, c, x, y;
	cin >> q;
	for (ll i = 0; i < q; i++)
	{
		cin >> c >> x >> y;
		if (c)
		{
			if (x - 1 != n)
				st.set(x - 1, y);
			else
				dop += y;
		}
		else
		{
			if (y - 1 != n)
				cout << st.get(x - 1, y - 1) << '\n';
			else
				cout << st.get(x - 1, y - 2) + dop << '\n';
		}
	}

	return 0;
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
		return get(id * 2 + 1, sl, m, ql, qr) + get(id * 2 + 2, m + 1, sr, ql, qr);
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
		data[id] = data[id * 2 + 1] + data[id * 2 + 2];
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
	bool chet;
	ll n;
	cin >> n;
	if (n % 2 == 0)
	{
		chet = true;
	}
	else
	{
		chet = false;
		n--;
	}
	segtree st(n);
	ll tmp;
	for (ll i = 0; i < n; i++)
	{
		cin >> tmp;
		st.set(i, tmp);
	}
	ll dop;
	if (!chet)
		cin >> dop;
	ll q, c, x, y;
	cin >> q;
	for (ll i = 0; i < q; i++)
	{
		cin >> c >> x >> y;
		if (c)
		{
			if (x - 1 != n)
				st.set(x - 1, y);
			else
				dop += y;
		}
		else
		{
			if (y - 1 != n)
				cout << st.get(x - 1, y - 1) << '\n';
			else
				cout << st.get(x - 1, y - 2) + dop << '\n';
		}
	}

	return 0;
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
		return get(id * 2 + 1, sl, m, ql, qr) + get(id * 2 + 2, m + 1, sr, ql, qr);
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
		data[id] = data[id * 2 + 1] + data[id * 2 + 2];
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
	bool chet;
	ll n;
	cin >> n;
	if (n % 2 == 0)
	{
		chet = true;
	}
	else
	{
		chet = false;
		n--;
	}
	segtree st(n);
	ll tmp;
	for (ll i = 0; i < n; i++)
	{
		cin >> tmp;
		st.set(i, tmp);
	}
	ll dop;
	if (!chet)
		cin >> dop;
	ll q, c, x, y;
	cin >> q;
	for (ll i = 0; i < q; i++)
	{
		cin >> c >> x >> y;
		if (c)
		{
			if (x - 1 != n)
				st.set(x - 1, y);
			else
				dop += y;
		}
		else
		{
			if (y - 1 != n)
				cout << st.get(x - 1, y - 1) << '\n';
			else
				cout << st.get(x - 1, y - 2) + dop << '\n';
		}
	}

	return 0;
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
		return get(id * 2 + 1, sl, m, ql, qr) + get(id * 2 + 2, m + 1, sr, ql, qr);
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
		data[id] = data[id * 2 + 1] + data[id * 2 + 2];
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
	bool chet;
	ll n;
	cin >> n;
	if (n % 2 == 0)
	{
		chet = true;
	}
	else
	{
		chet = false;
		n--;
	}
	segtree st(n);
	ll tmp;
	for (ll i = 0; i < n; i++)
	{
		cin >> tmp;
		st.set(i, tmp);
	}
	ll dop;
	if (!chet)
		cin >> dop;
	ll q, c, x, y;
	cin >> q;
	for (ll i = 0; i < q; i++)
	{
		cin >> c >> x >> y;
		if (c)
		{
			if (x - 1 != n)
				st.set(x - 1, y);
			else
				dop += y;
		}
		else
		{
			if (y - 1 != n)
				cout << st.get(x - 1, y - 1) << '\n';
			else
				cout << st.get(x - 1, y - 2) + dop << '\n';
		}
	}

	return 0;
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
		return get(id * 2 + 1, sl, m, ql, qr) + get(id * 2 + 2, m + 1, sr, ql, qr);
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
		data[id] = data[id * 2 + 1] + data[id * 2 + 2];
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
	bool chet;
	ll n;
	cin >> n;
	if (n % 2 == 0)
	{
		chet = true;
	}
	else
	{
		chet = false;
		n--;
	}
	segtree st(n);
	ll tmp;
	for (ll i = 0; i < n; i++)
	{
		cin >> tmp;
		st.set(i, tmp);
	}
	ll dop;
	if (!chet)
		cin >> dop;
	ll q, c, x, y;
	cin >> q;
	for (ll i = 0; i < q; i++)
	{
		cin >> c >> x >> y;
		if (c)
		{
			if (x - 1 != n)
				st.set(x - 1, y);
			else
				dop += y;
		}
		else
		{
			if (y - 1 != n)
				cout << st.get(x - 1, y - 1) << '\n';
			else
				cout << st.get(x - 1, y - 2) + dop << '\n';
		}
	}

	return 0;
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
		return get(id * 2 + 1, sl, m, ql, qr) + get(id * 2 + 2, m + 1, sr, ql, qr);
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
		data[id] = data[id * 2 + 1] + data[id * 2 + 2];
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
	bool chet;
	ll n;
	cin >> n;
	if (n % 2 == 0)
	{
		chet = true;
	}
	else
	{
		chet = false;
		n--;
	}
	segtree st(n);
	ll tmp;
	for (ll i = 0; i < n; i++)
	{
		cin >> tmp;
		st.set(i, tmp);
	}
	ll dop;
	if (!chet)
		cin >> dop;
	ll q, c, x, y;
	cin >> q;
	for (ll i = 0; i < q; i++)
	{
		cin >> c >> x >> y;
		if (c)
		{
			if (x - 1 != n)
				st.set(x - 1, y);
			else
				dop += y;
		}
		else
		{
			if (y - 1 != n)
				cout << st.get(x - 1, y - 1) << '\n';
			else
				cout << st.get(x - 1, y - 2) + dop << '\n';
		}
	}

	return 0;
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
		return get(id * 2 + 1, sl, m, ql, qr) + get(id * 2 + 2, m + 1, sr, ql, qr);
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
		data[id] = data[id * 2 + 1] + data[id * 2 + 2];
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
	bool chet;
	ll n;
	cin >> n;
	if (n % 2 == 0)
	{
		chet = true;
	}
	else
	{
		chet = false;
		n--;
	}
	segtree st(n);
	ll tmp;
	for (ll i = 0; i < n; i++)
	{
		cin >> tmp;
		st.set(i, tmp);
	}
	ll dop;
	if (!chet)
		cin >> dop;
	ll q, c, x, y;
	cin >> q;
	for (ll i = 0; i < q; i++)
	{
		cin >> c >> x >> y;
		if (c)
		{
			if (x - 1 != n)
				st.set(x - 1, y);
			else
				dop += y;
		}
		else
		{
			if (y - 1 != n)
				cout << st.get(x - 1, y - 1) << '\n';
			else
				cout << st.get(x - 1, y - 2) + dop << '\n';
		}
	}

	return 0;
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
		return get(id * 2 + 1, sl, m, ql, qr) + get(id * 2 + 2, m + 1, sr, ql, qr);
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
		data[id] = data[id * 2 + 1] + data[id * 2 + 2];
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
	bool chet;
	ll n;
	cin >> n;
	if (n % 2 == 0)
	{
		chet = true;
	}
	else
	{
		chet = false;
		n--;
	}
	segtree st(n);
	ll tmp;
	for (ll i = 0; i < n; i++)
	{
		cin >> tmp;
		st.set(i, tmp);
	}
	ll dop;
	if (!chet)
		cin >> dop;
	ll q, c, x, y;
	cin >> q;
	for (ll i = 0; i < q; i++)
	{
		cin >> c >> x >> y;
		if (c)
		{
			if (x - 1 != n)
				st.set(x - 1, y);
			else
				dop += y;
		}
		else
		{
			if (y - 1 != n)
				cout << st.get(x - 1, y - 1) << '\n';
			else
				cout << st.get(x - 1, y - 2) + dop << '\n';
		}
	}

	return 0;
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
		return get(id * 2 + 1, sl, m, ql, qr) + get(id * 2 + 2, m + 1, sr, ql, qr);
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
		data[id] = data[id * 2 + 1] + data[id * 2 + 2];
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
	bool chet;
	ll n;
	cin >> n;
	if (n % 2 == 0)
	{
		chet = true;
	}
	else
	{
		chet = false;
		n--;
	}
	segtree st(n);
	ll tmp;
	for (ll i = 0; i < n; i++)
	{
		cin >> tmp;
		st.set(i, tmp);
	}
	ll dop;
	if (!chet)
		cin >> dop;
	ll q, c, x, y;
	cin >> q;
	for (ll i = 0; i < q; i++)
	{
		cin >> c >> x >> y;
		if (c)
		{
			if (x - 1 != n)
				st.set(x - 1, y);
			else
				dop += y;
		}
		else
		{
			if (y - 1 != n)
				cout << st.get(x - 1, y - 1) << '\n';
			else
				cout << st.get(x - 1, y - 2) + dop << '\n';
		}
	}

	return 0;
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
		return get(id * 2 + 1, sl, m, ql, qr) + get(id * 2 + 2, m + 1, sr, ql, qr);
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
		data[id] = data[id * 2 + 1] + data[id * 2 + 2];
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
	bool chet;
	ll n;
	cin >> n;
	if (n % 2 == 0)
	{
		chet = true;
	}
	else
	{
		chet = false;
		n--;
	}
	segtree st(n);
	ll tmp;
	for (ll i = 0; i < n; i++)
	{
		cin >> tmp;
		st.set(i, tmp);
	}
	ll dop;
	if (!chet)
		cin >> dop;
	ll q, c, x, y;
	cin >> q;
	for (ll i = 0; i < q; i++)
	{
		cin >> c >> x >> y;
		if (c)
		{
			if (x - 1 != n)
				st.set(x - 1, y);
			else
				dop += y;
		}
		else
		{
			if (y - 1 != n)
				cout << st.get(x - 1, y - 1) << '\n';
			else
				cout << st.get(x - 1, y - 2) + dop << '\n';
		}
	}

	return 0;
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
		return get(id * 2 + 1, sl, m, ql, qr) + get(id * 2 + 2, m + 1, sr, ql, qr);
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
		data[id] = data[id * 2 + 1] + data[id * 2 + 2];
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
	bool chet;
	ll n;
	cin >> n;
	if (n % 2 == 0)
	{
		chet = true;
	}
	else
	{
		chet = false;
		n--;
	}
	segtree st(n);
	ll tmp;
	for (ll i = 0; i < n; i++)
	{
		cin >> tmp;
		st.set(i, tmp);
	}
	ll dop;
	if (!chet)
		cin >> dop;
	ll q, c, x, y;
	cin >> q;
	for (ll i = 0; i < q; i++)
	{
		cin >> c >> x >> y;
		if (c)
		{
			if (x - 1 != n)
				st.set(x - 1, y);
			else
				dop += y;
		}
		else
		{
			if (y - 1 != n)
				cout << st.get(x - 1, y - 1) << '\n';
			else
				cout << st.get(x - 1, y - 2) + dop << '\n';
		}
	}

	return 0;
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
		return get(id * 2 + 1, sl, m, ql, qr) + get(id * 2 + 2, m + 1, sr, ql, qr);
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
		data[id] = data[id * 2 + 1] + data[id * 2 + 2];
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
	bool chet;
	ll n;
	cin >> n;
	if (n % 2 == 0)
	{
		chet = true;
	}
	else
	{
		chet = false;
		n--;
	}
	segtree st(n);
	ll tmp;
	for (ll i = 0; i < n; i++)
	{
		cin >> tmp;
		st.set(i, tmp);
	}
	ll dop;
	if (!chet)
		cin >> dop;
	ll q, c, x, y;
	cin >> q;
	for (ll i = 0; i < q; i++)
	{
		cin >> c >> x >> y;
		if (c)
		{
			if (x - 1 != n)
				st.set(x - 1, y);
			else
				dop += y;
		}
		else
		{
			if (y - 1 != n)
				cout << st.get(x - 1, y - 1) << '\n';
			else
				cout << st.get(x - 1, y - 2) + dop << '\n';
		}
	}

	return 0;
}