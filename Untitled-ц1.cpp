#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	long long n, W;
	cin >> n  >> W ;
	vector<int> price(n + 1, 0);
	int C = 0;
	vector<long long> w(n + 1, 0);
	for (int i = 1; i <= n; i++)
	{
		cin >> w[i];
		cin >> price[i];
		C += price[i];
	}
	vector<long long> cur(C + 1, 0);
	vector<long long> prev(C + 1, W + 1);
	prev[0] = 0;

	for (int i = 1; i <= n; i++)
	{
		for (long long j = price[i]; j <= C; j++)
		{
			cur[j] = min(prev[j], prev[j - price[i]] + w[i]);
		}
		for (long long j = 0; j < price[i]; j++)
		{
			cur[j] = prev[j];
		}
		swap(cur, prev);
	}
	int res;
	for (int i = 0; i <= C; i++)
	{
		if (prev[i] <= W)
			res = i;
	}
	cout << res << '\n';
}