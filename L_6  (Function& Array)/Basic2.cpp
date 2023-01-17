#include <iostream>
using namespace std;
void printName(int n)
{
    n = 10;
    // This n does not change inside main function because it is reference of main function n;
    cout << "Inside void function: " << n << endl;
}
int main()
{
    int n = 5;
    printName(n);
    cout << "Inside main function: " << n << endl;
}