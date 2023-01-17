#include <iostream>
using namespace std;
int main()
{

    /*
       * * * * *
       *     *
       *   *
       * *
       *

    */
    int n;
    cout << "Enter number of row: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (int j = 1; j <= n - i + 1; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            for (int j = 1; j <= n - i + 1; j++)
            {
                if (j == 1 || j == n - i + 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}