#include <iostream>
#include <math.h>
using namespace std;

int main()
{

	long long n, a, a0, max2 = -1, max1 = -1;
	cin >> n;
	cin >> a0;
	a = pow(10, 9) + 7;
	for (int i = 0; i < n; ++i)
	{
		a0 = (a0 * 5) % a;
		if (a0 > max1)
		{
			max2 = max1;
			max1 = a0;
			continue;
		}
		if (a0 > max2)
		{
			max2 = a0;
			continue;
		}
	}
	cout << max2 << ' ' << max1 << endl;
	return 0;
}