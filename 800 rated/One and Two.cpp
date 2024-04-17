// Problem: A. One and Two
// Contest: Codeforces - Codeforces Round 851 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1788/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include "bits/stdc++.h"
using namespace std;
const char nl = '\n';
using ll = long long;


void solve() {
	int n; cin >> n;
	vector<int> a(n);
	int cnt2 = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] == 2) cnt2++;
	}
	if (cnt2 == 0) {
		cout << 1 << nl;
		return;
	}
	if (cnt2 % 2 == 1) {
		cout << -1 << nl;
		return;
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == 2) ans++;
		if (ans == cnt2 / 2) {
			ans = i + 1;
			break;
		}
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