//Q5
#include<iostream>     
#include<string>     
using namespace std;
int main()
{
    string name;
    double weekly_working_hour,bonus_rate_perhour,base_salary,gross_salary,net_salary,bonus_payment;
    float pension_rate = 0.05, tax_rate = 0.15 ;

    cout<<"Enter an employee's name: ";
    cin>>name;
    cout<<"Enter weekly working hour: ";
    cin>>weekly_working_hour;
    cout<<"Enter bonus rate per hour: ";
    cin>>bonus_rate_perhour;
    cout<<"Enter base salary: ";
    cin>>base_salary;

    gross_salary =(weekly_working_hour * bonus_rate_perhour) + base_salary ;
    net_salary = gross_salary - (gross_salary *(tax_rate + pension_rate));
    bonus_payment = weekly_working_hour * bonus_rate_perhour ;

     cout<<"The Gross Salary of an employee is :"<<gross_salary<<" Birr "<<endl;
     cout<<"The Net salary of an employee is :"<<net_salary<<" Birr"<<endl;
      cout<<"The Bonus payment of an employee is :"<<bonus_payment <<" Birr";
   return 0;
}
