#include <bits/stdc++.h>
using namespace std;

int main()
{
	unsigned long long n, a = 0;
	cin >> n;
	unsigned long long square = (int)sqrt(n) + 1;
	for (unsigned long long i = 1; i < square; i++)
	{
		if (n % i == 0 && i * i != n)
			a += 2;
		if (n % i == 0 && i * i == n)
			a++;
	}
	cout << a;
	return 0;
}