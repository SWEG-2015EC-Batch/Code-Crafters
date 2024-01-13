#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
  cout << "Enter your sentence "<<endl;
  string sent;
  char x, y;
  getline(cin, sent);
  char upper_sent[100] = { };
  char lower_sent[100] = { };

  for (int i = 0;i < sent.length();i++)
  {
    x = toupper(sent[i]);
    y = tolower(sent[i]);
    upper_sent[i] = x;
    lower_sent[i] = y;
  }
  cout << "All in UPPERCASE : "<<upper_sent << endl;
  cout << "All in LOWERCASE :"  << lower_sent;
}
