#include<iostream>
using namespace std;
int main()
{
  int mark;
  cout << "Enter a Mark of courses :";
  cin >> mark;

  if (mark >= 90) {
    cout << "The Corresponding Mark grade is A+";
  }
  else if (mark < 90 && mark >= 80) {
    cout << "The Corresponding Mark grade is A";
  }
  else if (mark < 80 && mark >= 75) {
    cout << "The Corresponding Mark grade is B+";
  }
  else if (mark < 75 && mark >= 60) {
    cout << "The Corresponding Mark grade is B";
  }
  else if (mark < 60 && mark >= 55) {
    cout << "The Corresponding Mark grade is C+";
  }
  else if (mark < 55 && mark >= 45) {
    cout << "The Corresponding Mark grade is C";
  }
  else if (mark < 45 && mark >= 30) {
    cout << "The Corresponding Mark grade is D";
  }
  else if (mark < 30) {
    cout << "The Corresponding Mark grade is F";
  }
  else
    cout << " Invalid input ";
return 0;
