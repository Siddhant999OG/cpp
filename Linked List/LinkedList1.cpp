// PRINTING THE LINKED LIST

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(){
//         this->data = 0;
//         this->next = NULL;
//     }

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void print(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<endl;
//         temp = temp->next;
//     }
// }

// int main(){
//     Node* first = new Node(10);
//     Node* second = new Node(20);
//     Node* third = new Node(30);

//     first->next = second;
//     second->next = third;

//     print(first);
// }





// INSERT AT HEAD

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(){
//         this->data = 0;
//         this->next = NULL;
//     }

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void insertAtHead(Node* &head, int data){
//     Node* newNode = new Node(data);

//     newNode->next = head;

//     head = newNode;
// }

// void print(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }

// int main(){

//     Node* head = NULL;
//     insertAtHead(head,10);
//     insertAtHead(head,20);
//     insertAtHead(head,30);
//     insertAtHead(head,40);

//     print(head);
// }




// INSERT AT TAIL

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(){
//         this->data = 0;
//         this->next = NULL;
//     }
//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void InsertAThead(Node* &head, Node* &tail, int data){
//     if(head==NULL){
//         Node* newNode = new Node(data);
//         head = newNode;
//         tail = newNode;
//         return;
//     }

//     Node* newNode = new Node(data);
//     newNode->next = head;
//     head = newNode;
// }

// void InsertATtail(Node* &head, Node* &tail, int data){
//     if(tail==NULL){
//         Node* newNode = new Node(data);
//         head = newNode;
//         tail = newNode;
//         return;
//     }

//     Node* newNode = new Node(data);
//     tail->next = newNode;
//     tail = newNode;
// }

// void print(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }

// int main(){
//     Node* head = NULL;
//     Node* tail = NULL;
//     InsertAThead(head,tail,10);
//     InsertAThead(head,tail,20);
//     InsertAThead(head,tail,30);
//     InsertAThead(head,tail,40);
//     InsertAThead(head,tail,50);
//     InsertATtail(head,tail,99);

//     print(head);
// }




// INSERT AT POSITION

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(){
//         this->data = 0;
//         this->next = NULL;
//     }

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void InsertAthead(Node* &head, Node* &tail, int data){
//     if(head == NULL){
//         Node* newNode = new Node(data);
//         head = newNode;
//         tail = newNode;
//         return;
//     }

//     Node* newNode = new Node(data);
//     newNode->next = head;
//     head = newNode;
// }

// void InsertAttail(Node* &head, Node* &tail, int data){
//     if(tail == NULL){
//         Node* newNode = new Node(data);
//         head = newNode;
//         tail = newNode;
//         return;
//     }

//     Node* newNode = new Node(data);
//     tail->next = newNode;
//     tail = newNode;
// }

// int findLength(Node* &head){
//     int len = 0;
//     Node* temp = head;
//     while(temp!=NULL){
//         temp = temp->next;
//         len++;
//     }
//     return len; 
// }

// void InsertAtposition(int data, int position, Node* &head, Node* &tail){
//     if(head == NULL){
//         Node* newNode = new Node(data);
//         head = newNode;
//         tail = newNode;
//         return;
//     } 

//     if(position==0){
//         InsertAthead(head,tail,data);
//         return;
//     }

//     int length = findLength(head);
//     if(position>=length){
//         InsertAttail(head,tail,data);
//         return;
//     }

//     int i = 1;
//     Node* prev = head;
//     while(i<position){
//         prev = prev->next;
//         i++;
//     }
//     Node* curr = prev->next;

//     Node* newNode = new Node(data);

//     newNode->next = curr;

//     prev->next = newNode;
// }

// void print(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }

// int main(){
//     Node* head = NULL;
//     Node* tail = NULL;
//     InsertAthead(head,tail,10);
//     InsertAthead(head,tail,20);
//     InsertAthead(head,tail,30);
//     InsertAthead(head,tail,40);
//     InsertAthead(head,tail,50);
//     InsertAttail(head,tail,99);
//     InsertAtposition(101,7,head,tail);

//     print(head);
// }




// DELETE NODE

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(){
//         this->data = 0;
//         this->next = NULL;
//     }

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };


// void InsertAthead(Node* &head, Node* &tail, int data){
//     if(head == NULL){
//         Node* newNode = new Node(data);
//         head = newNode;
//         tail = newNode;
//         return;
//     }

//     Node* newNode = new Node(data);
//     newNode->next = head;
//     head = newNode;
// }

// void InsertAttail(Node* &head, Node* &tail, int data){
//     if(tail == NULL){
//         Node* newNode = new Node(data);
//         head = newNode;
//         tail = newNode;
//         return;
//     }

//     Node* newNode = new Node(data);
//     tail->next = newNode;
//     tail = newNode;
// }

// int findLength(Node* &head){
//     int len = 0;
//     Node* temp = head;
//     while(temp!=NULL){
//         temp = temp->next;
//         len++;
//     }
//     return len; 
// }

// void InsertAtposition(int data, int position, Node* &head, Node* &tail){
//     if(head == NULL){
//         Node* newNode = new Node(data);
//         head = newNode;
//         tail = newNode;
//         return;
//     } 

//     if(position==0){
//         InsertAthead(head,tail,data);
//         return;
//     }

//     int length = findLength(head);
//     if(position>=length){
//         InsertAttail(head,tail,data);
//         return;
//     }

//     int i = 1;
//     Node* prev = head;
//     while(i<position){
//         prev = prev->next;
//         i++;
//     }
//     Node* curr = prev->next;

//     Node* newNode = new Node(data);

//     newNode->next = curr;

//     prev->next = newNode;
// }

// void deleteNode(int position, Node* &head, Node* &tail){
//     if(head == NULL){
//         cout<<"Cannot delete LL is empty"<<endl;
//         return;
//     }

//     if(position == 1){
//         Node* temp = head;
//         head = head->next;
//         temp->next = NULL;
//         delete temp;
//     }

//     int len = findLength(head);
//     if(position == len){
//         int i = 1;
//         Node* prev = head;
//         while(i<position-1){
//             prev = prev->next;
//             i++;
//         }

//         prev->next = NULL;

//         Node* temp = tail;

//         tail = prev;

//         delete temp;
//     }
// }

// void print(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }

// int main(){
//     Node* head = NULL;
//     Node* tail = NULL;
//     InsertAthead(head,tail,10);
//     InsertAthead(head,tail,20);
//     InsertAthead(head,tail,30);
//     InsertAthead(head,tail,40);
//     InsertAthead(head,tail,50);
//     InsertAttail(head,tail,99);
//     InsertAtposition(101,4,head,tail);

//     print(head);
//     cout<<endl;
//     cout<<"After deleting"<<endl;
//     deleteNode(7, head, tail);

//     print(head);
//     cout<<endl;
// }