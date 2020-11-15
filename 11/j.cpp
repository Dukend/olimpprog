#include <bits/stdc++.h>
using namespace std;
long long MOD = 1000000007, mx = 1000010;
vector<char> sim(mx, 1);
map<long long, long long> ost;
vector<long long> funcdiv(long long n)
{
	vector<long long> res;
	for (long long i = 2; i * i <= n; i++)
		if (n % i == 0)
		{
			res.push_back(i);
			if (n / i != i)
				res.push_back(n / i);
		}
	return res;
}
long long pr(vector<char> &sim, long long n)
{
	if (ost.count(n) > 0)
		return ost[n];
	vector<long long> f = funcdiv(n);
	long long ans = 1;
	for (auto &x : f)
		ans = (pr(sim, x) + ans) % MOD;
	return ost[n] = ans;
}
int main()
{
	long long n;
	cin >> n;
	sim[1] = 0;
	for (long long i = 2; i < mx; i++)
		if (sim[i])
			for (long long j = 2 * i; j < mx; j += i)
				sim[j] = 0;
	cout << pr(sim, n);
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
