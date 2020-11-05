#include <iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, x, y, n, m;
	cin >> n >> m >> x >> y;
	if (n % x)
		a = 1;
	if (m % y)
		b = 1;
	cout << (n / x + a) * (m / y + b);
	return 0;
}