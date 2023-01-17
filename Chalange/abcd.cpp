#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    if (n % 2 == 0)
    {
        if (2 <= n && n <= 5)
        {
            cout << "Not Wird";
        }
        else if (6 <= n && n <= 20)
        {
            cout << "Wird";
        }
        if (n > 20)
        {
            cout << "Not Wird";
        }
    }
    else if (n % 2 != 0)
    {
        cout << "Wird";
    }
}