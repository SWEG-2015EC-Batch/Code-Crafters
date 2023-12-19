#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int num = 1;
    int sumOfSquare = 0;
    int sum = 0;
    double mean, standardDeviation;
    int count = 1;

    cout << "Enter 0 when you finish" << endl;
    cout << "Enter the number [" << count << "]: ";

while (num != 0) {
        cin >> num;
        sum += num;
        sumOfSquare += num * num;
        count++;
       cout<<"the [ "<<count-1<<" ] number is"<<num;
    }

    mean = sum / (count - 2);
    standardDeviation = sqrt((sumOfSquare - (2 * mean * sum) + (mean * mean * (count - 2))) / (count - 2));

    cout << "The mean is: " << mean << endl;
    cout << "The standard deviation is: " << standardDeviation << endl;

    return 0;
}
