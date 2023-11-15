
#include <iostream>
#include <string>
using namespace std;
int main()
{
  double transmission_speed, file_size, time_taken_in_second;
  int time_taken_in_day;
  transmission_speed = 960 * (sizeof(char));
  file_size = 419430400;
  time_taken_in_second = file_size / transmission_speed;
  time_taken_in_day = time_taken_in_second / 86400;//1days=86400sec
  cout << "time taken in second: " << time_taken_in_second << "second" << endl;
  cout << "time taken in day: " << time_taken_in_day<<"days";
  return 0;
}