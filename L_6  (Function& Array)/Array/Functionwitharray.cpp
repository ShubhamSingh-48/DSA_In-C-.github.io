#include <iostream>
using namespace std;
void voidArray(int arr[], int size)
{
    arr[3] = 10;
    cout << "In void function: " << arr[3] << endl;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    voidArray(arr, 5);
    cout << "In main function: " << arr[3] << endl;
}