#include<iostream>
#include<cmath>

using namespace std;
int main(){
    //please uncomment one by one to cheak if the code work or not!!

cout<<"*******************************************************"<<endl;


int number,count=0;
cout<<"please enter the number   : ";
cin>>number;
int num=number;
// int reverse=0,sum=0;
// int product=1;
// while(number>0){
// int remainder=number%10;
// sum+=remainder;
// reverse=(reverse*10)+remainder;
// number/=10;
// count++;

// if((remainder % 2) == 0){
//     product*=remainder;
// }
// }
// cout<<"the reverse number is "<<reverse<<endl;
// cout<<"the sum of each digit is "<<sum<<endl;
// cout<<"the product of each even number in the given number is " <<product<<endl;

// //find the last digit and first digit and find their sum
// int lastDigit=num%10;
// int firstDigit=num/pow(10,count-1);
// int sumation= lastDigit + firstDigit;
// cout<<"the sum mof the first and last digit of the number is : "<<sumation<<endl;

cout<<"*******************************************************"<<endl;
// //swap the first and last digit of the number

// int swap=num-lastDigit-(firstDigit*pow(10,count-1))+(lastDigit*pow(10,count-1))+firstDigit;
// cout<<"the swap number will be " <<swap<<endl;


// //cheak whether the number is palyndrom or not


// if(num==reverse){
//     cout<<"the number is palyndrom"<<endl;
// }
// else{
//     cout<<"the nnumber is not palyndrom"<<endl;
// }

//print their frequency in tabular format

cout<<"*******************************************************"<<endl;

// for(int i=0;i<10;i++){
//     cout<<"the frequency of the number "<<i<<" is ";
//     int turn=0;
//     for(int j=number ; j<0 ; (j=number/10)){
//         int remin = j % 10;
//         if(remin==i){
//             cout<<++turn;
//         }
//     }
//     cout<<turn<<endl;
// }



cout<<"*******************************************************"<<endl;
//armstrong number or not;
// int cub =0;
// while(number>0){
// int remainder=number%10;

// cub=cub+(remainder*remainder*remainder);

// number/=10;
// }
// if(cub==num){
//     cout<<"the number is armstrong ";

// }else{
//     cout<<"the number is not armstrong";
// }

cout<<"*******************************************************"<<endl;
//strong nunmber or not


// int sum=0;
// while(number>0){
// int remainder=number%10;
// int fact=1;

// for(int i=1;i<=remainder;i++){
//         fact*=i;
//      }
//      sum+=fact;
//  number/=10;
// }
// cout<<sum<<"   "<<num;
// if(sum==num){
//     cout<<"the number is strong";

// }else{
//     cout<<"the number is not strong";
// }


cout<<"*******************************************************"<<endl;
//perfect number or not


// int add=0;
// for(int i=1;i<10;i++){
//     if((num%i)==0){
//     add+=i;
//     }
    
// }
// int total=add-num;
// if(total==num){
//     cout<<"the number is perfect";

// }
// else{
//     cout<<"the number is not perfect";
// }













return 0;
}


//please uncomment one by one to cheak if the code work or not


