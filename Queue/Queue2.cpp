// REVERSE THE QUEUE //

// #include<iostream>
// #include<queue>
// #include<stack>
// using namespace std;

// void reverse(queue<int> &q){
//     stack<int> st;

//     while(!q.empty()){
//         int element = q.front();
//         q.pop();
//         st.push(element);
//     }

//     while(!st.empty()){
//         cout<<st.top()<<" ";
//         st.pop();
//     }
// }

// int main(){
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);

//     reverse(q);
// }





// USING RECURSION

// #include<iostream>
// #include<queue>
// #include<stack>
// using namespace std;

// void reverse(queue<int> &q){
//     if(q.empty()){
//         return;
//     }

//     int temp = q.front();
//     q.pop();

//     reverse(q);

//     q.push(temp);
// }

// int main(){
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);

//     reverse(q);

//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }
// }






// REVERSING FIRST K ELEMENT OF QUEUE

// #include<iostream>
// #include<queue>
// #include<stack>
// using namespace std;


// void reverseKelement(queue<int> &q, int k){

//     stack<int> st;
//     int count = 0;
//     int n = q.size();

//     if(k==0||k>n){
//         return;
//     }

//     while(!q.empty()){
//         int ele = q.front();
//         q.pop();
//         st.push(ele);
//         count++;

//         if(count == k){
//             break;
//         }
//     }

//     while(!st.empty()){
//         int temp = st.top();
//         st.pop();
//         q.push(temp);
//     }

//     count = 0;
//     while(!q.empty()){
//         int temp = q.front();
//         q.pop();
//         q.push(temp);
//         count++;

//         if(count == n-k){
//             break;
//         }
//     }
// }

// int main(){
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);

//     reverseKelement(q, 2);

//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }
// }





// INTERLEAVE IST AND 2ND HALF

// #include<iostream>
// #include<queue>
// using namespace std;

// void Interleave(queue<int> &q){
//     int n = q.size();
//     if(q.empty()){
//         return;
//     }
//     int k = n/2;
//     int count = 0;

//     queue<int> q2;

//     while(!q.empty()){
//         int temp = q.front();
//         q.pop();
//         q2.push(temp);
//         count++;

//         if(count == k){
//             break;
//         }
//     }

//     while(!q.empty() && !q2.empty()){
//         int temp = q2.front();
//         q2.pop();
//         q.push(temp);

//         int temp2 = q.front();
//         q.pop();
//         q.push(temp2);
//     }

//     if(n&1){
//         int temp = q.front();
//         q.pop();
//         q.push(temp);
//     }
// }

// int main(){
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     q.push(60);
//     q.push(70);
//     q.push(80);

//     Interleave(q);

//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }
// }






// FIND EVERY FIRST NEGATIVE IN EVERY WINDOW OF SIZE K

#include<iostream>
#include<deque>
using namespace std;

void solve(int arr[], int n, int k){
    deque<int> q;

    for(int i = 0; i<k; i++){
        if(arr[i] < 0){
            q.push_back(i);
        }
    }
    for(int i=k; i<n; i++){
        if(q.empty()){
            cout<< 0 << " ";
        }
        else{
            cout<<arr[q.front()]<<" ";
        }
        while((!q.empty()) && (i-q.front() >= k)){
            q.pop_front();
        }
        if(arr[i]<0){
            q.push_back(i);
        }
    }
    if(q.empty()){
        cout<< 0 <<" ";
    }
    else{
        cout<<arr[q.front()]<<" ";
    }
}

int main(){
    int arr[] = {12,-1,-7,8,-15,30,16,28};
    int size = 8;

    int k = 3;

    solve(arr,size,k);
}