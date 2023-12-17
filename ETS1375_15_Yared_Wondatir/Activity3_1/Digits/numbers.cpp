//this program below finds the entered number's FIRST AND LAST DIGIT, NO of DIGITS,
//THE SUM OF THE DIGITS, THE INVERSE, THE PRODUCT OF EVEN NUMBERS, AND THE FIRST AND LAST DIGIT SWAPPED VERSION OF THE NUMBERS
#include <iostream>
#include <cstring>
#include <array>
#include <cmath>

using namespace std;

int main(){
    int  temp, num , reverse = 0 , count=0 , sum=0, product=1, lastDigit, firstDigit, armStrong=0;
  
    cout<<"Enter a random number, please: ";
    cin>>num;
    int num1 = num;
    
    if (num%10!=0)
    {
      lastDigit=num %10;
    }
    else
    {
      lastDigit= 0 ;
    }
    while(num>0){
      temp = num %10;
      if (temp%2==0)
      {
        product *=temp;
      }
      
      reverse = (reverse*10)+temp;
      num/=10;
      count++ ;
      sum+= temp ;
    }
   
    firstDigit= reverse%10 ;
    int x= firstDigit* (pow(10, count-1));
    int y= num1 % x;
    num1= y/10;
    int newNum= lastDigit*(pow(10,count-1))+(num1*10+firstDigit);

    
    cout<<"\n\nThe reverse of the number is "<<reverse<<endl; 
    cout<<"\nThe number has "<<count<<" digits"<<endl;
    cout<<"\nThe sum of each digits is "<<sum<<endl;
    cout<<"\nThe product of the even digits in the number is "<<product<<endl;
    cout<<"\nThe first digit: "<<firstDigit<<endl;
    cout<<"\nThe last digit: "<<lastDigit<<endl;
    cout<<"\nThe sum of the  first and last digit: "<<firstDigit+lastDigit<<endl;
    cout<<"\nThe first and last digit swaped number: "<<newNum<<endl;
  
  

    return 0;
}