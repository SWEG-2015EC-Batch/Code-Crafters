#include <iostream>
#include <string>
using namespace std;
int main()
{
  cout << "Enter your text :";
  string your_text;
  getline(cin, your_text);

  for (int i = 0;i < your_text.length();i++)
  {
    while (i < your_text.length() && your_text[i] != ' ')
    {
      cout << your_text[i];
      i++;
    }
    cout <<endl;

  }

}
