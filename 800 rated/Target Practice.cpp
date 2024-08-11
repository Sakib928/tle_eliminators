// Problem: C. Target Practice
// Contest: Codeforces - Codeforces Round 898 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1873/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include "bits/stdc++.h"
using namespace std;
const char nl = '\n';
using ll = long long;


void solve() {
	int score = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			char c; cin >> c;
			if (c == 'X') {
				score += min({i + 1, 10 - i, j + 1, 10 - j});
			}
		}
	}
	cout << score << nl;
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