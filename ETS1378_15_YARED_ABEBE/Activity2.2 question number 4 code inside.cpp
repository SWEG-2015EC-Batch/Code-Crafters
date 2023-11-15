4,
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int Y;
  double X, result;
  cout << "Enter X= ";
  cin >> X;
  cout << "Enter Y= ";
  cin >> Y;
  result = pow(X, Y);
  cout << "X the power of Y is:"<< result;
  return 0;
}