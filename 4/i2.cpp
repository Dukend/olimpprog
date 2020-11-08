#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n, a = 0;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n - 2; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			auto z = lower_bound(v.begin(), v.end(), v[i] + v[j]);
			a += (z - v.begin()) - j - 1;
		}
	}
	cout << a;
	return 0;
}