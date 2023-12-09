//playing with number
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int reverse=0, sum =0 ;
	int temp,temp2, num;
	int product = 1;
	cout << "enter number: ";
	cin >> num;
	const int x = num;
	
	int count=0;
	while (num > 0)
	{
		temp = num % 10;
		reverse = (reverse * 10) + temp;
		num /= 10;
		count++;
		sum += temp;
		if (temp != 0 && temp % 2 != 1)
		{
			product *= temp;
		}
		
	}
	int lastNum = x % 10;
	int firstNum = reverse%10;
	cout << "reverse number: "<<reverse<<endl;
	cout << "number of digit: " << count << endl;
	cout << "sum of the digit of given number: " << sum<<endl;
	cout << "product of  even digit: " << product << endl;
	cout << "The sum of first and last digit: " << (lastNum+firstNum)<<endl;
	//Swap the first and the last number
	int noCenternum=(lastNum * pow(10, count - 1)+firstNum);
	int noFirstandLastnum = x - ((firstNum * pow(10,(count-1))) + (lastNum));
	int first_and_last_swap = (lastNum * pow(10, (count - 1))) + (noFirstandLastnum + firstNum);
	cout << "Swaped the first and the last digit is " << first_and_last_swap << endl;
	//palindrome
	if (reverse == x) {
		cout << "The number is palindrome" << endl;
	}
	else {
		cout << "The number is not palindrome" << endl;
	}
	//Number of frequency of every digit in number 
	cout << "-----------------------" << endl;
	cout << "Numbers \tfrequency" << endl;
	cout << "------------------------" << endl;
	for (int i = 0; i < 10; i++) {
		int frequency = 0;
		int Unum = x;
		while (Unum > 0) {
			if (Unum % 10 == i) {
				frequency++;
			}
			Unum = Unum / 10;
		}
		cout << i << "\t|\t" << frequency << endl;
	}
	cout << "------------------------" << endl;

	//Amstrong number checker
	int Anum = x;//initally entered number use for amstrong number
	int Adigit;
	int Asum=0;
	
		while (Anum > 0) {
			Adigit = Anum % 10;
			Asum += pow(Adigit, 3);
			Anum /= 10;
		}
		if (Asum == x) {
			cout<<x<<" is an amstrong number!!"<<endl;
		}
		else {
			cout<<x<< " is not an amstrong number!!"<<endl;
		}
		//A strong  number checker
		int Snum = x;//initally entered number use for strong number
		int Ssum=0;
		int remainders, fact;
		int copynum=Snum;
		while (Snum != 0)
		{
			remainders = Snum % 10;
			fact = 1;
			for (int i = 1; i <= remainders; i++)
			{
				fact = fact * i;
			}
			Ssum = Ssum + fact;
			Snum = Snum / 10;
		}
		if (Ssum == copynum) {
			cout << copynum << " is strong numbers!!"<<endl;
		}
		else {
			cout << copynum << " is not strong numbers!!"<<endl;
		}
		//A perfect number checker	 
		int div;
		int Pnum=x;//initally entered number use for perfect number
		int Psum=0;

		for (int i = 1; i < Pnum; i++) {

			div = Pnum % i;
			if (div == 0) {
				Psum = Psum + i;
			}
		}
				if (Psum == Pnum) {
					cout << Pnum << " is a perfect number.";
				}
				else
					cout << Pnum << " is not a perfect number.";
	return 0;
}
