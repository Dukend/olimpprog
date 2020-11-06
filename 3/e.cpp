#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	stack<char> s;
	char c;
	for (int i = 0; i < n; i++)
	{
		cin >> c;
		if (c == '[')
			s.push('[');
		else if (c == '{')
			s.push('{');
		else if (c == '(')
			s.push('(');
		else if (c == ']' && !s.empty() && s.top() == '[')
			s.pop();
		else if (c == '}' && !s.empty() && s.top() == '{')
			s.pop();
		else if (c == ')' && !s.empty() && s.top() == '(')
			s.pop();
		else
		{
			s.push(0);
			break;
		}
	}
	if (s.empty())
		cout << "Ja";
	else
		cout << "Nein";
	return 0;
}