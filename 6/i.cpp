#include <bits/stdc++.h>
using namespace std;

struct coord
{
	int x, y;
	double dis;
};

double dis(int x1, int y1, int x2, int y2)
{
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
int main()
{
	int n, x1, y1, x2, y2;
	cin >> n >> x1 >> y1 >> x2 >> y2;
	coord p1, p2, temp;

	p1.x = x2;
	p1.y = y2;
	p2.x = x1;
	p2.y = y1;
	p1.dis = dis(x1, y1, x2, y2);
	p2.dis = dis(x1, y1, x2, y2);

	for (int i = 1; i < n; ++i)
	{
		cin >> x1 >> y1 >> x2 >> y2;

		if (p1.dis + dis(p1.x, p1.y, x1, y1) > p2.dis + dis(p2.x, p2.y, x1, y1))
		{
			temp.dis = p2.dis + dis(p2.x, p2.y, x1, y1) + dis(x1, y1, x2, y2);
			temp.x = x2;
			temp.y = y2;
		}
		else
		{
			temp.dis = p1.dis + dis(p1.x, p1.y, x1, y1) + dis(x1, y1, x2, y2);
			temp.x = x2;
			temp.y = y2;
		}
		if (p1.dis + dis(p1.x, p1.y, x2, y2) > p2.dis + dis(p2.x, p2.y, x2, y2))
		{
			p2.dis = p2.dis + dis(p2.x, p2.y, x2, y2) + dis(x2, y2, x1, y1);
			p2.x = x1;
			p2.y = y1;
		}
		else
		{
			p2.dis = p1.dis + dis(p1.x, p1.y, x2, y2) + dis(x2, y2, x1, y1);
			p2.x = x1;
			p2.y = y1;
		}
		p1 = temp;
	}
	printf("%.12f\n", min(p1.dis, p2.dis));
	return 0;
}