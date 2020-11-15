#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin >> n;
	long long res, temp;
	cin >> res;
	for (int i = 1; i < n; i++)
	{
		cin >> temp;
		res ^= temp;
	}
	if (res != 0)
		cout << 1;
	else
		cout << 2;
	return 0;
}