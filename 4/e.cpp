#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n, v;
	cin >> n;
	multiset<long long> s;
	for (int i = 0; i < n; i++)
	{
		cin >> v;
		s.insert(v);
	}
	while (s.size() > 1)
	{
		long long a = *s.begin();
		s.erase(s.begin());
		long long b = *s.begin();
		s.erase(s.begin());
		cout << a << ' ' << b << endl;
		s.insert(a + b);
	}

	return 0;
}