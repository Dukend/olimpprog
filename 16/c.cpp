#include <iostream>

using namespace std;

struct tree
{
	int val;
	int size = 1;
	int priority = rand();
	tree *left = nullptr;
	tree *right = nullptr;
};

int size(tree *t)
{
	if (t == nullptr)
	{
		return 0;
	}
	return t->size;
}

void update(tree *t)
{
	t->size = 1 + size(t->left) + size(t->right);
}

tree *unite(tree *l, tree *r)
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

void split(tree *t, int k, tree *&l, tree *&r)
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

void go(tree *t)
{
	if (t != nullptr)
	{
		go(t->left);
		cout << t->val << ' ';
		go(t->right);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	tree *t = nullptr;
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		tree *node = new tree{i};
		t = unite(t, node);
	}
	for (int i = 0; i < m; i++)
	{
		int l, r;
		cin >> l >> r;
		tree *left, *mid, *right, *tmp;
		split(t, r, tmp, right);
		split(tmp, l - 1, left, mid);
		t = unite(mid, unite(left, right));
	}
	go(t);
}