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
		ans += v[i] * (i + 1) * (n - i);
	}
	cout << ans << endl;
}