// Problem: A. Game with Integers
// Contest: Codeforces - Codeforces Round 909 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1899/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include "bits/stdc++.h"
using namespace std;
const char nl = '\n';
using ll = long long;


void solve() {
	int n; cin >> n;
	cout << (n % 3 ? "First" : "Second") << nl;
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