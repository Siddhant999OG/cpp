#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<i+3;
        }
        cout<<endl;
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<n+2-i;
        }
        cout<<endl;
    }
}