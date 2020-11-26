#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct seg
{
	int n;
	vector<int> data;
	vector<int> delay;
	void push(int id, int sl, int sr)
	{
		if (sl != sr)
		{
			data[id] += delay[id];
			if (sl = sr)
			{
				delay[id * 2 + 1] += delay[id];
				delay[id * 2 + 2] += delay[id];
			}
			delay[id] = 0;
		}
	}
	int get(int id, int sl, int sr, int gl, int gr)
	{
		push(id, sl, sr);
		if (gl <= sl && sr <= gr)
		{

			return data[id];
		}
		int m = (sl + sr) / 2;
		if (gl <= m)
		{
			get(id * 2 + 1, sl, m, gl, gr);
		}
		if (m < gr)
		{
			get(id * 2 + 2, m + 1, sr, gl, gr);
		}
		return max(get(id * 2 + 1, sl, m, gl, gr), get(id * 2 + 2, m + 1, sr, gl, gr));
	}
	void add(int id, int sl, int sr, int gl, int gr, int x)
	{
		if (gl <= sl && sr <= gr)
		{
			delay[id] += x;
			return;
		}
		push(id, sl, sr);
		int m = (sl + sr) / 2;
		if (gl <= m)
		{
			add(id * 2 + 1, sl, m, gl, gr, x);
		}
		if (m < gr)
		{
			add(id * 2 + 2, m + 1, sr, gl, gr, x);
		}
		delay[id] = max(get(id * 2 + 1, sl, m, sl, m), get(id * 2 + 1, m + 1, sr, m + 1, sr));
	}
	ll add(ll ql, ll qr, ll tmp)
	{
		return get(0, n - 1, ql, qr, tmp);
	}
	seg(int n_)
	{
		n = n_;
	}
};
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll n;
	cin >> n;
	seg st(n);
	ll tmp;
	for (ll i = 0; i < n; i++)
	{
		cin >> tmp;
		st.add(i, i, tmp);
	}
	ll q;
	cin >> q;
	for (ll i = 0; i < q; i++)
	{
		ll x, y, c;
		cin >> x >> y >> c;
		x--;
		y--;
		if (c)
			// for (ll i = x; i <= y; i++)
			st.add(x, y, c);

		cout << st.get(x, y) << '\n';
	}

	return 0;
}