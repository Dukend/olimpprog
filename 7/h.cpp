#include <bits/stdc++.h>
using namespace std;

struct segment
{
	long long l, r;
};
struct event
{
	long long pos, type;
};
bool operator<(event lhs, event rhs)
{
	if (lhs.pos != rhs.pos)
		return lhs.pos < rhs.pos;
	return lhs.type > rhs.type;
}
int main()
{
	int n;
	cin >> n;
	vector<segment> segs(n);
	vector<event> ev;
	long long ans = 0, k = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> segs[i].l >> segs[i].r;
	}
	for (int i = 0; i < n; i++)
	{
		ev.push_back(event{segs[i].l, 1});
		ev.push_back(event{segs[i].r, -1});
	}
	sort(ev.begin(), ev.end());

	for (int i = 0; i < 2 * n; i++)
	{
		if (k != 0)
			ans += ev[i].pos - ev[i - 1].pos;
		else
			ans++;
		k += ev[i].type;
	}
	cout << ans << endl;
}