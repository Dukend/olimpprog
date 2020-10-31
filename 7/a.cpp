#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long l = 0, r = 0, n, e;
	cin >> n;

	vector<long long> a(n);
	vector<long long> ps(n + 1);
	ps[0] = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		ps[i + 1] = ps[i] + a[i];
	}
	cin >> e;
	for (int i = 0; i < e; ++i)
	{
		cin >> l >> r;
		cout << ps[r] - ps[l - 1] << endl;
	}

	return 0;
}