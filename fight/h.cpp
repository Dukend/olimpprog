#include <bits/stdc++.h>

using namespace std;

long long bi(vector<long long> &v, long long a)
{
	long long l = 0, r = v.size() - 1;

	if (a == v[r])
		return r;

	while (true)
	{
		if (a > v[(l + r) / 2])
			l = (l + r) / 2;
		else if (a < v[(l + r) / 2])
			r = (l + r) / 2;
		else
			return (l + r) / 2;
		if ((l == r && a != v[l]) || (r - l == 1 && a != v[l] && a != v[r]))
			return -1;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<long long> v;

	v.push_back(0);
	for (long long i = 1; i < 1000005; i++)
	{
		v.push_back(i * i * i);
	}

	int n;
	long long x;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;

		int s = 1;
		if (x < 0)
		{
			x = -x;
			s = -1;
		}

		long long res = bi(v, x);

		if (res != -1)
		{
			cout << res * s << '\n';
		}
		else
		{
			cout << "NO\n";
		}
	}

	return 0;
}