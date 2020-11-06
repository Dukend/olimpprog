#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

int main()
{
	map<string, string> mp;
	map<string, int> islog;

	string tmp;
	string log;
	string pas;

	while (cin >> tmp)
	{
		if (tmp == "register")
		{
			cin >> log >> pas;
			if (mp[log] != "")
			{
				cout << "login already in use" << '\n';
			}
			else
			{
				mp[log] = pas;
				cout << "account created" << '\n';
			}
		}

		if (tmp == "login")
		{
			cin >> log >> pas;
			if (mp[log] == pas)
			{
				if (islog[log] == 0)
				{
					islog[log] = 1;
					cout << "logged in" << '\n';
				}
				else
				{
					cout << "already logged in" << '\n';
				}
			}
			else
			{
				cout << "wrong account info" << '\n';
			}
		}

		if (tmp == "logout")
		{
			cin >> log;
			if (mp[log] == "" || islog[log] == 0)
			{
				cout << "incorrect operation" << '\n';
			}
			else
			{
				islog[log] = 0;
				cout << "logged out" << '\n';
			}
		}
	}

	return 0;
}