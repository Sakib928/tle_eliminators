// Problem: B. Blank Space
// Contest: Codeforces - Codeforces Round 871 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1829/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include "bits/stdc++.h"
using namespace std;
const char nl = '\n';
using ll = long long;


void solve() {
	int n; cin >> n;
	vector<int> a(n);
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == 0) {
			cnt++;
		} else {
			cnt = 0;
		}
		ans = max(ans, cnt);
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