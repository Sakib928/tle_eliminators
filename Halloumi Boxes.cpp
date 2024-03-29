// Problem: A. Halloumi Boxes
// Contest: Codeforces - Codeforces Round 912 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1903/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include "bits/stdc++.h"
using namespace std;
const char nl = '\n';
using ll = long long;


void solve() {
	int n, k; cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	if (k == 1) {
		for (int i = 1; i < n; i++) {
			if (a[i] < a[i - 1]) {
				cout << "NO" << nl;
				return;
			}
		}		
	}
	cout << "YES" << nl;
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