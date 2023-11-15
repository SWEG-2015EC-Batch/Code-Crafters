#include<iostream>     
#include<cctype>       //for Q 3
#include<cmath>    //for Q3 & Q4
#include<string>     //for Q5 & Q3


using namespace std;
int main()

//Q1
{
  double weight, height,BMI ;         //BMI = Body Mass Index

  cout << "Enter the weight of a person :"<<endl;
    cin >> weight;
    cout << "Enter the height of a person :"<<endl;
  cin >> height;

BMI= (weight)/(height * height);
  cout<<"The person's Body Mass Index is : "<<BMI<< " Kg/m^2 ";


  return 0;
}


//Q2

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


//Q3
{
    char letter;
    cout<<"Enter any letter : ";
    cin>>letter;
    if (isupper(letter)){
        letter = tolower(letter);
        cout<<"The Lowercase equivalent is "<<letter;
    }
    else if(islower(letter)){
        letter = toupper(letter);
        cout<<"The Uppercase equivalent is "<<letter;}

    else {
        cout<<" Invalid input ";
    }

    return 0;

}

//Q4
{
    int x,y,power_value;
   cout<<"Enter x value : ";
   cin>>x;
   cout<<"Enter y value : ";
   cin>>y;
  power_value = pow(x,y);
  cout<< power_value;

    return 0;
}
//Q5

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


//Q6
{
    double  transmisson_speed = 960, file_size = 419430400;
    int time_in_sec,time_in_day;

    time_in_sec = file_size / transmisson_speed;
   time_in_day = time_in_sec / 86400;
    cout<<" It takes "<<time_in_sec<<" Second "<<endl;
    cout<<" It Approximately takes "<<time_in_day<< " Days";

}
