#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> b(n);

	for (int i = 0; i < n; ++i)
		cin >> a[i];
	for (int i = 0; i < n; ++i)
		cin >> b[i];
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	double sum = 0, sum1 = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += (long long)a[i] * b[i];
		sum1 += b[i];
	}
	printf("%.12f\n", sum / sum1);
	return 0;
}