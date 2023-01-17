#include<iostream>
using namespace std;
int main(){
    int a = 0, b = 0;
    int arr[5] = {1, 3, 8, 5, 9};
    int target = 13;
    for(int i = 0; i < 5;i++)
    {
        a = arr[i];
        b = arr[i + 1];
        if((a + b) == target)
        {
            cout << a << " " << b;
            break;
        }
        else
        {
            for(int j = 0; j < 5;j++)
            {
                b = arr[j];
                if(i == j)
                {
                    continue;
                }
                if((a + b) == target)
                {
                    cout << a << " " << b;
                    break;
                }
            }
        }
    }
}