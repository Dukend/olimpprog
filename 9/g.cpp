#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct dot
{
	double x;
	double y;
};

double dis(dot a, dot b)
{
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

dot revers(dot D1, dot D2, dot xx)
{
	double a, b, c, d, e, f;
	a = D1.x - D2.x;
	b = D1.y - D2.y;
	c = (-D1.x + D2.x) * xx.x - (D1.y - D2.y) * xx.y;
	d = D2.y - D1.y;
	e = D1.x - D2.x;
	f = (-D1.x + D2.x) * D1.y + (D1.y - D2.y) * D1.x;

	dot H;
	if (d != 0)
		H.y = (a * f / d - c) / (b - a * e / d);
	else
		H.y = -f / e;
	if (a != 0)
		H.x = (-b * H.y - c) / a;
	else
		H.x = (-e * H.y - f) / d;
	dot U{2 * H.x - xx.x, 2 * H.y - xx.y};
	return U;
}

dot per(dot D1, dot D2, dot m, dot P)
{
	double a, b, c, d, e, f;
	a = D2.y - D1.y;
	b = D1.x - D2.x;
	c = (D1.y - D2.y) * D1.x + (D2.x - D1.x) * D1.y;
	d = m.y - P.y;
	e = P.x - m.x;
	f = (-P.x + m.x) * P.y + (P.y - m.y) * P.x;

	dot S;
	if (d != 0)
		S.y = (a * f / d - c) / (b - a * e / d);
	else
		S.y = -f / e;
	if (a != 0)
		S.x = (-b * S.y - c) / a;
	else
		S.x = (-e * S.y - f) / d;
	return S;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	double x, y;
	cin >> x >> y;
	dot xx{x, y};

	dot D1, D2, D3;
	cin >> D1.x >> D1.y >> D2.x >> D2.y >> D3.x >> D3.y;

	dot m1, m2, m3;
	m1 = revers(D1, D2, xx);
	m2 = revers(D2, D3, xx);
	m3 = revers(D1, D3, xx);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> x >> y;
		dot P{x, y};
		dot t1 = per(D1, D2, m1, P);
		dot t2 = per(D2, D3, m2, P);
		dot t3 = per(D1, D3, m3, P);
		double a1 = dis(t1, xx) + dis(t1, P);
		double a2 = dis(t2, xx) + dis(t2, P);
		double a3 = dis(t3, xx) + dis(t3, P);

		if (a1 <= a2 && a1 <= a3)
			printf("%.10lf %.10lf\n", t1.x, t1.y);
		else if (a2 <= a1 && a2 <= a3)
			printf("%.10lf %.10lf\n", t2.x, t2.y);
		else
			printf("%.10lf %.10lf\n", t3.x, t3.y);
	}

	return 0;
}
