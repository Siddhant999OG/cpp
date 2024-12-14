// LEETCODE 276 PAINT FENCE

// USING RECURSION
// #include<iostream>
// using namespace std;

// int solveusingRecursion(int n, int k){
//     if(n == 1){
//         return k;
//     }
//     if(n == 2){
//         return (k + (k*(k-1)));
//     }

//     int ans = (solveusingRecursion(n-2, k) + solveusingRecursion(n-1, k)) * (k-1);
//     return ans;
// }

// int main(){
//     int n=3;
//     int k=2;

//     int ans = solveusingRecursion(n,k);
//     cout<<ans;
// }




// USING TOPDOWN APPROACH

// #include<iostream>
// #include<vector>
// using namespace std;

// int TopBottom(int n, int k, vector<int>& dp){
//     if(n==1){
//         return k;
//     }
//     if(n==2){
//         return (k + (k*(k-1)));
//     }

//     if(dp[n] != -1){
//         return dp[n];
//     }

//     dp[n] = (TopBottom(n-2, k, dp) + TopBottom(n-1, k, dp)) * (k-1);
//     return dp[n];
// }

// int main(){
//     int n=4;
//     int k=3;
//     vector<int> dp(n+1,-1);
//     int ans = TopBottom(n,k,dp);
//     cout<<ans;
// }



// BOTTOM-UP APPROACH


// #include<iostream>
// #include<vector>
// using namespace std;

// int bottomUp(int n, int k){
//     vector<int> dp(n+1, -1);

//     dp[1] = k;
//     dp[2] = (k + (k*(k-1)));

//     for(int i=3; i<=n; i++){
//         dp[i] = (dp[i-1] + dp[i-2])*(k-1);
//     }

//     return dp[n];
// }

// int main(){
//     int n=4;
//     int k=3;
//     int ans = bottomUp(n,k);
//     cout<<ans;
// }






// 0/1 KNAPSACK PROBLEM


// USING RECURSION

// #include<iostream>
// #include<vector>
// using namespace std;

// int solveUsingRecursion(int weight[], int value[], int index, int capacity){
//     if(index < 0) {
//         return 0;
//     }
//     if(index == 0) {
//         if(weight[0] <= capacity) {
//             return value[0];
//         } 
//         else {
//             return 0;
//         }
//     }
    
//     int include = 0;
//     if(weight[index] <= capacity){
//         include = value[index] + solveUsingRecursion(weight, value, index-1, capacity - weight[index]);
//     }
//     int exclude = solveUsingRecursion(weight, value, index-1, capacity);
//     int ans = max(include, exclude);
//     return ans;
// }

// int main(){
//     int weight[] = {4,5,1};
//     int value[] = {1,2,3};
//     int n = 3;
//     int capacity = 4;

//     int ans = solveUsingRecursion(weight, value, n-1, capacity);
//     cout << ans;
// }





// USING TOPDOWN APPROACH

// #include<iostream>
// #include<vector>
// using namespace std;

// int TopDown(int weight[], int value[], int index, int capacity, vector<vector<int>> dp){
//     if(index < 0) {
//         return 0;
//     }
//     if(index == 0) {
//         if(weight[0] <= capacity) {
//             return value[0];
//         } 
//         else {
//             return 0;
//         }
//     }

//     if(dp[index][capacity] != -1){
//         return dp[index][capacity];
//     }
    
//     int include = 0;
//     if(weight[index] <= capacity){
//         include = value[index] + TopDown(weight, value, index-1, capacity - weight[index], dp);
//     }
//     int exclude = TopDown(weight, value, index-1, capacity, dp);

//     dp[index][capacity] = max(include, exclude);
//     return dp[index][capacity];
// }

// int main(){
//     int weight[] = {4,5,1};
//     int value[] = {1,2,3};
//     int n = 3;
//     int capacity = 4;

//     vector<vector<int>> dp(n, vector<int>(capacity+1, -1));

//     int ans = TopDown(weight, value, n-1, capacity, dp);
//     cout << ans;
// }




// BOTTOM-UP APPROACH

#include<iostream>
#include<vector>
using namespace std;

int BottomUp(int weight[], int value[], int n, int capacity){
    vector<vector<int>> dp(n, vector<int>(capacity+1, 0));

    // Initializing the first row
    for(int w = weight[0]; w <= capacity; w++){
        if(weight[0] <= capacity){
            dp[0][w] = value[0];
        }
        else{
            dp[0][w] = 0;
        }
    }

    // Filling the dp table
    for(int i = 1; i < n; i++){
        for(int w = 0; w <= capacity; w++){
            int include = 0;
            if(weight[i] <= w){
                include = value[i] + dp[i-1][w-weight[i]];
            }
            int exclude = dp[i-1][w];
            dp[i][w] = max(include, exclude);
        }
    }

    // The last cell of the dp table contains the result
    return dp[n-1][capacity];
}

int main(){
    int weight[] = {4, 5, 1};
    int value[] = {1, 2, 3};
    int n = 3;
    int capacity = 4;

    int ans = BottomUp(weight, value, n, capacity);
    cout << ans << endl;

    return 0;
}