// program which find the power of the two given numbers
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //declare variables
    float X , Y , Z ;

    //input x and y
    cout<<"Enter the value of X: \n";
    cin>>X;
    cout<<"Enter the value of Y: \n";
    cin>>Y;

    //find the result
    Z = pow(X , Y);

    //print the result
    cout<<X<<" the power of "<<Y<<" is: "<<Z;

    return 0;
}