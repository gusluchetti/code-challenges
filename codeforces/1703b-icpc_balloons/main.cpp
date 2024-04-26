#include <iostream>
#include <map>

int main(int argc, char *argv[]) {
  int num_teams;
  std::cin >> num_teams;

  for (int i{1}; i <= num_teams; i++) {
    int solved_length;
    std::string solved_problems;

    std::cin >> solved_length;
    std::cin >> solved_problems;

    std::map<char, bool> map_solved;
    int sum = 0;

    for (char &c : solved_problems) {
      if (map_solved[c] == false) {
        sum += 2;
        map_solved[c] = true;
      } else {
        sum += 1;
      }
    }

    std::cout << sum << std::endl;
  }
}
