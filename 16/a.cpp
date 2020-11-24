#include <iostream>

using namespace std;

struct tree
{
	int key;
	int priority;
	tree *left = nullptr;
	tree *right = nullptr;
};

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
		return l;
	}
	r->left = unite(l, r->left);
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
	else if (t->key < k)
	{
		split(t->right, k, t->right, r);
		l = t;
	}
	else
	{
		split(t->left, k, l, t->left);
		r = t;
	}
}

void go(tree *t)
{
	if (t == nullptr)
	{
		cout << "null\n";
	}
	else
	{
		cout << t->key << " " << t->priority << '\n';
		go(t->left);
		go(t->right);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	tree *t = nullptr;
	for (int i = 0; i < n; i++)
	{
		int f, s;
		cin >> f >> s;
		tree *node = new tree{f, s};
		tree *left, *right;
		split(t, f, left, right);
		t = unite(left, unite(node, right));
	}
	go(t);
}