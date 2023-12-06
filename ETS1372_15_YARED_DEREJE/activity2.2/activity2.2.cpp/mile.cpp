// code that find The number of miles the automobile can be driven without refueling
#include <iostream>
using namespace std;

int main(){
    //declare a variables
    float volume , mpg , miles ; 

    // take inputs
    cout<<"Please enter the capacity of the automobile fuel tank in gallon \n";
    cin>> volume;
    cout<<"Please enter the miles per gallons the automobile can be driven \n";
    cin>> mpg;

    //calculating the distance in miles
    miles = volume * mpg;

    //print the result
    cout<<"The number of miles the automobile can be driven without refueling is: "<< miles<<" MILES";

    return 0;
}