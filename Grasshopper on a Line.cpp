// Problem: A. Grasshopper on a Line
// Contest: Codeforces - Educational Codeforces Round 149 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1837/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include "bits/stdc++.h"
using namespace std;
const char nl = '\n';
using ll = long long;


void solve() {
	int x, k; cin >> x >> k;
	if (x % k != 0) {
		cout << 1 << nl;
		cout << x << nl;
	} else {
		cout << 2 << nl;
		cout << (x - (k - 1)) << ' ' << x - (x - k + 1) << nl;
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