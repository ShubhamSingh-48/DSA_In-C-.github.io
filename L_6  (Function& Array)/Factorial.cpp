#include <iostream>
using namespace std;
void printFactorial(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }
    cout << "The factorial of " << n << " is: " << ans;
}
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    printFactorial(n);
}