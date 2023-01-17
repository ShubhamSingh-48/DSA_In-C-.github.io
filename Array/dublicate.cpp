#include <iostream>
using namespace std;
int main()
{
    int arr[100] = {1, 2, 3, 4, 5, 5, 6};
    int size = 7;
    int n = 6;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    int sum1 = (n * (n + 1)) / 2;
    cout << "Dublicate element is: " << sum - sum1;
}