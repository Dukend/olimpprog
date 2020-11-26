#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
struct event
{
	ull a;
	ll x;
};
bool operator<(event lhs, event rhs)
{
	return lhs.a < rhs.a;
}
ll gcd(ll a, ll b)
{
	while (a != 0)
	{
		b %= a;
		swap(a, b);
	}
	return b;
}

ll lcm(ll a, ll b)
{
	return (a / gcd(a, b)) * b;
}

ll extgcd(ll a, ll b, ll &x, ll &y)
{
	if (a == 0)
	{
		x = 0;
		y = 1;
		return b;
	}

	ll x1, y1;
	ll g = extgcd(b % a, a, x1, y1);
	x = y1 - (b / a) * x1;
	y = x1;
	return g;
}

ll obrat(ll a, ll mod)
{
	ll x, y, g;
	g = extgcd(a, mod, x, y);
	if (g > 1)
		return 0;
	else if (x >= 0)
		return x;
	else
		return x + mod;
}

ll binpow(ll a, ll n, ll mod)
{
	ll res = 1;
	while (n != 0)
	{
		if (n % 2 != 0)
		{
			res = res * a % mod;
		}
		a = a * a % mod;
		n /= 2;
	}
	return res;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll n;
	cin >> n;
	vector<event> eve(2 * n);
	for (ll i = 0; i < 2 * n; i += 2)
	{
		cin >> eve[i].a >> eve[i + 1].a >> eve[i].x;
		eve[i + 1].a++;
		eve[i + 1].x = -eve[i].x;
	}
	sort(eve.begin(), eve.end());
	for (ll i = 0; i < 2 * n - 1; i++)
	{
		if (eve[i].a == eve[i + 1].a)
		{
			eve[i + 1].x += eve[i].x;
			eve[i].a = -1000000000000000002;
			eve[i].x = 0;
		}
	}
	sort(eve.begin(), eve.end());
	ll mod = 1000000007;
	ll sum = 0;
	ll cur = 0;

	for (ll i = 0; i < 2 * n - 1; i++)
	{
		if (eve[i].a == -1000000000000000002)
			continue;

		cur += eve[i].x;
		cur %= mod;

		ll l = eve[i].a;
		ll r = eve[i + 1].a - 1;
		ll del = r - l + 1;
		ll cur2 = cur * cur;
		ll p2 = binpow(2, mod - 2, mod);
		ll sum2 = l + r;
		sum += ((((del % mod) * (cur2 % mod)) % mod) * (((p2 % mod) * (sum2 % mod)) % mod)) % mod;
	}
	cur += eve[2 * n - 1].x;
	cur %= mod;
	sum += (eve[2 * n - 1].a % mod) * ((cur * cur) % mod);

	cout << sum % mod;

	return 0;
}