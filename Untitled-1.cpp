#include <bits/stdc++.h>
using namespace std;
struct q
{
	long long a, b, c;
};
bool operator<(q &l, q &r)
{
	return l.a < r.a;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long n, t = 1;
	cin >> n;
	vector<q> v(n);
	for (long long i = 0; i < n; ++i)
	{
		cin >> v[i].a;
		v[i].b = i + 1;
		v[i].c = i + 1;
	}
	sort(v.begin(), v.end());
	for (long long i = 1; i < n; ++i)
	{
		v[i].b = min(v[i].b, v[i - 1].b);
		v[i].c = max(v[i].c, v[i - 1].c);
		if (v[i].c - v[i].b + 1 == v[i].a)
			t++;
	}
	cout << t << endl;
	for(auto &x: v)
		if (x.c - x.b + 1 == x.a)
			cout << x.b << ' ' << x.c << endl;
	return 0;
}