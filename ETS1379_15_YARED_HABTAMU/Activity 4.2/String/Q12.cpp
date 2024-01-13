#include <iostream>
using namespace std;
int main()
{
  char test_answer[10] = { 'b','c','d','a','a','b','d','d','d','e' };
  char stu_ans[10] = {};
  int row = 10;
  int test_score = 0;
  cout << "Enter the test answer "<<endl;
  for (int i = 0;i < 10;i++)
  {
    cout << "Question nO "<<i+1<<" :";
    cin >> stu_ans[i];
  }
  cout << "******************************** \n";
  for (int i = 0;i < 10;i++)
  {
    if (test_answer[i] == stu_ans[i])
    {
      test_score++;
    }
  }
  cout << "Your answer "<<"\t" << "Correct answer : \n";
  for (int i = 0;i <= 10;i++)
  {
    test_score;
    if (i == 10)
    {
      cout << "score" << "\t\t" <<"*"<<test_score<<"*" ;
      break;
    }
    for (int j = 1;j < 2;j++)
    {
      cout << i+1 <<" : " << stu_ans[i]<<"\t\t"<< test_answer[i]<<endl;
    }
  }
}
