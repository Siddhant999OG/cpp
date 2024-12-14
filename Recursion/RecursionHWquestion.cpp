//////////////////////
// LAST OCC OF CHAR //
//////////////////////

// #include<iostream>
// using namespace std;

// void solve(string& str, char ch, int i, int& ans){
//     if(i >= str.size()){
//         return;
//     }

//     if(str[i] == ch){
//         ans = i;
//     }

//     solve(str, ch, i+1, ans);
// }
// int main(){
//     string str;
//     cin>>str;

//     char ch;
//     cin>>ch;

//     int ans;
//     int i = 0;
//     solve(str, ch , i, ans);
//     cout<<ans;
// }




//////////////////////
// REVERSE A STRING //
//////////////////////

// #include<iostream>
// using namespace std;

// void solve(string& str, int s, int e){
//     if(s>=e){
//         return;
//     }

//     swap(str[s], str[e]);

//     solve(str, s+1, e-1);

// }
// int main(){
//     string str;
//     cin>>str;

//     int s = 0;
//     int e = str.size()-1;
//     solve(str, s, e);
//     cout<<str;
//     return 0;
// }




//////////////////////
// CHECK PALINDROME //
//////////////////////

// #include<iostream>
// using namespace std;

// bool solve(string& str, int s, int e){
//     if(s>=e){
//         return true;
//     }
//     if(str[s]!=str[e]){
//         return false;
//     }

//     return solve(str, s+1, e-1);
// }
// int main(){
//     string str;
//     cin>>str;
//     int s = 0;
//     int e = str.size()-1;
//     cout<<solve(str,s, e);
// }




///////////////////////////////////
// REMOVE ALL OCC OF A SUBSTRING //
///////////////////////////////////

// #include<iostream>
// using namespace std;

// void solve(string& str, string str1){
//     int found = str.find(str1);

//     if(found != string::npos){
//         string left_subpart = str.substr(0,found);
//         string right_subpart = str.substr(found+str1.size(), str.size());
//         str = left_subpart + right_subpart;

//         solve(str, str1);
//     }
//     else{
//         return;
//     }
// }
// int main(){
//     string str;
//     cin>>str;

//     string str1;
//     cin>>str1;

//     solve(str,str1);
//     cout<<str;
// }






//////////////////////////
// PRINT ALL SUBSTRINGS //
//////////////////////////

// #include<iostream>
// #include<vector>
// using namespace std;

// void solve(vector<int>& arr, int s, int e){

//     if(e == arr.size()){
//         return;
//     }
//     for(int i=s; i<=e; i++){
//         cout<<arr[i];
//     }
//     cout<<endl;

//     solve(arr, s, e+1);
// }

// void solve1(vector<int>& arr){
//     for(int s = 0; s<arr.size(); s++){
//         int e = s;
//         solve(arr, s, e);
//     }
// }
// int main(){
//     vector<int> arr{1,2,3,4,5};
//     solve1(arr);
//     return 0;
// }



/////////////////////////
// ROBBER LEETCODE 198 //
/////////////////////////

class Solution {
public:
    int robhelper(vector<int>& nums, int i) {
        if(i>=nums.size()){
            return 0;
        }

        int rob1 = nums[i] + robhelper(nums, i+2);
        int rob2 = 0 + robhelper(nums, i+1);

        return max(rob1, rob2);
    }


    int rob(vector<int>& nums) {
        return robhelper(nums, 0);
    }
};