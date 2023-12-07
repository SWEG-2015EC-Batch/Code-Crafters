#include <iostream>
using namespace std;
int main()
{
	int number_of_employee;
	cout << "Number of employee = " ;
	cin >> number_of_employee;
		int gross_salary, worked_hour;
		float  income_tax, tax_rate, over_time_bonus_rate;
		cout << "Please Enter Gross Salary= ";
		cin >> gross_salary;
		cout << "Please Enter Worked hour= ";
		cin >> worked_hour;
		float pension = gross_salary * 0.07;

		if (gross_salary < 200)
		{
			income_tax = gross_salary * 0;                           //0 percent
		}
		else if (gross_salary > 200 && gross_salary <= 600) {
			income_tax = gross_salary * 0.1;                        //10 percent
		}
		else if (gross_salary > 600 && gross_salary <= 1200) {
			income_tax = gross_salary * 0.15;                       // 15 percent 
		}
		else if (gross_salary > 1200 && gross_salary <= 2000) {
			income_tax = gross_salary * 0.2;                        // 20 percent 
		}
		else if (gross_salary > 2000 && gross_salary <= 3500) {
			income_tax = gross_salary * 0.25;                       // 25 percent 
		}
		else if (gross_salary > 3500) {
			income_tax = gross_salary * 0.3;                        // 30 percent 
		}
		else {
			cout << "invalid information";
		}

		float net_salary = (gross_salary - pension - income_tax);

		if (worked_hour > 40) {
			cout << "Enter Over Time Bonus Rate= ",
				cin >> over_time_bonus_rate;
			float over_time_payment = (worked_hour - 40) * over_time_bonus_rate;
			cout << "Net Salary= " << net_salary + over_time_payment << "$";
		}

		else if (worked_hour <= 40)
		{
			cout << "Net Salary= " << net_salary << "$";

		}
		else {
			cout << "Invalid Information";
		}
		return 0;
	
}
