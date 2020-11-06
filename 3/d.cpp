#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n), q(n);
	bool ok = true;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		if (v[i] > n || (v[i] > 0 && q[v[i] - 1]))
			ok = false;
		else if (v[i])
			q[v[i] - 1] = 1;
	}
	if (!ok)
	{
		cout << -1;
	}
	else
	{
		cout << n << '\n';
		int j = 0;
		for (int a : v)
		{
			if (a)
				cout << a << ' ';
			else
			{
				while (q[j])
					j++;
				cout << j++ + 1 << ' ';
			}
		}
	}

	return 0;
}