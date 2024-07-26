// Problem: D. Balanced Round
// Contest: Codeforces - Codeforces Round 886 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1850/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms

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
	sort(a.begin(), a.end());
	int ans = 0;
	int last = 0;
	for (int i = 1; i <= n; i++) {
		if (i == n or a[i] - a[i - 1] > k) {
			ans = max(ans, i - last);
			last = i;
		}
	}
	cout << n - ans << nl;
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