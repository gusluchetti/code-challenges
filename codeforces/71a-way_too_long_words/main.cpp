#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  // cout << "\n";

  int tt;
  cin >> tt;
  for(int i = 0; i < tt; i++) {
    string word;
    cin >> word;
    int size = word.size();
    if (size > 10) {
      cout << word[0] << (size - 2) << word[size-1];
    } else {
      cout << word;
    }
    cout << "\n";
  }

  return 0;
}
