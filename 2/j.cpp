#include <iostream>
#include <cmath>
using namespace std;
int main()
{

	int x1, y1, x2, y2, x3, y3, x4, y4, q, x, y, x0, y0;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	if (x1 > x2)
	{
		q = x1;
		x1 = x2;
		x2 = q;
	}
	if (y1 > y2)
	{
		q = y1;
		y1 = y2;
		y2 = q;
	}
	if (x3 > x4)
	{
		q = x3;
		x3 = x4;
		x4 = q;
	}
	if (y3 > y4)
	{
		q = y3;
		y3 = y4;
		y4 = q;
	}
	q = 1;

	if (x1 > x4 || x2 < x3)
		q = 0;
	else
		x = max(x1, x3);
	if (y1 > y4 || y2 < y3)
		q = 0;
	else
		y = max(y1, y3);
	if (x1 > x4 || x2 < x3)
		q = 0;
	else
		x0 = min(x2, x4);
	if (y1 > y4 || y2 < y3)
		q = 0;
	else
		y0 = min(y2, y4);
	if (q == 1)
		q = (x0 - x) * (y0 - y);
	cout << (x2 - x1) * (y2 - y1) + (x3 - x4) * (y3 - y4) - q;
	return 0;
}