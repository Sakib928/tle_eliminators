// Problem: A. Forked!
// Contest: Codeforces - Codeforces Round 914 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1904/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include "bits/stdc++.h"
using namespace std;
const char nl = '\n';
using ll = long long;


void solve() {
	int a, b; cin >> a >> b;
	int xK, yK; cin >> xK >> yK;
	int xQ, yQ; cin >> xQ >> yQ;
	vector<int> dx = {a, a, -a, -a, b, b, -b, -b};
	vector<int> dy = {b, -b, b, -b, a, -a, a, -a};
	int ans = 0;
	for (int j = 0; j < 8; j++) {
		for (int k = 0; k < 8; k++) {
			if (xK + dx[j] == xQ + dx[k] && yK + dy[j] == yQ + dy[k]) {
				ans++;
			}
		}
	}
	if (a== b) {
		ans /= 4;
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