#include <bits/stdc++.h>
using namespace std;
int main()
{
	cout << "? -1000000 -1000000\n";
	cout.flush();
	string s;
	cin >> s;
	double doub = stod(s);
	for (int i = 1; i <= 5; i++)
	{
		if (((double)900000) * pow(2, 0.5) * i - 1 <= doub && doub <= ((double)1100000) * pow(2, 0.5) * i + 1)
		{
			cout << "! " << i << '\n';
			cout.flush();
		}
	}
	return 0;
}