#include <bits/stdc++.h>
using namespace std;
bool find(long long a, long long b, long long c, long long &x0, long long &y0, long long &g)
{
	if (c % g != 0)
		return false;
	x0 *= c / g;
	y0 *= c / g;
	return true;
}
long long gcd(long long a, long long b, long long &x, long long &y)
{
	if (a == 0)
	{
		x = 0;
		y = 1;
		return b;
	}
	long long x1, y1;
	long long d = gcd(b % a, a, x1, y1);
	x = y1 - (b / a) * x1;
	y = x1;
	return d;
}
int main()
{
	long long t, x, y;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		long long a, b, c;
		cin >> a >> b >> c;
		long long g = gcd(a, b, x, y);
		if (find(a, b, c, x, y, g))
			cout << g << ' ' << x << ' ' << y << '\n';
		else
			cout << -1 << '\n';
	}
}