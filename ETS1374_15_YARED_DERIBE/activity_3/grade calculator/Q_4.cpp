#include<iostream>
using namespace std;
int main(){

int grade;
cout<<"please inter your grade   :  ";
cin>>grade;

if(grade>=90){
    cout<<"A+";
}
else if((grade>=80) && (grade<90)){
    cout<<"A";
}else if((grade>=75) && (grade<80)){
    cout<<"B+";
}else if((grade>=60) && (grade<75)){
    cout<<"B";
}else if((grade>=55) && (grade<60)){
    cout<<"C+";
}else if((grade>=45) && (grade<55)){
    cout<<"C";
}else if((grade>=30) && (grade<45)){
    cout<<"D";
}else {
    cout<<"F";

    return 0;
}






}