// Problem: A. Array Coloring
// Contest: Codeforces - Codeforces Round 891 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1857/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include "bits/stdc++.h"
using namespace std;
const char nl = '\n';
using ll = long long;


void solve() {
	int n; cin >> n;
  ll sum = 0;
  for (int i = 1; i <= n; i++) {
    int x; cin >> x;
    sum += x;
  }
  if (sum % 2 == 0){
    cout << "YES" << nl;
  } else {
    cout << "NO" << nl;
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