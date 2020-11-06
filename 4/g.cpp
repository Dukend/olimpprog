#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, res = 0;
	cin >> n;
	string a, b;
	for (int i = 0; i <= n; i++)
		cin >> a >> b;
	for (int i = 0; i < max(a.size(), b.size()); i++)
	{
		int w = 0, h = 0;
		if (i < a.size())
			h = a[i] - 'a' + 1;
		if (i < b.size())
			w = b[i] - 'a' + 1;
		res += w - h;
	}
	cout << res << endl;
}