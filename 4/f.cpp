#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	multiset<int> l;
	multiset<int> r;
	int n, value;
	cin >> n >> value;
	cout << value << endl;
	l.insert(value);
	for (int i = 0; i < n - 1; i++)
	{
		cin >> value;

		if (value < *l.rbegin())
			l.insert(value);
		else
			r.insert(value);

		if (i % 2 == 0)
			while (l.size() != r.size())
			{
				if (l.size() > r.size())
				{
					r.insert(*l.rbegin());
					l.erase(--l.end());
				}
				else
				{
					l.insert(*r.begin());
					r.erase(r.begin());
				}
			}
		else
			while (l.size() - 1 != r.size())
			{
				if (l.size() - 1 > r.size())
				{
					r.insert(*l.rbegin());
					l.erase(--l.end());
				}
				else
				{
					l.insert(*r.begin());
					r.erase(r.begin());
				}
			}
		cout << *--l.end() << endl;
	}
	return 0;
}