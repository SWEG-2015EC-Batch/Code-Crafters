
#include<iostream>     

using namespace std;

int main()

{
  double weight, height,BMI ;      //BMI = Body Mass Index

    cout << "Enter the weight of a person :"<<endl;
      cin >> weight;
    cout << "Enter the height of a person :"<<endl;
      cin >> height;

BMI= (weight)/(height * height);
 cout<<"The person's Body Mass Index is : "<<BMI<< " Kg/m^2 ";

return 0;

}