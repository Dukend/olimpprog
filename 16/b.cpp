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

void go(tree *t)
{
	if (t != nullptr)
	{
		go(t->left);
		cout << t->val << " ";
		go(t->right);
	}
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

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	tree *t = nullptr;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int val, pos;
		cin >> val >> pos;
		tree *l;
		tree *r;
		split(t, pos, l, r);
		tree *node = new tree{val};
		t = unite(unite(l, node), r);
	}
	go(t);
}