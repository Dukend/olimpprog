#include <iostream>
using namespace std;

int main()
{
	long long n, x, d = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		d += x;
	}
	cout << d;

	return 0;
}