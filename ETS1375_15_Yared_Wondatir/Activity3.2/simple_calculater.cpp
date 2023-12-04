#include <iostream>
using namespace std;

int main(){
    float operand1, operand2, result;
    int exit;
    char opera;
    do {
        cout<<"Please enter the first number: ";
        cin>>operand1;
        cout<<"Please enter the operator: ";
        cin>>opera;
        cout<<"Please enter the second number: ";
        cin>>operand2;
        switch(opera){
            case '+':
            cout<<"THE SUM OF "<<operand1<<" AND "<<operand2<<" IS "<<operand1+operand2<<endl;
            break;
            case '-':
            cout<<"THE DIFFERENCE OF "<<operand1<<" AND "<<operand2<<" IS "<<operand1-operand2<<endl;
            break;
            case '*':
            cout<<"THE PRODUCT OF "<<operand1<<" AND "<<operand2<<" IS "<<operand1*operand2<<endl;
            break;
            case '/':
            if(operand2==0){
                cout<<"Can\'t divide a number by 0"<<endl;
            }
            else{
            cout<<"THE QUOTIENT OF "<<operand1<<" AND "<<operand2<<" IS "<<operand1/operand2<<endl; }
            break;
            case '%':
            if(operand2==0){
                cout<<"Can\'t divide a number by 0"<<endl;
            }
            else{
                result = int(operand1)% int(operand2);
            cout<<"THE MUDOLE OF "<<operand1<<" AND "<<operand2<<" IS "<<result<<endl; }
            break;
            default:
            cout<<"PLEASE TRY AGAIN!"<<endl;
            break;
        }
        cout<<"If you want to continue the operation press any number, If not press 0"<<endl;
        cin>>exit;
    }   while(exit!=0);
    return 0;
}