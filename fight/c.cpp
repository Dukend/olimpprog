#include <bits/stdc++.h>
using namespace std;
int main()
{
	int ch;
	bool q = true;
	while (q)
	{
		ch = getchar();
		if (ch == EOF)
			break;
		if (ch == 'U')
		{
			ch = getchar();
			if (ch == 'U')
			{
				ch = getchar();
				if (ch == 'U')
				{
					cout << "F";
				}
				if (ch == 'C')
				{
					cout << "F";
				}
				if (ch == 'A')
				{
					cout << "L";
				}
				if (ch == 'G')
				{
					cout << "L";
				}
			}
			else if (ch == 'C')
			{
				ch = getchar();
				cout << "S";
			}
			else if (ch == 'A')
			{
				ch = getchar();
				if (ch == 'U')
				{
					cout << "Y";
				}
				if (ch == 'C')
				{
					cout << "Y";
				}
				if (ch == 'A')
				{
					q = false;
				}
				if (ch == 'G')
				{
					q = false;
				}
			}
			else if (ch == 'G')
			{
				ch = getchar();
				if (ch == 'U')
				{
					cout << "C";
				}
				if (ch == 'C')
				{
					cout << "C";
				}
				if (ch == 'A')
				{
					q = false;
				}
				if (ch == 'G')
				{
					cout << "W";
				}
			}
		}
		else if (ch == 'C')
		{
			ch = getchar();
			if (ch == 'U')
			{
				ch = getchar();
				cout << "L";
			}
			else if (ch == 'C')
			{
				ch = getchar();

				cout << "P";
			}
			else if (ch == 'A')
			{
				ch = getchar();
				if (ch == 'U')
				{
					cout << "H";
				}
				if (ch == 'C')
				{
					cout << "H";
				}
				if (ch == 'A')
				{
					cout << "Q";
				}
				if (ch == 'G')
				{
					cout << "Q";
				}
			}
			else if (ch == 'G')
			{
				ch = getchar();
				cout << "R";
			}
		}
		else if (ch == 'A')
		{
			ch = getchar();
			if (ch == 'U')
			{
				ch = getchar();
				if (ch == 'U')
				{
					cout << "I";
				}
				if (ch == 'C')
				{
					cout << "I";
				}
				if (ch == 'A')
				{
					cout << "I";
				}
				if (ch == 'G')
				{
					cout << "M";
				}
			}
			else if (ch == 'C')
			{
				ch = getchar();
				cout << "T";
			}
			else if (ch == 'A')
			{
				ch = getchar();
				if (ch == 'U')
				{
					cout << "N";
				}
				if (ch == 'C')
				{
					cout << "N";
				}
				if (ch == 'A')
				{
					cout << "K";
				}
				if (ch == 'G')
				{
					cout << "K";
				}
			}
			else if (ch == 'G')
			{
				ch = getchar();
				if (ch == 'U')
				{
					cout << "S";
				}
				if (ch == 'C')
				{
					cout << "S";
				}
				if (ch == 'A')
				{
					cout << "R";
				}
				if (ch == 'G')
				{
					cout << "R";
				}
			}
		}
		else if (ch == 'G')
		{
			ch = getchar();
			if (ch == 'U')
			{
				ch = getchar();
				cout << "V";
			}
			else if (ch == 'C')
			{
				ch = getchar();
				cout << "A";
			}
			else if (ch == 'A')
			{
				ch = getchar();
				if (ch == 'U')
				{
					cout << "D";
				}
				if (ch == 'C')
				{
					cout << "D";
				}
				if (ch == 'A')
				{
					cout << "E";
				}
				if (ch == 'G')
				{
					cout << "E";
				}
			}
			else if (ch == 'G')
			{
				ch = getchar();
				cout << "G";
			}
		}
	}

	return 0;
}