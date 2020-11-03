#include <iostream>
using namespace std;
int max(int a, int b)
{
	if (a > b)
		return a;
	return b;
}
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << max(a, max(b, c));
	return 0;
}