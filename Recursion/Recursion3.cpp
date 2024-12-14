/////////////////////
// CHECK IF SORTED //
/////////////////////

// #include<iostream>
// #include<vector>
// using namespace std;
// bool checksort(vector<int> arr, int n, int i){
//     if(i == n-1){
//         return true;
//     }
//     if(arr[i+1]<arr[i]){
//         return false;
//     }
//     return checksort(arr, n, i+1);
// }
// int main(){
//     int a;
//     cin>>a;
//     vector<int> arr(a);
//     for(int i=0; i<a; i++){
//         cin>>arr[i];
//     }

//     int n = arr.size();
//     int i=0;

//     bool isSorted = checksort(arr, n, i);
//     if(isSorted){
//         cout<<"array is sorted"<<endl;
//     }
//     else{
//         cout<<"array is not sorted"<<endl;
//     }
// }




///////////////////
// BINARY SEARCH //
///////////////////

// #include<iostream>
// #include<vector>
// using namespace std;

// int binarysearch(vector<int> arr, int s, int e,int key){
//     if(s>e)
//     return -1;
//     int mid = (s+e)/2;
//     if(arr[mid]==key){
//         return mid;
//     }

//     if(arr[mid]<key){
//         return binarysearch(arr, mid+1,e,key);
//     }
//     else{
//         return binarysearch(arr,mid-1,s,key);
//     }
// }
// int main(){
//     int a;
//     cin>>a;
//     int key;
//     cin>>key;
//     vector<int> arr(a);
//     for(int i=0; i<a; i++){
//         cin>>arr[i];
//     }
//     int n = arr.size();
//     int s=0;
//     int e = arr.size()-1;

//     int ans = binarysearch(arr,s,e,key);
//     cout<<ans;
// }





/////////////////
// SUBSEQUENCE //
/////////////////

#include<iostream>
using namespace std;

void printSubsequence(string str, string output, int i){
    if(i>=str.length()){
        cout<<output<<endl;
        return;
    }

// exclude
    printSubsequence(str, output, i+1);
// include
    printSubsequence(str, str[i]+output, i+1);
}
int main(){
    string str = "abc";
    string output = "";

    int i = 0;
    printSubsequence(str, output,i);
    return 0;
}