#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int s=0; s<n-1-i; s++){
            cout<<" ";
        }
        for(int j=0; j<i+1; j++){
            cout<<i+j+1;
        }
        int start=2*i;
        for(int j=0; j<i; j++){
            cout<<start;
            start = start-1;
        }
        cout<<endl;
    }
}