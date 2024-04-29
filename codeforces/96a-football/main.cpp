#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string teams;
  bool dangerous = true;
  cin >> teams;
  // cout << "\n";
  // cout << teams;

  if (teams.size() >= 7) {
    for (int i = 0; i < teams.size() - 7; i++) {
      char init = teams[i];
      for (int j = i; j < teams.size(); j++) {
        if (init != teams[j]) {
          dangerous = false;
          break;
        }
      }
    }
  } else {
    dangerous = false;
  } 

  if (dangerous) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }

  return 0;
}
