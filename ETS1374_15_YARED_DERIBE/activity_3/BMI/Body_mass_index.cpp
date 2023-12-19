// A BMI machine
#include <iostream>

using namespace std;

int main(){
    //declare variables
    float height , weight , BMI ;

    // input the height and weight
    cout<<"Please enter your height in Meter: ";
    cin>> height ;
    cout<<"Please enter your weight in KG: ";
    cin>> weight ;

    //now calculate the BMI
    BMI = (weight/(height*height));
    
    //print the result
    cout<<"Your BMI is "<< BMI<<endl;

    return 0;
}
