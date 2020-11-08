#include <bits/stdc++.h>
using namespace std;
const long long mod = 1000000007;
int main()
{
	int n, k;
	cin >> n >> k;
	vector<long long> dp(n + 1);
	vector<int> curr(n + 1);
	vector<int> prev(n + 1);
	vector<int> vec;
	prev[0] = -1;

	for (int i = 1; i < n; i++)
		cin >> curr[i];

	for (int i = 1; i <= n; i++)
	{
		dp[i] = dp[i - 1];
		prev[i] = i - 1;
		for (int j = 2; j <= min(i, k); j++)
		{
			if (dp[i - j] <= dp[i])
			{
				dp[i] = dp[i - j];
				prev[i] = i - j;
			}
		}
		dp[i] += curr[i];
	}
	cout << dp[n] << endl;

	k = n;
	while (k != 0)
	{
		vec.push_back(k);
		k = prev[k];
	}
	vec.push_back(0);
	reverse(vec.begin(), vec.end());
	cout << vec.size() << endl;
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << ' ';
	return 0;
}