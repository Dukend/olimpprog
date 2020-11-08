#include <bits/stdc++.h>
using namespace std;

long long nok(long long a, long long b)
{
	long long l = a, r = b;
	while (a != 0)
	{
		b %= a;
		swap(a, b);
	}
	return (r / b) * l;
}

int main()
{
	int n;
	cin >> n;
	vector<long long> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	for (int i = n - 1; i > 0; i--, v.pop_back())
	{
		v[i - 1] = nok(v[i], v[i - 1]);
	}
	cout << v[0] << endl;
}