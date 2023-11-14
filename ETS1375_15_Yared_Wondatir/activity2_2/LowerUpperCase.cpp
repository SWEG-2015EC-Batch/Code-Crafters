// a program that changes the 
#include <iostream>
#include <ctype.h>

using namespace std;

int main(){
    char x;

    cout<<"please enter a single character: \n";
    cin>>x;    //we take input for the variable

    if (isupper(x)){
        x= tolower(x); //this will change the letter to lowercase if the input is uppercase
        cout<<"The lower case of the letter is "<<x<<endl;
    }
    else if (islower(x)){
        x= toupper(x);  //this will change the letter to uppercase if the input is lowercase
        cout<<"The upper case of the letter is "<<x<<endl;
    }
    else{
        cout<<"please enter a valid input \n";
        //here, if the input is not a letter, it will inform them to correct
    }

    return 0;
}