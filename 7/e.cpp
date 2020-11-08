#include <bits/stdc++.h>
using namespace std;
long long MOD = 1000000007;
int main()
{
	int n;
	cin >> n;
	long long ans = 0, pow = 1;
	int temp;
	cin >> temp;
	ans += temp;
	for (int i = 0; i < n - 1; i++)
	{
		cin >> temp;
		pow *= 2;
		pow %= MOD;
		ans += temp;
	}
	ans *= pow;
	ans %= MOD;
	cout << ans << endl;
}