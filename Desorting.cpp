// Problem: A. Desorting
// Contest: Codeforces - Codeforces Round 887 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1853/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include "bits/stdc++.h"
using namespace std;
const char nl = '\n';
using ll = long long;


void solve() {
	int n; cin >> n;
	vector<int> a(n);
	int val = 0, lo = 1e9, x;
	cin >> val;
	n--;
	while (n--) {
		cin >> x;
		lo = min(lo, x - val);
		val = x;
	}
	if (lo < 0) {
		cout << 0 << nl;
	} else {
		cout << lo / 2 + 1 << nl;
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