#include <bits/stdc++.h>
using namespace std;
int mex(vector<int> &next)
{
	sort(next.begin(), next.end());
	if (next.empty() || next[0] != 0)
		return 0;
	for (int i = 1; i < next.size(); i++)
		if (next[i] > next[i - 1] + 1)
			return next[i - 1] + 1;
	return next.back() + 1;
}
int dp(int n)
{
	vector<int> sg(n + 1);
	sg[0] = 0;
	sg[1] = 0;
	for (int i = 2; i <= n; i++)
	{
		vector<int> next;
		if (i % 2 == 0)
		{
			for (int j = 0; j < i / 2 - 1; j++)
			{
				next.push_back(sg[j + 1] ^ sg[i - j - 1]);
			}
		}
		else
		{
			for (int j = 0; j < i / 2; j++)
			{
				next.push_back(sg[j + 1] ^ sg[i - j - 1]);
			}
		}
		sg[i] = mex(next);
	}
	return sg[n];
}

int main()
{
	int n;
	cin >> n;
	if (dp(n) != 0)
		cout << 1;
	else
		cout << 2;
	return 0;
}