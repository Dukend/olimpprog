#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long l = -1, r = pow(10, 9) + 1;
	long long n, x, y;
	cin >> n >> x >> y;
	while (r - l > 1)
	{
		long long m = (l + r) / 2;
		long long c = m / x + m / y;
		if (c < n - 1)
			l = m;
		else
			r = m;
	}
	cout << r + min(x, y);
	return 0;
}