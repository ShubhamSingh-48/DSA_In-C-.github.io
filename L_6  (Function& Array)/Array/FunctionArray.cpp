#include <iostream>
using namespace std;

// Must required to pass the size of array insie agumet and also int arr[].
void printArray(int arr[], int size)
{
    //Array acessing.
    cout << arr[2];
}
int main()
{
    int arr[5] = {3, 6, 4, 9, 12};

    // Need to pass the size inside argument.
    //Function call.
    printArray(arr, 5);
}