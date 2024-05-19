#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
#include <functional>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  std::uint16_t num_coins;
  int coin_val;
  vector<std::uint16_t> coin_values;

  cin >> num_coins;

  for (int i = 0; i < num_coins; i++) {
    cin >> coin_val;
    coin_values.push_back(coin_val);
  }

  std::sort(coin_values.begin(), coin_values.end(), std::greater<>());

  int sum = std::reduce(coin_values.begin(), coin_values.end());
  int mid = (sum / 2);

  int found = false;
  int selected = 1;
  while (!found) {
    int total = 0;
    for (int i = 0; i < selected; i++) {
      total += coin_values[i];
    }
    if (total > mid) {
      found = true;
      break;
    } else {
      selected++;
    }
  }

  cout << selected;

  return 0;
}
