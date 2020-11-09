#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, maxw, fullc = 0;
	cin >> n >> maxw;
	vector<long long> w(n + 1, 0);
	vector<long long> c(n + 1, 0);
	for (long long i = 1; i <= n; i++)
	{
		cin >> w[i] >> c[i];
		fullc += c[i];
	}
	vector<long long> cur(fullc + 1, 0);
	vector<long long> prev(fullc + 1, maxw + 1);
	prev[0] = 0;
	for (long long i = 1; i <= n; i++)
	{
		for (long long j = c[i]; j <= fullc; j++)
			cur[j] = min(prev[j], prev[j - c[i]] + w[i]);
		for (long long j = 0; j < c[i]; j++)
			cur[j] = prev[j];
		swap(cur, prev);
	}
	long long res;
	for (long long i = 0; i <= fullc; i++)
		if (prev[i] <= maxw)
			res = i;
	cout << res << '\n';
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, maxw, fullc = 0;
	cin >> n >> maxw;
	vector<long long> w(n + 1, 0);
	vector<long long> c(n + 1, 0);
	for (long long i = 1; i <= n; i++)
	{
		cin >> w[i] >> c[i];
		fullc += c[i];
	}
	vector<long long> cur(fullc + 1, 0);
	vector<long long> prev(fullc + 1, maxw + 1);
	prev[0] = 0;
	for (long long i = 1; i <= n; i++)
	{
		for (long long j = c[i]; j <= fullc; j++)
			cur[j] = min(prev[j], prev[j - c[i]] + w[i]);
		for (long long j = 0; j < c[i]; j++)
			cur[j] = prev[j];
		swap(cur, prev);
	}
	long long res;
	for (long long i = 0; i <= fullc; i++)
		if (prev[i] <= maxw)
			res = i;
	cout << res << '\n';
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, maxw, fullc = 0;
	cin >> n >> maxw;
	vector<long long> w(n + 1, 0);
	vector<long long> c(n + 1, 0);
	for (long long i = 1; i <= n; i++)
	{
		cin >> w[i] >> c[i];
		fullc += c[i];
	}
	vector<long long> cur(fullc + 1, 0);
	vector<long long> prev(fullc + 1, maxw + 1);
	prev[0] = 0;
	for (long long i = 1; i <= n; i++)
	{
		for (long long j = c[i]; j <= fullc; j++)
			cur[j] = min(prev[j], prev[j - c[i]] + w[i]);
		for (long long j = 0; j < c[i]; j++)
			cur[j] = prev[j];
		swap(cur, prev);
	}
	long long res;
	for (long long i = 0; i <= fullc; i++)
		if (prev[i] <= maxw)
			res = i;
	cout << res << '\n';
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, maxw, fullc = 0;
	cin >> n >> maxw;
	vector<long long> w(n + 1, 0);
	vector<long long> c(n + 1, 0);
	for (long long i = 1; i <= n; i++)
	{
		cin >> w[i] >> c[i];
		fullc += c[i];
	}
	vector<long long> cur(fullc + 1, 0);
	vector<long long> prev(fullc + 1, maxw + 1);
	prev[0] = 0;
	for (long long i = 1; i <= n; i++)
	{
		for (long long j = c[i]; j <= fullc; j++)
			cur[j] = min(prev[j], prev[j - c[i]] + w[i]);
		for (long long j = 0; j < c[i]; j++)
			cur[j] = prev[j];
		swap(cur, prev);
	}
	long long res;
	for (long long i = 0; i <= fullc; i++)
		if (prev[i] <= maxw)
			res = i;
	cout << res << '\n';
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, maxw, fullc = 0;
	cin >> n >> maxw;
	vector<long long> w(n + 1, 0);
	vector<long long> c(n + 1, 0);
	for (long long i = 1; i <= n; i++)
	{
		cin >> w[i] >> c[i];
		fullc += c[i];
	}
	vector<long long> cur(fullc + 1, 0);
	vector<long long> prev(fullc + 1, maxw + 1);
	prev[0] = 0;
	for (long long i = 1; i <= n; i++)
	{
		for (long long j = c[i]; j <= fullc; j++)
			cur[j] = min(prev[j], prev[j - c[i]] + w[i]);
		for (long long j = 0; j < c[i]; j++)
			cur[j] = prev[j];
		swap(cur, prev);
	}
	long long res;
	for (long long i = 0; i <= fullc; i++)
		if (prev[i] <= maxw)
			res = i;
	cout << res << '\n';
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, maxw, fullc = 0;
	cin >> n >> maxw;
	vector<long long> w(n + 1, 0);
	vector<long long> c(n + 1, 0);
	for (long long i = 1; i <= n; i++)
	{
		cin >> w[i] >> c[i];
		fullc += c[i];
	}
	vector<long long> cur(fullc + 1, 0);
	vector<long long> prev(fullc + 1, maxw + 1);
	prev[0] = 0;
	for (long long i = 1; i <= n; i++)
	{
		for (long long j = c[i]; j <= fullc; j++)
			cur[j] = min(prev[j], prev[j - c[i]] + w[i]);
		for (long long j = 0; j < c[i]; j++)
			cur[j] = prev[j];
		swap(cur, prev);
	}
	long long res;
	for (long long i = 0; i <= fullc; i++)
		if (prev[i] <= maxw)
			res = i;
	cout << res << '\n';
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, maxw, fullc = 0;
	cin >> n >> maxw;
	vector<long long> w(n + 1, 0);
	vector<long long> c(n + 1, 0);
	for (long long i = 1; i <= n; i++)
	{
		cin >> w[i] >> c[i];
		fullc += c[i];
	}
	vector<long long> cur(fullc + 1, 0);
	vector<long long> prev(fullc + 1, maxw + 1);
	prev[0] = 0;
	for (long long i = 1; i <= n; i++)
	{
		for (long long j = c[i]; j <= fullc; j++)
			cur[j] = min(prev[j], prev[j - c[i]] + w[i]);
		for (long long j = 0; j < c[i]; j++)
			cur[j] = prev[j];
		swap(cur, prev);
	}
	long long res;
	for (long long i = 0; i <= fullc; i++)
		if (prev[i] <= maxw)
			res = i;
	cout << res << '\n';
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, maxw, fullc = 0;
	cin >> n >> maxw;
	vector<long long> w(n + 1, 0);
	vector<long long> c(n + 1, 0);
	for (long long i = 1; i <= n; i++)
	{
		cin >> w[i] >> c[i];
		fullc += c[i];
	}
	vector<long long> cur(fullc + 1, 0);
	vector<long long> prev(fullc + 1, maxw + 1);
	prev[0] = 0;
	for (long long i = 1; i <= n; i++)
	{
		for (long long j = c[i]; j <= fullc; j++)
			cur[j] = min(prev[j], prev[j - c[i]] + w[i]);
		for (long long j = 0; j < c[i]; j++)
			cur[j] = prev[j];
		swap(cur, prev);
	}
	long long res;
	for (long long i = 0; i <= fullc; i++)
		if (prev[i] <= maxw)
			res = i;
	cout << res << '\n';
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, maxw, fullc = 0;
	cin >> n >> maxw;
	vector<long long> w(n + 1, 0);
	vector<long long> c(n + 1, 0);
	for (long long i = 1; i <= n; i++)
	{
		cin >> w[i] >> c[i];
		fullc += c[i];
	}
	vector<long long> cur(fullc + 1, 0);
	vector<long long> prev(fullc + 1, maxw + 1);
	prev[0] = 0;
	for (long long i = 1; i <= n; i++)
	{
		for (long long j = c[i]; j <= fullc; j++)
			cur[j] = min(prev[j], prev[j - c[i]] + w[i]);
		for (long long j = 0; j < c[i]; j++)
			cur[j] = prev[j];
		swap(cur, prev);
	}
	long long res;
	for (long long i = 0; i <= fullc; i++)
		if (prev[i] <= maxw)
			res = i;
	cout << res << '\n';
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, maxw, fullc = 0;
	cin >> n >> maxw;
	vector<long long> w(n + 1, 0);
	vector<long long> c(n + 1, 0);
	for (long long i = 1; i <= n; i++)
	{
		cin >> w[i] >> c[i];
		fullc += c[i];
	}
	vector<long long> cur(fullc + 1, 0);
	vector<long long> prev(fullc + 1, maxw + 1);
	prev[0] = 0;
	for (long long i = 1; i <= n; i++)
	{
		for (long long j = c[i]; j <= fullc; j++)
			cur[j] = min(prev[j], prev[j - c[i]] + w[i]);
		for (long long j = 0; j < c[i]; j++)
			cur[j] = prev[j];
		swap(cur, prev);
	}
	long long res;
	for (long long i = 0; i <= fullc; i++)
		if (prev[i] <= maxw)
			res = i;
	cout << res << '\n';
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, maxw, fullc = 0;
	cin >> n >> maxw;
	vector<long long> w(n + 1, 0);
	vector<long long> c(n + 1, 0);
	for (long long i = 1; i <= n; i++)
	{
		cin >> w[i] >> c[i];
		fullc += c[i];
	}
	vector<long long> cur(fullc + 1, 0);
	vector<long long> prev(fullc + 1, maxw + 1);
	prev[0] = 0;
	for (long long i = 1; i <= n; i++)
	{
		for (long long j = c[i]; j <= fullc; j++)
			cur[j] = min(prev[j], prev[j - c[i]] + w[i]);
		for (long long j = 0; j < c[i]; j++)
			cur[j] = prev[j];
		swap(cur, prev);
	}
	long long res;
	for (long long i = 0; i <= fullc; i++)
		if (prev[i] <= maxw)
			res = i;
	cout << res << '\n';
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, maxw, fullc = 0;
	cin >> n >> maxw;
	vector<long long> w(n + 1, 0);
	vector<long long> c(n + 1, 0);
	for (long long i = 1; i <= n; i++)
	{
		cin >> w[i] >> c[i];
		fullc += c[i];
	}
	vector<long long> cur(fullc + 1, 0);
	vector<long long> prev(fullc + 1, maxw + 1);
	prev[0] = 0;
	for (long long i = 1; i <= n; i++)
	{
		for (long long j = c[i]; j <= fullc; j++)
			cur[j] = min(prev[j], prev[j - c[i]] + w[i]);
		for (long long j = 0; j < c[i]; j++)
			cur[j] = prev[j];
		swap(cur, prev);
	}
	long long res;
	for (long long i = 0; i <= fullc; i++)
		if (prev[i] <= maxw)
			res = i;
	cout << res << '\n';
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, maxw, fullc = 0;
	cin >> n >> maxw;
	vector<long long> w(n + 1, 0);
	vector<long long> c(n + 1, 0);
	for (long long i = 1; i <= n; i++)
	{
		cin >> w[i] >> c[i];
		fullc += c[i];
	}
	vector<long long> cur(fullc + 1, 0);
	vector<long long> prev(fullc + 1, maxw + 1);
	prev[0] = 0;
	for (long long i = 1; i <= n; i++)
	{
		for (long long j = c[i]; j <= fullc; j++)
			cur[j] = min(prev[j], prev[j - c[i]] + w[i]);
		for (long long j = 0; j < c[i]; j++)
			cur[j] = prev[j];
		swap(cur, prev);
	}
	long long res;
	for (long long i = 0; i <= fullc; i++)
		if (prev[i] <= maxw)
			res = i;
	cout << res << '\n';
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, maxw, fullc = 0;
	cin >> n >> maxw;
	vector<long long> w(n + 1, 0);
	vector<long long> c(n + 1, 0);
	for (long long i = 1; i <= n; i++)
	{
		cin >> w[i] >> c[i];
		fullc += c[i];
	}
	vector<long long> cur(fullc + 1, 0);
	vector<long long> prev(fullc + 1, maxw + 1);
	prev[0] = 0;
	for (long long i = 1; i <= n; i++)
	{
		for (long long j = c[i]; j <= fullc; j++)
			cur[j] = min(prev[j], prev[j - c[i]] + w[i]);
		for (long long j = 0; j < c[i]; j++)
			cur[j] = prev[j];
		swap(cur, prev);
	}
	long long res;
	for (long long i = 0; i <= fullc; i++)
		if (prev[i] <= maxw)
			res = i;
	cout << res << '\n';
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, maxw, fullc = 0;
	cin >> n >> maxw;
	vector<long long> w(n + 1, 0);
	vector<long long> c(n + 1, 0);
	for (long long i = 1; i <= n; i++)
	{
		cin >> w[i] >> c[i];
		fullc += c[i];
	}
	vector<long long> cur(fullc + 1, 0);
	vector<long long> prev(fullc + 1, maxw + 1);
	prev[0] = 0;
	for (long long i = 1; i <= n; i++)
	{
		for (long long j = c[i]; j <= fullc; j++)
			cur[j] = min(prev[j], prev[j - c[i]] + w[i]);
		for (long long j = 0; j < c[i]; j++)
			cur[j] = prev[j];
		swap(cur, prev);
	}
	long long res;
	for (long long i = 0; i <= fullc; i++)
		if (prev[i] <= maxw)
			res = i;
	cout << res << '\n';
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, maxw, fullc = 0;
	cin >> n >> maxw;
	vector<long long> w(n + 1, 0);
	vector<long long> c(n + 1, 0);
	for (long long i = 1; i <= n; i++)
	{
		cin >> w[i] >> c[i];
		fullc += c[i];
	}
	vector<long long> cur(fullc + 1, 0);
	vector<long long> prev(fullc + 1, maxw + 1);
	prev[0] = 0;
	for (long long i = 1; i <= n; i++)
	{
		for (long long j = c[i]; j <= fullc; j++)
			cur[j] = min(prev[j], prev[j - c[i]] + w[i]);
		for (long long j = 0; j < c[i]; j++)
			cur[j] = prev[j];
		swap(cur, prev);
	}
	long long res;
	for (long long i = 0; i <= fullc; i++)
		if (prev[i] <= maxw)
			res = i;
	cout << res << '\n';
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, maxw, fullc = 0;
	cin >> n >> maxw;
	vector<long long> w(n + 1, 0);
	vector<long long> c(n + 1, 0);
	for (long long i = 1; i <= n; i++)
	{
		cin >> w[i] >> c[i];
		fullc += c[i];
	}
	vector<long long> cur(fullc + 1, 0);
	vector<long long> prev(fullc + 1, maxw + 1);
	prev[0] = 0;
	for (long long i = 1; i <= n; i++)
	{
		for (long long j = c[i]; j <= fullc; j++)
			cur[j] = min(prev[j], prev[j - c[i]] + w[i]);
		for (long long j = 0; j < c[i]; j++)
			cur[j] = prev[j];
		swap(cur, prev);
	}
	long long res;
	for (long long i = 0; i <= fullc; i++)
		if (prev[i] <= maxw)
			res = i;
	cout << res << '\n';
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, maxw, fullc = 0;
	cin >> n >> maxw;
	vector<long long> w(n + 1, 0);
	vector<long long> c(n + 1, 0);
	for (long long i = 1; i <= n; i++)
	{
		cin >> w[i] >> c[i];
		fullc += c[i];
	}
	vector<long long> cur(fullc + 1, 0);
	vector<long long> prev(fullc + 1, maxw + 1);
	prev[0] = 0;
	for (long long i = 1; i <= n; i++)
	{
		for (long long j = c[i]; j <= fullc; j++)
			cur[j] = min(prev[j], prev[j - c[i]] + w[i]);
		for (long long j = 0; j < c[i]; j++)
			cur[j] = prev[j];
		swap(cur, prev);
	}
	long long res;
	for (long long i = 0; i <= fullc; i++)
		if (prev[i] <= maxw)
			res = i;
	cout << res << '\n';
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, maxw, fullc = 0;
	cin >> n >> maxw;
	vector<long long> w(n + 1, 0);
	vector<long long> c(n + 1, 0);
	for (long long i = 1; i <= n; i++)
	{
		cin >> w[i] >> c[i];
		fullc += c[i];
	}
	vector<long long> cur(fullc + 1, 0);
	vector<long long> prev(fullc + 1, maxw + 1);
	prev[0] = 0;
	for (long long i = 1; i <= n; i++)
	{
		for (long long j = c[i]; j <= fullc; j++)
			cur[j] = min(prev[j], prev[j - c[i]] + w[i]);
		for (long long j = 0; j < c[i]; j++)
			cur[j] = prev[j];
		swap(cur, prev);
	}
	long long res;
	for (long long i = 0; i <= fullc; i++)
		if (prev[i] <= maxw)
			res = i;
	cout << res << '\n';
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, maxw, fullc = 0;
	cin >> n >> maxw;
	vector<long long> w(n + 1, 0);
	vector<long long> c(n + 1, 0);
	for (long long i = 1; i <= n; i++)
	{
		cin >> w[i] >> c[i];
		fullc += c[i];
	}
	vector<long long> cur(fullc + 1, 0);
	vector<long long> prev(fullc + 1, maxw + 1);
	prev[0] = 0;
	for (long long i = 1; i <= n; i++)
	{
		for (long long j = c[i]; j <= fullc; j++)
			cur[j] = min(prev[j], prev[j - c[i]] + w[i]);
		for (long long j = 0; j < c[i]; j++)
			cur[j] = prev[j];
		swap(cur, prev);
	}
	long long res;
	for (long long i = 0; i <= fullc; i++)
		if (prev[i] <= maxw)
			res = i;
	cout << res << '\n';
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, maxw, fullc = 0;
	cin >> n >> maxw;
	vector<long long> w(n + 1, 0);
	vector<long long> c(n + 1, 0);
	for (long long i = 1; i <= n; i++)
	{
		cin >> w[i] >> c[i];
		fullc += c[i];
	}
	vector<long long> cur(fullc + 1, 0);
	vector<long long> prev(fullc + 1, maxw + 1);
	prev[0] = 0;
	for (long long i = 1; i <= n; i++)
	{
		for (long long j = c[i]; j <= fullc; j++)
			cur[j] = min(prev[j], prev[j - c[i]] + w[i]);
		for (long long j = 0; j < c[i]; j++)
			cur[j] = prev[j];
		swap(cur, prev);
	}
	long long res;
	for (long long i = 0; i <= fullc; i++)
		if (prev[i] <= maxw)
			res = i;
	cout << res << '\n';
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, maxw, fullc = 0;
	cin >> n >> maxw;
	vector<long long> w(n + 1, 0);
	vector<long long> c(n + 1, 0);
	for (long long i = 1; i <= n; i++)
	{
		cin >> w[i] >> c[i];
		fullc += c[i];
	}
	vector<long long> cur(fullc + 1, 0);
	vector<long long> prev(fullc + 1, maxw + 1);
	prev[0] = 0;
	for (long long i = 1; i <= n; i++)
	{
		for (long long j = c[i]; j <= fullc; j++)
			cur[j] = min(prev[j], prev[j - c[i]] + w[i]);
		for (long long j = 0; j < c[i]; j++)
			cur[j] = prev[j];
		swap(cur, prev);
	}
	long long res;
	for (long long i = 0; i <= fullc; i++)
		if (prev[i] <= maxw)
			res = i;
	cout << res << '\n';
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, maxw, fullc = 0;
	cin >> n >> maxw;
	vector<long long> w(n + 1, 0);
	vector<long long> c(n + 1, 0);
	for (long long i = 1; i <= n; i++)
	{
		cin >> w[i] >> c[i];
		fullc += c[i];
	}
	vector<long long> cur(fullc + 1, 0);
	vector<long long> prev(fullc + 1, maxw + 1);
	prev[0] = 0;
	for (long long i = 1; i <= n; i++)
	{
		for (long long j = c[i]; j <= fullc; j++)
			cur[j] = min(prev[j], prev[j - c[i]] + w[i]);
		for (long long j = 0; j < c[i]; j++)
			cur[j] = prev[j];
		swap(cur, prev);
	}
	long long res;
	for (long long i = 0; i <= fullc; i++)
		if (prev[i] <= maxw)
			res = i;
	cout << res << '\n';
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, maxw, fullc = 0;
	cin >> n >> maxw;
	vector<long long> w(n + 1, 0);
	vector<long long> c(n + 1, 0);
	for (long long i = 1; i <= n; i++)
	{
		cin >> w[i] >> c[i];
		fullc += c[i];
	}
	vector<long long> cur(fullc + 1, 0);
	vector<long long> prev(fullc + 1, maxw + 1);
	prev[0] = 0;
	for (long long i = 1; i <= n; i++)
	{
		for (long long j = c[i]; j <= fullc; j++)
			cur[j] = min(prev[j], prev[j - c[i]] + w[i]);
		for (long long j = 0; j < c[i]; j++)
			cur[j] = prev[j];
		swap(cur, prev);
	}
	long long res;
	for (long long i = 0; i <= fullc; i++)
		if (prev[i] <= maxw)
			res = i;
	cout << res << '\n';
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, maxw, fullc = 0;
	cin >> n >> maxw;
	vector<long long> w(n + 1, 0);
	vector<long long> c(n + 1, 0);
	for (long long i = 1; i <= n; i++)
	{
		cin >> w[i] >> c[i];
		fullc += c[i];
	}
	vector<long long> cur(fullc + 1, 0);
	vector<long long> prev(fullc + 1, maxw + 1);
	prev[0] = 0;
	for (long long i = 1; i <= n; i++)
	{
		for (long long j = c[i]; j <= fullc; j++)
			cur[j] = min(prev[j], prev[j - c[i]] + w[i]);
		for (long long j = 0; j < c[i]; j++)
			cur[j] = prev[j];
		swap(cur, prev);
	}
	long long res;
	for (long long i = 0; i <= fullc; i++)
		if (prev[i] <= maxw)
			res = i;
	cout << res << '\n';
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, maxw, fullc = 0;
	cin >> n >> maxw;
	vector<long long> w(n + 1, 0);
	vector<long long> c(n + 1, 0);
	for (long long i = 1; i <= n; i++)
	{
		cin >> w[i] >> c[i];
		fullc += c[i];
	}
	vector<long long> cur(fullc + 1, 0);
	vector<long long> prev(fullc + 1, maxw + 1);
	prev[0] = 0;
	for (long long i = 1; i <= n; i++)
	{
		for (long long j = c[i]; j <= fullc; j++)
			cur[j] = min(prev[j], prev[j - c[i]] + w[i]);
		for (long long j = 0; j < c[i]; j++)
			cur[j] = prev[j];
		swap(cur, prev);
	}
	long long res;
	for (long long i = 0; i <= fullc; i++)
		if (prev[i] <= maxw)
			res = i;
	cout << res << '\n';
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, maxw, fullc = 0;
	cin >> n >> maxw;
	vector<long long> w(n + 1, 0);
	vector<long long> c(n + 1, 0);
	for (long long i = 1; i <= n; i++)
	{
		cin >> w[i] >> c[i];
		fullc += c[i];
	}
	vector<long long> cur(fullc + 1, 0);
	vector<long long> prev(fullc + 1, maxw + 1);
	prev[0] = 0;
	for (long long i = 1; i <= n; i++)
	{
		for (long long j = c[i]; j <= fullc; j++)
			cur[j] = min(prev[j], prev[j - c[i]] + w[i]);
		for (long long j = 0; j < c[i]; j++)
			cur[j] = prev[j];
		swap(cur, prev);
	}
	long long res;
	for (long long i = 0; i <= fullc; i++)
		if (prev[i] <= maxw)
			res = i;
	cout << res << '\n';
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, maxw, fullc = 0;
	cin >> n >> maxw;
	vector<long long> w(n + 1, 0);
	vector<long long> c(n + 1, 0);
	for (long long i = 1; i <= n; i++)
	{
		cin >> w[i] >> c[i];
		fullc += c[i];
	}
	vector<long long> cur(fullc + 1, 0);
	vector<long long> prev(fullc + 1, maxw + 1);
	prev[0] = 0;
	for (long long i = 1; i <= n; i++)
	{
		for (long long j = c[i]; j <= fullc; j++)
			cur[j] = min(prev[j], prev[j - c[i]] + w[i]);
		for (long long j = 0; j < c[i]; j++)
			cur[j] = prev[j];
		swap(cur, prev);
	}
	long long res;
	for (long long i = 0; i <= fullc; i++)
		if (prev[i] <= maxw)
			res = i;
	cout << res << '\n';
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, maxw, fullc = 0;
	cin >> n >> maxw;
	vector<long long> w(n + 1, 0);
	vector<long long> c(n + 1, 0);
	for (long long i = 1; i <= n; i++)
	{
		cin >> w[i] >> c[i];
		fullc += c[i];
	}
	vector<long long> cur(fullc + 1, 0);
	vector<long long> prev(fullc + 1, maxw + 1);
	prev[0] = 0;
	for (long long i = 1; i <= n; i++)
	{
		for (long long j = c[i]; j <= fullc; j++)
			cur[j] = min(prev[j], prev[j - c[i]] + w[i]);
		for (long long j = 0; j < c[i]; j++)
			cur[j] = prev[j];
		swap(cur, prev);
	}
	long long res;
	for (long long i = 0; i <= fullc; i++)
		if (prev[i] <= maxw)
			res = i;
	cout << res << '\n';
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, maxw, fullc = 0;
	cin >> n >> maxw;
	vector<long long> w(n + 1, 0);
	vector<long long> c(n + 1, 0);
	for (long long i = 1; i <= n; i++)
	{
		cin >> w[i] >> c[i];
		fullc += c[i];
	}
	vector<long long> cur(fullc + 1, 0);
	vector<long long> prev(fullc + 1, maxw + 1);
	prev[0] = 0;
	for (long long i = 1; i <= n; i++)
	{
		for (long long j = c[i]; j <= fullc; j++)
			cur[j] = min(prev[j], prev[j - c[i]] + w[i]);
		for (long long j = 0; j < c[i]; j++)
			cur[j] = prev[j];
		swap(cur, prev);
	}
	long long res;
	for (long long i = 0; i <= fullc; i++)
		if (prev[i] <= maxw)
			res = i;
	cout << res << '\n';
}