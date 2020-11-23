#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	int n, l;
	char op;
	cin >> n >> l;
	int tmp;
	int ma = -1, mi = l + 1;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp >> op;
		if (op == 'L')
		{
			ma = max(ma, tmp);
		}
		else
		{
			mi = min(mi, tmp);
		}
	}
	if (ma == -1)
	{
		cout << l - mi << endl;
	}
	else if (mi == l + 1)
	{
		cout << ma << endl;
	}
	else
	{

		cout << max(l - mi, ma) << endl;
	}
}