#include<iostream>
using namespace std;

int main()
{

    double height, weight, BMI;
    char gender;

    cout << "enter your gender please respond m or f" << endl;
    cin >>  gender;
    cout << "enter your weight" << endl;
    cin >> weight;
    cout << "enter height in meter" << endl;
    cin >> height;

    BMI = weight/(height*height);
    cout << "Your gender is "<< gender << endl;

    cout << BMI << endl;


    return 0;


}