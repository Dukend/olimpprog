#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct pr
{
	ll n, pos;
	ll val = 1;
};

pr max(pr l, pr r)
{
	if (l.n > r.n)
		return l;
	if (l.n < r.n)
		return r;
	l.val = l.val + r.val;
	r.val = l.val;
	if (l.pos < r.pos)
		return l;
	return r;
}

void build(ll id, ll sl, ll sr, const vector<ll> &a, vector<pr> &data)
{
	if (sl == sr)
	{
		data[id].n = a[sl];
		data[id].pos = sl;
		return;
	}
	ll m = (sl + sr) / 2;
	build(id * 2 + 1, sl, m, a, data);
	build(id * 2 + 2, m + 1, sr, a, data);
	data[id] = max(data[id * 2 + 1], data[id * 2 + 2]);
}

pr get(ll id, ll sl, ll sr, ll ql, ll qr, vector<pr> &data, int &count)
{
	if (ql <= sl && sr <= qr)
	{
		return data[id];
	}
	ll m = (sl + sr) / 2;
	if (qr <= m)
		return get(id * 2 + 1, sl, m, ql, qr, data, count);
	if (m < ql)
		return get(id * 2 + 2, m + 1, sr, ql, qr, data, count);
	return max(get(id * 2 + 1, sl, m, ql, qr, data, count), get(id * 2 + 2, m + 1, sr, ql, qr, data, count));
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<ll> a(n);
	vector<pr> data(4 * n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	build(0, 0, n - 1, a, data);
	int q;
	cin >> q;
	int l, r;
	pr ans;
	for (int i = 0; i < q; i++)
	{
		cin >> l >> r;
		int count = 0;
		ans = get(0, 0, n - 1, l - 1, r - 1, data, count);
		cout << ans.n << ' ' << ans.pos + 1 << ' ';
		cout << ans.val << '\n';
	}
}