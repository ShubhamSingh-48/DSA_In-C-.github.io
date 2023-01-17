#include <iostream>
using namespace std;
int main()
{
    int arr[4][4] = {1, 2, 3, 4, 12, 13, 14, 5, 11, 16, 15, 6, 10, 9, 8, 7};
    int n = 4;
    int startr = 0;
    int startc = 0;
    int endr = n - 1;
    int endc = n - 1;
    for (int i = startr; i <= endr; i++)
    {
        cout << arr[startr][i] << " ";
    }
    startr++;
    for (int i = startc; i < endc; i++)
    {
        cout << arr[i][endc] << " ";
    }
    // endc--;
    // for (int i = endc; i >=0; i--)
    // {
    //     cout << arr[endr][i] << " ";
    // }endr++;
    // for(int i = 0; i<n; i++)
}