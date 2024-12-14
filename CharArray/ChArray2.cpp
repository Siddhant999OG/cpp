////////////////////////////////////////////////
//REMOVE ALL DUPLICATE ADJESCENT IN THE STRING//
//       LEETCODE QUESTION NUMBER 1047        //
//////////////////////////////////////////////// 


// #include <iostream>
// #include <stack>
// #include <string>
// using namespace std;

// string removeDuplicates(string s) {
//     string ans = "";
//     int i=0;

//     while(i<s.length()){
//         if(ans.length()>0){
//             if(ans[ans.length()-1]==s[i]){
//                 ans.pop_back();                   
//             }
//             else{
//                 ans.push_back(s[i]);
//             }
//         }
//         else{
//             ans.push_back(s[i]);
//         }
//         i++;
//     }
//     return ans;
// }

// int main() {
//     string s;
//     cout << "Enter a string: ";
//     getline(cin, s);

//     string output = removeDuplicates(s);
//     cout << "String after removing adjacent duplicates: " << output << endl;

//     return 0;
// }





/////////////////////////////////////////
//REMOVE ALL OCCURRENCE OF A SUBSTRING //
//    LEETCODE QUESTION NUMBER 1910    //
/////////////////////////////////////////

// #include<iostream>
// #include<string.h>
// using namespace std;


// string Occ(string str1, string str2){
//     int pos = str1.find(str2);
//     while(pos!=string::npos){
//         str1.erase(pos, str2.length());
//         pos = str1.find(str2);
//     }
//     return str1;
// }
// int main(){
//     string str1;
//     string str2;
//     cout<<"Enter str1"<<endl;
//     getline(cin, str1);
//     cout<<"Enter str2"<<endl;
//     getline(cin, str2);

//     string ans = Occ(str1, str2);
//     cout<<ans;
// }



////////////////////
//VALID PALINDROME//
//  LEETCODE 680  //
////////////////////

// #include <iostream>
// #include <string>
// using namespace std;
// bool isPalindrome(string str, int left, int right) {
//     while (left < right) {
//         if (str[left] != str[right])
//             return false;

//         left++;
//         right--;
//     }

//     return true;
// }

// bool canMakePalindromeByRemovingOneChar(string str) {
//     int left = 0;
//     int right = str.length() - 1;

//     while (left < right) {
//         if (str[left] != str[right]) {
//             if(isPalindrome(str, left+1, right)){
//                 return true;
//             }
//             if(isPalindrome(str, left, right-1)){
//                 return true;
//             }
//         }
//         else{
//             left++;
//             right--;
//         }
//         return true;
//     }
// }

// // Main function
// int main() {
//     string str;
//     cout << "Enter a string: ";
//     getline(cin, str);

//     bool result = canMakePalindromeByRemovingOneChar(str);
//     cout<<result;
// } 





///////////////////////////
//MINIMUM TIME DIFFERENCE//
//      LEETCODE 539     //
///////////////////////////

// #include<iostream>
// #include<string.h>
// #include<vector>
// #include<algorithm>
// #include<limits.h>
// using namespace std;
// int findMinDifference(vector<string>& timePoints) {
//         vector<int> minutes;

//         for(int i=0; i<timePoints.size(); i++){
//             string curr = timePoints[i];

//             int hours = stoi(curr.substr(0,2));
//             int min = stoi(curr.substr(3,2));
//             int totalminutes = hours*60 + min;
//             minutes.push_back(totalminutes);
//         }

//         sort(minutes.begin(), minutes.end());
//         int mini = INT_MAX;
//         int n = minutes.size();
//         for(int i=0; i<n-1; i++){
//             int diff = minutes[i+1]-minutes[i];
//             mini = min(mini, diff);
//         }
//         int lastDiff1 = (minutes[0] +1440) - minutes[n-1];
//         int lastdiff2 = minutes[n-1] - minutes[0];
//         int lastDiff = min(lastDiff1, lastdiff2);
//         mini = min(mini, lastDiff);
//         return mini;
//     }
// int main(){
//     vector<string> timePoints = {"23:45", "00:15", "12:00", "06:30", "18:45"};
//     int ans = findMinDifference(timePoints);
//     cout<<ans;
// }





/////////////////////////
//PALINDROMIC SUBSTRING//
//    LEETCODE 647     //
/////////////////////////

#include<iostream>
#include<string.h>
using namespace std;
int expandAroundIndex(string s, int i, int j){
        int count = 0;
        while(i>=0 && j<s.length() && s[i] == s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countsub(string s) {
        int count = 0;
        int n = s.length();
        for(int i=0; i<n; i++){
            int odd = expandAroundIndex(s,i,i);
            count = count+odd;

            int even = expandAroundIndex(s,i,i+1);
            count = count+even;
        }
        return count;
    }
int main(){
    string s;
    getline(cin,s);
    int ans = countsub(s);
    cout<<ans;
}