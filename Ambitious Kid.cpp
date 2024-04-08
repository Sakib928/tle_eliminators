// Problem: A. Ambitious Kid
// Contest: Codeforces - COMPFEST 15 - Preliminary Online Mirror (Unrated, ICPC Rules, Teams Preferred)
// URL: https://codeforces.com/problemset/problem/1866/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include "bits/stdc++.h"
using namespace std;
const char nl = '\n';
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n; cin >> n;
  int ans = 1e5 + 4;
  for (int i = 0; i < n; i++) {
  	int x; cin >> x;
  	ans = min(ans, abs(x));
  }
  cout << ans << nl;
  return 0;
}