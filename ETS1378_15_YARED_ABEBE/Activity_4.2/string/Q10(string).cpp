#include <iostream>
#include <string>
using namespace std;
int main()
{
  char pass[9]= "yared888";
  char your_pass[9];
  cout << "Enter the password :";
  cin.getline(your_pass,9);

  if (strcmp(pass, your_pass)==0)
  {
    cout << "Correcr passwrd \n";
  }
  else
  {
    cout << "Incorrect pass :";
  }

}
