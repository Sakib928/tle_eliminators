// Problem: A. United We Stand
// Contest: Codeforces - Codeforces Round 892 (Div. 2)
// URL: https://codeforces.com/contest/1859/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include "bits/stdc++.h"
using namespace std;
const char nl = '\n';
using ll = long long;


void solve() {
	int n; cin >> n;
	vector<int> a(n);
	int mn = INT_MAX;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		mn = min(mn, a[i]);
	}
	vector<int> b, c;
	for (int i = 0; i < n; i++) {
		if (a[i] == mn) {
			b.push_back(a[i]);
		} else {
			c.push_back(a[i]);
		}
	}
	if (c.empty()) {
		cout << -1 << nl;
		return;
	}
	cout << b.size() << ' ' << c.size() << nl;
	for (auto it: b) cout << it << ' ';
	cout << nl;
	for (auto it: c) cout << it << ' ';
	cout << nl;
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