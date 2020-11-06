#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int bookshelves;
	cin >> bookshelves;
	for (int e = 0; e < bookshelves; e++)
	{
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++)
			cin >> a[i];
		long long c = 0;
		bool ch;
		do
		{
			ch = false;
			for (int i = 0; i < n - 1; i++)
				if (a[i] > a[i + 1])
				{
					swap(a[i], a[i + 1]);
					ch = true;
					c++;
				}
		} while (ch);
		cout << c << endl;
	}
}