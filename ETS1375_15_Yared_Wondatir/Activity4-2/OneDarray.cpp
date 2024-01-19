//1D array practical questions from Q1-7
#include <iostream>
#include <cmath>
#include <cstring>
#include <array>
using namespace std;

int main(){
    //question no.1
/*  signed int arry[4][5]={{16,22,99,4,18},
                           {-258,64,101,5,98},
                           {105,6,15,2,45},
                           {33,88,72,16,3}};


    for(int i=0 ; i<4 ; i++)
        {
	     for(int j=0 ; j<5 ; j++)
	        {
		     cout<<arry[i][j]<<" ";
	        }
	     cout<<endl;
        }
*/


    //question no.2
/*    double temp[7];
    double sum = 0;
    for(int i=0 ; i<=7 ; i++)
        {
	    cout<<"enter the [ "<<i+1<<" ]  index : ";
	    cin>>temp[i];
	    sum += temp[i];
	    system("CLS");
        }

    for(int i=0 ; i<=7 ; i++)
        {
	     cout<<"the [ "<<i+1<<" ]  number is : "<<temp[i]<<endl;
        }
        cout<<"the sum of the number you entered is : "<<sum;
*/


    //question no. 3
/*    float first[2][2];
for(int i=0 ; i<2 ; i++)
{
	for(int j=0 ; j<2 ; j++)
	{
		cout<<"enter [ "<< i+1 <<" ]  row [ "<<j+1<<" ] column ";
		cin>>first[i][j];
		system("CLS");
	}
}

cout<< "please enter second table data"<<endl;
float second[2][2];
for(int i=0 ; i<2 ; i++)
{
	for(int j=0 ; j<2 ; j++)
	{
		cout<<"enter [ "<< i+1 <<" ]  row [ "<<j+1<<" ] column ";
		cin>>second[i][j];
		system("CLS");
	}
}

float sum[2][2];
for(int i=0 ; i<2 ; i++)
{
	for(int j=0 ; j<2 ; j++)
	{
	
			sum[i][j] = first[i][j] + second[i][j];
	
	}
}



for(int i=0 ; i<2 ; i++)
{
	for(int j=0 ; j<2 ; j++)
	{
	    cout<<sum[i][j]<<", ";
	}
	cout<<endl;
}
*/


    //question no.4
/*    float volts[3][3] = {{11.95,16.32,12.15},{8.22,15.98,26.22},{13.54,6.45,17.59}};

for(int i=0 ; i<3 ; i++)
{
	for(int j=0 ; j<3 ; j++)
	{
		cout<<volts[i][j]<<" ";
	}
	cout<<endl;
}
*/


    //question no.5
/*     float volts[9] = { 11.95,16.32,12.15,8.22,15.98,26.22, 13.54,6.45,17.59 };
  for (int i = 0; i < 9; i++) {
    cout << volts[i] << "\t\t";
    if ((i + 1) % 3 == 0) {
      cout << endl;
    }
  }
*/


     //question no.6
/*     float tMark[5]={};

for (int i = 0; i <5; i++)
{
   cout<<"Enter the total mark of Student "<<i+1<<" : "<<endl;
   cin>>tMark[i];
}
cout<<"\nSTUDENT NAME"<<"\t\tTOTAL MARK"<<"\t\tSTATUS\n"<<endl;
for (int i = 0; i <5; i++)
{
    float temp = tMark[i];
     cout<<"STUDENT "<<i+1<<"\t\t"<<temp;
    if (temp>=80 && temp<=100)
    {
        cout<<"\t\t\tExcellent"<<endl;
    }
    else if (temp>=60 && temp<80)
    {
      cout<< "\t\t\tVery Good"<<endl;
    }
    else if (temp>=50 && temp<60)
    {
      cout<< "\t\t\tFair"<<endl;
    }
    else if (temp>=40 && temp<50)
    {
      cout<< "\t\t\tPoor"<<endl;
    }
    else if (temp<40 && temp>0)
    {
      cout<< "\t\t\tFail"<<endl;
    }
    else
    {
      cout<< "\t\t\tInvalid Input"<<endl;
    }
    
}
*/



    //question no.7

 /*   int num[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"Even numbers in reverse order:  ";
    for (int i = 9; i>=0; i--)
    {
        int temp = num[i];
        if (temp%2==0)
        {
            cout<<temp<<", ";
        }
        
    }
*/


    return 0;

}