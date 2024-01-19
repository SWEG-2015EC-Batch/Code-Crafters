#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
  string word;
  cout << "Enter a word :";
  getline(cin, word);
  int count1=0, count2=0, count3=0, count4=0;
  for (int i = 0;i < word.length();i++)
  {
    if (isalpha(word[i]))
    {
      char lower_word = tolower(word[i]);
      if (lower_word == 'a'  lower_word == 'e'  lower_word == 'i'  lower_word == 'o'  lower_word == 'u')
        count1++;
      else
        count2++;
    }
    else if (isdigit(word[i]))
      count3++;

    else if(word[i]!=' ')
      count4++;
  }

   cout << "There are " << count1<<" Vowel letters"<<endl;
   cout << "There are " << count2 << " Consonant letters"<<endl;
   cout << "There are " << count3 << " Digits " << endl;
   cout << "There are " << count4 << " Special characters ";
}
