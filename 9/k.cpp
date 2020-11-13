#include <bits/stdc++.h>
using namespace std;
struct vec
{
	long long x, y;
};
bool compare(vec lhs, vec rhs)
{
	return (lhs.x * rhs.y - lhs.y * rhs.x) < 0;
}
int main()
{
	cout.precision(9);
	int n;
	cin >> n;
	vector<vec> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i].x >> v[i].y;
	sort(v.begin(), v.end(), compare);
	long long tmp = 0, res = 0;
	for (int i = 0; i < n; i++)
	{
		res += (v[i].x) * (tmp + v[i].y);
		res += tmp * v[i].x;
		tmp += v[i].y;
	}
	cout << res;
	return 0;
}