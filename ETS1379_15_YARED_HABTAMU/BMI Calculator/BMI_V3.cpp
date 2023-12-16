#include<iostream>
using namespace std;
int main()
{
    double weight, height, BMI;         //BMI = Body Mass Index
    char gender = ('m', 'f'),Gender;


    int amount;
    cout << "For how many peoples you want to caclculate? :";
    cin >> amount;

    for (int i = 1; i <= amount; i++)
    {
        cout << "Enter gender (m /M) or (f / F)  :";
        cin >> gender;

        Gender = toupper(gender);

        cout << "Enter the weight of a person :" << endl;
        cin >> weight;

        cout << "Enter the height of a person :" << endl;
        cin >> height;
        BMI = (weight) / (height * height);
        cout << "Your Body Mass Index is : " << BMI << " Kg/m^2 So ";

        if (Gender == 'M')
        {
            if (BMI < 20.5) {
                cout << "You are UNDER WEIGHT \n";
            }
            else if (BMI > 20.5 && BMI < 25) {
                cout << "You are NORMAL WEIGHT \n";
            }
            else if (BMI > 25 && BMI < 30) {
                cout << "You are OVER WEIGHT \n";                        // optimize by making obesity for both gender
            }
            else 
                cout << "It's OBESITY, you should go to GYM!! \n";
            

        }
        else if (Gender == 'F')
        {

            if (BMI < 18.5) {
                cout << "You are UNDER WEIGHT \n";
            }
            else if (BMI > 18.5 && BMI < 24) {
                cout << "You are NORMAL WEIGHT \n";
            }
            else if (BMI > 24 && BMI < 30) {
                cout << "You are OVERWEIGHT \n";
            }
            else
                cout << "It's OBESITY, you should go to GYM!! \n";
        }
        else
            cout << "Invalid Input, please choose your gender M or F ";

    }
}
