#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 0; i<n*n; i++){
        if(i%n==0){
            cout<<endl;
        }else{
            cout<<"* ";
        }
    }
}