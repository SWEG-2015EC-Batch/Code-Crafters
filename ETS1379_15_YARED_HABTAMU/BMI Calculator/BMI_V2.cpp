#include <iostream>
using namespace std;
int main() {

  char gender;  
  double height, weight, BMI;

  cout << Enter your gender by saying m or f ";
  cin >> gender;
  cout << "enter your weight= ";
  cin >> weight;
  cout << "Enter your height= ";
  cin >> height;
               
  BMI = weight / (height * height);
  cout << "BMI= " << BMI << endl;
     if (gender  == 'm' || gender == 'M')
                {
                        if (BMI < 20.5) {
                                cout << "You are Under weighted";
                        }
                        else if (BMI >= 20.5 && BMI < 25) {
                                cout << "You are Normal weighted";
                        }
                        else if (BMI >= 25 && BMI < 30) {
                                cout << "You are Over weighted";
                        }
                        else 
                                cout << "It's Obesity you should go to GYM /n)";
                    
                else if (gender == 'f' || gender == 'F')
                {
                        if (BMI < 18.5) {
                                cout << "You are Under weighted";
                        }
                        else if (BMI >= 18.5 && BMI < 24) {
                                cout << "You are Normal weighted";
                        }
                        else if (BMI >= 24 && BMI < 30) {
                                cout << "You are Over weighted";
                        }
                        else if 
                                cout << " It's Obesity, you should go to gym /n";
                      
                 
                else {
                        cout << "Invalid input, please try again ";
                }
        return 0;
}
