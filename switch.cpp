#include <iostream>
using namespace std;
int main(){
    char value;
    int number1 = 0;
    int number2 = 0;
    cout << "Enter number 1" << "\n";
    cin >> number1;
    cout << "Enter a value : " << "\n";
    cin >> value;
    cout << "Enter number 2" << "\n";
    cin >> number2; 
    
    switch(value){
        case '+':
        cout << "addition: " << number1 + number2;
        break;

        case '-':
        cout << "substraction: " << number1 - number2;
        break;

        case '*':
        cout << "multification: " << number1 * number2;
        break;

        case '/':
        cout << "division: " << number1 / number2;
        break;

        case '%':
        cout << "remainder: " << number1 % number2;
        break;

        default:
        cout << "invalid choice"; 
    }

    return 0;
}