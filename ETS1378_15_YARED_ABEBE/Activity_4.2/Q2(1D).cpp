#include <iostream>
using namespace std;
int main()
{  
  int temp[8] = {},total=0;
  for (int k = 0; k < 8; k++) {
    cout << "Enter number= ";
    cin >> temp[k];
    total += temp[k];
  }
  float average = total / 8;
  cout << "average= " <<average<<endl;
return 0;
}
