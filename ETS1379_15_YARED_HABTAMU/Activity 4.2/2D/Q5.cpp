
#include <iostream>
using namespace std;

int main() {
  bool friends[5][5] = {
    {false, true, true, false, false},
    {true, false, true, true, false},
    {true, true, false, false, true},
    {false, true, false, false, true},
    {false, false, true, true, false}
  };

  int count_pairs = 0;

  for (int i = 0; i < 5; i++) {
    for (int j = i + 1; j < 5; j++) {
      if (friends[i][j]) {
        count_pairs++;
      }
    }
  }

  cout << "There are *" << count_pairs << "* number of pairs of friends: " << endl;

  return 0;
}
