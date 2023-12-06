#include<iostream>
using namespace std;
int main(){
   double grossSalary,incomeTaxRate,pentionRate=0.7,netSalaray,bonusRate,overTimePayment,pention,tax;
   int workedHours,overWorkedHour;
   cout<<"enter your salery :  ";
   cin>>grossSalary;
   if(grossSalary <=200){
      incomeTaxRate=0;
   }  
   else if((grossSalary >200)&&(grossSalary <=600)){
    incomeTaxRate=0.1;
   }
   else if((grossSalary >600)&&(grossSalary <=1200)){
    incomeTaxRate=0.15;
   }
   else if((grossSalary >1200)&&(grossSalary <= 2000)){
    incomeTaxRate=0.2;
   }
   else if((grossSalary >2000)&&(grossSalary <=3500)){
    incomeTaxRate=0.25;
   }
   else{ 
    incomeTaxRate=0.3;
   }
   cout<<"enter your amount of worked hours : ";
   cin>>workedHours;
   if(workedHours > 40){
       overWorkedHour=workedHours-40;
    cout<<"enter amount of bonus rate : ";
    cin>>bonusRate;
    overTimePayment=overWorkedHour*bonusRate;
     pention=grossSalary*pentionRate;
     tax=grossSalary*incomeTaxRate;
     cout<<tax<<"\n" ;
     cout<<pention<<endl;

     netSalaray=(grossSalary-tax-pention)+overTimePayment;
     cout<<"your net salary is : "<< netSalaray; 
   } 

   else{
    netSalaray=grossSalary-tax-pention;
    cout<<"your net salary is : "<<netSalaray; 
   } 
   


 return 0;   
}