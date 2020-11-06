
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int x;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	int l, r;
	cin >> l >> r;

	do
	{
		for (int i = l - 1; i < (r + l - 2) / 2 + (r + l) % 2; i++)
		{
			x = v[i];
			v[i] = v[r - 1 + l - 1 - i];
			v[r - 1 + l - 1 - i] = x;
		}
		cin >> l >> r;
	} while (l != 0 && r != 0);
	for (int i = 0; i < n; i++)
	{
		cout << v[i] << '\n';
	}
	return 0;
}