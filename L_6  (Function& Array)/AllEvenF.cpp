#include <iostream>
using namespace std;
void printEven(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << "  ";
        }
    }
}
int main()
{
    int n;
    cout << "Enter number you want to print even: " << endl;
    cin >> n;
    printEven(n);
}