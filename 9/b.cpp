#include <bits/stdc++.h>
using namespace std;
#define M_PI1 3.14159265358979323846;
struct vector2d
{
	long long x, y;
};
vector2d operator-(vector2d a, vector2d b)
{
	return {a.x - b.x, a.y - b.y};
}
int dot(vector2d a, vector2d b)
{
	return a.x * b.x + a.y * b.y;
}
double len(vector2d a)
{
	return sqrt(dot(a, a));
}

int main()
{
	ios::sync_with_stdio(false);

	cin.tie(nullptr);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		double x0, y0, x1, y1, x2, y2, f1, f2;
		cin >> x0 >> y0 >> x1 >> y1 >> x2 >> y2;
		vector2d a{x0, y0};
		vector2d b{x1, y1};
		vector2d c{x2, y2};
		printf("%.20lf\n", acos(dot(b - a, c - a) / (len(b - a) * len(c - a))));
	}
	return 0;
}