#include<iostream>
using namespace std;
int main()
{
  char your_input;
  cout << "Enter any input : ";
  cin >> your_input;
  if (isalpha(your_input))
  {
    if (isupper(your_input))
    {
      if (your_input == 'A'  your_input == 'E'  your_input == 'I'  your_input == 'O'  your_input == 'U')
        cout << "It is an Upper case Vowel letter";
      else
        cout << "It is an Upper case Consonant letter";
    }
    else if (islower(your_input))
    {
      if (your_input == 'a'  your_input == 'e'  your_input == 'i'  your_input == 'o'  your_input == 'u')
        cout << "It is an Lower case Vowel letter";
      else
        cout << "It is a Lower case Consonant letter";
    }
      
  }
  else if (isdigit(your_input))
  {
    if (your_input % 2 == 0)
    {
      cout << "It is an even number ";
    }
    else
      cout << "It is an odd number ";
  }
  else
    cout << "It is a special character ";
}
