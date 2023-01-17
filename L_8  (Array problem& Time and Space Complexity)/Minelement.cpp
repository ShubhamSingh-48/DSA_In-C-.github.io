#include <iostream>
#include <limits.h>
using namespace std;
int minElement(int arr[], int n)
{
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        ans = min(ans, arr[i]);
    }
    return ans;
}
int main()
{
    int arr[] = {1, 6, 3, 4, 8, 5, 9};
    minElement(arr, 7);
    cout << "The maximum element is: " << minElement(arr, 7);
}