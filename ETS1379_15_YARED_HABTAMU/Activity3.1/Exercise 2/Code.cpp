#include<iostream>
using namespace std;
int main()
{
  double num1, num2;
  int terminate;
  char operators;
  operators = '+', '-', '*', '/', '%';

  do
  {
    cout << "Enter the first number :";
    cin >> num1;
    cout << "Enter the second number :";
    cin >> num2;
    cout << "Enter an operator :";
    cin >> operators;

    switch (operators)
    {
    case '+':
      cout << "Their sum is :" << num1 + num2;
      break;
    case '-':
      cout << "Their difference is :" << num1 - num2;
      break;
    case '*':
      cout << "Their product is :" << num1 * num2;
      break;
    case '/':
      if (num2 != 0)
      {
        cout << "Their divison is :" << num1 / num2;
      }
      else cout << "Any number can't divisible by 0 \n";
      break;
    case '%':
      if (num2 != 0)
      {
        cout <<"The modulus of 2 numbers is :"<< int(num1) % int(num2);
      }
      else cout << "Any number can't divisible by 0 so ypu can't have a modulus value \n";
      break;
    default:
      cout << "You entered invalid Operator : ";
      break;
    }
    cout<<endl;
    cout << "Press '0' if you want to terminate and other number to proceed : ";
    cin>>terminate;    
  }
  while (terminate != 0);

  return 0;
}
