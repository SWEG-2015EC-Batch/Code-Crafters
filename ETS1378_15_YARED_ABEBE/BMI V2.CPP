#include <iostream>
using namespace std;
int main() {

	     char gender;
		cout << "\ngender (m or f)= ";
		cin >> gender;
		double height, weight, BMI;
		cout << "enter weight= ";
		cin >> weight;
		cout << "enter height= ";
		cin >> height;
		BMI = weight / (height * height);
		cout << "BMI= " << BMI << endl;
		if (gender  == 'm', 'M')
		{
			if (BMI < 20.5) {
				cout << "under weight";
			}
			else if (BMI >= 20.5 && BMI < 25) {
				cout << "normal weight";
			}
			else if (BMI >= 25 && BMI < 30) {
				cout << "over weight";
			}
			else if (BMI >= 30) {
				cout << "obesity";
			}
			else
				cout << "invalid";
		}
		else if (gender == 'f')
		{
			if (BMI < 18.5 && BMI>0) {
				cout << "under weight";
			}
			else if (BMI >= 18.5 && BMI < 24) {
				cout << "normal weight";
			}
			else if (BMI >= 24 && BMI < 30) {
				cout << "over weight";
			}
			else if (BMI >= 30) {
				cout << "obesity";
			}
			else
				cout << "invalid";
		}
		else {
			cout << "invalid information";
		}
	return 0;
}
