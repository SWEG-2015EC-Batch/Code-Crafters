#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
int main(){
char stop;	
int num;
while(stop!='b'){

cout<<"enter the question number you want to see in activity 5.1 : ";
cin>>num;

switch(num)
{
  case 1:
    cout<<"lets assume the address of v is 1000 ,ptr2 will be 2000,ptr1 4000,ptr3 5000,array2 6000,array1 will be 3000\n";
     cout<<"  0       1000 \n";
     cout<<"  1000    2000 \n";
     cout<<"  3000    3000 \n";
     cout<<"  3008    4000 \n";
     cout<<"  0       1000 \n"; 
     cout<<"  1000    2000 \n";
     cout<<"  3000    3000 \n";
     cout<<"  6000    4000 \n";
      break;
  case 2:
     cout<<"lets assume the address of a 1000,p 2000,q 3000\n";
     cout<<"  58  58  58\n";
     break;
  case 3:
     cout<<"lets assume the address of k 1000,ptr 2000,ptrptr 3000\n";
     cout<<"  k= 4    \n";
     cout<<"  x= 950    \n";
     cout<<"  y= 3000    \n";
     cout<<"  k= 14    \n";
     cout<<"  k= 28    \n";
     break;
  case 4:
      cout<<"assume &i= 0x371292 , &j = 0x5863a , &ptr = 0x1fc825 , &pptr = 0x1000\n"; 
     cout<<" i          j          ptr          pptr     ";
     cout<<" 5          10        0x371292      0x1000 \n";
     cout<<" 5          10        0x371292      0x1fc825\n";
     cout<<" 3          10        0x371292      0x1fc825\n";
     cout<<" 7          10        0x371292      0x1fc825\n";
     cout<<" 7          10        0x5863a       0x1fc825\n";
     cout<<" 7          9         0x5863a       0x1fc825\n";
     cout<<" 7          9         0x5863a       0x371292\n";
     cout<<" 7          -2        0x5863a       0x371292\n";
     break;
  case 5:
     cout<<"assume &i= 0x371292 , &ptr = 0x1fc825\n , &pptr = 0x1000"; 
     cout<<"  5     0x371292\n";
     cout<<"  6     0x371292\n";
     cout<<"  7     0x371292\n";
     cout<<"  garbage value     0x371292\n";
     cout<<"  8     0x371292\n";
     cout<<"  9     0x371292\n";
     cout<<"  9     0x371292\n";
     break;
   case 6:
     cout<<"a[0] : 6.0      \n";
     cout<<"a[1] : 5.0      \n";
     cout<<"a[2] : 0.0      \n";
     cout<<"a[3] : 7.0      \n";
     cout<<"a[4] : 0.0        ";
     break;
    case 7 :
     cout<<"the same question as question number 6:";
     cout<<"a[0] : 6.0      \n";
     cout<<"a[1] : 5.0      \n";
     cout<<"a[2] : 0.0      \n";
     cout<<"a[3] : 7.0      \n";
     cout<<"a[ 4] : 0.0        "; 
     break;
    case 8 :
      cout<<"the code have an error in Ptr = *(mark+1)+3  since we cannot give the pointer integer.\n";
      cout<<"the modified elements are\n";
     cout<<"mark[0][2] : 20.0      \n";
     cout<<"mark[1][0] : 28.0      \n";
        break;
    
   
  case 9:
     cout<<" int *p1=20  -we can't give integer to pointer   \n";
     cout<<" const int z =10  -constant integer value  \n";
     cout<<" const int *const p4= &x  - is the constant pointer to integer\n";
     cout<<" const int *ptr= &x  - is a constant pointer\n";
     cout<<"  *p2=50 and *p2=100 - is wrong b/c we cannot modify constant pointer value \n";  
     cout<<"  p3=&y  - is wrong b/c we cannot modify constant pointer address \n"; 
     cout<<"  *p4=90 and p4=&y - is wrong b/c we cannot modify constant pointer  ";
     break;
    case 10:
    	
    	   double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    double *ptr = balance;

    int arr[3][4] = {{10, 11, 12, 13}, {20, 21, 22, 23}, {30, 31, 32, 33}};
    int *pptr = arr[0];
    
    cout << "for balance: \n";
    for (int i = 0; i < 5; i++) {
        cout << "address [ " << i << " ] = " << ptr << "  " << "the element [ " << i << " ] is " << *ptr << endl;
        ptr++;
    }

    cout << "for array: \n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "array [ " << i << " ][ " << j << " ] = " << &(arr[i][j]) << " and the element is : " << *(pptr + i * 4 + j) << endl;
        }
    }
      break;
    
    
}
cout<<"do you want to see another question or waching bmi [b/q] : ";
cin>>stop;
	
}

    int numb;
      cout<<"enter number of students to calculate bmi : ";
      cin>>numb;
          double arr[numb][3]; 
          string name[numb];
         for(int i=0;i<numb;i++)
        {
      cout<<"enter person "<<i+1<<" name : ";
      cin>>name[i];
      for(int j=0;j<3;j++)
       {
     double *height=&(arr[i][0]);
      double *weight=&(arr[i][1]);
      if(j==0)
    {
    cout<<"enter height of person "<<i+1<<": ";
    cin>>arr[i][j];  
    
    }
  else if(j==1){
    cout<<"enter weight of person "<<i+1<<": ";
    cin>>arr[i][j];
  
  }
  else if(j==2){
    arr[i][j]=(*weight)/(*height**height);
     }

       }
      }
       cout<<" name "<<setw(10)<<"height"<<setw(10)<<"weight"<<setw(10)<<"BMI"<<endl;
       for(int i=0;i<numb;i++){
       cout<<name[i]<<setw(10);
        for(int j=0;j<3;j++){
      cout<<arr[i][j]<<setw(10);
            }
     cout<<endl;
      }
   










	
	
	
	
	
	return 0;
}
