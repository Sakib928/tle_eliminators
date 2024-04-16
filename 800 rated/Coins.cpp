// Problem: A. Coins
// Contest: Codeforces - Educational Codeforces Round 146 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1814/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include "bits/stdc++.h"
using namespace std;
const char nl = '\n';
using ll = long long;


void solve() {
	ll n, k; cin >> n >> k;
	if (n % 2 == 0 ||  n % k == 0 || (n - 2) % k == 0 || (n - k) % 2 == 0 || (n % k) % 2 == 0) {
		cout << "YES" << nl;
		return;
	}
 	cout << "NO" << nl;
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