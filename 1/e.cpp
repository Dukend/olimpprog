#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double d, x, y;
	cin >> d >> x >> y;
	if (d >= sqrt(x * x + y * y))
		cout << "YES";
	else
		cout << "NO";
	return 0;
}