/* a simple cpp code that calculate the net salary of a worker taking an input of 
the gross salary, worked hrs,  over time bomus rate , and a given tax rate */

#include <iostream>
using namespace std;

int main(){
      double grossSalary , workedHrs , bonusRate , netSalary , pension, taxRate, incomeTax, overtimePayment=0 ;
      cout<<"Please enter your GROSS SALARY (Br): \n" ;
      cin>> grossSalary;
      cout<<"Please enter the WORKED HOURS of yours: \n" ;
      cin>> workedHrs;
      if (workedHrs>40){
        cout<<"Please enter the over time BONUS RATE: \n";
        cin>>bonusRate ;
        overtimePayment = (workedHrs-40) * bonusRate ; 
      }
      if(grossSalary<=200){
        taxRate=0;
      }
      else if(grossSalary>200 && grossSalary<=600){
        taxRate=0.10;
      }
      else if(grossSalary>600 && grossSalary<=1200){
        taxRate=0.15;
      }
      else if(grossSalary>1200 && grossSalary<=2000){
        taxRate=0.20;
      }
      else if(grossSalary>2000 && grossSalary<=3500){
        taxRate=0.25;
      }
      else{
        taxRate=0.30;
      }
      pension = grossSalary * (0.07);
      incomeTax = grossSalary * taxRate;
      netSalary = (grossSalary - pension - incomeTax) + overtimePayment ;
      cout<<"Your net salary is "<<netSalary ;

return 0;
}