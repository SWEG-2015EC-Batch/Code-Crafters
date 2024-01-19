#include <iostream>
using namespace std;
int main()
{	
  const int maxSize = 100;
  int total_mark[maxSize];
  int count;

  cout << "Enter how many number do you want to enter : ";
  cin >> count;
  for (int i = 0; i < count;i++) {
    cout << "Enter total mark:";
    cin >> total_mark [i] ;
  }
  for (int k = 0;k<count; k++) {
    cout << total_mark[k]<<" ";
    if (total_mark[k] >= 80) {
      cout << "Excellent";
     }
    else if (total_mark[k] >= 60) {
      cout << "Very Good";
    }
    else if (total_mark[k] >=50) {
      cout << "Fair";
    }
    else if (total_mark[k] >= 40) {
      cout <<
      "Poor";
    }
    else {
      cout << "Fail";
    }
    cout << endl;

  }
}
  return 0;
}
