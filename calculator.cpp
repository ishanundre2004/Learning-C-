#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char x;
    cout << "Enter first number: " << endl;
    cin >> num1;

    cout << "Enter second number: " << endl;
    cin >> num2;

    cout << "Enter opteration to perform." << endl
         << "(+,-,/,*)" << endl;
    cin >> x;

    switch (x)
    {
    case '+':
        cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
        break;

    case '-':
        cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
        break;

    case '/':
        cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
        break;

    case '*':
        cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
        break;

    default:
        cout << "Invalid Operation" << endl;
        break;
    }

    return 0;
}