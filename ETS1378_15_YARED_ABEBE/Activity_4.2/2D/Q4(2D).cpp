#include<iostream>
using namespace std;
int main()
{
  int num[3][4];
  int SUM = 0;
  cout << "Enter ARRAY elements \n";
  for (int i = 0;i < 3;i++)
  {
    for (int j = 0;j < 4;j++)
    {
      cin >> num[i][j];
      if (num[i][j] % 2 == 0)
      {
        SUM = SUM + num[i][j];
      }
    }
  }
  cout << " ________________________________ "<<endl;

  for (int i = 0;i < 3;i++)
  {
    for (int j = 0;j < 4;j++)
    {
      if (num[i][j] % 2 == 0)
        cout << num[i][j]<<"\t | ";
      else
        cout << "* "<<"\t | ";
    }
    cout << endl;
  }
  cout << " -------------------------------- " << endl;
  cout << "The sum of even integers is " << SUM;
  return 0;
}
