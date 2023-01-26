#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter the first side: ";
    cin >> a;

    cout << "Enter the second side: ";
    cin >> b;

    cout << "Enter the third side: ";
    cin >> c;

    if (a == b && b == c && c == a)
    {
        cout << "This is an Equilateral Triangle.";
    }
    else if (a == b || b == c || c == a)
    {
        cout << "This is an Isosceles Triangle.";
    }
    else if (a != b && b != c && c != a)
    {
        if (a * a == b * b + c * c || b * b == c * c + a * a || c * c == b * b + a * a)
        {
            cout << "This is an Right Angle Triangle.";
        }
        else
        {
            cout << "This is an Scalene Triangle.";
        }
    }
    return 0;
}
