#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	node *left = nullptr;
	node *right = nullptr;
	ll value = 0;
};

struct segtree
{
	ll n;
	node *root = nullptr;
	ll nval(node *ptr)
	{
		if (ptr == nullptr)
			return 0;
		return ptr->value;
	}
	node *set(node *ni, ll sl, ll sr, ll p, ll x)
	{
		if (ni == nullptr)
			ni = new node;
		if (sl == sr)
		{
			ni->value += x;
			return ni;
		}
		ll m = (sl + sr) / 2;
		if (p <= m)
			ni->left = set(ni->left, sl, m, p, x);
		else
			ni->right = set(ni->right, m + 1, sr, p, x);
		ni->value = nval(ni->left) + nval(ni->right);
		return ni;
	}
	void set(ll p, ll x)
	{
		root = set(root, 0, n - 1, p, x);
	}
	ll get(node *ni, ll sl, ll sr, ll ql, ll qr)
	{
		if (ni == nullptr)
			return 0;
		if (ql <= sl && sr <= qr)
			return nval(ni);
		ll m = (sl + sr) / 2;
		if (qr <= m)
			return get(ni->left, sl, m, ql, qr);
		else if (m < ql)
			return get(ni->right, m + 1, sr, ql, qr);
		else
			return get(ni->left, sl, m, ql, qr) + get(ni->right, m + 1, sr, ql, qr);
	}
	ll get(ll ql, ll qr)
	{
		return get(root, 0, n - 1, ql, qr);
	}
	segtree(ll _n)
	{
		n = _n;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	segtree tr(1e9);
	for (ll i = 0; i < n; ++i)
	{
		ll q, x, y;
		cin >> q >> x >> y;
		if (q)
			tr.set(x - 1, y);
		else
			cout << tr.get(x - 1, y - 1) << endl;
	}
}