#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        int ans = n * i;
        if (ans % 2 == 0)
        {
            continue;
        }
        cout << ans << ",";
    }
}