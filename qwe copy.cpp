#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct Node
{
	Node *left = nullptr;
	Node *right = nullptr;
	ll data = 0;
	ll delay = 0;
};

struct SegmentTree
{
	ll n;
	Node *root = nullptr;

	Node *set(Node *node, ll sl, ll sr, ll p, ll x)
	{
		if (node == nullptr)
			node = new Node;
		if (sl == sr)
		{
			node->data += x;
			return node;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			node->left = set(node->left, sl, m, p, x);
		else
			node->right = set(node->right, m + 1, sr, p, x);
		node->data = max(node_data(node->left), node_data(node->right));
		return node;
	}

	Node *set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
		return root;
	}

	ll node_data(Node *node)
	{
		if (node == nullptr)
			return 0;
		return node->data;
	}

	ll get(Node *node, ll sl, ll sr, ll ql, ll qr)
	{
		if (node == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return node_data(node);
		ll m = (sl + sr) / 2;
		if (qr == m)
			return get(node->left, sl, m, ql, qr);
		if (ql > m)
			return get(node->right, m + 1, sr, ql, qr);

		return max(get(node->left, sl, m, ql, qr), get(node->right, m + 1, sr, ql, qr));
	}

	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}

	SegmentTree(ll n_)
	{
		n = n_;
	}
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	bool chet;
	ll n;
	cin >> n;
	if (n % 2 == 0)
		chet = true;
	else
	{
		chet = false;
		n--;
	}
	SegmentTree st(n);
	ll tmp;
	for (ll i = 0; i < n; i++)
	{
		cin >> tmp;
		st.set(i, tmp);
	}
	ll dop;
	if (!chet)
		cin >> dop;
	ll q;
	cin >> q;
	for (ll i = 0; i < q; i++)
	{
		ll x, y, c;
		cin >> x >> y >> c;
		x--;
		y--;
		if (c)
			for (ll i = x; i <= y; i++)
				st.set(i, c);
		if (y != n)
			cout << st.get(x, y) << '\n';
		else
			cout << st.get(x, y) + dop << '\n';
	}
	return 0;
}