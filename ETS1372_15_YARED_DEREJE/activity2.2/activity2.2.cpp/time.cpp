//a program that will calculate how long it will take to send a file, given the file size
#include<iostream>
using namespace std;

int main(){
    float File_Size , hours;
    int time;

    //input 
    cout<<"Please enter the file size in bytes ->";
    cin>>File_Size;

    //opreation
    time = File_Size / (960 * sizeof(char));

    //display total time taken
    hours= time/86400;
    cout<<"The period of time required to send "<<File_Size<<" bytes of data is "<<time<<" seconds or "<<hours<< "hours.";

    return 0;
}