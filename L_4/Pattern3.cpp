#include <iostream>
using namespace std;
int main()
{
    /*

    * * * * *
    * * * *
    * * *
    * *
    *

    */
       // Take input for how many row i want to print.

    int n;
    cout << "Enter number: ";
    cin >> n;
    // Loop for how many row printed.
    for (int i = 1; i <= n; i++)
    {
        // Loop for how many column printed.
        for (int j = 1; j <= n - i + 1; j++)
        {
            // Start(*) print.
            cout << "* ";
        }
        // After printed column start new line.
        cout << endl;
    }
}