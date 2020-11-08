#include <bits/stdc++.h>
using namespace std;

const long long ma = 15485863;
void simple(long long ma, vector<int> &v, long long &ans, int n, int m)
{
	long long kol = 0;
	for (long long i = 2; i <= ma; i++)
	{
		v[0] = 1;
		v[1] = 1;
		if (v[i] != 0)
			continue;
		kol++;
		if (kol >= n)
			ans += i;
		if (kol == m)
			break;
		for (long long k = i * i; k <= ma; k += i)
		{
			v[k] = 1;
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m;
	cin >> n >> m;
	long long ans = 0;
	vector<int> v(ma + 1);
	simple(ma, v, ans, n, m);
	cout << ans << endl;
	return 0;
}