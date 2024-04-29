#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string teams;
  bool dangerous = true;

  while (cin >> teams) {
    if (teams.size() >= 7) {
      for (int i = 0; i < teams.size() - 7; i++) {
        int same = 0;
        for (int j = i; j < teams.size(); j++) {
          if (teams[i] != teams[j]) {
            dangerous = false;
            break;
          } else {
            same++;
          }

          if (same >= 7) {
            dangerous = true;
            break;
          }
        }

        if (same >= 7) { break; }
      }
    } else {
      dangerous = false;
    } 

    if (dangerous) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }

  return 0;
}
