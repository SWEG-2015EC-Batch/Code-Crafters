#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int list;
  cout << "For How many persons ? ";
  cin >> list;

  int nums;
  double sumn = 0, sqre_sumn=0, sqre_num, sumn_sqre_num=0;
  cout << "Enter the numbers "<<endl;
  for (int i = 0;i < list;i++) 
  {
    cin >> nums;
    sumn = sumn + nums;
    sqre_sumn = pow(sumn,2);
    sqre_num = pow(nums, 2);
    sumn_sqre_num = sumn_sqre_num + sqre_num;
  
  }
  double mean, variance,standardvn;
  
  variance = (sumn_sqre_num - (sqre_sumn / list)) / list;
  mean = sumn / list;
  standardvn = sqrt(variance);

  cout << "Mean is :"<<mean << endl;
  cout << "Their Standard deviation is  :" << standardvn ;

}
