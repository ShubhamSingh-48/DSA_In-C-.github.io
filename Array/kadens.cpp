#include<iostream>
using namespace std;
int main(){
    int size = 6;
    int arr[100] = {-2, -3, 4, -1, -2, 1};
    int maxi = 0;
    int sum = 0;
    for(int i = 0; i<size; i++){
       sum = sum + arr[i];
       maxi = max(maxi, sum);
       if(sum<0){
        sum = 0;
       }
    }
    cout<<maxi;
    
}