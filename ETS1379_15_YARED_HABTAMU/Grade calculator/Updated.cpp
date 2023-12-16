#include<iostream>
using namespace std;
int main()
{
  double t=0, q=0, p=0, a=0, f=0;

  
  cout << "Enter test result out of 15% :";
  cin >> t;
  if (t < 0  t>15)        //test
      cout << "You Entered invalid input, please try again \n";

  cout << "Enter quiz result out of 5% :";
  cin >> q;      
       if (q < 0  q>5)               //quiz
      cout << "You Entered invalid input, please try again \n";

  cout << "Enter project result out of 20% :";
  cin >> p;      
    if (p < 0  p>20)                //project
      cout << "You Entered invalid input, please try again \n";

  cout << "Enter assignment result out of 10% :";
  cin >>a;     
    if (a < 0  a>10)             //assignment
      cout << "You Entered invalid input, please try again \n";
  
  cout << "Enter final result out of 50% :";
  cin >> f;
     if (f < 0 || f>50)                    //final result
      cout << "You Entered invalid input, please try again \n";
  
  double total = t + q + p + a + f;
  cout << "The total mark out of 100% is : "<< total << "%";

}
