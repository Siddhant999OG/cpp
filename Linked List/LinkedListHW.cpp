///////////////////////////////
// KTH ELEMENT FROM THE LAST //
///////////////////////////////

// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;
    
//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void print(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }

// Node* findKthFromEnd(Node* head, int k) {
//     if (head == NULL || k <= 0) {
//         return NULL;
//     }

//     if(head->next == NULL){
//         return head;
//     }

//     Node* fast = head->next;
//     Node* slow = head;

//     // Move the fast pointer k nodes ahead
//     for (int i = 0; i < k; i++) {
//         if (fast != NULL) {
//             fast = fast->next; // k is greater than the length of the list
//         }
//         else{
//             return NULL;
//         }
//     }

//     // Move both pointers until the fast pointer reaches the end
//     while (fast != NULL) {
//         fast = fast->next;
//         slow = slow->next;
//     }

//     return slow;
// }

// int main() {
//     // Create a sample linked list
//     Node* head = new Node(1);
//     Node* second = new Node(2);
//     Node* third = new Node(3);
//     Node* fourth = new Node(4);
//     Node* fifth = new Node(5);

//     head->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;

//     print(head);
//     cout<<endl;
//     int k = 3; // Find the 2nd node from the end
//     Node* result = findKthFromEnd(head, k);

//     if (result != NULL) {
//         cout << "The " << k << "th node from the end is: " << result->data << endl;
//     } else {
//         cout << "Invalid input or k is greater than the length of the list." << endl;
//     }

//     return 0;
// }



/////////////////////////////////////
// INTERSECTION OF TWO LINKED LIST //
///////////////////////////////////// 

// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         ListNode* a = headA;
//         ListNode* b = headB;

//         while(a->next!=NULL && b->next != NULL){
//             if(a==b){
//                 return a;
//             }
//             a = a->next;
//             b = b->next;
//         }

//         if(a->next == NULL && b->next == NULL && a!=b){
//             return NULL;
//         }

//         // b ki length jyada hai a ki se 
//         if(b->next!=NULL){
//             int blen = 0;
//             while(b->next!=NULL){
//                 blen++;
//                 b = b->next;
//             }
//             while(blen--){
//                 headB = headB->next;
//             }
//         }

//         // a ki length jyada hai b ki se
//         else{
//             int alen = 0;
//             while(a->next!=NULL){
//                 alen++;
//                 a = a->next;
//             }
//             while(alen--){
//                 headA = headA->next;
//             }
//         }
//         while(headA!=headB){
//             headA = headA->next;
//             headB = headB->next;
//         }
//         return headA;
//     }
// };




//////////////////////////////////
// MERGE TWO SORTED LINKED LIST //
//////////////////////////////////


// #include<iostream>
// using namespace std;
// class ListNode{
//     public:
//     int val;
//     ListNode* next;

//     ListNode(int val){
//         this->val = val;
//         this->next = NULL;
//     }
// };

// ListNode* mergeTwoLists(ListNode* left, ListNode* right) {
//     if(left==NULL){
//         return right;
//     }
//     if(right==NULL){
//         return left;
//     }

//     ListNode* ans = new ListNode(-1);
//     ListNode* mptr = ans;

//     while(left!=NULL && right!=NULL){
//         if(left->val <= right->val){
//             mptr->next = left;
//             mptr = left;
//             left = left->next;
//         }
//         else{
//             mptr -> next = right;
//             mptr = right;
//             right = right->next;
//         }
//     }

//     while(left!=NULL){
//         mptr -> next = left;
//         mptr = left;
//         left = left->next;
//     }

//     while(right!=NULL){
//         mptr -> next = right;
//         mptr = right;
//         right = right->next;
//     }
//     return ans->next;
// }

// void print(ListNode* head){
//     ListNode* temp = head;
//     while(temp!=NULL){
//         cout<<temp->val<<" ";
//         temp = temp->next;
//     }
// }

// void print1(ListNode* fifth){
//     ListNode* temp = fifth;
//     while(temp!=NULL){
//         cout<<temp->val<<" ";
//         temp = temp->next;
//     }
// }

// int main(){
//     ListNode* head = new ListNode(1);
//     ListNode* second = new ListNode(2);
//     ListNode* third = new ListNode(4);
//     // ListNode* fourth = new ListNode(40);

//     head->next = second;
//     second->next = third;
//     // third->next = fourth;

//     ListNode* fifth = new ListNode(1);
//     ListNode* sixth = new ListNode(3);
//     ListNode* seventh = new ListNode(4);
//     // ListNode* eight = new ListNode(80);
//     // ListNode* ninth = new ListNode(90);

//     fifth->next = sixth;
//     sixth->next = seventh;
//     // seventh->next = eight;
//     // eight->next = ninth;

//     print(head);
//     cout<<endl;
//     print1(fifth);
//     cout<<endl;
//     print(mergeTwoLists(head, fifth));
// }





/////////////////////
// ROTATE THE LIST //
/////////////////////

// class Solution {
// public:

//     int getlength(ListNode* head){
//         int len=0;
//         ListNode* temp = head;
//         while(temp!=NULL){
//             temp = temp->next;
//             len++;
//         }
//         return len;
//     }
//     ListNode* rotateRight(ListNode* head, int k) {
//         if(head==NULL){
//             return NULL;
//         }

//         int len = getlength(head);
//         int actualRotateK = (k%len);
//         if(actualRotateK == 0){
//             return head;
//         }
//         int newlastNodepos = len-actualRotateK-1;
//         ListNode* newhead = NULL;
//         ListNode* newlastNode = head;
//         for(int i=0; i<newlastNodepos; i++){
//             newlastNode = newlastNode->next;
//         }
//         ListNode* newHead = newlastNode->next;
//         newlastNode->next = NULL;

//         ListNode* it = newHead;
//         while(it->next!=NULL){
//             it = it->next;
//         }
//         it->next = head;
//         return newHead;
//     }
// };