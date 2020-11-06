#include <iostream>
#include <string>
using namespace std;

int g(char ch)
{
	if ('0' <= ch && ch <= '9')
		return ch - '0';
	else
		return ch - 'a' + 10;
}
char to(int val)
{
	if (val < 10)
		return val + '0';
	else
		return val - 10 + 'a';
}
int main()
{
	int a, b;
	string s, q;
	long long z = 0;
	cin >> a >> b >> s;
	for (int i = 0; i < s.size(); ++i)
	{
		z *= a;
		z += g(s[i]);
	}
	while (z)
	{
		int x = z % b;
		z /= b;
		q += to(x);
	}
	for (int i = q.size() - 1; i >= 0; i--)
		cout << q[i];
}