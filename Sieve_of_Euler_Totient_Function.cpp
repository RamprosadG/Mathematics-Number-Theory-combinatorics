#include<bits/stdc++.h>
using namespace std;

#define ll             long long
#define LL             long long
#define gcd(a,b)       __gcd(a, b)
#define lcm(a,b)       a * (b / gcd(a, b))
#define pii            pair<int, int>
#define pll            pair<ll, ll>
#define pil            pair<int, ll>
#define pli            pair<ll, int>
#define vi             vector<int>
#define vl             vector<ll>
#define vii            vector<pii>
#define vll            vector<pll>
#define vil            vector<pil>
#define vli            vector<pli>
#define pb             push_back
#define ppb            pop_back
#define mp             make_pair
#define ff             first
#define ss             second
#define all(v)         v.begin(), v.end()
#define fill(a, b)     memset(a, b, sizeof a)
#define smax(a, b)     a = max(a, b)
#define smin(a, b)     a = min(a, b)
#define sqr(x)         x * x
#define cube(x)        x * x * x
#define endl           '\n'

int in() {
	int n;
	scanf("%d", &n);
	return n;
}

ll Lin() {
	ll n;
	scanf("%lld", &n);
	return n;
}

double Din() {
	double n;
	scanf("%lf", &n);
	return n;
}

const ll inf = (ll)1e17;
const ll mod = (ll)1e9 + 7;
const int N = 2e5 + 5;

struct Sieve_Euler_Totient {

	std::vector<int> phi;
	std::vector<bool> vis;

	Sieve_Euler_Totient() {
		vis.resize(N, true);
	}

	vi totient(int n) {
		phi.resize(n + 1, 0);
		for (int i = 1; i <= n; i++) {
			phi[i] = i;
		}
		for (int i = 2; i <= n; i++) {
			if (vis[i]) {
				for (int j = i; j <= n; j += i) {
					vis[j] = false;
					phi[j] = phi[j] / i * (i - 1);
				}
			}
		}
		return phi;
	}
};

int solve() {
	int n = in();
	Sieve_Euler_Totient foo;
	vi phi = foo.totient(n);
	for (int i = 1; i <= n; i++) {
		if (i == 1) printf("%d", phi[i]);
		else printf(" %d", phi[i]);
	}
	printf("\n");
	return 0;
}

int main() {
	int test = 1, tc = 0;
	while (test--) {
		//printf("Case %d: ", ++tc);
		solve();
	}
	return 0;
}