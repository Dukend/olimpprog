#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long m, n, l, r;
	cin >> m >> n;
	vector<int> a(m);
	vector<int> b(n);
	for (int i = 0; i < m; ++i)
		cin >> a[i];
	for (int i = 0; i < n; ++i)
		cin >> b[i];

	if (n < m)
	{
		swap(m, n);
		swap(a, b);
	}
	sort(b.begin(), b.end());
	double res = 0;
	cin >> l >> r;
	for (int i = 0; i < m; ++i)
	{
		auto low = lower_bound(b.begin(), b.end(), l - a[i]);
		auto up = upper_bound(b.begin(), b.end(), r - a[i]);
		res += up - low;
	}

	printf("%.12lf\n", res / (n * m));
	return 0;
}