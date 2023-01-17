#include <iostream>
using namespace std;
int main()
{
    // Array creation.
    int arr[5];

    // Array creation with inialize value.
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};
    int arr3[5] = {}; // In this case garbage value store in array.
    cout << arr1[4]; //  << arr2[0] << arr3[0];
}