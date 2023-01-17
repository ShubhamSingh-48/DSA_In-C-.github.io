#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    char operation;
    cout << "Enter operation: ";
    cin >> operation;
    switch (operation)
    {
    case '+':
        cout << "The sum is: " << a + b;
        break;

    case '-':
        cout << "The substraction is: " << a - b;
        break;
    case '*':
        cout << "The multiplication is: " << a * b;
        break;
    case '/':
        cout << "The division is: " << a / b;
        break;
    default:
        cout << "Wrong operation, operation does not performed";
    }
}