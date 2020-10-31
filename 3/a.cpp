#include <iostream>
#include <vector>

#include <algorithm>
#include <string>

using namespace std;
struct coms
{
	string name;
	int s;
	int p;
};
bool compare(coms l, coms r)
{
	if (l.s != r.s)
	{
		return l.s > r.s;
	}
	else if (l.p != r.p)
		return l.p < r.p;
	else
		return l.name > r.name;
}
int main()
{
	long long n;
	cin >> n;
	vector<coms> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i].name >> v[i].s >> v[i].p;
	}
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < n; i++)
		cout << v[i].name << endl;
	return 0;
}