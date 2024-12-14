// #include<iostream>
// #include<queue>
// using namespace std;

// int main(){
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);

//     cout<<"Size of queue : "<<q.size()<<endl;

//     q.pop();
//     cout<<"Size of queue : "<<q.size()<<endl;

//     cout<<"Front Element is : "<<q.front()<<endl;

//     if(q.empty()){
//         cout<<"Queue is empty"<<endl;
//     }
//     else{
//         cout<<"Queue has some values"<<endl;
//     }
// }



// WITHOUT STL

// #include<iostream>
// using namespace std;

// class Queue{
//     public:
//     int *arr;
//     int size;
//     int front;
//     int rear;

//     Queue(int size){
//         this->size = size;
//         arr = new int[size];
//         front = 0;
//         rear = 0;
//     }

//     void push(int data){
//         if(size == rear){
//             cout<<"Queue is not empty"<<endl;
//         }
//         else{
//             arr[rear] = data;
//             rear++;
//         }
//     }

//     void pop(){
//         if(front == rear){
//             cout<<"Queue is empty"<<endl;
//         }
//         else{
//             arr[front] = -1;
//             front++;
//             if(front == rear){
//                 front = 0;
//                 rear = 0;
//             }
//         }
//     }

//     int getFront(){
//         if(front == rear){
//             cout<<"Queue is empty"<<endl;
//         }
//         else{
//             arr[front];
//         }
//     }

//     bool isEmpty(){
//         if(front == rear){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
//     int getSize(){
//         return rear-front;
//     }
// };

// int main() {
//     Queue q(10);
//     q.push(5);
//     q.push(10);
//     q.push(25);
//     q.push(35);

//     cout << "Size of queue is : " << q.getSize() << endl;

//     q.pop();
//     cout << "Size of queue is : " << q.getSize() << endl;

//     cout << "Front Element is : " << q.getFront() << endl;

//     if(q.isEmpty()){
//         cout<<"Q is empty"<<endl;
//     }
//     else{
//         cout<<"queue is not empty"<<endl;
//     }
// } 




// CIRCULAR QUEUE

// #include<iostream>
// using namespace std;

// class Queue{
//     public:
//     int *arr;
//     int size;
//     int front;
//     int rear;

//     Queue(int size){
//         this->size = size;
//         arr = new int[size];
//         front = -1;
//         rear = -1;
//     }

//     void push(int data){
//         if(rear == size-1 && front == 0){
//             cout<<"Queue is Full"<<endl;
//         }
//         else if(front == -1){
//             front = 0;
//             rear = 0;
//             arr[rear] = data;
//         }
//         else if(rear == size-1 && front!=0){
//             rear = 0;
//             arr[rear] = data;
//         }
//         else{
//             rear++;
//             arr[rear] = data;
//         }
//     }

//     void pop(){
//         if(front==-1){
//             cout<<"Queue is empty"<<endl;
//         }
//         else if(front == rear){   // singlee element h to
//             arr[front] = -1;
//             front = -1;
//             rear = -1;
//         }
//         else if(front == size-1){
//             front = 0;
//         }
//         else{
//             front++;
//         }
//     }
// };






// DEQUE  WITHOUT STL

// #include<iostream>
// using namespace std;

// class Deque{
//     public:
//     int *arr;
//     int size;
//     int front;
//     int rear;

//     Deque(int size){
//         this->size = size;
//         arr = new int[size];
//         front = -1;
//         rear = -1;
//     }

//     void pushRear(int data){
//         if(front == 0 && rear == size-1){
//             cout<<"Queue is Full"<<endl;
//             return;
//         }
//         else if(front == -1){
//             front = rear = 0;
//         }
//         else if(rear = size-1 && front != 0){
//             rear = 0;
//         }
//         else{
//             rear++;
//         }
//         arr[rear] = data;
//     }

//     void pushFront(int data){
//         if(front == 0 && rear == size-1){
//             cout<<"Queue is Full"<<endl;
//             return;
//         }
//         else if(front == -1){
//             front = rear = 0;
//         }
//         else if(rear = size-1 && front != 0){
//             rear = 0;
//         }
//         else{
//             rear++;
//         }
//         arr[rear] = data;
//     }

//     void popFront(){
//         if(front == -1){
//             cout<<"Q is empty"<<endl;
//         }
//         else if(front == rear){
//             arr[front] = -1;
//             front = -1;
//             rear = -1;
//         }
//         else if(front == size-1){
//             front = 0;
//         }
//         else{
//             front++;
//         }
//     }

//     void popRear(){
//         if(rear == -1){
//             cout<<"Queue is empty"<<endl;
//         }
//         else if(front == rear){
//             arr[front] = -1;
//             front = -1;
//             rear = -1;
//         }
//         else if(rear == 0){
//             rear = size-1;
//         }
//         else{
//             rear--;
//         }
//     }
// };





// DEQUE USING STL

#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> dq;

    dq.push_front(10);
    dq.push_front(20);
    dq.push_back(30);
    dq.push_back(40);

    cout<<"Size of deque is : "<<dq.size()<<endl;

    dq.pop_front();

    cout<<"Size of deque id : "<<dq.size()<<endl;

    dq.pop_back();

    cout<<"Size of deque id : "<<dq.size()<<endl;

    cout<<"Front : "<<dq.front()<<endl;
    cout<<"Back : "<<dq.back()<<endl;


    if(dq.empty()){
        cout<<"empty"<<endl;
    }
    else{
        cout<<"Not empty"<<endl;
    }
}