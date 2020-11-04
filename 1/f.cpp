#include <iostream>
using namespace std;
int main()
{

	int h0, m0, h1, m1, h2, m2, n, a, b;
	cin >> h0 >> m0 >> h1 >> m1 >> h2 >> m2 >> n;
	b = m0 + m1 * n + m2 * (n - 1);
	a = h0 + h1 * n + h2 * (n - 1) + b / 60;
	cout << a << " " << b % 60;
	return 0;
}