#include <iostream>
using namespace std;
void printName(int n)
{
    while (n >= 1)
    {
        cout << "Shubham Kumar Singh" << endl;
        n--;
    }
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    printName(n);
}