#include <iostream>
using namespace std;
int main()
{
    int arr[100] = {1, 3, 8, 5, 9};
    int size = 5;
    int tar;
    cout << "Enter target: ";
    cin >> tar;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (tar == arr[i] + arr[j])
            {
                cout << arr[i] << "," << arr[j];
            }
        }
    }
}