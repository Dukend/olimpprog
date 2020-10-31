#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<long long> v(n);
	long long ans = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	for (int i = n - 1, k = 0; i >= 0; i--, k += 2)
	{
		ans += (n - k - 1) * v[i];
	}
	cout << ans << endl;
}