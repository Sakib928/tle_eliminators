// Problem: A. Make it Beautiful
// Contest: Codeforces - Educational Codeforces Round 141 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1783/A
// Memory Limit: 512 MB
// Time Limit: 3000 ms

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
	if (a[0] == a[n - 1]) {
		cout << "NO" << nl;
	} else {
		cout << "YES" << nl;
		reverse(a.begin() + 1, a.end());
		for (int i = 0; i < n; i++) {
			cout << a[i] << " \n"[i == n - 1];
		}
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