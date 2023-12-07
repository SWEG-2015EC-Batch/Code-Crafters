#include <iostream>
using namespace std;
int main()
{
	char text;
	cout << "Enter the character: ";
	cin >> text;
	if (isalpha(text)) {		
		if (isupper(text)) {
			
			if (text == 'A' || text == 'E'|| text == 'I'|| text == 'O'|| text == 'U')
				cout << "The character is vowel uppercase alphabet";
			else
				cout << "The character is consonant uppercase alphabet";
		}
		
		else if (islower(text)){
			if (text == 'a' || text == 'e' || text == 'i' || text == 'o' || text == 'u')
				cout << "The character is vowel lowercase alphabet";
			else
				cout << "The character is consonant lowercase alphabet";
		}
	}
	else if (isdigit(text)) {
		if (text % 2 == 0)
			cout << "The character is even number ";
		else
			cout << "The character is odd number ";
	}
	else 
		cout << "The character is special character";
	return 0;
	
}

