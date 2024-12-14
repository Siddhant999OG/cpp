/////////////////
// PARANTHESIS //
/////////////////

// class Solution {
// public:

//     void solve(vector<string> &ans, int n, int open, int close, string output){
//         if(open==0 && close == 0){
//             ans.push_back(output);
//             return;
//         }

//         // Include

//         if(open>0){
//             output.push_back('(');
//             solve(ans, n, open-1, close, output);
//             output.pop_back();
//         }
//         // Exclude

//         if(close>open){
//             output.push_back(')');
//             solve(ans, n, open, close-1, output);
//             output.pop_back();
//         }
//     }

//     vector<string> generateParenthesis(int n) {
//         vector<string> ans;
//         int open = n;
//         int close = n;
//         string output = "";
//         solve(ans, n, open, close, output);
//         return ans;
//     }
// };






//////////////////
// PHONE NUMBER //
//////////////////

class Solution {
public:
    void solve(vector<string>& ans, int index, string output, vector<string>& mapping, string digits){
        if(index >= digits.length()){
            ans.push_back(output);
            return; // Don't forget to return here to avoid unnecessary recursive calls.
        }

        int digit = digits[index] - '0';
        string value = mapping[digit];

        for(int i = 0; i < value.length(); i++){
            char ch = value[i];

            output.push_back(ch);
            solve(ans, index + 1, output, mapping, digits);
            output.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()==0){
            return ans;
        }
        string output = "";
        int index = 0;
        vector<string> mapping(10);
        mapping[2] = "abc";
        mapping[3] = "def";
        mapping[4] = "ghi";
        mapping[5] = "jkl";
        mapping[6] = "mno";
        mapping[7] = "pqrs";
        mapping[8] = "tuv";
        mapping[9] = "wxyz";
        solve(ans, index, output, mapping, digits);
        return ans;
    }
};
