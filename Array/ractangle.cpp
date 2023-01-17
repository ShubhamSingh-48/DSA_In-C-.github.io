#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter number of row you want to print: ";
    cin >> r;
    cout << "Enter number of coloum you want to print: ";
    cin >> c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (j == r - r)
            {
                cout << "*";
            }
            else if (j == r)
            {
                cout << "*";
            }
            else if (j == 0)
            {
                cout << "*";
            }
            else if (j == c)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}