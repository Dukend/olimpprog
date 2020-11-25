#include <iostream>
#include <algorithm>

using namespace std;

struct Treap
{
	int val;
	int max;
	int size = 1;
	int priority = rand();
	Treap *left = nullptr;
	Treap *right = nullptr;
};

int size(Treap *t)
{
	if (t == nullptr)
	{
		return 0;
	}
	return t->size;
}

int get_max(Treap *t)
{
	if (t == nullptr)
	{
		return -1000000009;
	}
	return t->max;
}

void update(Treap *t)
{
	t->size = 1 + size(t->left) + size(t->right);
	t->max = max(get_max(t->left), max(get_max(t->right), t->val));
}

Treap *unite(Treap *l, Treap *r)
{
	if (l == nullptr)
	{
		return r;
	}
	if (r == nullptr)
	{
		return l;
	}
	if (l->priority > r->priority)
	{
		l->right = unite(l->right, r);
		update(l);
		return l;
	}
	r->left = unite(l, r->left);
	update(r);
	return r;
}

void split(Treap *t, int k, Treap *&l, Treap *&r)
{
	if (t == nullptr)
	{
		l = nullptr;
		r = nullptr;
		return;
	}
	if (size(t->left) >= k)
	{
		split(t->left, k, l, t->left);
		r = t;
	}
	else
	{
		split(t->right, k - size(t->left) - 1, t->right, r);
		l = t;
	}
	update(t);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	Treap *t = nullptr;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int type;
		cin >> type;
		if (type == 1)
		{
			int v, p;
			cin >> v >> p;
			Treap *node = new Treap{v, v}, *left, *right;
			split(t, p, left, right);
			t = unite(left, unite(node, right));
		}
		else
		{
			int l, r;
			cin >> l >> r;
			Treap *left, *right, *mid, *tmp;
			split(t, r, tmp, right);
			split(tmp, l - 1, left, mid);
			cout << get_max(mid) << '\n';
			t = unite(left, unite(mid, right));
		}
	}
}