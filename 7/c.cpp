#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n, ans = 0;
	cin >> n;
	vector<long long> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	for (int i = 0; i < n; i++)
	{
		long long m = LONG_LONG_MIN;
		for (int j = i; j < n; j++)
		{
			m = max(max(m, v[i]), v[j]);
			ans += max(m, v[i]);
		}
	}
	cout << ans << endl;
}