// Problem: A. Everybody Likes Good Arrays!
// Contest: Codeforces - Codeforces Round 845 (Div. 2) and ByteRace 2023
// URL: https://codeforces.com/problemset/problem/1777/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include "bits/stdc++.h"
using namespace std;
const char nl = '\n';
using ll = long long;


void solve() {
	int n; cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int odds = 0, evens = 0;
	for (int i = 0; i < n - 1; i++) {
		if (a[i] % 2 == 0 && a[i + 1] % 2 == 0) {
			evens++;
		}
		if (a[i] % 2 && a[i + 1] % 2) {
			odds++;
		}
	}
	cout << evens + odds << nl;
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