// Problem: A. Goals of Victory
// Contest: Codeforces - Codeforces Round 902 (Div. 2, based on COMPFEST 15 - Final Round)
// URL: https://codeforces.com/problemset/problem/1877/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include "bits/stdc++.h"
using namespace std;
const char nl = '\n';
using ll = long long;


void solve() {
	int n; cin >> n;
	int ans = 0;
	for (int i = 1; i < n; i++) {
		int x; cin >> x;
		ans += -x;
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