//////////////////////////////////////////////
// MINIMUM NUMBER NEEDED TO MAKE THE TARGET //
//////////////////////////////////////////////

// #include<iostream>
// #include<vector>
// #include<limits.h>
// using namespace std;

// int solve(vector<int> arr, int target){
//     if(target == 0){
//         return 0;
//     }
//     if(target<0){
//         return INT_MAX;
//     }

//     int mini = INT_MAX;
//     for(int i=0; i<arr.size(); i++){
//         int ans = solve(arr, target-arr[i]);
//         if(ans!=INT_MAX)
//         mini = min(mini, ans+1);
//     }

//     return mini;
// }
// int main(){
//     vector<int> arr{1,2,3};
//     int target = 5;

//     int ans = solve(arr, target);
//     cout<<ans;
// }





//////////////////////
// CUT INTO SEGMENT //
//////////////////////

// #include<iostream>
// #include<limits.h>
// using namespace std;

// int solve(int n,int x,int y,int z){
//     if(n==0){
//         return 0;
//     }
    
//     if(n<0){
//         return INT_MIN;
//     }
//     int a = solve(n-x, x, y, z) + 1;
    
//     int b = solve(n-y, x, y, z) + 1;

//     int c = solve(n-z, x, y, z) + 1;

//     int ans = max(a, max(b,c));
//     return ans;
// }
// int main(){
//     int n=  7;
//     int x = 5;
//     int y = 2;
//     int z = 2;

//     int ans = solve(n,x,y,z);
//     if(ans<0){
//         return 0;
//     }
//     cout<<ans;
// }







////////////////////////////////////
// MAXIMUM SUM OF NON ADJ ELEMENT //
////////////////////////////////////

#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;

void solve(vector<int>& arr,int i, int sum, int &maxi) {
  //base case
  if(i >= arr.size()) {
    //maxi update;
    maxi = max(sum, maxi);
    return;
  }

  //include
  solve(arr,i+2,sum+arr[i] ,maxi );
  //exclude
  solve(arr, i+1, sum, maxi);
}

int main() {
  vector<int> arr{1,2,3,4};
  int sum = 0;
  int maxi = INT_MIN;
  int i = 0;
  solve(arr,i, sum, maxi);

  cout << maxi << endl;

  return 0;
}