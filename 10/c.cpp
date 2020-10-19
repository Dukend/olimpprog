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

int main()
{
	int n;
	cin >> n;
	vector<int> v(n + 2);
	v[0] = 0;
	v[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		vector<int> next;
		for (int j = 1; j < i + 1; j++)
		{
			if (j == 1 || j == i)
				next.push_back(v[i - 2]);
			next.push_back(v[j - 2] ^ v[i - j - 1]);
		}
		v[i] = mex(next);
	}
	if (v[n] != 0 || n < 4)
		cout << 1 << endl;
	else
		cout << 2 << endl;
	return 0;
}