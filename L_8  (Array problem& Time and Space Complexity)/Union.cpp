#include <iostream>
using namespace std;
int main()
{
    int arr1[] = {2, 3, 5, 7};
    int arr2[] = {3, 4, 5, 6, 7};
    int i = 0, j = 0, arr[100], n1 = 4, n2 = 5;
    int ans = arr[100];
    while (arr1[] < n1 && arr2[] < n2)
    {
        if (arr1[i] < arr2[j])
        {
            ans = arr1[i];
            i++;
        }
        else if (arr1[i] == arr2[j])
        {
            ans = arr1[i];
            i++;
            j++;
        }
        else
        {
            ans = arr2[j];
            j++;
        }
    }
    while (arr1[] < n1 && arr2[] < n2)
    {
        cout << ans << " ";
    }
}
