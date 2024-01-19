#include <iostream>
using namespace std;
int main()	
{
  float first[5], second[5],Addnum[5];
  cout << "Enter 5 numbers that sort in first column= "<<endl;
  for (int k = 0; k < 5; k++) {
      cin >> first[k];
  }
  cout << "Enter 5 numbers that sort in second column= "<<endl;
  for (int l = 0; l < 5; l++) {
    cin >> second[l];
    Addnum[l] = first[l] + second[l];
  }
  cout << "First number\t" << "Second number\t" << "Sum"<<endl;
  for (int o = 1; o < 5; o++) {
    cout << first[o]<<"\t\t"<<second[o]<<"\t\t"<<Addnum[o]<<endl;
  }
}
