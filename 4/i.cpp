#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int n, a = 0;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < n - 2; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				if (v[i] + v[j] > v[k])
					a++;
			}
		}
	}

	cout << a;

	return 0;
}