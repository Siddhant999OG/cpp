#include<iostream>
using namespace std;
int main(){
    int arr[4] = {10,12,14,16};
    cout<<arr<<endl;      //BASE ADDRESS
    cout<<&arr<<endl;     //BASE ADDRESS
    cout<<arr[0]<<endl;
    cout<<&arr[0]<<endl;  //BASE ADDRESS


    int i=0;
    cout<<arr[i]<<endl;
    cout<<i[arr]<<endl;
    cout<<*(arr+i)<<endl;
    cout<<*arr<<endl;
}