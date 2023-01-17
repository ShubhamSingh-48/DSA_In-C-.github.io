#include<iostream>
using namespace std;
bool Shubham(int n){
    if(n==2){
        return true;
    }else{
        return false;
    }
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    Shubham(n);
}