
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x1, x2, x3, y1, y2, y3;
	double s;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	s = (x1 - x3) * (y2 - y3) - (y1 - y3) * (x2 - x3);
	cout << scientific << abs(s / 2) << endl;
}