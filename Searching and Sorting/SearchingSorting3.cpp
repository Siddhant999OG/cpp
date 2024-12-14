//////////////////////////////////////////
//BINARY SEARCH IN A NEARLY SORTED ARRAY//
//////////////////////////////////////////

// #include<iostream>
// #include<vector>
// using namespace std;

// int binarysearch(vector<int> arr, int key){
//     int s=0;
//     int e = arr.size()-1;
//     int mid=(s+e)/2;

//     while(s<=e){
//         if(arr[mid]==key){
//             return mid;
//         }
//         if(mid-1>=s && arr[mid-1]==key){
//             return mid-1;
//         }
//         if(mid+1<=e && arr[mid+1]==key){
//             return mid+1;
//         }
//         if(key>arr[mid]){
//             s = mid+2;
//         }
//         else{
//             e = mid-2;
//         }
//         mid = (s+e)/2;
//     }
//     return -1;
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

//     int ans = binarysearch(arr,key);
//     cout<<ans;
// }





///////////////////////////////////////
//DIVIDING NUMBER USING BINARY SEARCH//
///////////////////////////////////////

#include<iostream>
using namespace std;

int divide(int n, int m){
    int s = 0;
    int e = abs(n);

    int mid = (s+abs(e))/2;
    int ans = -1;
    while(s<=e){
        if(abs(mid*m) == abs(n)){
            return mid;
        }
        if(abs(mid*m) > abs(n)){
            e = mid -1;
        }
        else{
            ans = mid;
            s = mid+1;
        }
        mid = (s+e)/2;
    }

    if((n<0&&m<0) || (n>0 && m>0)){
    return ans;
    }
    else{
    return -ans;
    }

    return ans;
}

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    
    int ans = divide(n,m);
    cout<<ans;
}




///////////////////////////////////////////////
//FINDING NUMBER LIKE XOR USING BINARY SEARCH//
///////////////////////////////////////////////

// #include<iostream>
// #include<vector>
// using namespace std;

// int solve(vector<int> arr){
//     int s=0;
//     int e = arr.size()-1;
//     int mid=(s+e)/2;

//     while(s<=e){
//         if(s==e){
//             return s;
//         }
//         if(mid%2==0){
//             if(arr[mid]==arr[mid+1]){
//                 s = mid+2;
//             }
//             else{
//                 e = mid;
//             }
//         }
//         else{
//             if(arr[mid]==arr[mid-1]){
//                 s = mid+1;
//             }
//             else{
//                 e = mid-1;
//             }
//         }
//         mid = (s+e)/2;
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0; i<arr.size(); i++){
//         cin>>arr[i];
//     }

//     int ans = solve(arr);
//     cout<<ans<<endl;
//     cout<<arr[ans];
// }