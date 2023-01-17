#include <iostream>
using namespace std;
int main()
{

    /* Solid Dimond.
         *
        * *
       * * *
      * * * *
     * * * * *
      * * * *
       * * *
        * *
         *


    */
    int n;
    cout << "Enter number: ";
    cin >> n;

    // Loop for how many row printed.
    for (int i = 1; i <= n; i++)

    // Loop for how many column printed.
    {
        // Loop for how many Spaces are printed.
        for (int j = 1; j <= n - i; j++)
        {
            // Space print
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            // Start(*) print.
            cout << "V ";
        }
        cout << endl;
    }
    // Revers printing of pyramid.
    //  Loop for how many row printed.
    for (int i = 1; i < n; i++)

    // Loop for how many column printed.
    {
        // Loop for how many Spaces are printed.
        for (int j = 1; j <= i; j++)
        {
            // Space print
            cout << " ";
        }
        for (int k = 1; k <= n - i; k++)
        {
            // Start(*) print.
            cout << "V ";
        }
        cout << endl;
    }
}