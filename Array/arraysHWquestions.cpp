///////////////
//colour sort//
///////////////

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0; i<arr.size(); i++){
//         cin>>arr[i];
//     }
//     int l=0,m=0, h = arr.size()-1;
//     while(m<=h){
//         if(arr[m]==0){
//             swap(arr[m], arr[l]);
//             l++;
//             m++;
//         }
//         else if(arr[m]==1){
//             m++;
//         }
//         else{
//             swap(arr[m], arr[h]);
//             h--;
//         }
//     }
//     for(int i=0; i<arr.size(); i++){
//         cout<<arr[i];
//     }
// }




//negative positive sort//

// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     int start = 0;
//     int i=0;
//     int end = arr.size()-1;
//     for(int i=0; i<arr.size(); i++){
//         cin>>arr[i];
//     }
//     while(start<=end){
//         if(arr[i] < 0){
//             swap(arr[start], arr[i]);
//             start++;
//             i++;
//         }
//         else{
//             swap(arr[start], arr[end]);
//             end--;
//         }
//     }
//     for(int i=0; i<arr.size(); i++){
//         cout<<arr[i];
//     }
//     cout<<endl;
//     // sort it here
//     sort(arr.begin(), arr.end());
//     for(int i=0; i<arr.size(); i++){
//         cout<<arr[i];
//     }
// }




/////////////////////////
//FIND DUPLICATE NUMBER//
/////////////////////////

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int ans;
//     vector<int> arr(n);
//     for(int i=0; i<arr.size(); i++){
//         cin>>arr[i];
//     }
//     for(int i=0; i<arr.size(); i++){
//         if(arr[i]==arr[i+1]){
//             cout<<arr[i];
//         }
//     }
// }




//FIND MISSING ELEMENT//

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
    
//     vector<int> arr(n);
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     sort(arr.begin(), arr.end());
//     for(int i = 0; i < n; i++) {
//         if(arr[i] != i + 1) {
//             cout<<i+1;
//             break;
//         }
//     }
// }




//FIND FIRST REPEATING ELEMENT//

// #include<iostream>
// #include<vector>
// #include<unordered_map>
// using namespace std;

// int firstRepeated(vector<int>arr, int n) {
//     unordered_map<int, int> mp;
//     for(int i=0; i<n; i++){
//         mp[arr[i]]++;
//     }
    
//     for(int i=0; i<n; i++){
//         if(mp[arr[i]] > 1){
//             return i+1;
//         }
//     }
//     return -1;
// }

// int main(){
//     int n;
//     cin>>n;

//     vector<int> arr(n);
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     int ans = firstRepeated(arr, n);
//     cout<<ans;
// }




//DUPLICATE NUMBER IN 3 ARRAYS//

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> ans;
//     vector<int> arr = {1, 5, 10, 20, 40, 80};
//     vector<int> brr = {6, 7, 20, 80, 100};
//     vector<int> crr = {3, 4, 15, 20, 30, 70, 80, 120};
    
//     int i = 0, j = 0, k = 0;
//     while (i < arr.size() && j < brr.size() && k < crr.size()) {
//         if (arr[i] == brr[j] && brr[j] == crr[k]) {
//             ans.push_back(arr[i]);
//             i++;
//             j++;
//             k++;
//         } else if (arr[i] < brr[j]) {
//             i++;
//         } else if (brr[j] < crr[k]) {
//             j++;
//         } else {
//             k++;
//         }
//     }

//     for (int i = 0; i < ans.size(); i++) {
//         cout << ans[i] << " ";
//     }

//     return 0;
// }




//WAVE PRINT//

// #include<iostream>
// #include<vector>
// using namespace std;

// void waveprint(vector<vector<int>> arr){
//     int n = arr.size();
//     int m = arr[0].size();
//     for(int i=0; i<m; i++){
//         if((i%2) == 0){
//             for(int j=0; j<n; j++){
//                 cout<<arr[j][i];
//             }
//         }
//         else{
//             for(int b=n-1; b>=0; b--){
//                     cout<<arr[b][i];
//             }
//         }
//     }
// }

// int main(){
//     vector<vector<int>> arr{
//         {1,2,3},
//         {5,6,7},
//         {9,10,11},
//         {13,14,15}
//     };
//     waveprint(arr);
//     return 0;
// }





//LEETCODE QUESTION NUMBER 189//
// #include <iostream>
// #include <vector>
// #include <algorithm> // Include this for the reverse function

// using namespace std;

// void rotate(vector<int>& nums, int k) {
//     int n = nums.size();
//     k = k % n; // To handle cases where k is larger than n

//     reverse(nums.begin(), nums.end()); // Reverse the entire array
//     reverse(nums.begin(), nums.begin() + k); // Reverse the first part
//     reverse(nums.begin() + k, nums.end()); // Reverse the second part
// }

// int main() {
//     vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
//     int k = 3;

//     cout << "Original array: ";
//     for (int num : nums) {
//         cout << num << " ";
//     }
//     cout << endl;

//     rotate(nums, k);

//     cout << "Rotated array: ";
//     for (int num : nums) {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }
