#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x1, y1, r1, x2, y2, r2, l;
	cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
	l = pow(x1 - x2, 2) + pow(y1 - y2, 2);
	if (l <= pow(r1 + r2, 2) && l >= pow(r1 - r2, 2))
	{
		cout << "YES";
	}
	else
		cout << "NO";
}