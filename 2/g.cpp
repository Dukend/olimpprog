#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, min = 0, max = 0;
	vector<int> mins, maxs;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
		cin >> v[i];
	for (int i = 0; i < n; ++i)
	{
		if ((i == 0 || v[i - 1] > v[i]) && (i == n - 1 || v[i + 1] > v[i]))
			mins.push_back(i);
		if ((i == 0 || v[i - 1] < v[i]) && (i == n - 1 || v[i + 1] < v[i]))
			maxs.push_back(i);
		if (v[i] < v[min])
			min = i;
		if (v[i] > v[max])
			max = i;
	}
	cout << mins.size() << ' ';
	for (int m : mins)
		cout << m + 1 << ' ';
	cout << endl
		 << maxs.size() << ' ';
	for (int m : maxs)
		cout << m + 1 << ' ';
	cout << endl
		 << min + 1 << ' ' << max + 1;
	return 0;
}