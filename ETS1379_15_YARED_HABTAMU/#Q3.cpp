

include<iostream>

using namespace std;
int main()

{

   double capacity_in_gallon, mile_per_gallon,number_of_miles ;         //BMI = Body Mass Index

  cout << "Enter the Capacity in gallon of an automobile fuel tank :";
    cin >> capacity_in_gallon;

  cout << "Enter the Miles per gallon the automobile can be driven :";
    cin >> mile_per_gallon;

    number_of_miles = capacity_in_gallon * mile_per_gallon ;

    cout << " Number of miles the automobile can be driven is :"<<number_of_miles<<" miles";

    return 0;

}