#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[100] = {2, 1, 4, 3, 6, 5, 7};
    int i = 0;
    for (i; i < size; i = i + 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }
}