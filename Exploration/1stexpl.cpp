#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    // Loop for how many row printed.
    for (int i = n; i <= 1; i--)
    {
        // Loop for how many column printed.
        for (int j = 1; j <= i; j++)
        {
            // Column print.
            cout << "* ";
        }
        // After printed column start new line.
        cout << endl;
    }
}