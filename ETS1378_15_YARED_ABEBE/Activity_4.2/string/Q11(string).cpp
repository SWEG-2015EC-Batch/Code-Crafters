#include <iostream>
using namespace std;
int main()
{
  string x, y, z;
  cout << "Enter the first name " << endl;
  cin >> x;
  cout << "Enter the second name " << endl;
  cin >> y;
  cout << "Enter the third name " << endl;
  cin >> z;
  char name1, name2, name3;
  for (int i = 0;i < 2;i++)
  {
    name1 = x[0];
    name2 = y[0];
    name3 = z[0];
  }
  cout << "The user initial is " << name1 << " " << name2 << " " << name3;
}
