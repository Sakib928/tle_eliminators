// Problem: A. Serval and Mocha's Array
// Contest: Codeforces - Codeforces Round 853 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1789/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include "bits/stdc++.h"
using namespace std;
const char nl = '\n';
using ll = long long;


void solve() {
	int n;
    cin >> n;
    vector<int> a(n);
    bool ok = false;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (__gcd(a[i], a[j]) <= 2) ok = true;
        }
    }
    if (ok)cout << "yes" << nl;
    else cout<< "no" << nl;
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