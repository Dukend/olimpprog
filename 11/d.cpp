#include <bits/stdc++.h>
typedef long long ll;
#define INF 1111111111111;
using namespace std;
int count(int a)
{
	unsigned int p = 1, result = 0;
	while (p != 0)
	{
		if ((p & a) != 0)
			result++;
		p = p << 1;
	}
	return result;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	vector<long long> x;
	x.push_back(0);
	for (int i = 0; i < a.size(); ++i)
	{
		long long n1 = x.size();
		for (long long j = 0; j < n1; ++j)
			x.push_back(x[j] ^ a[i]);
	}
	long long result = 0;
	for (long long i = 0; i < x.size(); ++i)
	{
		if (count(i) == k)
			result = max(result, x[i]);
	}
	cout << result << endl;
	return 0;
}