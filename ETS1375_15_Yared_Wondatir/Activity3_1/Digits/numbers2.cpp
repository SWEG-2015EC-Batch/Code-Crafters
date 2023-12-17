//this code checks and outputs the result whether the entered number is PALINDROME, ARMSTRONG, STRONG, PERFECT OR NOT 
//AND THE FREQUENCY OF THE DIGITS IN THE NUMBER
#include <iostream>
#include <cstring>
#include <array>
#include <cmath>

using namespace std;

int main(){
    int  temp,temp2, num , reverse = 0 , count=0 , sum=0, armStrong=0, factorial=1, strongNum=0,perfectNum=0;
    int one=0, two=0, three=0, four=0, five=0, six=0, seven=0, eight=0, nine=0, zero=0 ; 
    cout<<"Enter a random number, please: ";
    cin>>num;
    int num1 = num;
    int num2 = num;
    int num3 = num;
    
    while(num>0){
      temp = num %10;
      reverse = (reverse*10)+temp;
      if (temp==0)
      {
        temp2=1;
      } 
      else
      {
        temp2=temp;
      }
      
      for(int i=1; i<=temp2; i++){
        if (i==0 || i==1)
        {
            factorial=1;
        }

            factorial*=i;
        }
      
      
      switch (temp)
      {
      case 1:
        one++;
        break;
      case 2:
        two++;
        break;
      case 3:
        three++;
        break;
      case 4:
        four++;
        break;
      case 5:
        five++;
        break;
      case 6:
        six++;
        break;
      case 7:
        seven++;
        break;
      case 8:
        eight++;
        break;
      case 9:
        nine++;
        break;
      default:
        zero++;
        break;
      }
      count++ ;
      sum+= temp ;
      
      
    
      strongNum+=factorial;
      num/=10;

    }
    while (num1!=0)
    {
        int temp2 = num1%10;
        armStrong+= pow(temp2,count);
        num1/=10;
    }

    for (int i = 1; i < num3; i++)
    {
        if (num3%i==0)
        {
            perfectNum+=i;
        }
    }
    

    if(num3==reverse){
      cout<<"\nThe number is PALINDROMIC!"<<endl;
    }
    else{
      cout<<"\nThe number is NOT PALINDROMIC!"<<endl;
    }
    if(armStrong==num3){
      cout<<"\nThe number is ARMSTRONG!"<<endl;
    }
    else{
      cout<<"\nThe number is NOT ARMSTRONG!"<<endl;
    }
    if(num3==strongNum){
      cout<<"\nThe number is Strong Number!"<<endl;
    }
    else{
      cout<<"\nThe number is NOT Strong Number!"<<endl;
    }
    if(num3==perfectNum){
      cout<<"\nThe number is Perfect Number!"<<endl<<endl;
    }
    else{
      cout<<"\nThe number is NOT Perfect Number!"<<endl<<endl;
    }

    
    cout<<"\tDIGIT\t\t"<<"\aFREQUENCY"<<endl<<endl;
    if (one!=0){
      cout<<"\tONE\t\t"<<one<<endl; 
    }
    if (two!=0){
      cout<<"\tTWO\t\t"<<two<<endl; 
    }
    if (three!=0){
      cout<<"\tTHREE\t\t"<<three<<endl; 
    }
    if (four!=0){
      cout<<"\tFOUR\t\t"<<four<<endl; 
    }
    if (five!=0){
      cout<<"\tFIVE\t\t"<<five<<endl; 
    }
    if (six!=0){
      cout<<"\tSIX\t\t"<<six<<endl; 
    }
    if (seven!=0){
      cout<<"\tSEVEN\t\t"<<seven<<endl; 
    }
    if (eight!=0){
      cout<<"\tEIGHT\t\t"<<eight<<endl; 
    }
    if (nine!=0){
      cout<<"\tNINE\t\t"<<nine<<endl; 
    }
    if (zero!=0){
      cout<<"\tZERO\t\t"<<zero<<endl; 
    }

    return 0;
}
