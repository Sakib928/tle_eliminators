// Problem: A. Jellyfish and Undertale
// Contest: Codeforces - Codeforces Round 901 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1875/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include "bits/stdc++.h"
using namespace std;
const char nl = '\n';
using ll = long long;


void solve() {
	ll a, b, n; cin >> a >> b >> n;
	// vector<int> tools(n);
	ll total = b;
	for (int i = 0; i < n; i++) {
		ll x; cin >> x;
		total += min(a - 1, x);
	}
	cout << total << nl;
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