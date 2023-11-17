
//Q6
#include<iostream>     
using namespace std;
int main()
{
    double transmisson_speed = 960, file_size = 419430400;
    int time_in_sec,time_in_day;

    time_in_sec = file_size / transmisson_speed;
   time_in_day = time_in_sec / 86400;
    cout<<" It takes "<<time_in_sec<<" Second "<<endl;
    cout<<" It Approximately takes "<<time_in_day<< " Days";

}
