#include <iostream>
using namespace std;
int main()
{
  const int maxSize = 100;
  int numbers[maxSize];
  int count;

  cout << "Enter how many number do you want to enter : ";
  cin >> count;

  cout << "Enter numbers: ";
  for (int i = 0; i < count; i++) {
    cin >> numbers[i];
  }

  cout << "Even numbers in reverse order: ";
  for (int i = count - 1; i >= 0; i--) {
    if (numbers[i] % 2 == 0) {
      cout << numbers[i] << " ";
    }
  }
  return 0;
}
