// Problem: B. Chemistry
// Contest: Codeforces - Codeforces Round 905 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1883/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include "bits/stdc++.h"
using namespace std;
const char nl = '\n';
using ll = long long;


void solve() {
	int n, k; cin >> n >> k;
	int cnt[26]{};
	string s; cin >> s;
	for (auto c : s) {
		cnt[c - 'a']++;
	}
	int ans = std::count_if(cnt, cnt + 26, [&](int x) {
		return x % 2 == 1;
	});
	if (k >= ans - 1) {
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