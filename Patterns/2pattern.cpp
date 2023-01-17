#include <iostream>
using namespace std;
int main()
{
    /*

      *
      * *
      * * *
      * * * *
      * * * * *

      */
    // Take n = 5 for this pattern
    int n;
    // Here n is number of rows
    cout << "Enter total number of rows: ";
    // You can take any number as many as you want to print rows
    cin >> n;
    // This first loop run for rows print
    for (int row = 1; row <= n; row++)
    {
        // This 2nd loop is run for columns print
        for (int column = 1; column <= row; column++)
        {
            cout << "*"
                 << " "; // cout<<"* ";
        }
        cout << endl;
    }
}