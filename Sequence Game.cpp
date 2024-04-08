// Problem: B. Sequence Game
// Contest: Codeforces - Codeforces Round 894 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1862/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include "bits/stdc++.h"
using namespace std;
const char nl = '\n';
using ll = long long;


void solve() {
	int n; cin >> n;
	vector<int> a(n), ans;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	ans.push_back(a[0]);
	for (int i = 1; i < n; i++) {
		if (a[i] < a[i - 1]) {
			ans.push_back(1);
		}
		ans.push_back(a[i]);
	}
	cout << ans.size() << nl;
	for (auto it: ans) cout << it << ' ';
	cout << nl;
		
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