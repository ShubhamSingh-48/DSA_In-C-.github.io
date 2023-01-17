#include<iostream>
using namespace std;
int main(){
    int size = 7;
    int arr[100]={3, -1, 2, -4, -6, -4, 5};
    int i = 0, j = 0;
    for(int i = 0; i<size; i++){
        if(arr[i]<0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<",";
    }
    
}