
#include <iostream>
#include <string>
using namespace std;
int main()
{
  string Name;
  double weekly_working_hour, bounus_rate_per_hour, base_salary, gross_salary, net_salary, bounus_payment ;
  double const tax_rate = 0.15, pension_rate = 0.05;
  cout << "Employer name: ";
  cin >> Name;
  cout << "Weekly working hour= ";
    cin >> weekly_working_hour;
  cout << "Bounus rate per hour= ";
  cin >> bounus_rate_per_hour;
  cout << "Base salary= ";
  cin >> base_salary;
  gross_salary =  base_salary + (bounus_rate_per_hour * weekly_working_hour);
  net_salary = gross_salary* (1- tax_rate - pension_rate);
  bounus_payment = bounus_rate_per_hour * weekly_working_hour;
  cout << "Gross salary= " << gross_salary<< " Birr"<<endl;
  cout << "Net salary= " << net_salary<<" Birr"<<endl;
  cout << "Bounus payment= " << bounus_payment<<" Birr"<<endl;
  return 0;
}