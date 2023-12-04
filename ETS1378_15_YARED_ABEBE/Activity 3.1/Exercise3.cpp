
#include <iostream>
using namespace std;
int main()
{
	char text;
	cout << "Enter the character: ";
	cin >> text;
	if (isalpha(text)) {
		if (isupper(text))
			cout << "The character is uppercase alphabet";
		else
			cout << "The character is lowercase alphabet";
	}

	else if (isdigit(text)) {
		cout << "The character is number ";

	}
	else 
		cout << "The character is special character";
	
	return 0;
	
}


