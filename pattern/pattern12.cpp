#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int s=0; s<n-i-1; s++){
            cout<<" ";
        }
        for(int j=0; j<2*i+1; j++){
            if(j==0||j==2*i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
        
        for(int i=0; i<n; i++){
            for(int s=0; s<i; s++){
                cout<<" ";
            }
            for(int j=0; j<2*n-2*i-1; j++){
                if(j==0||j==2*n-2*i-2){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }