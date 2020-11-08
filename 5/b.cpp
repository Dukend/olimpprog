#include <bits/stdc++.h>
using namespace std;

int main()
{
	string x;
	long long a = 0;
	cin >> x;
	for (char cha : x)
	{
		a = (cha - '0' + a * 10) % 97;
	}
	if (a == 0)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}