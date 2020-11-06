#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int c = 0;
	for (char a : s)
	{
		if (a == '0' || a == '4' || a == '6' || a == '9')
			c += 1;
		else if (a == '8')
			c += 2;
	}
	cout << c;
}