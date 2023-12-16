#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int rev = 0, sum = 0, count = 0;
  int rem1, num;
  int product = 1;

  cout << "Enter a number: ";
  cin >> num;

  const int con = num; 
  while (num > 0)
  {
    rem1 = num % 10;
    rev = (rev * 10) + rem1;
    num /= 10;
    count++;
    sum += rem1;
    if (rem1 != 0 && rem1 % 2 != 1)
    {
      product *= rem1;
    }

  }
  int last = con % 10;
  int first = rev % 10;

  cout << "reverse number: " << rev << endl;
  cout << "number of digit: " << count << endl;
  cout << "sum of the digit of given number: " << sum << endl;
  cout << "The product of even digits: " << product << endl;
  cout << "The sum of first and last digit: " << last + first << endl;

  //Swap the first and the last number

  int toswap1 = (last * pow(10, count - 1) + first);
  int toswap2 = con - ((first * pow(10, (count - 1))) + (last));
  int first_and_last_swap = (last * pow(10, (count - 1))) + (toswap2 + first);

  cout << "Swaped value of the first and the last digit is " << first_and_last_swap << endl;

  // Palindrome checker
  if (rev == con) {
    cout << "The number is palindrome" << endl;
  }
  else {
    cout << "The number is not palindrome" << endl;
  }

  //Number of frequency of every digit in number
  cout << "-----------------------" << endl;
  cout << "Numbers \t frequency" << endl;
  cout << "------------------------" << endl;
  for (int i = 0; i < 10; i++) {
    int frequency = 0;
    int freq = con;
    while (freq > 0) {
      if (freq % 10 == i) {
        frequency++;
      }
      freq = freq / 10;
    }
    cout << i << "\t|\t" << frequency << endl;
  }

  cout << "------------------------" << endl;

  //Armstrong number checker
  int armsg = con;
  int armdigit;
  int armsum = 0;

  while (armsg > 0) {
    armdigit = armsg % 10;
    armsum += pow(armdigit, 3);
    armsg /= 10;
  }
  if (armsum == con) {
    cout << " The number " << con << " is an Armstrong number" << endl;
  }
  else {
    cout << con << " is not an Armstrong number!!" << endl;
  }

  //Strong  number checker
  int strong = con;
  int ssum = 0;
  int remainders, fact;
  int copynum = strong;
  while (strong != 0)
  {
    remainders = strong % 10;
    fact = 1;
    for (int i = 1; i <= remainders; i++)
    {
      fact = fact * i;
    }
    ssum = ssum + fact;
    strong = strong / 10;
  }
  if (ssum == copynum) {
    cout <<" The number " << copynum <<" is STRONG number"<< endl;
  }
  else {
    cout << " The number " << copynum << " is NOT STRONG number" << endl;
  }

  //A perfect number checker

  int  perfect = con;                    //
  int psum = 0;
    for (int i = 1; i < perfect; i++) {
        int div = perfect % i;
    if (div == 0) {
      psum = psum + i;
    }
  }
  if (psum == perfect) {
    cout << " The number " << perfect << " is PERFECT number" << endl;
  }
  else
    cout << " The number " << perfect << " is NOT a PERFECT number" << endl;

  
}
