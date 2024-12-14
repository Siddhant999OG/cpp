// FIND THE MIDDLE //

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

// Node* findMiddle(Node* &head){

//     if(head == NULL){
//         cout<<"LL is empty"<<endl;
//         return head;
//     }

//     if(head ->next == NULL){
//         return head;
//     }

//     Node* slow = head;
//     Node* fast = head;

//     while(slow!=NULL && fast!=NULL){
//         fast = fast->next;
//         if(fast!=NULL){
//             fast = fast->next;
//             slow = slow->next;
//         }
//     }
//     return slow;
// }

// void print(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }

// int main(){
//     Node* head = new Node(10);
//     Node* second = new Node(20);
//     Node* third = new Node(30);
//     Node* fourth = new Node(40);
//     Node* fifth = new Node(50);

//     head->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;

//     print(head);
//     cout<<endl;
//     cout<<"Middle Node is: "<<findMiddle(head)->data<<endl;
// }




// REVERSE LL IN GROUP OF K

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

// int getLength(Node* head){
//     int len = 0;
//     Node* temp = head;
//     while(temp!=NULL){
//         temp = temp->next;
//         len++;
//     }
//     return len;
// }

// Node* reverseKNode(Node* head, int k){
//     if(head==NULL){
//         cout<<"LL is empty"<<endl;
//         return NULL;
//     }

//     int len = getLength(head);
//     if(k > len){
//         return head;
//     }

//     Node* prev = NULL;
//     Node* curr = head;
//     Node* forward = curr->next;
//     int count = 0;
//     while(count<k){
//         forward = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = forward;
//         count++;
//     }

//     if(forward!=NULL){
//         head->next = reverseKNode(forward,k);
//     }

//     return prev;
// }

// void print(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }

// int main(){
//     Node* head = new Node(10);
//     Node* second = new Node(20);
//     Node* third = new Node(30);
//     Node* fourth = new Node(40);
//     Node* fifth = new Node(50);
//     Node* sixth = new Node(60);

//     head->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;
//     fifth->next = sixth;

//     print(head);
//     head = reverseKNode(head,3);
//     cout<<endl;
//     print(head);
// }





// CHECK IF LL IS CIRCULAR

// #include<iostream>
// using namespace std;

// class Node{
// public:
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

// bool checkIfcircular(Node* head){
//     Node* fast = head;
//     Node* slow = head;

//     while(fast != NULL && fast->next != NULL){
//         slow = slow->next;
//         fast = fast->next->next;
//         if(fast == slow){
//             return true;
//         }
//     }
//     return false;
// }

// void print(Node* head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// } 

// int main(){
//     Node* head = new Node(10);
//     Node* second = new Node(20);
//     Node* third = new Node(30);
//     Node* fourth = new Node(40);
//     Node* fifth = new Node(50);
//     Node* sixth = new Node(60);

//     head->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;
//     fifth->next = sixth;
//     sixth->next = second;

//     bool ans = checkIfcircular(head);
//     cout << boolalpha << ans;
    
//     return 0;
// }





// DETECT AND DELETE LOOP

#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(){
        this->data = 0;
        this->next = NULL;
        this->prev = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;

    }
};

bool checkIfcircular(Node* &head){
    if(head==NULL){
        return false;
    }

    Node* fast = head;
    Node* slow = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow){
            return true;
        }
    }
    return false;
}

Node* startingPoint(Node* head){
    if(head==NULL){
        return NULL;
    }

    Node* fast = head;
    Node* slow = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow){
            slow = head;
            break;
        }
    }
    while(slow!=fast){
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}

Node* RemoveLoop(Node* head){
    if(head==NULL){
        return NULL;
    }

    Node* fast = head;
    Node* slow = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow){
            slow = head;
            break;
        }
    }
    Node* prev = fast;
    while(slow!=fast){
        prev = fast;
        slow = slow->next;
        fast = fast->next;
    }
    prev->next = NULL;
    return slow;
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
} 

int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);
    Node* seventh = new Node(70);
    Node* eighth = new Node(80);
    Node* ninth = new Node(90);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eighth;
    eighth->next = ninth;
    ninth->next = fifth;

    cout <<"LL is loop or not : "<< boolalpha<< checkIfcircular(head)<<endl;
    cout <<"Starting Point of the loop is : "<< startingPoint(head)->data<<endl;
    RemoveLoop(head);
    print(head);
    cout<<endl;
    cout <<"LL is loop or not : "<< boolalpha<< checkIfcircular(head)<<endl;
    return 0;
}