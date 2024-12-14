// CHECK IF LINKED LIST IS PALINDROME OR NOT //

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

// Node* reverse(Node* head){
//     Node* prev = NULL;
//     Node* curr = head;
//     Node* next = curr->next;

//     while(curr!=NULL){
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }
//     return prev;
// }

// bool checkPalindrome(Node* &head){
//     if(head==NULL){
//         cout<<"LL is empty"<<endl;
//         return true;
//     }
//     if(head->next == NULL){
//         return true;
//     }

//     Node* slow = head;
//     Node* fast = head->next;

//     while(fast!=NULL){
//         fast = fast->next;
//         if(fast!=NULL){
//             fast = fast->next;
//             slow = slow->next;
//         }
//     }
//     Node* reverseLL = reverse(slow->next);

//     slow->next = reverseLL;

//     Node* temp1 = head;
//     Node* temp2 = reverseLL;

//     while(temp2!=NULL){
//         if(temp1->data != temp2->data){
//             return false;
//         }
//         else{
//             temp1 = temp1->next;
//             temp2 = temp2->next;
//         }
//     }
//     return true;
// }

// int main(){
//     Node* head = new Node(10);
//     Node* second = new Node(20);
//     Node* third = new Node(30);
//     Node* fourth = new Node(20);
//     Node* fifth = new Node(10);
    
//     head->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;

//     bool isPalindrome = checkPalindrome(head);

//     if(isPalindrome){
//         cout<<"LL is a valid palindrome"<<endl;
//     }
//     else{
//         cout<<"LL is not a palindrome"<<endl;
//     }
// }





// REMOVE DUPLICATES FROM LL

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

// void removeDuplicate(Node* head){
//     if(head==NULL){
//         return;
//     }

//     if(head->next == NULL){
//         return;
//     }

//     Node* curr = head;
//     while(curr!=NULL){
//         if((curr->next!=NULL)&&(curr->data == curr->next->data)){
//             curr->next = curr->next->next;
//         }
//         else{
//             curr = curr->next;
//         }
//     }
// }

// int main(){
//     Node* head = new Node(10);
//     Node* second = new Node(20);
//     Node* third = new Node(20);
//     Node* fourth = new Node(30);
//     Node* fifth = new Node(30);
    
//     head->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;

//     print(head);

//     cout<<endl;
//     removeDuplicate(head);

//     print(head);
// }





// SORT 0's, 1's, 2's 
// METHOD-1 DATA REPLACEMENT

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

// void sortZeroOneTwo(Node* head){
//     int zero = 0;
//     int one = 0;
//     int two = 0;

//     Node* temp = head;
//     while(temp!=NULL){
//         if(temp->data == 0){
//             zero++;
//         }
//         else if(temp->data == 1){
//             one++;
//         }
//         else if(temp->data == 2){
//             two++;
//         }
//         temp = temp->next;
//     }

//     temp = head;
//     while(temp!=NULL){
//         while(zero--){
//             temp->data = 0;
//             temp = temp->next;
//         }
//         while(one--){
//             temp->data = 1;
//             temp = temp->next;
//         }
//         while(two--){
//             temp->data = 2;
//             temp = temp->next;
//         }
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
//     Node* head = new Node(0);
//     Node* second = new Node(1);
//     Node* third = new Node(2);
//     Node* fourth = new Node(0);
//     Node* fifth = new Node(1);
    
//     head->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;

//     print(head);

//     cout<<endl;
//     sortZeroOneTwo(head);

//     print(head);
// }



// METHOD-2 

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

// Node* sort2(Node* head) {
//     if(head == NULL){
//         return NULL;
//     }

//     if(head->next == NULL){
//         return head;
//     }

//     Node* zeroHead = new Node(-1);
//     Node* zeroTail = zeroHead;

//     Node* oneHead = new Node(-1);
//     Node* oneTail = oneHead;

//     Node* twoHead = new Node(-1);
//     Node* twoTail = twoHead;

//     Node* curr = head;
//     while (curr!=NULL) {
//         if (curr->data == 0) {
//             Node* temp = curr;
//             curr = curr->next;
//             temp->next = nullptr;

//             zeroTail->next = temp;
//             zeroTail = temp;
//         } else if (curr->data == 1) {
//             Node* temp = curr;
//             curr = curr->next;
//             temp->next = nullptr;

//             oneTail->next = temp;
//             oneTail = temp;
//         } else if (curr->data == 2) {
//             Node* temp = curr;
//             curr = curr->next;
//             temp->next = nullptr;

//             twoTail->next = temp;
//             twoTail = temp;
//         }
//     }

//     Node* temp = oneHead;
//     oneHead = oneHead->next;
//     temp->next = NULL;
//     delete temp;

//     temp = twoHead;
//     twoHead = twoHead->next;
//     temp->next = NULL;
//     delete temp;

//     if (oneHead) {
//         zeroTail->next = oneHead;
//         if (twoHead) {
//             oneTail->next = twoHead;
//         }
//     } else {
//         if (twoHead) {
//             zeroTail->next = twoHead;
//         }
//     }

//     temp = zeroHead;
//     zeroHead = zeroHead->next;
//     delete temp;

//     return zeroHead;
// }

// void print(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }

// int main(){
//     Node* head = new Node(0);
//     Node* second = new Node(1);
//     Node* third = new Node(2);
//     Node* fourth = new Node(0);
//     Node* fifth = new Node(1);
    
//     head->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;

//     print(head);

//     cout<<endl;
//     cout<<"Printing the sorted LL "<<endl;
//     head = sort2(head);

//     print(head);
// }





// ADD 2 NUMBER REPRESENTED BY LL

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

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

Node* reverse(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next = curr->next;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node* solve(Node* head1, Node* head2){
    head1 = reverse(head1);
    head2 = reverse(head2);

    Node* ansHead = NULL;
    Node* ansTail = NULL;
    int carry = 0;
    while(head1!=NULL && head2!=NULL){
        int sum = carry+head1->data+head2->data;
        int digit = sum%10;
        carry = sum/10;
        Node* newNode = new Node(digit);

        if(ansHead==NULL){
            ansHead = newNode;
            ansTail = newNode;
        }
        else{
            ansTail->next = newNode;
            ansTail = newNode;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    while(head1!=NULL){
        int sum = carry+head1->data;
        int digit = sum%10;
        carry = sum/10;
        Node* newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
        head1 = head1->next;
    }

    while(head2!=NULL){
        int sum = carry+head2->data;
        int digit = sum%10;
        carry = sum/10;
        Node* newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
        head2 = head2->next;
    }

    while(carry!=0){
        int sum = carry;
        int digit = sum%10;
        carry = sum/10;
        Node* newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
    }

    ansHead = reverse(ansHead);
    return ansHead;
}

int main(){
    Node* head1 = new Node(2);
    Node* second1 = new Node(4);
    head1->next = second1;

    Node* head2 = new Node(2);
    Node* second2 = new Node(3);
    Node* third2 = new Node(4);
    head2->next = second2;
    second2->next = third2;

    Node* ans = solve(head1, head2);

    print(ans);
}
