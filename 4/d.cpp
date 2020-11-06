#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<string> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	for (string &x : v)
	{
		sort(x.begin(), x.end());
	}
	sort(v.begin(), v.end());
	int K = 1;
	for (int i = 0; i < n - 1; i++)
	{
		if (v[i] != v[i + 1])
		{
			K++;
		}
	}

	cout << K;

	return 0;
}