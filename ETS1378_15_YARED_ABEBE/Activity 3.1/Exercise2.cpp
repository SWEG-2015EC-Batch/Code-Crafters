#include <iostream>
using namespace std;
int main()
{
    float number_1, number_2;
    int exit;
    char Arthimetic_operator;

    do {
        cout << "Enter number= ";
        cin >> number_1;
        cout << "Enter the Arthimetic_operator: ";
        cin >> Arthimetic_operator;
        cout << "Enter number= ";
        cin >> number_2;
        switch (Arthimetic_operator) {
        case '+':
            cout << "number_1 + number_2= " << number_1 + number_2;
            break;
        case'-':
            cout << " number_1 - number_2= " << number_1 - number_2;
            break;
        case '*':
            cout << "number_1 * number_2" << number_1 * number_2;
            break;
        case '/':
            if (number_2 != 0) {
                cout << "number_1 / number_2= " << number_1 / number_2;
            }
            else
                cout << "undefined";
            break;
        case '%':
            if (number_2 != 0) {
                cout << "number_1 % number_2= " << int(number_1) % int(number_2);
            }
            else
                cout << "undefined";
            break;
        }
        cout << "\nIf number_2ou want to continue insert annumber_2 number, unless insert 0= ";
        cin >> exit;
    } while (exit != 0);

    return 0;
}




