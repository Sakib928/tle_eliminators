// Problem: A. Buttons
// Contest: Codeforces - Codeforces Round 893 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1858/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include "bits/stdc++.h"
using namespace std;
const char nl = '\n';
using ll = long long;


void solve() {
	int a, b, c; cin >> a >> b >> c;
	if (c % 2) {
		a++;
	}
	cout << (a > b ? "First" : "Second") << nl;
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