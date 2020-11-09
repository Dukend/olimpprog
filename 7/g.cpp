#include <bits/stdc++.h>
using namespace std;
int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	long long n, k, tmp, ans = 0;
	cin >> n >> k;
	vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	for (long long i = 0; i < n; ++i)
	{
		long long pos = upper_bound(v.begin(), v.end(), k + v[i]) - v.begin() - 1;
		ans += (pos - i - 1) * (pos - i) / 2;
	}
	cout << ans;
	return 0;
}