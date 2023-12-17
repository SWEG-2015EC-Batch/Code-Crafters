//this code will prompts the user to enter a charachter and check if it is upper,lowercase, digit, or a special char.
#include <iostream>
#include <cctype>
using namespace std;

int main(){
    char character ;
    cout<<"Please enter a character: ";
    cin>>character ;
    if(isalpha(character)){
        if(isupper(character)){
            cout<<"\nThe entered character is an **UPPERCASE.**\n";
        }
        else{
             cout<<"\nThe entered character is a **LOWERCASE.**\n";
        }
    }
    else if(isdigit(character)){
         cout<<"\nThe entered character is a **DIGIT.**\n";
    }
    else{
         cout<<"\nThe entered character is a **SPECIAL CHARACTER.**\n";
    }
return 0;
}