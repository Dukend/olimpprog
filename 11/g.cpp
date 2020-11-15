#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007;
struct ev
{
	long long pos, val;
};
bool operator<(ev &l, ev &r)
{
	if (l.pos != r.pos)
		return l.pos < r.pos;
	return l.val > r.val;
}
int main()
{
	long long res = 0, q;
	cin >> q;
	vector<ev> even;
	long long sum = 0, k = 0, r = 0, n = -1;

	for (int i = 0; i < q; i++)
	{
		long long left, right, v;
		cin >> left >> right >> v;
		if (n < right)
			n = right;
		even.push_back(ev{left, v});
		even.push_back(ev{right + 1, -v});
	}

	vector<long long> ans(n);
	sort(even.begin(), even.end());
	for (int i = 0; i < n; i++)
	{
		if (k > 0)
			r = even[k].pos - even[k - 1].pos;
		if (r > 1)
			for (int j = 0; j < r - 1; j++, i++)
				ans[i] = sum;
		if (even[k].pos <= n)
		{
			if (even[k].pos == i + 1)
			{
				sum += even[k].val;
				k++;
				while (even[k].pos == even[k - 1].pos && even[k].pos <= n)
				{
					sum += even[k].val;
					k++;
				}
			}
			ans[i] = sum;
		}
		long long tmp = 1;
		tmp *= ans[i];
		tmp %= MOD;
		tmp *= ans[i];
		tmp %= MOD;
		tmp *= i;
		tmp %= MOD;
		res += tmp;
		res %= MOD;
	}
	cout << res;
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