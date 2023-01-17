#include <iostream>
using namespace std;
void printSquare(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << "The square of " << i << "is: " << i * i << endl;
    }
}
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    printSquare(n);
}