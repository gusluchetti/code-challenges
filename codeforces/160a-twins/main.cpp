#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int num_coins;
  int coin_val;
  vector<int> coin_values;

  cin >> num_coins;
  cout << num_coins << "\n";

  for (int i = 0; i < num_coins; i++) {
    cin >> coin_val;
    coin_values.push_back(coin_val);
  }

  for (auto c : coin_values) {
    cout << " " << c;
  }

  int sum = std::reduce(coin_values.begin(), coin_values.end());
  cout << "\n" << sum << "\n";

  return 0;
}
