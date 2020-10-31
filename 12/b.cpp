#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long n, t = 1;
	cin >> n;
	vector<pair<long long, pair<long long, long long>>> v(n);
	for (long long i = 0; i < n; ++i)
	{
		cin >> v[i].first;
		v[i].second.first = i + 1;
		v[i].second.second = i + 1;
	}
	sort(v.begin(), v.end());
	for (long long i = 1; i < n; ++i)
	{
		v[i].second.first = min(v[i].second.first, v[i - 1].second.first);
		v[i].second.second = max(v[i].second.second, v[i - 1].second.second);
		if (v[i].second.second - v[i].second.first + 1 == v[i].first)
			t++;
	}
	cout << t << endl;
	for (long long i = 0; i < n; ++i)
		if (v[i].second.second - v[i].second.first + 1 == v[i].first)
			cout << v[i].second.first << ' ' << v[i].second.second << endl;
	return 0;
}