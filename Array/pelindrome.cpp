#include <iostream>
using namespace std;
bool Pelindrome(int arr[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        if (arr[i] == arr[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int size = 7;
    int arr[100] = {1, 2, 3, 3, 3, 2, 1};
    cout << Pelindrome(arr, 7);
}