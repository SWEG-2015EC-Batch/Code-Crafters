#include <iostream>
using namespace std;
int main()
{
  float first[5], second[5], Addnum[5];
  cout << "Enter 5 numbers that sort in first column: " << endl;
  for (int i=0; i < 5; i++) {
    cin >> first[i];
  }
  cout << "Enter 5 numbers that sort in second column " << endl;
  for (int l = 0; l < 5; l++) {
    cin >> second[l];
    Addnum[l] = first[l] + second[l];
  }
  cout << "NO in 1st Col\t\t  " << "NO in 2nd Col\t\t" << "Sum" << endl;
  for (int j = 1; j < 5; j++) {
    cout << first[j] << "\t\t\t\t" << second[j] << "\t\t" << Addnum[j] << endl;
  }
}
