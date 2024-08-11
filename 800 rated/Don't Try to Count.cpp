// Problem: A. Don't Try to Count
// Contest: Codeforces - Codeforces Round 903 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1881/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include "bits/stdc++.h"
using namespace std;
const char nl = '\n';
using ll = long long;


void solve() {
	int n, m; cin >> n >> m;
	string x, y; cin >> x >> y;
	int cnt = 0;
	
	while (x.find(y) == -1 && (cnt == 0 || x.size() < 2 * m)) {
		x = x + x;
		cnt++;
	}
	if (x.find(y) == -1) {
		cout << -1 << nl;
	} else {
		cout << cnt << nl;
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