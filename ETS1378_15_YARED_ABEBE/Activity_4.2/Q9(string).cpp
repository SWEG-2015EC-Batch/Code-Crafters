#include <iostream>
#include <cstring>
using namespace std;
int main()
{
  char favorite_tv[2][30];
  strcpy(favorite_tv[0], "ESAT");

  cout << "Enter the second TV program :";
  cin.getline(favorite_tv[1],30);

  for (int i = 0;i < 2;i++)
  {
    cout << favorite_tv[i] << endl;
  }
  return 0;
}
