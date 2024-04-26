#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
#include <vector>
using namespace std;

void solve() {
  int n;
  cin >> n;
  // cout << n << "\n";
  vector<int> a(n);

  for (int j = 0; j < n; ++j) {
    cin >> a[j];
    // cout << a[j];
  }
  // cout << "\n";

  vector<int> b(a);
  sort(b.begin(), b.end(), greater<int>());
  // cout << b[0] << "\n";

  for (int k = 0; k < n; ++k) {
    if (a[k] - b[0] < 0) {
      cout << a[k] - b[0] << " ";
    } else {
      cout << a[k] - b[1] << " ";
    }
  }
  cout << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tt;
  cin >> tt;
  for (int i = 1; i <= tt; i++) {
    solve();
  }

  return 0;
}
