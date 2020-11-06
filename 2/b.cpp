#include <iostream>
#include <string>
using namespace std;
int main()
{
	unsigned long long stra = 0, strb = 0, a, b, z = 1000000000000000;
	char qq;
	while (cin >> a >> qq >> b)
	{
		stra += a;
		strb += b;
	}
	stra += strb / z;
	strb %= z;
	cout << stra << '.' << string(15 - to_string(strb).size(), '0') << strb << endl;
	return 0;
}