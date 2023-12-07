#include <iostream>
using namespace std;
int main()
{
	float test, quiz, project, assignment, final_exam,total_mark;
	cout << "Enter the test out of 15%: ";
	cin >> test;
	if (test <= 15) {
		cout << "Enter the quiz out of 5%: ";
		cin >> quiz;
		if (quiz <= 5) {
			cout << "Enter the project out of 20%: ";
			cin >> project;		 
			if (project <= 20) {
				cout << "Enter the assignment out of 10%: ";
				cin >> assignment;		
				if (assignment <= 10) {
					cout << "Enter the final out of 50%: ";
					cin >> final_exam;				
					if (final_exam <= 50) {			
					}
					else {
						cout << "wrong final result";
					}

				}
				else {
					cout << "wrong assignment result";
				}
			}
			else {
				cout << "wrong project result";
			}
		}
		else {
			cout << "wrong quiz result";
		}
	}
	else {
		cout << "wrong test result";
	}
	total_mark = test + quiz + project + assignment + final_exam;
	 if (total_mark <= 100 && total_mark >= 90)
		cout << "A+";
	else if (total_mark < 90 && total_mark >= 80)
		cout << "A";
	else if (total_mark < 80 && total_mark >= 70)
		cout << "B+";
	else if (total_mark < 70 && total_mark >= 60)
		cout << "B";
	else if (total_mark < 60 && total_mark >= 55)
		cout << "C+";
	else if (total_mark < 55 && total_mark >= 45)
		cout << "C";
	else if (total_mark < 45 && total_mark >= 30)
		cout << "D";
	else
		cout << "F";
	return 0;
}

