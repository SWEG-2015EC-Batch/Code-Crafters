#include<iostream>
using namespace std;

int main()
{

    double height, weight, BMI;
    char gender;

    cout << "Enter your gender by saying (m) or (f)" << endl;
    cin >>  gender;
    cout << "enter your weight" << endl;
    cin >> weight;
    cout << "enter height in meter" << endl;
    cin >> height;

    BMI = weight/pow(height,2);

    cout << "Your Body mass index is : "<< BMI << endl;
 
return 0;
}
