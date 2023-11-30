#include <iostream>
using namespace std;
int main()
{
  double height, weight, BMI;
  cout << "Enter weight= ";
  cin >> weight;
  cout <<"Enter height= ";
  cin >> height;
  BMI = weight / (height * height);
  cout << "Body mass index(BMI)= " <<BMI;
  return 0;
}