// PRINTING DOUBLY LINKED LIST //

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;
//     Node* prev;

//     Node(){
//         this->data = 0;
//         this->next = NULL;
//         this->prev = NULL;
//     }
//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };

// void print(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }

// int getLength(Node* head){
//     int len = 0;
//     Node* temp = head;
//     while(temp!=NULL){
//         len++;
//         temp = temp->next;
//     }
//     return len;
// }

// int main(){
//     Node* first = new Node(10);
//     Node* second = new Node(20);
//     Node* third = new Node(30);
//     Node* fourth = new Node(40);

//     first->next = second;
//     second->prev = first;

//     second->next = third;
//     third->prev = second;

//     third->next = fourth;
//     fourth->prev = third;

//     print(first);
// }




// INSERT AT HEAD


// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;
//     Node* prev;

//     Node(){
//         this->data = 0;
//         this->next = NULL;
//         this->prev = NULL;
//     }

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };

// void print(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }

// void InsertAThead(Node* &head, Node* &tail, int data){
//     if(head == NULL){
//         Node* newhead = new Node(data);
//         head = newhead;
//         tail = newhead;
//     }

//     Node* newhead = new Node(data);

//     newhead->next = head;

//     head->prev = newhead;

//     head = newhead;
// }

// int main(){
//     Node* first = new Node(10);
//     Node* second = new Node(20);
//     Node* third = new Node(30);
//     Node* fourth = new Node(40);
//     Node* head = first;
//     Node* tail = fourth;

//     first->next = second;
//     second->prev = first;

//     second->next = third;
//     third->prev = second;

//     third->next = fourth;
//     fourth->prev = third;

//     InsertAThead(head,tail,101);

//     print(head);
// }




// INSERT AT TAIL


// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;
//     Node* prev;

//     Node(){
//         this->data = 0;
//         this->next = NULL;
//         this->prev = NULL;
//     }

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };

// void print(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }

// void InsertAThead(Node* &head, Node* &tail, int data){
//     if(head == NULL){
//         Node* newHead = new Node(data);
//         head = newHead;
//         tail = newHead;
//     }

//     Node* newHead = new Node(data);
//     newHead->next = head;
//     head->prev = newHead;
//     head = newHead;
// }

// void insertATtail(Node* &head, Node* &tail, int data){
//     if(head == NULL){
//         Node* newHead = new Node(data);
//         head = newHead;
//         tail = newHead;
//     }

//     Node* newNode = new Node(data);
//     tail->next = newNode;
//     newNode->prev = tail;
//     tail = newNode;
// }

// int main(){
//     Node* first = new Node(10);
//     Node* second = new Node(20);
//     Node* third = new Node(30);
//     Node* fourth = new Node(40);
//     Node* head = first;
//     Node* tail = fourth;

//     first->next = second;
//     second->prev = first;

//     second->next = third;
//     third->prev = second;

//     third->next = fourth;
//     fourth->prev = third;

//     InsertAThead(head,tail,101);
//     insertATtail(head,tail,999);

//     print(head);
// }




// INSERT AT POSITION

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;
//     Node* prev;

//     Node(){
//         this->data = 0;
//         this->next = NULL;
//         this->prev = NULL;
//     }

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };

// void print(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }

// void InsertAThead(Node* &head, Node* &tail, int data){
//     if(head == NULL){
//         Node* newHead = new Node(data);
//         head = newHead;
//         tail = newHead;
//     }

//     Node* newHead = new Node(data);
//     newHead->next = head;
//     head->prev = newHead;
//     head = newHead;
// }

// void insertATtail(Node* &head, Node* &tail, int data){
//     if(head == NULL){
//         Node* newHead = new Node(data);
//         head = newHead;
//         tail = newHead;
//     }

//     Node* newNode = new Node(data);
//     tail->next = newNode;
//     newNode->prev = tail;
//     tail = newNode;
// }

// int findLength(Node* head){
//     int len = 0;
//     Node* temp = head;
//     while(temp!=NULL){
//         len++;
//         temp = temp->next;
//     }
//     return len;
// }

// void insertAtPosition(int position, int data, Node* &head, Node* &tail){
//     if(position==0){
//         InsertAThead(head, tail, data);
//         return;
//     }

//     int len = findLength(head);

//     if(position >= len){
//         insertATtail(head, tail, data);
//         return;
//     }

//     int i = 0;
//     Node* prevNode = head;
//     while(i<position-1){
//         prevNode = prevNode->next;
//         i++;
//     }
//     Node* curr = prevNode->next;

//     Node* newNode = new Node(data);

//     prevNode->next = newNode;
//     newNode->prev = prevNode;

//     curr->prev = newNode;
//     newNode->next = curr;
// }

// int main(){
//     Node* first = new Node(10);
//     Node* second = new Node(20);
//     Node* third = new Node(30);
//     Node* fourth = new Node(40);
//     Node* head = first;
//     Node* tail = fourth;

//     first->next = second;
//     second->prev = first;

//     second->next = third;
//     third->prev = second;

//     third->next = fourth;
//     fourth->prev = third;

//     InsertAThead(head,tail,101);
//     insertATtail(head,tail,999);
//     insertAtPosition(2,777, head, tail);

//     print(head);
// }




// DELETION

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;
//     Node* prev;

//     Node(){
//         this->data = 0;
//         this->next = NULL;
//         this->prev = NULL;
//     }

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };

// void print(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }

// void InsertAThead(Node* &head, Node* &tail, int data){
//     if(head == NULL){
//         Node* newHead = new Node(data);
//         head = newHead;
//         tail = newHead;
//     }

//     Node* newHead = new Node(data);
//     newHead->next = head;
//     head->prev = newHead;
//     head = newHead;
// }

// void insertATtail(Node* &head, Node* &tail, int data){
//     if(head == NULL){
//         Node* newHead = new Node(data);
//         head = newHead;
//         tail = newHead;
//     }

//     Node* newNode = new Node(data);
//     tail->next = newNode;
//     newNode->prev = tail;
//     tail = newNode;
// }

// int findLength(Node* head){
//     int len = 0;
//     Node* temp = head;
//     while(temp!=NULL){
//         len++;
//         temp = temp->next;
//     }
//     return len;
// }

// void insertAtPosition(int position, int data, Node* &head, Node* &tail){
//     if(position==0){
//         InsertAThead(head, tail, data);
//         return;
//     }

//     int len = findLength(head);

//     if(position >= len){
//         insertATtail(head, tail, data);
//         return;
//     }

//     int i = 0;
//     Node* prevNode = head;
//     while(i<position-1){
//         prevNode = prevNode->next;
//         i++;
//     }
//     Node* curr = prevNode->next;

//     Node* newNode = new Node(data);

//     prevNode->next = newNode;
//     newNode->prev = prevNode;

//     curr->prev = newNode;
//     newNode->next = curr;
// }

// void deleteNode(int position, Node* &head, Node* &tail){
//     if(head==NULL){
//         cout<<"LL is empty"<<endl;
//     }

//     if(head->next == NULL){
//         Node* temp = head;
//         head == NULL;
//         tail == NULL;
//         delete temp;
//         return;
//     }

//     if(position == 0){
//         Node* temp = head;
//         head = head->next;
//         head->prev = NULL;
//         temp->next = NULL;
//         delete temp;
//         return;
//     }

//     int length = findLength(head);
//     if(position == length){
//         Node* temp = tail;
//         tail = tail->prev;

//         temp->prev = NULL;
//         tail->next = NULL;

//         delete temp;
//     }

//     int i = 0;
//     Node* prev = head;
//     while(i<position-1){
//         prev = prev->next;
//         i++;
//     }

//     Node* deleteNode = prev->next;
//     Node* curr = deleteNode->next;
//     prev->next = curr;
//     curr->prev = prev;
//     deleteNode->prev = NULL;
//     deleteNode->next = NULL;
//     delete deleteNode;
// }

// int main(){
//     Node* first = new Node(10);
//     Node* second = new Node(20);
//     Node* third = new Node(30);
//     Node* fourth = new Node(40);
//     Node* head = first;
//     Node* tail = fourth;

//     first->next = second;
//     second->prev = first;

//     second->next = third;
//     third->prev = second;

//     third->next = fourth;
//     fourth->prev = third;

//     InsertAThead(head,tail,101);
//     insertATtail(head,tail,999);
//     insertAtPosition(2,777, head, tail);
//     print(head);
//     cout<<endl;
//     cout<<"After Deleting"<<endl;
//     deleteNode(2,head,tail);

//     print(head);
// }




// REVERSE A LINKED LIST

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data = 0;
        this->next = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void InsertAthead(Node* &head, Node* &tail, int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void InsertAttail(Node* &head, Node* &tail, int data){
    if(tail == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}

int findLength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp!=NULL){
        temp = temp->next;
        len++;
    }
    return len; 
}

void InsertAtposition(int data, int position, Node* &head, Node* &tail){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    } 

    if(position==0){
        InsertAthead(head,tail,data);
        return;
    }

    int length = findLength(head);
    if(position>=length){
        InsertAttail(head,tail,data);
        return;
    }

    int i = 1;
    Node* prev = head;
    while(i<position){
        prev = prev->next;
        i++;
    }
    Node* curr = prev->next;

    Node* newNode = new Node(data);

    newNode->next = curr;

    prev->next = newNode;
}

Node* reverse(Node* &prev, Node* &curr){
    if(curr==NULL){
        return prev;
    }

    Node* forward = curr->next;
    curr->next = prev;

    reverse(curr, forward);
}

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    InsertAthead(head,tail,10);
    InsertAthead(head,tail,20);
    InsertAthead(head,tail,30);
    InsertAthead(head,tail,40);
    InsertAthead(head,tail,50);
    InsertAttail(head,tail,99);
    InsertAtposition(101,7,head,tail);

    print(head);
    cout<<endl;

    Node* prev = NULL;
    Node* curr = head;
    head = reverse(prev, curr);
    print(head);
}