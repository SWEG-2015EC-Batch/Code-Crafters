#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float num,x, i, sum=0,average, Sq_num=0, Sq_sum = 0,standard_D=0;
	cout << "Enter numbers: "<<endl;

	
		for (i = 1;; i++) {
			cin >> num;
			if (num != 0) {
			}
			else
			{
				break;
			}
			sum += num;
			Sq_sum += pow(num, 2);
			cout << "input number= " <<"|" << num<<endl;
		}
		Sq_num = pow(sum, 2)/(i-1);
		int Ssum = pow(sum, 2);
	average = sum / (i-1);
	cout << "Mean= " << average<<endl;
	standard_D = sqrt(Sq_sum-Sq_num) /sqrt(i-1);
	cout << "standard_Deviation" << standard_D;
	return 0;
}
