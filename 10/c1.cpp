#include <bits/stdc++.h>
using namespace std;

int mex(vector<int> &next)
{
	sort(next.begin(), next.end());
	if (next.empty())
		return 0;
	if (next[0] != 0)
		return 0;

	for (int i = 1; i < next.size(); i++)
		if (next[i] > next[i - 1] + 1)
			return next[i - 1] + 1;
	return next.back() + 1;
}
int shprag(int n)
{
	vector<int> sg(n + 1);
	sg[0] = 0;
	sg[1] = 1;
	if (n > 1)
		sg[2] = 1;
	for (int i = 3; i <= n; i++)
	{
		vector<int> next;
		for (int j = 1; j + 1 < i; j++)
			next.push_back(sg[j - 1] ^ sg[i - j - 2]);
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

	if (n < 4)
		cout << 1;
	else
	{
		int res = shprag(n);
		if (res != 0)
			cout << 1;
		else
			cout << 2;
		cout << '\n';
	}

	return 0;
}