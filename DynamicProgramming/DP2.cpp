// COIN CHANGE

// TOP DOWN APPROACH

// class Solution {
// public:
//     int topDown(vector<int>& coins, int amount, vector<int>& dp){
//         if(amount == 0){
//             return 0;
//         }

//         if(amount < 0){
//             return INT_MAX;
//         }

//         if(dp[amount] != -1){
//             return dp[amount];
//         }

//         int mini = INT_MAX;

//         for(int i=0; i<coins.size(); i++){
//             int ans = topDown(coins, amount-coins[i], dp);
//             if(ans != INT_MAX){
//                 mini = min(mini, 1+ans);
//             }
//         }

//         dp[amount] = mini;
//         return mini;
//     }
//     int coinChange(vector<int>& coins, int amount) {
//         vector<int> dp(amount+1, -1);
//         int ans = topDown(coins, amount, dp);
//         if(ans == INT_MAX){
//             return -1;
//         }
//         else{
//             return ans;
//         }
//     }
// };





// BOTTOM UP APPROACH

// class Solution {
// public:
//     int bottomUp(vector<int>& coins, int amount){
//         vector<int> dp(amount+1, INT_MAX);
//         dp[0] = 0;

//         for(int target = 1; target <= amount; target++){
//             int mini = INT_MAX;
//             for(int i = 0; i< coins.size(); i++){
//                 if(target - coins[i] >= 0){
//                     int ans = dp[target - coins[i]];
//                     if(ans != INT_MAX){
//                         mini = min(mini, 1+ans);
//                     }
//                 }
//             }
//             dp[target] = mini;
//         }
//         return dp[amount];
//     }
//     int coinChange(vector<int>& coins, int amount) {
//         int ans = bottomUp(coins, amount);
//         if(ans == INT_MAX){
//             return -1;
//         }
//         else{
//             return ans;
//         }
//     }
// };






// ROBBER 

// TOP DOWN APPROACH

// class Solution {
// public:

//     int topBottom(vector<int>& nums, int start, vector<int>& dp){
//         if(start >= nums.size()){
//             return 0;
//         }

//         if(dp[start] != -1){
//             return dp[start];
//         }

//         int includeProfit = nums[start] + topBottom(nums, start+2, dp);
//         int excludeProfit = topBottom(nums, start+1, dp);

//         int ans = max(includeProfit, excludeProfit);

//         dp[start] = ans;
//         return dp[start];
//     }
//     int rob(vector<int>& nums) {
//         vector<int> dp(nums.size()+1, -1);
//         int ans = topBottom(nums, 0, dp);
//         return ans;
//     }
// };




// BOTTOM UP

// class Solution {
// public:

//     int BottomUp(vector<int>& nums, int n){
//         vector<int> dp(nums.size()+1, 0);
//         dp[0] = nums[0];

//         for(int i=1; i<=n; i++){

//             int temp = 0;
//             if(i-2 >= 0)
//                 temp = dp[i-2];

//                 int include = temp + nums[i]; 
//                 int exclude = dp[i-1];

//             dp[i] = max(include, exclude);
//         }

//         return dp[n];
//     }
//     int rob(vector<int>& nums) {
//         int n = nums.size()-1;
//         return BottomUp(nums, n);
//     }
// };