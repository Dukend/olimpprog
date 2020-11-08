#include <bits/stdc++.h>
using namespace std;
long long extgcd(long long a, long long b, long long &x, long long &y)
{
	if (a == 0)
	{
		x = 0;
		y = 1;
		return b;
	}
	long long x1, y1;
	long long d = extgcd(b % a, a, x1, y1);
	x = y1 - (b / a) * x1;
	y = x1;
	return d;
}

bool find_any_solution(long long a, long long b, long long c, long long &x0, long long &y0, long long &g)
{
	if (c % g != 0)
		return false;
	x0 *= c / g;
	y0 *= c / g;
	return true;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long k, a, b, c, x, y, g;
	cin >> k;

	for (int i = 0; i < k; i++)
	{
		cin >> a >> b >> c;
		long long g = extgcd(a, b, x, y);
		if (find_any_solution(a, b, c, x, y, g))
			cout << g << ' ' << x << ' ' << y << '\n';
		else
			cout << -1 << '\n';
	}
}