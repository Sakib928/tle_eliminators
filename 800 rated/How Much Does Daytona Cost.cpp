// Problem: A. How Much Does Daytona Cost?
// Contest: Codeforces - Codeforces Round 900 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1878/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include "bits/stdc++.h"
using namespace std;
const char nl = '\n';
using ll = long long;


void solve() {
	int n, k; cin >> n >> k;
	vector<int> a(n);
	int cnt[105] = {0};
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		cnt[a[i]]++;
	}
	if (cnt[k]) {
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