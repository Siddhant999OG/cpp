#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int s=0; s<n-i-1; s++){
            cout<<" ";
        }
        int start=1;
        for(int j=0; j<2*i+1; j++){
            if(i==0||i==n-1){
                if(j%2==0){
                    cout<<start;
                    start = start+1;
                }
                else{
                    cout<<" ";
                }
            }
            else{
                if(j==0){
                    cout<<1;
                }
                else if(j==2*i){
                    cout<< i+1;
                }
                else{
                    cout<<" ";
                } 
            }
        }
        cout<<endl;
    }
}