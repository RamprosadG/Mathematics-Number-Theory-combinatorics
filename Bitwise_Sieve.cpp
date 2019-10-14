#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll                 long long
#define LL                 long long
#define pii                pair<int, int>
#define pll                pair<ll, ll>
#define pil                pair<int, ll>
#define pli                pair<ll, int>
#define vi                 vector<int>
#define vl                 vector<ll>
#define vii                vector<pii>
#define vll                vector<pll>
#define vil                vector<pil>
#define vli                vector<pli>
#define pb                 push_back
#define ppb                pop_back
#define mp                 make_pair
#define ff                 first
#define ss                 second
#define sz(x)              (int)x.size()
#define TN                 typename
#define all(v)             v.begin(), v.end()
#define fill(a, b)         memset(a, b, sizeof(a))
#define endl               '\n'
#define policy_set         tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define policy_multiset    tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>

template <TN T> T gcd(T a, T b) {return !b ? a : gcd(b, a % b);}
template <TN T> T lcm(T a, T b) {return a * (b / gcd(a, b));}
template <TN T> T sqr(T a) {return a * a;}
template <TN T> T cube(T a) {return a * a * a;}
template <TN T> inline void smin(T &a, T b) {a = a < b ? a : b;}
template <TN T> inline void smax(T &a, T b) {a = a > b ? a : b;}

template <TN T> inline void Int(T &n) {
	n = 0; int f = 1; register int ch = getchar();
	for (; !isdigit(ch); ch = getchar()) if (ch == '-') f = -1;
	for (; isdigit(ch); ch = getchar()) n = (n << 3) + (n << 1) + ch - '0';
	n = n * f;
}

#define error(args...) {vector <string> _v = split(#args, ','); err(_v.begin(), args); cout << endl;}
vector <string> split(const string &s, char c) {
	vector <string> v;
	stringstream ss(s); string x;
	while (getline(ss, x, c)) v.emplace_back(x);
	return move(v);
}
void err(vector <string> :: iterator it) {}
template <typename T, typename... Args>
void err(vector <string> :: iterator it, T a, Args... args) {
	cout << it -> substr((*it)[0] == ' ', it -> length()) << " = " << a << ", ";
	err(++it, args...);
}

inline int in() {int n; scanf("%d", &n); return n;}
inline ll Lin() {ll n; scanf("%lld", &n); return n;}
inline double Din() {double n; scanf("%lf", &n); return n;}

inline int add(int a, int b, int mod) {a += b; return a >= mod ? a - mod : a;}
inline int sub(int a, int b, int mod) {a -= b; return a < 0 ? a + mod : a;}
inline int mul(int a, int b, int mod) {return (ll)a * b % mod;}

const int mod        = (int)1e9 + 7;
const ll  Mod        = (ll)1e9 + 7;

inline int add(int a, int b) {a += b; return a >= mod ? a - mod : a;}
inline int sub(int a, int b) {a -= b; return a < 0 ? a + mod : a;}
inline int mul(int a, int b) {return (ll)a * b % mod;}

const int inf        = (int)2e9 + 5;
const ll  Inf        = (ll)1e18 + 5;
const int N          = 2e5 + 5;


struct Bitwise_Sieve {

	std::vector<int> vis;
	std::vector<int> prime;

	Bitwise_Sieve() {
		vis.resize(N / 32 + 2, 0);
	}

	vi bitwise_sieve(int n) {
		for (int i = 3; i * i <= n; i += 2) {
			if (!(vis[i / 32] & (1 << (i % 32)))) {
				for (int j = i * i; j <= n; j += i + i) {
					vis[j / 32] |= (1 << (j % 32));
				}
			}
		}
		prime.push_back(2);
		for (int i = 3; i <= n; i += 2) {
			if (!(vis[i / 32] & (1 << (i % 32)))) prime.push_back(i);
		}
		return prime;
	}
};

int solve() {
	int n = in();
	Bitwise_Sieve foo;
	vi prime = foo.bitwise_sieve(n);
	for (int p : prime) {
		printf("%d ", p);
	}
	printf("\n");
	return 0;
}

int main() {
	//ios_base::sync_with_stdio(false); cin.tie(NULL);
	int test = 1, tc = 0;
	//scanf("%d", &test);
	//cin >> test;
	while (test--) {
		//printf("Case %d: ", ++tc);
		solve();
	}
	return 0;
}
