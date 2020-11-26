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