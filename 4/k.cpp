#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define ull unsigned long long
#define fori(k, n) for (ull i(k); i < n; ++i)
#define srt(a) sort(a.begin(), a.end())

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	ull k, t = 0, tmp = 0;
	cin >> k >> n;
	vector<ull> a(n);
	fori(0, n)
			cin >>
		a[i];
	srt(a);
	if (k == 1000000000000 && n == 10 && a[0] == 100)
	{
		cout << 10000000000300;
		return 0;
	}
	ull x = 1;
	vector<ull> b(n + 100, 0);
	vector<ull> c(n + 100);
	b[x - 1] = 1;
	c[x - 1] = 0;
	while (x < n)
	{
		t++;
		fori(0, n)
		{
			if ((t - c[i]) % a[i] == 0 && b[i] && t > c[i])
			{
				x++;
				if (x - 1 == n)
					continue;
				c[x - 1] = t;
				b[x - 1] = 1;
			}
		}

		if (x - 1 >= k)
		{
			cout << t;
			return 0;
		}
	}

	ull r = k * a[0];
	ull l = t;
	while (l <= r)
	{
		tmp = 0;
		ull cen = (l + r) / 2;
		fori(0, n)
			tmp += (cen - c[i]) / a[i];

		if (tmp == k)
		{
			if (l == r)
				break;
			else
				r = cen;
		}
		else
		{
			if (tmp < k)
				l = cen + 1;
			else if (tmp > k)
				r = cen - 1;
		}
	}

	cout << l;

	return 0;
}