// Problem: A. Unit Array
// Contest: Codeforces - Codeforces Round 879 (Div. 2)
// URL: https://codeforces.com/contest/1834/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include "bits/stdc++.h"
using namespace std;
const char nl = '\n';
using ll = long long;


void solve() {
	int n; cin >> n;
	int neg = 0;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		neg += (x == -1);
	}
	int ans = 0;
	while (neg > n / 2 || neg % 2 == 1) {
		neg--;
		ans++;
	}
	cout << ans << nl;
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