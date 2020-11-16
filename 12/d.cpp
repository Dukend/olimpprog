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