#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, ans = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		if (x % 2 != 1 || y % 2 != 1)
			if (max(x, y) % 2 == 0)
				if (min(x, y) % 2 == 0)
					ans ^= 2;
				else
					ans ^= 1;
			else
				ans ^= 3;
	}
	if (ans)
		cout << 1;
	else
		cout << 2;
	return 0;
}