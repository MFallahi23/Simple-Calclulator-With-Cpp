// -----------------------------------------------------------------------//
// Basic C++ program to create a simple calculator using switch statement //
// -----------------------------------------------------------------------//

#include <iostream>

using namespace std;

// Driver code
int main()
{

    float num1, num2;
    char oper;

    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;
    cout << "Enter operator: +, -, *, /" << endl;
    cin >> oper;

    switch (oper)
    {

    case '+':
        cout << num1 + num2 << endl;
        break;

    case '-':
        cout << num1 - num2 << endl;
        break;

    case '*':
        cout << num1 * num2 << endl;
        break;

    case '/':
        cout << num1 / num2 << endl;
        break;

    default:
        cout << "Error! operator is not correct"; // error message
        return 1;
    }

    return 0;
}