// Problem: A. Doremy's Paint 3
// Contest: Codeforces - Codeforces Round 906 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1890/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include "bits/stdc++.h"
using namespace std;
const char nl = '\n';
using ll = long long;
const int N = 1e5 + 4;


void solve() {
	int n; cin >> n;
	vector<int> a(n);
	int cnt[N] = {0};
	bool ok = false;
	set<int> s;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		cnt[a[i]]++;
		s.insert(a[i]);
		
	}
	if (n == 2) {
		cout << "Yes" << nl;
		return;
	}
	sort(a.begin(), a.end());
	// cout << s.size();
	if (s.size() == 1) {
		cout << "Yes" << nl;
		return;
	}
	if (s.size() == 2) {
		int first = cnt[a[0]];
		int second = cnt[a[n - 1]];
		if (first == second + 1 || second == first + 1 || first == second) {
			ok = true;
		}
		// cout << first << ' ' << second << nl;
	}
	cout << (ok ? "Yes" : "No") << nl;
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