#include <bits/stdc++.h>
using namespace std;
int dp(int x, int y)
{
	int a = max(x, y);
	int b = min(x, y);
	if (x % 2 != 0 && y % 2 != 0)
		return 0;
	if (a % 2 == 0)
		if (b % 2 == 0)
			return 2;
		else
			return 1;
	return 3;
}

int main()
{
	int n, ans = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		ans ^= dp(x, y);
	}
	if (ans)
		cout << 1;
	else
		cout << 2;
	return 0;
}