// PARTITION EQUAL SUBSET SUM
// TOP DOWN APPROACH

// class Solution {
// public:
//     bool canPartition(vector<int>& nums) {
//         int sum = 0;
//         for(int i=0; i<nums.size(); i++){
//             sum += nums[i];
//         }

//         int target = sum/2;
//         if(sum & 1){
//             return false;
//         }

//         int index = 0;
//         vector<vector<int>> dp(nums.size(), vector<int>(target+1, -1));

//         bool ans = solveusingRecursion(index, nums, target, dp);
//         return ans;
//     }

//     bool solveusingRecursion(int index, vector<int>& nums, int target, vector<vector<int>>& dp){
//         int n = nums.size();
//         if(index >= n){
//             return 0;
//         }
//         if(target < 0){
//             return 0;
//         }
//         if(target == 0){
//             return 1;
//         }

//         if(dp[index][target] != -1){
//             return dp[index][target];
//         }

//         bool include = solveusingRecursion(index+1, nums, target-nums[index], dp);
//         bool exclude = solveusingRecursion(index+1, nums, target, dp);

//         dp[index][target] = include || exclude;
//         return dp[index][target];
//     }
// };





// 1155. Number of Dice Rolls With Target Sum

// class Solution {
// public:
//     const int MOD = 1000000007;

//     int solveUsingRecursion(int n, int k, int target, vector<vector<int>>& dp) {
//         if (n < 0 || target < 0) {
//             return 0;
//         }

//         if (n == 0 && target == 0) {
//             return 1;
//         }

//         if (n == 0 || target == 0) {
//             return 0;
//         }

//         if (dp[n][target] != -1) {
//             return dp[n][target];
//         }

//         long long int ans = 0;
//         for (int i = 1; i <= k; i++) {
//             ans = (ans + solveUsingRecursion(n - 1, k, target - i, dp)) % MOD;
//         }

//         dp[n][target] = ans;
//         return dp[n][target];
//     }

//     int numRollsToTarget(int n, int k, int target) {
//         vector<vector<int>> dp(n + 1, vector<int>(target + 1, -1));
//         return solveUsingRecursion(n, k, target, dp);
//     }
// };