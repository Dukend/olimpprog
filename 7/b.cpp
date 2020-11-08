#include <bits/stdc++.h>
using namespace std;
struct ev
{
	long long pos, val;
};
bool operator<(ev &l, ev &r)
{
	if (l.pos != r.pos)
		return l.pos < r.pos;
	return l.val > r.val;
}
int main()
{
	int n, q;
	cin >> n >> q;
	vector<ev> even;
	vector<long long> ans(n);
	long long sum = 0, k = 0, r = 0;

	for (int i = 0; i < q; i++)
	{
		long long left, right, v;
		cin >> left >> right >> v;
		even.push_back(ev{left, v});
		even.push_back(ev{right + 1, -v});
	}

	sort(even.begin(), even.end());
	// cout << endl;
	// for (int i = 0; i < even.size(); i++)
	// {
	// 	cout << even[i].pos << ' ' << even[i].val << endl;
	// }
	// cout << endl;
	for (int i = 0; i < n; i++)
	{
		if (k > 0)
			r = even[k].pos - even[k - 1].pos;
		if (r > 1)
			for (int j = 0; j < r - 1; j++, i++)
				ans[i] = sum;
		if (even[k].pos <= n)
		{
			if (even[k].pos == i + 1)
			{
				sum += even[k].val;
				k++;
				while (even[k].pos == even[k - 1].pos && even[k].pos <= n)
				{
					sum += even[k].val;
					k++;
				}
			}
			ans[i] = sum;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << ans[i] << ' ';
	}
	cout << endl;
	return 0;
}