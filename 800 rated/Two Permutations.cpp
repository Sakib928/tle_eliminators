// Problem: A. Two Permutations
// Contest: Codeforces - Pinely Round 1 (Div. 1 + Div. 2)
// URL: https://codeforces.com/problemset/problem/1761/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include "bits/stdc++.h"
using namespace std;
const char nl = '\n';
using ll = long long;


void solve() {
	int n, a, b; cin >> n >> a >> b;
	if (a == n && b == n) {
		cout << "Yes" << nl;
		return;
	}
	if (a + b < n - 1) {
		cout << "Yes" << nl;
		return;
	}
	cout << "No" << nl;
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