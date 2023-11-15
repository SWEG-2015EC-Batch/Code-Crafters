
#include <iostream>
using namespace std;
int main()
{     double fule_tank_capacity, mile_per_gallon, number_of_mile;
    cout << "Enter fule tank capacity= "; 
    cin >> fule_tank_capacity;
    cout << "Enter mile per gallon= ";
    cin >> mile_per_gallon;
    number_of_mile = fule_tank_capacity * mile_per_gallon;
    cout << "Number of mile car driven without refuleing is: " << number_of_mile;
    return 0;
  
  }