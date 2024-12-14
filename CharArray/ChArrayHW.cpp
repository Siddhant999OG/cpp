///////////////////
// VALID ANAGRAM //
// LEETCODE 242  //
///////////////////

// #include<iostream>
// #include<string.h>
// using namespace std;

// int valid(string str1, string str2){
//     int fre[256] = {0};

//     for(int i=0; i<str1.size(); i++){
//         fre[str1[i]]++;
//     }
//     for(int i=0; i<str2.size(); i++){
//         fre[str2[i]]--;
//     }

//     for(int i=0; i<256; i++){
//         if(fre[i] != 0){
//             return false;
//         }
//     }
//     return true;

// }
// int main(){
//     string str1;
//     getline(cin,str1);
//     string str2;
//     getline(cin, str2);
//     cout<<valid(str1, str2);
// }




/////////////////////////
// REVERSE ONLY LETTER //
//  LEETCODE QUES 917  //
/////////////////////////

// #include<iostream>
// #include<string.h>
// using namespace std;

// string reverse(string str){
//     int s = 0;
//     int e = str.size()-1;

//     while(s<e){
//         if(isalpha(str[s]) && isalpha(str[e])){
//             swap(str[s], str[e]);
//             s++;
//             e--;
//         }
//         else if(!isalpha(str[s])){
//             s++;
//         }
//         else{
//             e--;
//         }
//     }
//     return str;
// }
// int main(){
//     string str;
//     getline(cin, str);

//     string ans = reverse(str);
//     cout<<ans;
// }




///////////////////////////////
// REVERSE VOWEL OF A STRING //
//   LEETCODE QUESTION 345   //
///////////////////////////////

// #include <iostream>
// #include <string>

// using namespace std;

// bool isVowel(char ch) {
//     ch = tolower(ch);
//     return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
// }

// string reverseVowels(string str) {
//     string result = str;
//     int start = 0;
//     int end = result.length() - 1;

//     while (start < end) {
//         if(isVowel(str[start]) && isVowel(str[end])){
//             swap(result[start], result[end]);
//             start++;
//             end--;
//         }
//         else if(!isVowel(result[end])){
//             end--;
//         }
//         else{
//             start++;
//         }
//     }

//     return result;
// }

// int main() {
//     string str;
//     getline(cin,str);
//     string reversed = reverseVowels(str);

//     cout << "Original String: " << str << endl;
//     cout << "Reversed Vowels: " << reversed << endl;

//     return 0;
// }





///////////////////////
// ISOMORPHIC STRING //
//   LEETCODE 205    // 
///////////////////////

// #include<iostream>
// #include<string.h>
// using namespace std;

// bool isostring(string s, string t){
//     int hash[256] = {0};
//     bool chamap[256] = {0};

//     for(int i=0; i<s.size(); i++){
//         if(hash[s[i]]==0 && chamap[t[i]]==0){
//             hash[s[i]] = t[i];
//             chamap[t[i]] = true;
//         }
//     }
//     for(int i=0; i<s.size(); i++){
//         if(hash[s[i]] != t[i]){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     string s;
//     getline(cin,s);
//     string t;
//     getline(cin,t);

//     cout<<isostring;
// }





///////////////////
// GROUP ANAGRAM //
//  LEETCODE 49  //
///////////////////

#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
#include<map>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> strs){
    map<string, vector<string>> mp;
    for(auto str: strs){
        string s = str;

        sort(s.begin(), s.end());
        mp[s].push_back(str);
    }

    vector<vector<string>> ans;
    for(auto it = map.begin(); it!=mp.end(); it++){
        ans.push_back(it->second);
    }
    return ans;
}

int main() {
    vector<string> words = {"eat", "tea", "tan", "ate", "nat", "bat"};

    vector<vector<string>> anagramGroups = groupAnagrams(words);

    // Print the grouped anagrams
    for (const auto& group : anagramGroups) {
        for (const string& word : group) {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}