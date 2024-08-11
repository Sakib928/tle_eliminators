// Problem: A. Forbidden Integer
// Contest: Codeforces - Educational Codeforces Round 151 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1845/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include "bits/stdc++.h"
using namespace std;
const char nl = '\n';
using ll = long long;


void solve() {
	int n, k, x; cin >> n >> k >> x;
	if (k > 1 && x > 1) {
		cout << "YES" << nl;
		cout << n << nl;
		for (int i = 1; i <= n; i++) {
			cout << 1 << ' ';
		}
		cout << nl;
	}
	else if (k == 1 || (k == 2 && n % 2 == 1)) {
		cout << "NO" << nl;
	} else {
		cout << "YES" << nl;
		cout << n / 2 << nl;
		for (int i = 0; i < n / 2; i++) {
			cout << 2 + (i == 0 && n % 2 == 1) << ' ';
		}
		cout << nl;
	}
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