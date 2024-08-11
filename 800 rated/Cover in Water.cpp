// Problem: A. Cover in Water
// Contest: Codeforces - Codeforces Round 911 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1900/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include "bits/stdc++.h"
using namespace std;
const char nl = '\n';
using ll = long long;


void solve() {
	int n; cin >> n;
	string s; cin >> s;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '.') {
			if (s[i + 1] == '.' && s[i + 2] == '.') {
				cout << 2 << nl;
				return;
			} else {
				cnt++;
			}
		}
	}
	cout << cnt << nl;
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