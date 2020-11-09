#include <bits/stdc++.h>
using namespace std;

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

int cross(vector2d a, vector2d b)
{
	return a.x * b.y - a.y * b.x;
}

double distance(vector2d a, vector2d b)
{
	return len(a - b);
}

double distance_to_line(vector2d a, vector2d p, vector2d q)
{
	double area = abs(cross(p - q, p - a));
	double base = distance(p, q);
	return area / base;
}

double distance_to_segment(vector2d a, vector2d p, vector2d q)
{
	if (dot(p - q, a - q) < 0)
		return distance(a, q);
	if (dot(q - p, a - p) < 0)
		return distance(a, p);
	return distance_to_line(a, p, q);
}

bool intersect(vector2d a, vector2d b, vector2d c, vector2d d)
{
	long long A = cross(a - c, d - c);
	long long B = cross(b - c, d - c);
	long long C = cross(c - a, b - a);
	long long D = cross(d - a, b - a);

	return A * B <= 0 && C * D <= 0;
}

double distance_between_segments(vector2d a, vector2d b, vector2d c, vector2d d)
{
	if (intersect(a, b, c, d))
		return 0;

	double A = distance_to_segment(b, c, d);
	double B = distance_to_segment(a, c, d);
	double C = distance_to_segment(c, a, b);
	double D = distance_to_segment(d, a, b);
	return min(A, min(B, min(C, D)));
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	double x0, y0, x1, y1, x2, y2, x3, y3;
	for (int i = 0; i < n; i++)
	{
		cin >> x0 >> y0 >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		vector2d a{x0, y0};
		vector2d b{x1, y1};
		vector2d c{x2, y2};
		vector2d d{x3, y3};

		printf("%.10lf\n", distance_between_segments(a, b, c, d));
	}
	return 0;
}