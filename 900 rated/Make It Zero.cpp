// Problem: A. Make It Zero
// Contest: Codeforces - Codeforces Round 896 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1869/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include "bits/stdc++.h"
using namespace std;
const char nl = '\n';
using ll = long long;


void solve() {
	int n; cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	if (n & 1) {
		cout << 4 << nl;
		cout << 1 << ' ' << n << nl;
		cout << 2 << ' ' << n << nl;
		cout << 1 << ' ' << 2 << nl;
		cout << 1 << ' ' << 2 << nl;
	} else {
		cout << 2 << nl;
		cout << 1 << ' ' << n << nl;
		cout << 1 << ' ' << n << nl;
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