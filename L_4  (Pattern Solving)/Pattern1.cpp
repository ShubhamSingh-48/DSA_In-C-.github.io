#include <iostream>
using namespace std;
int main()
{
    /* Square Pattern.

             * * * * *
             * * * * *
             * * * * *
             * * * * *
             * * * * *

              */
    // Take input for how many row i want to print.
    int n;
    cout << "Enter n: ";
    cin >> n;
    // Loop for how many row printed.
    for (int i = 1; i <= n; i++)
    {
        // Loop for how many column printed.
        for (int j = 1; j <= n; j++)
        {
            // Column print.
            cout << "* ";
        }
        // After printed column start new line.
        cout << endl;
    }
}