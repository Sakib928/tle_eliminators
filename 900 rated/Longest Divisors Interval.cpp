// Problem: B. Longest Divisors Interval
// Contest: Codeforces - Codeforces Round 889 (Div. 2)
// URL: https://codeforces.com/contest/1855/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include "bits/stdc++.h"
using namespace std;
const char nl = '\n';
using ll = long long;


void solve() {
	ll n; cin >> n;
	ll ans = 1;
	while(n % (ans + 1) == 0) {
		ans++;
	}
	cout << ans << nl;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}