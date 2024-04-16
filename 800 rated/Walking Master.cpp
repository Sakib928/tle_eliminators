// Problem: A. Walking Master
// Contest: Codeforces - Codeforces Round 858 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1806/A
// Memory Limit: 1024 MB
// Time Limit: 1000 ms

#include "bits/stdc++.h"
using namespace std;
const char nl = '\n';
using ll = long long;


void solve() {
	int a, b, c, d; cin >> a >> b >> c >> d;
	int x = c - a, y = d - b;
	int ans = -1;
	if (y >= 0 && y >= x) {
		cout << y + y - x << nl;
		return;
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