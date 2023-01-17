#include <iostream>
using namespace std;
void reverseArray(int arr[], int n)
{
    int i = arr[0];
    int j = arr[n-1];

    while (i < j)
    {
        swap(arr[i], arr[j]);
        i=i+1;
        j=j-1;
    }
}
int main()
{
    int arr[] = {3, 5, 7, 6, 9, 2, 5};
    reverseArray(arr, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}