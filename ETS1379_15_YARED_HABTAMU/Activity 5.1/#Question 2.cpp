#include <iostream>
using namespace std;
int main()
{
  const int max = 30;
  float hei[max];
  float wei[max];
  float BMI[max];
  int n;
  float* height = hei;
  float* weight = wei, * mass_index = BMI;

  cout << "Enter the number of persons to calculate :" << endl;
  cin >> n;
  string name[max] = {};
  string* ptr_name = name;
  for (int i = 0;i < n;i++)
  {
  cout << "Write name of Person:" << i + 1 << " :";
  cin >> *(name + i);
  cout << "Height of person " << i + 1 << " :";
  cin >> *(hei + i);
  cout << "Weight of person " << i + 1 << " :";
  cin >> *(wei + i);
  *(BMI + i) = *(wei + i) / pow(*(hei + i), 2);
}
  cout<< "*****************************************************\n";

  cout << "Name \t\t\ Height\t\tWeight\t\tBMI" << endl;

  for (int i = 0;i < n;i++)
  {
    cout << *ptr_name++ << "\t\t" << *height++ << "\t\t" << *weight++ << "\t\t" << *mass_index++;
    cout.precision(2);
    cout << endl;

  }
  cout << "---------------------------------------------------------";

  return 0;
}
