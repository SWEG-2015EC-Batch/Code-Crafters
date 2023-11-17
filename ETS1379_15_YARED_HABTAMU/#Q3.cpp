//Case identifier and convertor

#include<iostream>
#include<cmath>    
#include<string>

using namespace std;
int main()
{
    char letter;
    cout<<"Enter any letter : ";
    cin>>letter;
    if (isupper(letter)){
        letter = tolower(letter);
        cout<<"The Lowercase equivalent is "<<letter;
    }
    else if(islower(letter)){
        letter = toupper(letter);
        cout<<"The Uppercase equivalent is "<<letter;}

    else {
        cout<<" Invalid input ";
    }

    return 0;

}
