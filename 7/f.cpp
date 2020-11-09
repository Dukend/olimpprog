#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	long long n, currmin = 0, tmp = 0, ans = 0, b = 0, a1 = 1, curr = 0, a;
	cin >> n;
	for (int i = 2; i <= n + 1; i++)
	{
		cin >> tmp;
		curr += tmp;
		if (ans < curr - currmin)
		{
			b = i;
			a = a1;
			ans = curr - currmin;
		}
		if (currmin > curr)
		{
			currmin = curr;
			a1 = i;
		}
	}
	if (ans == 0)
		cout << "-1 -1";
	else
		cout << a << " " << b;
	return 0;
}