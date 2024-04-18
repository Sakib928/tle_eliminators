// Problem: C. Vasilije in Cacak
// Contest: Codeforces - Codeforces Round 900 (Div. 3)
// URL: https://codeforces.com/contest/1878/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include "bits/stdc++.h"
using namespace std;
const char nl = '\n';
using ll = long long;


void solve() {
	int n, k; ll x; 
	cin >> n >> k >> x;
	
	if (x >= 1ll * k * (k + 1) / 2 && x <= 1ll * k * (n + n - k + 1) / 2 ) {
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