#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    // st.pop();

    cout<<"Element on top is : " <<st.top()<<endl;

    cout<<"Size of Stack is : "<<st.size()<<endl;

    if(st.empty()){
        cout<<"stack is Empty"<<endl;
    }
    else{
        cout<<"Stack is not Empty"<<endl;
    }
}





// PRINTING THE STACK

// #include<iostream>
// #include<stack>
// using namespace std;

// int main(){
//     stack<int> s;

//     s.push(10);
//     s.push(20);
//     s.push(30);

//     while(!s.empty()){
//         cout<<s.top()<<endl;
//         s.pop();
//     }
//     cout<<endl;
// }





// #include<iostream>
// #include<stack>
// using namespace std;

// class Stack{
//     public:
//     int* arr;
//     int top;
//     int size;

//     Stack(int size){
//         arr = new int[size];
//         this->size = size;
//         top = -1;
//     }

//     void push(int data){
//         if(size-top>1){
//             top++;
//             arr[top] = data;
//         }
//         else{
//             cout<<"Stack overFlow"<<endl;
//         }
//     }

//     void pop(){
//         if(top==-1){
//             cout<<"Stack underflow"<<endl;
//         }
//         else{
//             top--;
//         }
//     }

//     int getTop(){
//         if(top==-1){
//             cout<<"Stack is empty on top available"<<endl;
//         }
//         else{
//             return arr[top];
//         }
//     }

//     int getSize(){
//         return top+1;
//     }

//     bool isEmpty(){
//         if(top == -1){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };

// int main(){
//     Stack s(10);
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);

//     while(!s.isEmpty()){
//         cout<<s.getTop()<<" ";
//         s.pop();
//     }
//     cout<<endl;

//     cout<<"size of stack : "<<s.getSize()<<endl;
// }





// 2 STACKS IN AN ARRAY

// #include<iostream>
// using namespace std;

// class Stack{
//     public:
//     int* arr;
//     int size;
//     int top1;
//     int top2;
    
//     Stack(int size){
//         arr = new int[size];
//         this->size = size;
//         top1 = -1;
//         top2 = size;
//     }

//     void push1(int data){
//         if(top2-top1 == 1){
//             cout<<"Overflow in stack 1"<<endl;
//         }
//         else{
//             top1++;
//             arr[top1] = data;
//         }
//     }

//     void pop1(){
//         if(top1 == -1){
//             cout<<"Underflow"<<endl;
//         }
//         else{
//             top1--;
//         }
//     }

//     void push2(int data){
//         if(top2-top1 == 1){
//             cout<<"Overflow in stack 2"<<endl;
//         }
//         else{
//             top2--;
//             arr[top2] = data;
//         }
//     }

//     void pop2(){
//         if(top2 == size){
//             cout<<"Underflow"<<endl;
//         }
//         else{
//             top2++;
//         }
//     }

//     void print(){
//         cout<<endl;
//         cout<<"top1 : "<<top1<<endl;
//         cout<<"top2 : "<<top2<<endl;
//         for(int i=0; i<size; i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };

// int main(){
//     Stack s(10);

//     s.push1(10);
//     s.print();
//     s.push1(20);
//     s.print();
//     s.push1(30);
//     s.print();
//     s.push1(40);
//     s.print();
//     s.push1(50);
//     s.print();


//     s.push2(100);
//     s.print();
//     s.push2(110);
//     s.print();
//     s.push2(120);
//     s.print();
//     s.push2(130);
//     s.print();
//     s.push2(140);
//     s.print();

// }





// REVERSE STRING

// #include<iostream>
// #include<stack>
// using namespace std;

// int main(){
//     string str = "babbar";

//     stack<char> s;

//     for(int i=0; i<str.length(); i++){
//         s.push(str[i]);
//     }

//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
//     cout<<endl;
// }






// FIND MIDDLE ELEMENT

// #include<iostream>
// #include<stack>

// using namespace std;

// void printMiddle(stack<int> &s, int &totalSize){

//     if(s.size() == 0){
//         cout<<"Stack is Empty"<<endl;
//     }
    
//     if(s.size() == totalSize/2 + 1){
//         cout<<"Middle element is : "<<s.top()<<endl;
//     }

//     int temp = s.top();
//     s.pop();

//     printMiddle(s, totalSize);

//     s.push(temp);
// }

// int main(){
//     stack<int> s;

//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);
//     s.push(60);
//     s.push(70);
//     s.push(80);
//     int totalSize = s.size();
//     printMiddle(s, totalSize);
// }