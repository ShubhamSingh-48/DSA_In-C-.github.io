#include <iostream>
using namespace std;
int main()
{
    int n, arr[];
    cout << "Enter the size of array: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    cout << "The array elements are: ";
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
}