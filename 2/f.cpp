#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<int> z(string s)
{
	int n = s.length();
	vector<int> qq(n);
	int l = 0, t = 0;
	for (int i = 1; i < n; ++i)
	{
		qq[i] = max(0, min(t - i, qq[i - l]));
		while (i + qq[i] < n && s[qq[i]] == s[i + qq[i]])
			qq[i]++;
		if (i + qq[i] > t)
		{
			l = i;
			t = i + qq[i];
		}
	}
	return qq;
}

int main()
{
	int n1, n2, l = 0, t = 0;
	long long c = 0;
	cin >> n1 >> n2;
	string a, b;
	cin >> a >> b;
	string s = b + '#' + a;
	int n = s.length();
	vector<int> qq(n);
	for (int i = 1; i < n; ++i)
	{
		qq[i] = max(0, min(t - i, qq[i - l]));
		while (s[qq[i]] == s[i + qq[i]] && i + qq[i] < n)
			qq[i]++;
		if (i + qq[i] > t)
		{
			l = i;
			t = i + qq[i];
		}
	}
	for (int i = n2 + 1; i <= n1 + 1; ++i)
	{
		if (qq[i] == n2)
			c++;
	}
	cout << c << endl;
}