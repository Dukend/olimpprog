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
int dp(int n, int m)
{
	vector<vector<int>> sg(n + 1, vector<int>(m + 1));
	sg[1][1] = 0;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			vector<int> next;
			for (int k = 1; k <= i; k++)
			{
				next.push_back(sg[min(k, i - k)][j]);
			}
			for (int k = 1; k <= j; k++)
			{
				next.push_back(sg[i][min(k, j - k)]);
			}
			sg[i][j] = mex(next);
		}
	}
	return sg[n + 1][m + 1];
}
int main()
{
	long long n, m, res;
	cin >> n >> m;

	res = dp(n, m);
	if (res != 0)
		cout << 1;
	else
		cout << 2;
	return 0;
}