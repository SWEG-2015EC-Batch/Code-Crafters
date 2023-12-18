#include<iostream>
using namespace std;
int main() {
    double grossSalary, incomeTaxRate, pensionRate = 0.07, netSalaray, bonusRate, overTimePayment, pension, tax;
    int workedHours, overWorkedHour;
    cout << "Enter your salary in Birr :  ";
    cin >> grossSalary ;
    if (grossSalary <= 200)
    {
        incomeTaxRate = 0;
    }
    else if (grossSalary > 200 && grossSalary <= 600) {
        incomeTaxRate = 0.01;
    }
    else if (grossSalary > 600 && grossSalary <= 1200)
    {
        incomeTaxRate = 0.15;
    }
    else if (grossSalary > 1200  && grossSalary <= 2000 )
    {
        incomeTaxRate = 0.02;
    }
    else if (grossSalary > 2000 && grossSalary <= 3500)
    {
        incomeTaxRate = 0.25;
    }
    else
        incomeTaxRate = 0.03;


    pension = grossSalary * pensionRate;
    tax = grossSalary * incomeTaxRate ;


    cout << "Enter your amount of worked hours : ";
    cin >> workedHours;
    cout << "Enter an over-time bonus rate/hour: ";
    cin >> bonusRate;

    cout << "Total amount of Tax is " <<tax<<" Br" <<endl ;
    cout <<"Total amount of pension " <<pension<<" Br"<< endl;

    if (workedHours > 40)
    {
        overWorkedHour = workedHours - 40;
        overTimePayment = overWorkedHour * bonusRate;
        netSalaray = (grossSalary - tax - pension) + overTimePayment;
        cout << "Your Net salary is : " << netSalaray<<" Br";
    }

    else {
        netSalaray = grossSalary - tax - pension;
        cout << "Your Net salary is : " << netSalaray<<" Br";
    }

    return 0;
}
