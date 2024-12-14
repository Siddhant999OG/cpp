// MIN STACK
// LEETCODE 

// void push(int val){
//     if(st.empty()){
//         pair<int, int> p = make_pair(val,val);
//         st.push_back(p);
//     }
//     else{
//         pair<int, int> p;
//         p.first = val;
//         p.second = min(val, st.back().second);
//         st.push_back(p);
//     }
// }
// void pop(){
//     st.pop_back();
// }

// void top(){
//     return st.back().first;
// }

// void min(){
//     return st.back().second;
// }






// LARGEST VALID PARENTHESIS

// #include<iostream>
// #include<stack>
// class solution{
//     public:
//     stack<int> st;
//     st.push(-1);
//     int maxLen = 0;

//     for(int i=0; i<s.length(); i++){
//         char ch = s[i];

//         if(ch == '('){
//             st.push(i);
//         }
//         else{
//             st.pop();
//             if(st.empty()){
//                 st.push(i);
//             }
//             else{
//                 int len = i-st.top();
//                 maxLen = max(len, maxLen);
//             }
//         }
//         return maxLen;
//     }
// }


// NEXT SMALLER ELEMENT

// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;

// int main(){
//     vector<int> v;
//     v.push_back(2);
//     v.push_back(1);
//     v.push_back(4);
//     v.push_back(3);

//     stack<int> s; 
//     s.push(-1);

//     vector<int> ans(v.size());
//     for(int i = v.size()-1; i>=0; i--){
//         int curr = v[i];
//         while(s.top()>= curr){
//             s.pop();
//         }
//         ans[i] = s.top();
//         s.push(curr);
//     }

//     cout<<"Printing"<<endl;
//     for(int i=0; i<ans.size(); i++){
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;
// }






// PREV SMALLER

// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;

// int main(){
//     vector<int> v;
//     v.push_back(2);
//     v.push_back(1);
//     v.push_back(4);
//     v.push_back(3);

//     stack<int> s;
//     s.push(-1);

//     vector<int> ans(v.size());
//     for(int i=0; i<v.size(); i++){
//         int curr = v[i];

//         while(s.top()>curr){
//             s.pop();
//         }
//         ans[i] = s.top();
//         s.push(curr);
//     }

//     cout<<"Printing"<<endl;
//     for(int i=0; i<ans.size(); i++){
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;
// }





// LARGEST RECTANGLE IN HISTOGRAM

// class Solution {
// public:
//     vector<int> prevSmaller(vector<int> &v) {
//         stack<int> s;
//         s.push(-1);
//         vector<int> ans(v.size());

//         for (int i = 0; i < v.size(); i++) {
//             int curr = v[i];
//             while (s.top() != -1 && v[s.top()] >= curr) {
//                 s.pop();
//             }
//             ans[i] = s.top();
//             s.push(i);
//         }
//         return ans;
//     }

//     vector<int> nextSmaller(vector<int> &v) {
//         stack<int> s;
//         s.push(-1);

//         vector<int> ans(v.size());
//         for (int i = v.size() - 1; i >= 0; i--) {
//             int curr = v[i];
//             while (s.top() != -1 && v[s.top()] >= curr) {
//                 s.pop();
//             }
//             ans[i] = s.top();
//             s.push(i);
//         }
//         return ans;
//     }

//     int largestRectangleArea(vector<int> &heights) {
//         vector<int> prev = prevSmaller(heights);
//         vector<int> next = nextSmaller(heights);

//         int maxArea = INT_MIN;
//         int size = heights.size();
//         for (int i = 0; i < heights.size(); i++) {
//             if (next[i] == -1) {
//                 next[i] = size;
//             }

//             int len = heights[i];
//             int width = next[i] - prev[i] - 1;
//             int area = len * width;
//             maxArea = max(maxArea, area);
//         }
//         return maxArea;
//     }
// };