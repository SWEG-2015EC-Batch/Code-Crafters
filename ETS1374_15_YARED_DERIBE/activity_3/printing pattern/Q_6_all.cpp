#include<iostream>
#include<cmath>

using namespace std;
int main(){
      // please run this code one by one 
cout<<"*******************************************************"<<endl;
int row, column ;
cout<<"enter the column"<<endl;
cin>>column;
// cout<<"enter the row"<<endl;
// cin>>row;

//  for( int k = 1 ; k <= column + 1 ; k++){
//     cout<<"* ";
//  }
//  cout<<endl;

// for ( int i = 1 ; i <= column ; i++)
//    {
   
//          for ( int j = 1 ; j <= row ; j++ ){
    
//             if ( (j == 1) || (j == 5) ){

//                    cout<<"* ";
//                    }
//             else{
//                    cout<<"  ";
//               }

//           }
// cout<<'\n';
// }

// for( int a = 1 ; a <= column + 1 ; a++){
//     cout<<"* ";
//  }
//  cout<<endl;
 

// inverted pyramid
cout<<"*******************************************************"<<endl;
//  int i,j,k;

//  for( i = 1 ; i <= column ; i++){
//     for( j = column ; j >= 1 ; j--){

//         if( i <= j ){
//             cout<<"* ";
//         } 
        

//         else {
//              cout<<"  ";
//         }
     
//     }   cout<<endl;
//  }


// half star pattern
cout<<"*******************************************************"<<endl;

//  for(int i = 1 ; i <= column ; i++){
//     for( int j = column ; j >= 1 ; j--){

//         if( i >= j ){
//             cout<<"* ";
//         } 
        

//         else {
//              cout<<"  ";
//         }
     
//     }   cout<<endl;
//  }

cout<<"*******************************************************"<<endl;

// for(int i=1;i<=column;i++){
//     for(int j=1;j<=column;j++){
//         if(j==1||i==1 || (i + j )== (column + 1)){
//             cout<<" *";
//         }
//         else
        
//         {
//             cout<<"  ";
//         }

//     }
//     cout<<endl;
// }
cout<<"*******************************************************"<<endl;
//  for(int i=1; i<=column;i++){
//    for(int j=1;j<=column;j++){
//       if(j>=i){
//          cout<<"* ";
//       }
//       else{
//         cout<<" ";
//       }
     
//    }
//  cout<<endl;
//  }
cout<<"*******************************************************"<<endl;
//  for(int i=1; i<=column;i++){
//    for(int j=column;j>=1;j--){
//       if(i>=j){
//          cout<<" ";
//       }
//       else{
//         cout<<"* ";
//       }
     
//    }
//  cout<<endl;
//  }



 //hallow full pyramid
 cout<<"*******************************************************"<<endl;

// for(int i=1; i<=column;i++){
//        for(int j=1;j<(column-i);j++){
//               cout<<" ";
//        }
//        if(i==1 ||i==column){

//         for(int j =1;j<=i;j++){

//                cout<<"* ";
//         }
//        }
//        else{

//         cout<<"*";

//         for(int j=1;j<=(2*i-1);j++){

//             cout<<" ";

//         }
//         cout<<"*";
//        }
//     cout<<endl;
// }


//print the number 1 to 5
cout<<"*******************************************************"<<endl;
// for(int i=1; i<=5;i++){
//    for(int j=1;j<=5;j++){
//     cout<<j<<" ";
//    }
//    cout<<endl;
// }


//printthe numbers in half triangle form
cout<<"*******************************************************"<<endl;
// for(int i=1; i<=5;i++){
//    for(int j=1;j<=i;j++){
//     cout<<j<<" ";
//    }
//    cout<<endl;
// }

//print the number in half triangle form to the left
cout<<"*******************************************************"<<endl;
// for(int i=1; i<=5;i++){
//    for(int j=5;j>=1;j--){
//     if(i>=j){
//         cout<<j;
//     }
//     else{
//         cout<<" ";
//     }
//    }

//    cout<<endl;
// }

//print the alphabet to e in rectangle form
cout<<"*******************************************************"<<endl;

// for(int i=1; i<=5;i++){
//     char alphabet='a';
//    for(int j=1;j<=5;j++){
//     cout<<alphabet<<" ";
//     alphabet++;
//    }
//    cout<<endl;
// }

//print the alphabet Ato Z
cout<<"*******************************************************"<<endl;
// char alphabet='A';
// for(int i=1; i<=4;i++){
   
//    for(int j=1;j<=6;j++){
//     cout<<alphabet<<" ";
//     alphabet++;
//    }
//    cout<<endl;
// }

//print the alphabet in triangle form
cout<<"*******************************************************"<<endl;


// for(int i=1; i<=5;i++){
//    char alphabet='A';
//    for(int j=1;j<=i;j++){
//     cout<<alphabet<<" ";
//     alphabet++;
//    }
//    cout<<endl;
// }

 
return 0;

}