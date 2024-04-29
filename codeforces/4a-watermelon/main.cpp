#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int weight;
  cin >> weight;
  int res = weight % 2;
  if (res == 0 && weight > 2) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}
