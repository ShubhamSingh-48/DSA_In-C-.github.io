#include <iostream>
#include <limits.h>
using namespace std;
int maxElement(int arr[], int n)
{
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, arr[i]);
    }
    return ans;
}
int main()
{
    int arr[] = {1, 6, 3, 4, 8, 5, 9};
    maxElement(arr, 7);
    cout << "The maximum element is: " << maxElement(arr, 7);
}