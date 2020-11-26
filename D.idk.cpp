#include <bits/stdc++.h>
using namespace std;

struct node
{
	node *left = nullptr;
	node *right = nullptr;
	long long value = 0;
};

struct segtree
{
	long long n;
	node *root = nullptr;
	long long nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, long long sl, long long sr, long long p, long long x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		long long m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(long long p, long long x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	long long get(node *ni, long long sl, long long sr, long long ql, long long qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		long long m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	long long get(long long ql, long long qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(long long _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long k;
	cin >> k;
	segtree tr(1e9);
	for (long long i = 0; i < k; ++i)
	{
		long long q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}