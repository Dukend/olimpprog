#include <iostream>
using namespace std;

int main()
{
	int n;
	long long x = 1;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		x *= i;
		if (x >= 1000000007)
			x = x - x / 1000000007 * 1000000007;
	}
	cout << x % 1000000007;
	return 0;
}
