#include <iostream>
using namespace std;
bool searchElement(int arr[], int size, int target)
{

    for (int i = 1; i <= n; i++)
    {
        if (target == i)
            return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n, target = 5;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    searchElement(arr, 10, 5);
}