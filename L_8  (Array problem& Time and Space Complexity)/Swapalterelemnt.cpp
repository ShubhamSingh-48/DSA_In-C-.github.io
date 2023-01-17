#include <iostream>
using namespace std;
void swapAlternate(int arr[], int n)
{
    int i = 0;
//To use if-else
    if(i+1<n){
        swap(arr[i], arr[i + 1]);
        i = i + 2;
    }

    //To use loop
    /*while (i + 1 < n)
    {
        swap(arr[i], arr[i + 1]);
        i = i + 2;
    }*/
}
int main()
{
    int arr[] = {2, 1, 4, 3, 6, 5, 7};
    swapAlternate(arr, 7);
    cout << "Swaped elements are: ";
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
}