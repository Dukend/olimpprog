#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct dot
{
	ll x;
	ll y;
};

bool operator<(dot lhs, dot rhs)
{
	if (lhs.x != rhs.x)
		return lhs.x < rhs.x;
	else
		return lhs.y < rhs.y;
}

double dis(dot a, dot b)
{
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

ll square(dot a, dot b)
{
	return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	ll n, x, y, ans = 0;
	cin >> n;
	if (n < 4)
	{
		cout << 0;
		return 0;
	}
	vector<dot> dots(n);
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		dots[i] = dot{x, y};
	}
	sort(dots.begin(), dots.end());
	for (int i = 0; i < n - 3; i++)
	{
		for (int j = i + 1; j < n - 2; j++)
		{
			dot A{dots[i].x - dots[j].y + dots[i].y, dots[i].y + dots[j].x - dots[i].x};
			dot B{dots[j].x - dots[j].y + dots[i].y, dots[j].y + dots[j].x - dots[i].x};
			dot C{dots[i].x + dots[j].y - dots[i].y, dots[i].y - dots[j].x + dots[i].x};
			dot D{dots[j].x + dots[j].y - dots[i].y, dots[j].y - dots[j].x + dots[i].x};
			auto la = upper_bound(dots.begin() + j + 1, dots.end(), A);
			auto lb = upper_bound(dots.begin() + j + 1, dots.end(), B);
			auto lc = upper_bound(dots.begin() + j + 1, dots.end(), C);
			auto ld = upper_bound(dots.begin() + j + 1, dots.end(), D);
			auto ra = lower_bound(dots.begin() + j + 1, dots.end(), A);
			auto rb = lower_bound(dots.begin() + j + 1, dots.end(), B);
			auto rc = lower_bound(dots.begin() + j + 1, dots.end(), C);
			auto rd = lower_bound(dots.begin() + j + 1, dots.end(), D);

			if (la != ra && lb != rb)
				ans = max(ans, square(dots[i], dots[j]));
			if (lc != rc && ld != rd)
				ans = max(ans, square(dots[i], dots[j]));
		}
	}
	printf("%lld", ans);
	return 0;
}