#include<iostream>
#include<string>
using namespace std;

int main()
{

  string word;
  cout << "Enter your word ";
  getline(cin,word);
  string copy_word;

  for (int i = word.length() - 1;i >= 0;i--)
  {
      copy_word = copy_word + word[i];
  }
  if (word == copy_word)
  {
    cout << "The word is palindrom ";
  }
  else
  {
    cout << "It is not Palindrome ";
  }
  return 0;
}
