#include <bits/stdc++.h>

#pragma optimize("tg", on)

using namespace std;

// definitions
typedef unsigned long long ull;
typedef long double ld;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<ld, ld> pld;
typedef pair<ll, ll> pll;
typedef pair<ull, ull> pull;

const ll p = 31;
const ll P = 1000000007;
const ld INFLD = numeric_limits<ld>::max();
const ll INFL = numeric_limits<ll>::max();
const int INF = numeric_limits<int>::max();
const ld eps = numeric_limits<ld>::epsilon();
const ld pi = 3.14159265358979323846264338327950288419716939937510;
const ld d2r = pi / 180;
const ld r2d = 180 / pi;

#define timeit clock_t _begin = clock();
#define endtimeit           \
	clock_t _end = clock(); \
	cerr << "Elapsed seconds: " << double(_end - _begin) / CLOCKS_PER_SEC << endl;
#define fastIO                    \
	ios_base::sync_with_stdio(0); \
	cin.tie(0);                   \
	cout.tie(0)
#define fori(k, n) for (size_t i(k); i < n; ++i)
#define forj(k, n) for (size_t j(k); j < n; ++j)
#define formi(n, k) for (int i(n); i > k; --i)
#define sz size()
#define rsza(a, df) resize(a, df)
#define rsz(a) resize(a)
#define forel(a) for (auto &el : a)
#define srt(a) sort(a.begin(), a.end())
#define srtf(a, func) sort(a.begin(), a.end(), func)
#define rvrs(a) reverse(a.begin(), a.end())
#define bg begin()
#define ed end()
#ifdef _ONPC_
#define what(x) cerr << #x << " = " << x << endl
#else
#define what(x)
#endif

// simple functions
template <typename T>
inline T gcd(T a, T b)
{
	while (a)
	{
		b %= a;
		swap(a, b);
	}
	return b;
}

template <typename T>
inline T lcm(T a, T b)
{
	return a / gcd(a, b) * b;
}

struct vector3d
{
	ll x, y, z;
};

vector3d operator*(const vector3d &a, ll b)
{
	return {a.x * b, a.y * b, a.z * b};
}

vector3d operator*(ll b, const vector3d &a)
{
	return {a.x * b, a.y * b, a.z * b};
}

vector3d operator+(const vector3d &a, const vector3d &b)
{
	return {a.x + b.x, a.y + b.y, a.z + b.z};
}

vector3d operator-(const vector3d &a, const vector3d &b)
{
	return {a.x - b.x, a.y - b.y, a.z - b.z};
}

ll dot(const vector3d &a, const vector3d &b)
{ //
	return a.x * b.x + a.y * b.y + a.z * b.z;
}

vector3d cross(const vector3d &a, const vector3d &b)
{ // векторное произведение
	return {a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z, a.x * b.y - a.y * b.x};
}

ld len(const vector3d &a)
{
	return sqrtl(ld(dot(a, a)));
}

ld distance(const vector3d &a, const vector3d &b)
{
	const vector3d d = a - b;
	return len(d);
}

ld distance_to_line(const vector3d &a, const vector3d &b, const vector3d &c)
{
	ld area = len(cross(b - a, c - a));
	ld base = distance(a, b);
	return area / base;
}

bool cmp_pair(const vector3d &a, const vector3d &b)
{
	if (a.x != b.x)
		return a.x < b.x;
	if (a.y != b.y)
		return a.y < b.y;
	return a.z < b.z;
}

bool cmp_polar(const vector3d &a, const vector3d &b)
{
	return len(cross(a, b)) > 0;
}

ld distance_to_ray(const vector3d &a, const vector3d &b, const vector3d &c)
{ // до луча
	if (dot(b - a, c - a) > 0)
	{
		return distance_to_line(a, b, c);
	}
	return distance(c, a);
}

ld distance_to_segment(const vector3d &a, const vector3d &b, const vector3d &c)
{
	if (dot(b - a, c - a) < 0)
		return distance(c, a);
	if (dot(a - b, c - b) < 0)
		return distance(c, b);
	return distance_to_line(a, b, c);
}

//
//ld d, v1, v2,x,y;
//ld f(ld v){
//    ld len2 = sqrtl((x-v)*(x-v) + (y-d)*(y-d));
//    ld len1 = sqrtl(v*v +d*d);
//    return len1 / v1 + len2/v2;
//}
//
//const size_t steps = 1000;
//ld ternar_search(ld from, ld to){
//    ld r1(0), l1;
//    for(size_t step(0); step < steps; step++){
//        l1= (from * 2 + to) / 3, r1 = (from + to * 2) / 3;
//        ld fl = f(l1);
//        ld fr = f(r1);
//        if(fl< fr)
//            to = r1;
//        else
//            from = l1;
//    }
//    return r1;
//}

void solve()
{
	int n;
	cin >> n;
	vector<vector3d> a(n);
	ld area(0);
	fori(0, n)
	{
		int x, y, z;
		cin >> x >> y;
		z = 0;
		a[i].x = x;
		a[i].y = y;
		a[i].z = z;
	}
	for (size_t i(1); i < n; i++)
	{
		const vector3d &d = cross(a[i - 1], a[i]);
		area += d.z;
	}
	area += cross(a[n - 1], a[0]).z;
	area /= 2;
	cout << setprecision(25) << abs(area);
}

signed main()
{
#ifdef _ONPC_
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#define TIMEIT
	timeit
#endif // _ONPC_

		fastIO;
	int t(1);
	//    cin >> t; //////////////////////////////// UNCOMMENT IF WITH TESTS ///////////////////////////////////////
	fori(0, t) solve();

#ifdef TIMEIT
	endtimeit
#endif // TIMEIT
		return 0;
}