#include <iostream>
using namespace std;
int main() 
{
    double num1, num2, result;
    char operation;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Choose an Arithmetic operation (+, -, *, /): ";
    cin >> operation;
    switch (operation)
     {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
            } else {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            }
            break;
        default:
            cout << "Invalid operation. Please choose from +, -, *, /." << endl;
            break;
    }

    return 0;
}