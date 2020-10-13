#include <bits/stdc++.h>
using namespace std;
int mex(vector<int> next)
{
	sort(next.begin(), next.end());
	if (next[0] != 0 || next.empty())
		return 0;
	for (int i = 1; i < next.size(); i++)
	{
		if (next[i] > next[i + 1])
			return next[i - 1] + 1;
	}
	return next.back() + 1;
}
int dp1(int n, int k)
{
	return n % (k + 1);
}
int dp(int n, int k)
{
	vector<int> sg(n + 1);
	for (int i = 1; i <= n; i++)
	{
		vector<int> next;
		for (int j = 1; j <= k; j++)
		{
			if (j > i)
				break;
			next.push_back(sg[i - j]);
		}
		sg[i] = mex(next);
	}
}
int main()
{
	long long n;
	cin >> n;
	int res, a, k;
	cin >> a >> k;
	res = dp1(a, k);
	for (int i = 1; i < n; i++)
	{
		cin >> a >> k;
		res ^= dp1(a, k);
	}

	if (res != 0)
		cout << 1;
	else
		cout << 2;
	return 0;
}