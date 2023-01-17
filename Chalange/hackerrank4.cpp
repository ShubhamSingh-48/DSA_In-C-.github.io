#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int ans = INT_MIN;
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>i;
    }
    for(int i = 0; i<n; i++){
        cout<<i<<endl;
    }
    for(int i = 0; i<n; i++){
       max(ans, i);
    }
    cout<<ans;
}