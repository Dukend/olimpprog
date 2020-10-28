#include <bits/stdc++.h>
using namespace std;
int dp(long long n){
	int ans = 0, k = 2, c = 0;
	while (n > 1)
	{
		if (k < 100000000)
		{
			if (n % k == 0)
			{
				n /= k;
				c++;
				if (n % k != 0)
				{
					ans ^= c;
					c = 0;
				}
			}
			else
				k++;
		}
		else
		{
			ans ^= 1;
			break;
		}
	}
	return ans;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long n;
	cin >> n;
	if (dp(n))
		cout << 1;
	else
		cout << 2;
	return 0;
}