#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string teams;
  bool dangerous = false;
  cin >> teams;
  // cout << teams;

  if (teams.size() >= 7) {
    for (int i = 0; i < teams.size(); i++) {
      dangerous = true;
      char init = teams[i];
      for (int j = i; j < 7 && j < teams.size(); j++) {
        if (init != teams[j]) {
          dangerous = false;
          break;
        }
      }
    }
  } 

  if (dangerous) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }

  return 0;
}
