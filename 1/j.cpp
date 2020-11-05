#include <iostream>
using namespace std;
int main()
{

	long long a, b, c, d;
	cin >> a >> b;
	if (a > b)
	{
		c = b;
		b = a;
		a = c;
	}
	d = (a + b) * (b - a + 1) / 2;
	cout << d;
	return 0;
}