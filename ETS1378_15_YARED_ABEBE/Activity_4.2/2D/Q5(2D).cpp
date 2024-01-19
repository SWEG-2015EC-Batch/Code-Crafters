#include <iostream>
using namespace std;
int main(){
int count=0;
bool arr[5][5]={{0,1,0,1,1},  {1,0,1,0,1}, {0,1,0,0,0}, {1,0,0,0,1},{1,1,0,1,0}};
   for (int i = 0; i <5; i++) {
       for (int j =i; j<5; j++) {
            bool x=arr[i][j],y=arr[j][i];
           if ((x==true)&&(y==true))
          {
              count++;
          }  
       }
        
    }
    cout<<"The number of freindships(pair of friends) which are represented in this array is: "<<count;
  return 0;
}
