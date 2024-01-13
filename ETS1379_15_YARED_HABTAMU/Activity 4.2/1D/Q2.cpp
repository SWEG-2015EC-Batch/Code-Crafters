#include <iostream>
using namespace std;
int main()
{
  int temp[8] = {}, total = 0;
  for (int i = 0; i < 8; i++) {
    cout << "Enter number "<<i+1<<" :";
    cin >> temp[i];
    total += temp[i];
  }
  cout << "*************************** \n";
  float average = total / 8;
  for(int i=0;i<8;i++)
    cout << temp[i]<<endl;
  cout << "*************************** \n";
  cout << "average= " << average << endl;
}
