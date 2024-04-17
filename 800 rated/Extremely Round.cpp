// Problem: A. Extremely Round
// Contest: Codeforces - Educational Codeforces Round 139 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1766/A
// Memory Limit: 512 MB
// Time Limit: 3000 ms

#include "bits/stdc++.h"
using namespace std;
const char nl = '\n';
using ll = long long;


void solve() {
	int n; cin >> n;
	int ans = 0;
	for (int i = 1; i <= 9; i++) {
		int x = i;
		while (x <= n) {
			ans++;
			x *= 10;
		}
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