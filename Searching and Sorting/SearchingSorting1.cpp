/*LINEAR SEARCH*/


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int key;
//     cin>>key;
//     vector<int> arr(n); 
//     for(int i=0; i<arr.size(); i++){
//         cin>>arr[i];
//     }
//     for(int i=0; i<arr.size(); i++){
//         if(key == arr[i]){
//             cout<<"TRUE";
//         }
//     }
// }





/***************/
/*BINARY SEARCH*/    //METHOD 1
/***************/

// #include<iostream>
// #include<vector>
// using namespace std;

// int binarySearch(vector<int> arr, int target){
//     int s = 0;
//     int e = arr.size()-1;
//     int mid = (s+e)/2;

//     while(s<=e){
//         if(target == arr[mid]){
//             return mid;
//         }
//         else if(target < arr[mid]){
//             e = mid-1;
//         }
//         else{
//             s = mid+1;
//         }
//         mid = (s+e)/2;
//     }
//     return -1;
// }

// int main(){
//     int n;
//     cin>>n;
//     int target;
//     cin>>target;
//     vector<int> arr(n);

//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     int index = binarySearch(arr, target);
//     if(index == -1){
//         cout<<"Not Found";
//     }
//     else{
//         cout<<"Found at index "<<index;
//     }
// }




/***************/
/*BINARY SEARCH*/    //METHOD 2
/***************/

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int key;
//     cin>>key;
//     vector<int> arr(n);
//     for(int i=0; i<arr.size(); i++){
//         cin>>arr[i];
//     }
//     if(binary_search(arr.begin(), arr.end(), key)){
//         cout<<"FOUND";
//     }
//     else{
//         cout<<"NOT FOUND";
//     }
// }





/*BINARY SEARCH*/    //when array is like {1,2,3,4,4,4,4,5,6}
                    //And we have to find first occurance position of 4

// #include<iostream>
// #include<vector>
// using namespace std;
// int firstocc(vector<int> arr, int key){
//     int start = 0;
//     int end = arr.size()-1;
//     int mid = (start+end)/2;
//     int ans = -1;
//     while(start<=end){
//         if(key==arr[mid]){
//             ans = mid;
//             end = mid-1;
//         }
//         else if(key<arr[mid]){
//             end = mid-1;
//         }
//         else{
//             start = mid+1;
//         }
//         mid = (start+end)/2;
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     int key;
//     cin>>key;
//     vector<int> arr(n);
//     for(int i=0; i<arr.size(); i++){
//         cin>>arr[i];
//     }
//     int ans = firstocc(arr, key);
//     cout<<ans;
// }







/***************/
/*BINARY SEARCH*/    //when array is like {1,2,3,4,4,4,4,5,6}
/***************/    //And we have to find last occurance position of 4


// #include<iostream>
// #include<vector>
// using namespace std;
// int lastocc(vector<int> arr, int key){
//     int start = 0;
//     int end = arr.size()-1;
//     int mid = (start+end)/2;
//     int ans = -1;
//     while(start<=end){
//         if(key==arr[mid]){
//             ans = mid;
//             start = mid+1;
//         }
//         else if(key<arr[mid]){
//             end = mid-1;
//         }
//         else{
//             start = mid+1;
//         }
//         mid = (start+end)/2;
//     }
//     return ans;
// }
// int firstocc(vector<int> arr, int key){
//     int start = 0;
//     int end = arr.size()-1;
//     int mid = (start+end)/2;
//     int ans2 = -1;
//     while(start<=end){
//         if(key==arr[mid]){
//             ans2 = mid;
//             end = mid-1;
//         }
//         else if(key<arr[mid]){
//             end = mid-1;
//         }
//         else{
//             start = mid+1;
//         }
//         mid = (start+end)/2;
//     }
//     return ans2;
// }
// int main(){
//     int n;
//     cin>>n;
//     int key;
//     cin>>key;
//     vector<int> arr(n);
//     for(int i=0; i<arr.size(); i++){
//         cin>>arr[i];
//     }
//     int ans = firstocc(arr, key);
//     int ans2 = lastocc(arr,key);
//     cout<<ans<<endl;
//     cout<<ans2<<endl;
//     cout<<ans2-ans+1;
// }





//PEAK ELEMENT//

#include<iostream>
#include<vector>
using namespace std;

int peak(vector<int> arr){
    int s=0;
    int e = arr.size()-1;
    int mid = (s+e)/2;

    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = (s+e)/2;
    }
    return s;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }
    int ans = peak(arr);
    cout<<arr[ans];
}