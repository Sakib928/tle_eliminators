// Problem: A. We Need the Zero
// Contest: Codeforces - Codeforces Round 862 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1805/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include "bits/stdc++.h"
using namespace std;
const char nl = '\n';
using ll = long long;


void solve() {
	int n; cin >> n;
	int s = 0;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		s ^= x;
	}
	if (n % 2 == 1) {
		cout << s << nl;
	} else if (s == 0) {
		cout << 0 << nl;
	} else {
		cout << -1 << nl;
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