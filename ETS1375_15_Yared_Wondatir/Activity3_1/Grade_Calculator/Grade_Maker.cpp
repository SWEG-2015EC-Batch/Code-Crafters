//a simple cpp code which reads different assessment results from the user and output the GRADE based on the given scale.
#include <iostream>
using namespace std;

int main(){
    double test, quiz, project, assignment, final, total ;
    cout<<"Please enter your TEST result from 15%: ";
    cin>>test ;
    cout<<"Please enter your QUIZ result from 5%: ";
    cin>>quiz ;
    cout<<"Please enter your PROJECT result from 20%: ";
    cin>>project ;
    cout<<"Please enter your ASSIGNMENT result from 10%: ";
    cin>>assignment ;
    cout<<"Please enter your FINAL EXAM result from 50%: ";
    cin>>final ;
    total = test+quiz+project+assignment+final ;
    if (total>=90 && total<=100)
    {
       cout<<"\nGrade: *A+*";
    }
    else if (total>=80 && total<90)
    {
       cout<<"\nGrade: *A*";
    }
    else if (total>=75 && total<80)
    {
       cout<<"\nGrade: *B+*";
    }
    else if (total>=60 && total<75)
    {
       cout<<"\nGrade: *B*";
    }
    else if (total>=55 && total<60)
    {
       cout<<"\nGrade: *C+*";
    }
    else if (total>=45 && total<55)
    {
       cout<<"\nGrade: *C*";
    }
    else if (total>=30 && total<45)
    {
       cout<<"\nGrade: *D*";
    }
    else if (total>=0 && total<30)
    {
       cout<<"\nGrade: *F*";
    }
    else{
        cout<<"\nPlease try again!";
    }
return 0;    
}