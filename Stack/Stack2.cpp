// INSERT TOP ELEMENT AT BOTTOM 

// #include<iostream>
// #include<stack>
// using namespace std;

// void insertAtbottom(stack<int> &s, int target){
//     if(s.empty()){
//         s.push(target);
//         return;
//     }

//     int temp = s.top();
//     s.pop();

//     insertAtbottom(s, target);

//     s.push(temp);
// }

// int main(){
//     stack<int> s;

//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);

//     int target = s.top();
//     s.pop();

//     insertAtbottom(s, target);

//     cout<<"Printing"<<endl;

//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
//     cout<<endl;

//     return 0;
// }





// REVERSE THE STACK

// #include<iostream>
// #include<stack>
// using namespace std;

// void insertAtbottom(stack<int> &s, int target){
//     if(s.empty()){
//         s.push(target);
//         return;
//     }

//     int temp = s.top();
//     s.pop();

//     insertAtbottom(s, target);

//     s.push(temp);
// }


// void reverseStack(stack<int> &s){

//     if(s.empty()){
//         return;
//     }
//     int target = s.top();
//     s.pop();

//     reverseStack(s);

//     insertAtbottom(s,target);

// }

// int main(){
//     stack<int> s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);
//     reverseStack(s);

//     cout<<"Printing"<<endl;
//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
//     cout<<endl;
//     return 0;
// }





// VALID PARENTHESIS

// #include <iostream>
// #include <stack>
// #include <string>

// using namespace std;

// bool isValidParentheses(const string& s) {
//     stack<char> stack;
//     for (char c : s) {
//         if (c == '(' || c == '{' || c == '[') {
//             stack.push(c);
//         } else {
//             if (stack.empty()) {
//                 return false;
//             }
//             char top = stack.top();
//             stack.pop();
//             if ((c == ')' && top != '(') ||
//                 (c == '}' && top != '{') ||
//                 (c == ']' && top != '[')) {
//                 return false;
//             }
//         }
//     }
//     return stack.empty();
// }

// int main() {
//     string input;
//     cout << "Enter a string containing parentheses: ";
//     cin >> input;

//     if (isValidParentheses(input)) {
//         cout << "The parentheses are valid." << endl;
//     } else {
//         cout << "The parentheses are not valid." << endl;
//     }

//     return 0;
// }





// SORT STACK

// #include<iostream>
// #include<stack>
// using namespace std;

// void insertSorted(stack<int> &s, int target){
//     if(s.empty()){
//         s.push(target);
//         return;
//     }
//     if(s.top()>=target){
//         s.push(target);
//         return;
//     }
//     int topElement = s.top();
//     s.pop();
//     insertSorted(s,target);

//     s.push(topElement);
// }

// void sortStack(stack<int> &s){
//     if(s.empty()){
//         return;
//     }

//     int topElement = s.top();
//     s.pop();

//     sortStack(s);

//     insertSorted(s,topElement);
// }

// int main(){
//     stack<int> s;
//     s.push(7);
//     s.push(11);
//     s.push(3);
//     s.push(5);
//     s.push(9);

//     sortStack(s);

//     while(!s.empty()){
//         cout<<s.top()<<endl;
//         s.pop();
//     }
//     cout<<endl;
// }





// REMOVE REDUNDENT BRACKETS

