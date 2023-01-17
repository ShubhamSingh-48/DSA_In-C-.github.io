#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the value of a and b: ";
    cin >> a >> b;
    cout << "The digits are:" << a << "," << b<<endl;
    swap(a, b);
    cout << "Digits after swap: " << a << "," << b;
}