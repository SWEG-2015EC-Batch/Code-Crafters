#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
  string sent_c;
  cout << "Enter your sentence ";
  getline(cin, sent_c);
  int vowel = 0, conson = 0;
  string sent = sent_c;
  for (int i = 0;i < size(sent_c);i++)
  {
    sent[i] = tolower(sent_c[i]);
    if (sent[i] == 'a'  sent[i] == 'e'  sent[i] == 'i'  sent[i] == 'o'  sent[i] == 'u')
    {
      vowel++;
    }
    else
    {
      conson++;

    }

  }
  cout << "Number of VOWELS is  " << vowel << " and Number of CONSONANTS is " << conson;

  return 0;
}

