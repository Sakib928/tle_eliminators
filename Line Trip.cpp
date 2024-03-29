// Problem: A. Line Trip
// Contest: Codeforces - Educational Codeforces Round 158 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1901/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include "bits/stdc++.h"
using namespace std;
const char nl = '\n';
using ll = long long;


void solve() {
	int n, x; cin >> n >> x;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int capacity = a[0];
	for (int i = 1; i < n; i++) {
		capacity = max(capacity, a[i] - a[i - 1]);
	}
	capacity = max(capacity, 2 * (x - a[n - 1]));
	cout << capacity << nl;
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