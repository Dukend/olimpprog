#include <bits/stdc++.h>

using namespace std;

long long bi(vector<long long> &v, long long a)
{
	long long l = 0, r = v.size() - 1;

	if (a == v[r])
		return r;

	while (true)
	{
		if (a > v[(l + r) / 2])
			l = (l + r) / 2;
		else if (a < v[(l + r) / 2])
			r = (l + r) / 2;
		else
			return (l + r) / 2;
		if ((l == r && a != v[l]) || (r - l == 1 && a != v[l] && a != v[r]))
			return -1;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<long long> v;

	v.push_back(0);
	for (long long i = 1; i < 1000005; i++)
	{
		v.push_back(i * i * i);
	}

	int n;
	long long x;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;

		int s = 1;
		if (x < 0)
		{
			x = -x;
			s = -1;
		}

		long long res = bi(v, x);

		if (res != -1)
		{
			cout << res * s << '\n';
		}
		else
		{
			cout << "NO\n";
		}
	}

	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a)
{
	return a & (a << 1);
}

bool ok(int a, int b, int n)
{
	return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll mod = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	int masks = (1 << m);
	vector<ll> prev(masks, 1);
	vector<ll> curr(masks, 1);
	for (int i = 1; i < n; ++i)
	{
		prev.swap(curr);
		curr.assign(masks, 0);
		for (int mask = 0; mask < masks; ++mask)
		{
			for (int last = 0; last < masks; last++)
			{
				if (!ok(mask, last, m))
				{
					curr[mask] += prev[last];
					curr[mask] %= mod;
				}
			}
		}
	}
	ll result = 0;
	for (int i = 0; i < curr.size(); ++i)
	{
		result += curr[i];
		result %= mod;
	}
	cout << result << endl;
	return 0;
}