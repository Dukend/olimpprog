#include <iostream>
using namespace std;
int main()
{
	long long n;
	cin >> n;
	long long a = 0, b = 1, c = 0, q;
	while (n > b)
	{
		c++;
		q = a + b;
		a = b;
		b = q;
	}
	if (n == a)
		cout << c << endl;
	else if (n == b)
		cout << c + 1 << endl;
	else
		cout << -1 << endl;
}