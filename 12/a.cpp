#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void seq(ll id, ll sl, ll sr, const vector<ll> &v, vector<ll> &data)
{
	if (sl == sr)
	{
		data[id] = v[sl];
		return;
	}
	ll m = (sl + sr) / 2;
	seq(id * 2 + 1, sl, m, v, data);
	seq(id * 2 + 2, m + 1, sr, v, data);
	data[id] = gcd(data[id * 2 + 1], data[id * 2 + 2]);
}

long long get(long long id, long long sl, long long sr, long long ql, long long qr, vector<ll> &data)
{
	if (ql <= sl && sr <= qr)
		return data[id];
	long long m = (sl + sr) / 2;

	if (qr <= m)
		return get(id * 2 + 1, sl, m, ql, qr, data);
	if (m < ql)
		return get(id * 2 + 2, m + 1, sr, ql, qr, data);
	return gcd(get(id * 2 + 1, sl, m, ql, qr, data), get(id * 2 + 2, m + 1, sr, ql, qr, data));
}

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
}