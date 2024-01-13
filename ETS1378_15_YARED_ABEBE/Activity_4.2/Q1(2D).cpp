#include<iostream>
using namespace std;
int main()
{
  int array1[] = { 10,29,39,40 };
  int array2[] = { 10,29,39,4 };
  int count = 0;
  for (int i = 0;i < size(array1);i++)
  {
    if (array1[i] == array2[i]) {
      count++;
    }
  }
  if (count == size(array1))
    cout << "They are identical";
  else
    cout << "They are not ";
  return 0;
}
