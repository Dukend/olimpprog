#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
long long MOD = pow(10, 9) + 7;
ll BinPow(ll a, ll n)
{
	ll res = 1;
	while (n != 0)
	{
		if (n % 2 != 0)
			res = res * a % MOD;
		a = a * a % MOD;
		n /= 2;
	}
	return res;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	ll n, k;
	cin >> n >> k;
	vector<ll> v(n + 1);
	vector<ll> zero(n + 1);
	zero[0] = 0;
	v[0] = 1;

	for (ll i = 0; i < n; i++)
	{
		ll tmp;
		cin >> tmp;
		if (tmp == 0)
		{
			zero[i + 1] = zero[i] + 1;
			v[i + 1] = 1;
		}
		else
		{
			zero[i + 1] = zero[i];
			v[i + 1] = v[i] * tmp;
			v[i + 1] %= MOD;
		}
	}

	for (ll i = 0; i < k; i++)
	{
		ll l, r;
		cin >> l >> r;

		if (zero[r] == zero[l - 1])
			cout << v[r] * BinPow(v[l - 1], MOD - 2) % MOD << '\n';
		else
			cout << 0 << '\n';
	}

	return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool bad(int a) {
    return a & (a << 1);
}

bool ok(int a, int b, int n) {
    return bad(a & b) || (bad((~a & ((1 << n) - 1)) & (~b & ((1 << n) - 1))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    int masks = (1<<m);
    vector<ll> prev(masks, 1);
    vector<ll> curr(masks, 1);
    for (int i = 1; i < n; ++i) {
        prev.swap(curr);
        curr.assign(masks, 0);
        for (int mask = 0; mask < masks; ++mask) {
            for (int last = 0; last < masks; last++) {
                if (!ok(mask, last, m)) {
                    curr[mask] += prev[last];
                    curr[mask] %= mod;
                }
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < curr.size(); ++i) {
        result += curr[i];
        result %= mod;
    }
        cout << result << endl;
    return 0;
}