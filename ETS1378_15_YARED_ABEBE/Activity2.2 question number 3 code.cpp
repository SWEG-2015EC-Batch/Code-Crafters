
#include <iostream>
#include<ctype.h>
using namespace std;
int main()
{
  cout << "write a letter: ";
  char letter,uppercase,lowercase;
  cin >> letter;
  lowercase = tolower(letter);
  uppercase = toupper(letter);
  if (letter >= 'a' && letter <= 'z')
  cout<<"Uppercase: "<< uppercase<<endl;
    else
  cout << "Lowercase: " << lowercase << endl;
      return 0;
}
