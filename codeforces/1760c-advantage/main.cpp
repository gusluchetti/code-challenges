#include <bits/stdc++.h>
using namespace std;

int solve() {
  int n;
  cin >> n;
  cout << n << "\n";

  for (int j = 1; j <= n; j++) {
    int i;
    cin >> i;
    cout << i;
  }

  cout << "\n";
  return 0;
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
