#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int n = 8;
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int sum = 0;
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if (sum < 0)
        {
            sum = 0;
        }
        ans = max(sum, ans);
    }
    cout << "The sum of subarrray is: " << ans;
}