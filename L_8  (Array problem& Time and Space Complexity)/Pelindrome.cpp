#include <iostream>
using namespace std;
bool pelindrome(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
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
    int arr[] = {1, 2, 3, 4, 3, 2, 1};
    cout << "Pelindrome or not: " << pelindrome(arr, 7) << endl;
}