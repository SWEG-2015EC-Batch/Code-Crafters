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
    for (int i = 0; i < 8;i++) {
      cout<< temp[i]<<endl;
    }
  float average = total / 8;
  cout << "average= " <<average<<endl;
return 0;
}
