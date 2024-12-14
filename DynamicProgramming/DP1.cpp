// FIbonacci Series

// using recursion

// class Solution {
// public:
//     int recursion(int n){
//         if(n == 0 || n == 1){
//             return n;
//         }

//         int ans = recursion(n-1) + recursion(n-2);
//         return ans;
//     }

//     int fib(int n) {
//         return recursion(n);
//     }
// };



// using topdown

// class Solution {
// public:
//     int recursion(int n, vector<int>& dp){
//         if(n == 0 || n == 1){
//             return n;
//         }

//         if(dp[n] != -1){
//             return dp[n];
//         }

//         dp[n] = recursion(n-1, dp) + recursion(n-2, dp);
//         return dp[n];
//     }

//     int fib(int n) {
//         vector<int> dp(n+1, -1);
//         return recursion(n, dp);
//     }
// };


// using bottomdown

// class Solution {
// public:
//     int bottomUp(int n){
//         vector<int> dp(n+1, -1);

//         dp[0] = 0;
//         if(n==0){
//             return dp[0];
//         }
//         dp[1] = 1;

//         for(int i=2; i<=n; i++){
//             dp[i] = dp[i-1] + dp[i-2];
//         }

//         return dp[n];
//     }

//     int fib(int n) {
//         return bottomUp(n);
//     }
// };


// space optimization

// class Solution {
// public:
//     int spaceOptimization(int n){
//         int prev1 = 0;
//         if(n==0){
//             return prev1;
//         }
//         int prev2 = 1;
//         if(n==1){
//             return prev2;
//         }
//         int curr;

//         for(int i=2; i<=n; i++){
//             curr = prev1 + prev2;
//             prev1 = prev2;
//             prev2 = curr;
//         }

//         return curr;
//     }

//     int fib(int n) {
//         return spaceOptimization(n);
//     }
// };




// FACTORIAL 
// TOPDOWN APPROACH

// #include<iostream>
// #include<vector>
// using namespace std;
// int factorial(int n, vector<int>& dp){
//     if(n==0 || n==1)
//     return 1;

//     if(dp[n] != -1){
//         return dp[n];
//     }

//     dp[n] = n * factorial(n-1, dp);
//     return dp[n];
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> dp(n+1, -1);

//     int ans = factorial(n, dp);
//     cout<<ans;
// }



// BOTTOM UP APPROACH

// #include<iostream>
// #include<vector>
// using namespace std;
// int factorial(int n){
//     vector<int> dp(n+1, -1);

//     dp[0] = 1;
//     dp[1] = 1;

//     for(int i=2; i<=n; i++){
//         dp[i] = i * factorial(i-1);
//     }
//     return dp[n];
// }
// int main(){
//     int n;
//     cin>>n;

//     int ans = factorial(n);
//     cout<<ans;
// }





// CLIMBING STAIRS
// TOPDOWN APPROACH

// class Solution {
// public:
//     int topBottom(int n, vector<int>& dp){
//         if(n==0 || n==1){
//             return 1;
//         }

//         if(dp[n] != -1){
//             return dp[n];
//         }

//         dp[n] = topBottom(n-1, dp) + topBottom(n-2, dp);
//         return dp[n];
//     }
//     int climbStairs(int n) {
//         vector<int> dp(n+1, -1);
//         return topBottom(n, dp);
//     }
// };



// BOTTOM UP APPROACH

// class Solution {
//  public:
//   int climbStairs(int n) {
      
//     vector<int> dp(n + 1);
//     dp[0] = 1;
//     dp[1] = 1;

//     for (int i = 2; i <= n; ++i)
//       dp[i] = dp[i - 1] + dp[i - 2];

//     return dp[n];
//   }
// };



// SPACE OPTIMIZATION APPROACH

// class Solution {
// public:
//     int climbStairs(int n) {
//         if (n == 0 || n == 1) {
//             return 1;
//         }

//         int prev1 = 1, prev2 = 1;
//         for (int i = 2; i <= n; ++i) {
//             int current = prev1 + prev2;
//             prev2 = prev1;
//             prev1 = current;
//         }

//         return prev1;
//     }
// };
