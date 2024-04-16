// Problem: A. Twin Permutations
// Contest: Codeforces - Codeforces Round 875 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1831/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include "bits/stdc++.h"
using namespace std;
const char nl = '\n';
using ll = long long;


void solve() {
	int n; cin >> n;
	int sum = 1 + n;
	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = sum - a[i];
	}
	for (auto it: b) cout << it << ' ';
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