#include <iostream>
using namespace std;
int main()
{
    /*

      * * * * *
      * * * * *
      * * * * *
      * * * * *
      * * * * *
     In this pattern, number of columns is equal to number of rows means i have total number of rows are 5 and for every row we print 5 columns. So, our formula for columns print is (columns = rows).
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

        for (int column = 1; column <= n; column++)
        {
            cout << "*"
                 << " "; // cout<<"* ";
        }
        cout << endl;
    }
}