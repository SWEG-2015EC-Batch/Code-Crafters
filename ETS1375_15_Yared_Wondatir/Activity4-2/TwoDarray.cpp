//2D array practical questions from Q1-5
#include <iostream>
#include <cmath>
#include <cstring>
#include <array>
using namespace std;

int main(){
    //2D 1st
/*    float arr1[4]={}, arr2[4]={};
    int count=0;
    for (int i = 0; i <2; i++)
    {
        for (int j= 0; j <4; j++)
        {
            cout<<"Enter Element "<<j+1<<" of Array "<<i+1<<endl;
            if (i==0)
            {
                cin>>arr1[j];
            }
            else
            {
                cin>>arr2[j];
            }  
        }
    }
    for (int i = 0; i <4; i++)
    {
        if (arr1[i]==arr2[i])
        {
            count++;
            continue;
        }
        else
        {
            cout<<"The elements of Array 1 and Array 2 are NOT the same!"<<endl;
            break;
        }  
    }
    if (count==4)
    {
        cout<<"The elements of Array 1 and Array 2 are  the same!"<<endl;
    }
*/



    //2D 2nd
/*    float arr[4][5]={},arr2[2][5]={};

    for (int i = 0; i <4; i++)
    {
        float product=1,sum=0;
        for (int j = 0;j<5; j++)
        {
            cout<<"Enter Row "<<i+1<<" Column "<<j+1<<" element:  ";
            cin>>arr[i][j];
            system("cls");
            float temp=arr[i][j];
            product*=temp;
            arr2[0][i]=product;
             arr2[1][j]+=arr[i][j];
        }  
    }
    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j<5; j++)
        {
            if (i==0)
            {
                cout<<"product "<<j+1<<": "<<arr2[i][j]<<", ";
            }
            else
            {
                cout<<"sum "<<j+1<<": "<<arr2[i][j]<<", ";
            }
        }
        cout<<endl;        
    }
*/




    //2D 3rd
/*    float mark[3][6]={};

for (int i = 0; i <3; i++)
{
    cout<<"Enter STUDENT "<<i+1<<"\'s ";
    for (int j = 0; j<5; j++)
    {
        if (j==0)
        {
            cout<<"TEST result: ";
            cin>>mark[i][j];
            system("cls");
        }
        else if (j==1)
        {
            cout<<"ASSIGNMENT result: ";
            cin>>mark[i][j];
            system("cls");
        }
        else if (j==2)
        {
            cout<<"QUIZ result: ";
            cin>>mark[i][j];
            system("cls");
        }
        else if (j==3)
        {
            cout<<"PROJECT result: ";
            cin>>mark[i][j];
            system("cls");
        }
        else if (j==4)
        {
            cout<<"FINAL result: ";
            cin>>mark[i][j];
            system("cls");
        }
        mark[i][5]+=mark[i][j];
    }
}
    

cout<<"\nSTUDENT NAME"<<"\t\tTEST"<<"\t\tASSIGNMENT"<<"\t\tQUIZ"<<"\t\tPROJECT"<<"\t\tFINAL"<<"\t\tTOTAL MARK"<<"\t\tSTATUS\n"<<endl;
for (int i = 0; i <3; i++)
{
    cout<<"STUDENT "<<i+1<<"\t\t";
    for (int j = 0; j<6; j++)
{
    cout<<"    "<<mark[i][j]<<"\t\t  ";
}
    float temp = mark[i][5];
    if (temp>=80 && temp<=100)
    {
        cout<<"Excellent"<<endl;
    }
    else if (temp>=60 && temp<80)
    {
      cout<< "Very Good"<<endl;
    }
    else if (temp>=50 && temp<60)
    {
      cout<< "\tFair"<<endl;
    }
    else if (temp>=40 && temp<50)
    {
      cout<< "\tPoor"<<endl;
    }
    else if (temp<40 && temp>0)
    {
      cout<< "\tFail"<<endl;
    }
    else
    {
      cout<< "Please try again"<<endl;
    }
}
*/




    //2D 4th
/*    int arr[3][4]={},sum=0;
    for (int i = 0; i <3; i++)
    {
        for (int j = 0;j<4; j++)
        {
            cout<<"Enter Row "<<i+1<<" Column "<<j+1<<" element:  ";
            cin>>arr[i][j];
            system("cls");
            int temp= arr[i][j];
            if (temp%2==0)
            {
                sum+=temp;
            }
        }
    }
    cout<<"\nThe sum of even numbers in the array is "<<sum<<endl;
    for (int i = 0; i <3; i++)
    {
        for (int j = 0;j<4; j++)
        {
            int temp= arr[i][j];
            if (temp%2==0)
            {
                cout<<temp<<"\t";
            }
            else
            {
                cout<<"*"<<"\t";
            }
        }
        cout<<endl;
    }
*/



    //2D 5th
/*    int count=0;
    bool arr[5][5]={{0,1,0,1,1},
                    {1,0,1,0,1},
                    {0,1,0,0,0},
                    {1,0,0,0,1},
                    {1,1,0,1,0}};
    for (int i = 0; i <5; i++)
    {
        for (int j =i; j<5; j++)
        {
            bool x=arr[i][j],y=arr[j][i];
            if ((x==true)&&(y==true))
            {
                count++;
            }
            
        }
        
    }
    cout<<"The number of freindships(pair of friends) which are represented in this array is: "<<count;
*/



    
    return 0;
}