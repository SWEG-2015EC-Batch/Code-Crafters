#include<iostream>
#include<string>
using namespace std;
int main()
{
  string word;
  cout << "Enter a word :";
  getline(cin, word);


  for (char x:word)
  {
    if (isalpha(x))
      cout << x;
    else
      continue;
  }
}
