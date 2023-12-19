#include<iostream>
using namespace std;
int main(){

 
 char input = 'a';

 if(isdigit(input)){
    cout<<"digit";
 }
 
 else if ( isalpha(input)){
    if ( isupper(input)){
        cout<<"upper case ";
      }
    else  {
       cout<<"lower case ";
    
      }
    }
 else {
    cout<<"character ";
 }
 


return 0;
}