//this program , designed to print out different types of patterns, using user input or not

#include <iostream>
using namespace std;

int main(){

// this prints out nos starting from 10 upto 49 with entered no of column
    int column;
    cout<<"Please enter the number of column you want: " ;
    cin>>column;
    int num = 0 ;
    cout<<"\n****Printing numbers from 10-49 in "<<column<<" Columns****\n\n"<<endl;
    for(int i=10 ; i<50 ; i++){
            cout<<i<<" ";
            num++ ;
            if (num==column)
            {
                cout<<endl;
                num=0;
            }
    }

// this code prints asterisks based on entered rows and column

    int column1, row1, count1=0;
    cout<<"\n\nPlease enter the number of column you want: " ;
    cin>>column1;
    cout<<"Please enter the number of row you want: " ;
    cin>>row1;
    int total = column1*row1 ;
    cout<<"\n****Printing asterisks with "<<column1<<" Columns and "<<row1<<" Rows****\n\n"<<endl;
    for (int i=0; i < total; i++)
    {
        cout<<"* ";
        count1++ ;
        if (count1==column1)
        {
            cout<<endl;
            count1=0;
        }
    } 


//this one prints square with asterisk

    int column2 ;
    cout<<"Please enter the number of column you want: " ;
    cin>>column2;
    cout<<"\n****Printing square with asterisks****\n\n";
    for (int i = 0; i < column2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            if(i!=0 && i !=column2-1 && j!=0 && j!=column2-1){
            cout<<"  "; }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }

//this code prints half pyramid with entered no of rows

    int row3 ;
    cout<<"Please enter the number of row you want: " ;
    cin>>row3;
    cout<<"\n****Printing half pyramid of "<<row3<<" rows****\n\n";
    for(int i =1; i<=row3; i++){
        int temp3=0;
        while (i>temp3)
        {
            cout<<"* ";
            temp3++;
        }
        cout<<endl;  
    } 

// this one prints inverted half pyramid with given no of rows

    int row4 ;
    cout<<"Please enter the number of row you want: " ;
    cin>>row4;
    cout<<"\n****Printing Inverted half pyramid of "<<row4<<" rows****\n\n";
    for(int i =1; i<=row4; i++){
        int temp4=row4;
        while (temp4>i)
        {
            cout<<"* ";
            temp4--;
        }
        cout<<endl;  
    }

//a code that prints hollow inverted half pyramid

    int row5 ;
    cout<<"Please enter the number of row you want: " ;
    cin>>row5;
    cout<<"\n****Printing Hollow Inverted half pyramid of "<<row5<<" rows****\n\n";
    for(int i =1; i<=row5; i++){
        int temp5=row5;
        int j=i;
        while (temp5>=i)
        {
            if(i!=1 && i !=temp5 && j !=i ){
            cout<<"  "; }
            else{
                cout<<"* ";
            }
            temp5--;
            j--;
        }
        cout<<endl;
    } 
  

    
//prints inverted full pyramid

    int row6, space ;
    cout<<"Please enter the number of row you want: " ;
    cin>>row6;
    cout<<"\n****Printing inverted full pyramid of "<<row6<<" rows****\n\n";
    for (int i=row6, k=0; i >=1; --i, k=0)
    {
        for (space=1;space<=row6-i;++space)
        {
            cout<<"  ";
        }
        while (k!=2*i-1)
        {
            cout<<"* ";
            ++k ;
        }
        cout<<endl;   
    }

//prints hollow full pyramid

    int row7 ;
    cout<<"Please enter the number of row you want: " ;
    cin>>row7;
    cout<<"\n****Printing Hollow full pyramid of "<<row7<<" rows****\n\n";
    for (int i=1; i <=row7; i++)
    {
        for (int j=1;j<row7-i;j++)
        {
            cout<<" ";
        }
        if (i==1 || i==row7)
        {
            for (int j= 1; j<=i; j++)
            {
                cout<<"* ";
            }
        }
        else
        {
            cout<<"*";
            for ( int j=1; j<=2*i-3; j++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
       
        cout<<endl;   
    }
    
//this code prints full pyramid with entered nos of row and column

    int column8, row8 ;
    cout<<"Please enter the number of column you want: " ;
    cin>>column8;
    cout<<"Please enter the number of row you want: " ;
    cin>>row8;
    cout<<"\n****Printing Full pyramid of "<<row8<<" rows and "<<column8<<" Columns****\n\n";
    for (int i = 1; i <=row8; i++)
    {
        for (int j=column8; j>=i; j--)
        {
            cout<<" ";
        }
        for (int j = 1; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
 // it prints consecutive numbers starting from 1 upto given number for some times

    int column9, row9 ;
    cout<<"Please enter the number of column you want: " ;
    cin>>column9;
    cout<<"Please enter the number of row you want: " ;
    cin>>row9;
    cout<<"\n****Printing consecutive numbers starting from 1 upto "<<column9<<" ,"<<row9<<" times****\n\n";
    for (int i=1; i <= row9; i++)
    {
        for (int j = 1; j<=column9; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    } 

// it prints the diagonal half of consecutive numbers starting from 1 upto given number for some times

    int column10, row10 ;
    cout<<"Please enter the number of column you want: " ;
    cin>>column10;
    cout<<"Please enter the number of row you want: " ;
    cin>>row10;
    cout<<"\n****Printing the diagonal half of consecutive numbers starting from 1 upto "<<column10<<" ,"<<row10<<" times****\n\n";
    for (int i=1; i <= row10; i++)
    {
         int temp10=0;
        for (int j = 1; j<=column10; j++)
        {
           
            while (i>temp10)
            {
                
                cout<<j<<" ";
                temp10++;
                j++;
            }
        }
        cout<<endl;
    } 

// it prints the diagonal half of consecutive numbers starting from 1 upto given number for some times in the opposite direction

    int column11, row11 ;
    cout<<"Please enter the number of column you want: " ;
    cin>>column11;
    cout<<"Please enter the number of row you want: " ;
    cin>>row11;
    cout<<"\n****Printing the diagonal half of consecutive numbers starting from 1 upto "<<column11<<" ,"<<row11<<" times IN THE OPPOSITE DIRECTION****\n\n";
    for (int i = 1; i <= row11; i++)
    {
        for (int j =column11; j >i; j--)
        {
            cout<<" ";
        }
        for (int j = i; j>=1; j--)
        {
            cout<<j;
            
        }
        cout<<endl;
    }
 
//this code prints abcde five times
    string letter= "abcde";
    cout<<"\n****Printing the first 5 english letters 5 times in a row****\n\n";
    for (int i =1; i <=5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout<<letter[j]<<" ";
        }
        cout<<endl;
    }

// this one prints 24 english letters in 4 rows

    string letters = "ABCDEFGHIGKLMNOPQRSTUVWX" ;
    int count13=0;
    cout<<"\n****Printing all english letters except Y & Z, in 4 rows****\n\n";
    for (int i = 0; i <letters.size(); i++)
    {
        
        count13++;
        cout<<letters[i]<<" ";
        if (count13==6)
        {
            cout<<endl;
            count13=0;
        } 
    }

//the last one , which prints abcde diagonaly
    string lett="ABCDE"  ;
    cout<<"\n****Printing the first 5 english letters diagonaly in 5 rows****\n\n";
    for (int i = 0; i < 5; i++)
    {
        for (int j=0; j<=i; j++)
        {
            cout<<lett[j]<<" ";
        }
        cout<<endl;
        
    }

    return 0;
}