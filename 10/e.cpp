#include <bits/stdc++.h>
using namespace std;
int mex(vector<int> &next)
{
	sort(next.begin(), next.end());
	if (next[0] != 0 || next.empty())
		return 0;
	for (int i = 1; i < next.size(); i++)
		if (next[i] > next[i - 1] + 1)
			return next[i - 1] + 1;
	return next.back() + 1;
}
int dp(int n)
{
	vector<int> sg(n + 1);
	for (int i = 1; i <= n; i++)
	{
		vector<int> next;
		for (int j = 1; j * j <= i; j++)
			next.push_back(sg[i - j * j]);
		sg[i] = mex(next);
	}
	return sg[n];
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	if (dp(n) != 0)
		cout << 1;
	else
		cout << 2;
	return 0;
}