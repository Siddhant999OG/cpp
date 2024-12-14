// // BINARY SEARCH TREE //

// #include<iostream>
// #include<queue>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//         this->data = data;
//         left = NULL;
//         right = NULL;
//     }
// };

// Node* insertIntoBST(Node* root, int data){
//     if(root == NULL){
//         root = new Node(data);
//         return root;
//     }

//     if(root->data > data){
//         root->left = insertIntoBST(root->left, data);
//     }

//     else{
//         root->right = insertIntoBST(root->right, data);
//     }

//     return root;
// }

// void preOrder(Node* root){
//     if(root == NULL){
//         return;
//     }

//     cout<<root->data<<" ";
//     preOrder(root->left);
//     preOrder(root->right);
// }

// void inOrder(Node* root){
//     if(root == NULL){
//         return;
//     }

//     preOrder(root->left);
//     cout<<root->data<<" ";
//     preOrder(root->right);
// }

// void postOrder(Node* root){
//     if(root == NULL){
//         return;
//     }

//     preOrder(root->left);
//     preOrder(root->right);
//     cout<<root->data<<" ";
// }

// void buildTree(Node*& root){
//     int data;
//     cin>>data;

//     while(data != -1){
//         root = insertIntoBST(root, data);
//         cin>>data;
//     }
// }

// void levelOrder(Node* root){
//     if(root == NULL){
//         return;
//     }

//     queue<Node*> q;
//     q.push(root);
//     q.push(NULL);

//     while(!q.empty()){
//         Node* curr = q.front();
//         q.pop();

//         if(curr == NULL){
//             cout<<endl;
//             if(!q.empty()){
//                 q.push(NULL);
//             }
//         }
//         else{
//             cout<<curr->data<<" ";
//             if(curr->left){
//                 q.push(curr->left);
//             }
//             if(curr->right){
//                 q.push(curr->right);
//             }
//         }
//     }
// }

// int main(){
//     Node* root = NULL;
//     buildTree(root);
//     levelOrder(root);
//     preOrder(root);
//     inOrder(root);
//     postOrder(root);
// }






// SEARCHING IN BST

// #include<iostream>
// #include<queue>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//         this->data = data;
//         left = NULL;
//         right = NULL;
//     }
// };

// Node* insertIntoTree(Node* root, int data){
//     if(root == NULL){
//         root = new Node(data);
//         return root;
//     }

//     if(root->data > data){
//         root->left = insertIntoTree(root->left, data);
//     }
//     else{
//         root->right = insertIntoTree(root->right, data);
//     }

//     return root;
// }

// void buildTree(Node*& root){
//     int data;
//     cin>>data;

//     while(data != -1){
//         root = insertIntoTree(root, data);
//         cin>>data;
//     }
// }

// void levelOrder(Node* root){
//     if(root == NULL){
//         return;
//     }

//     queue<Node*> q;
//     q.push(root);
//     q.push(NULL);

//     while(!q.empty()){
//         Node* curr = q.front();
//         q.pop();

//         if(curr == NULL){
//             cout<<endl;
//             if(!q.empty()){
//                 q.push(NULL);
//             }
//         }
//         else{
//             cout<<curr->data<<" ";
//             if(curr->left){
//                 q.push(curr->left);
//             }
//             if(curr->right){
//                 q.push(curr->right);
//             }
//         }
//     }
// }

// bool findTarget(Node* root, int target){
//     if(root == NULL){
//         return false;
//     }

//     if(root->data == target){
//         return true;
//     }
//     if(root->data > target){
//         findTarget(root->left, target);
//     }
//     else{
//         findTarget(root->right, target);
//     }
// }

// int main(){
//     Node* root = NULL;
//     buildTree(root);
//     levelOrder(root);
//     int target;
//     cout<<"enter the target value"<<endl;
//     cin>>target;
//     if (findTarget(root, target)) {
//         cout << "Target found!" << endl;
//     } 
//     else {
//         cout << "Target not found!" << endl;
//     }
// }





// MINIMUM AND MAXIMUM VALUE

// #include<iostream>
// #include<queue>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//         this->data = data;
//         left = NULL;
//         right = NULL;
//     }
// };

// Node* insertIntoTree(Node* root, int data){
//     if(root == NULL){
//         root = new Node(data);
//         return root;
//     }

//     if(root->data > data){
//         root->left = insertIntoTree(root->left, data);
//     }
//     if(root->data < data){
//         root->right = insertIntoTree(root->right, data);
//     }

//     return root;
// }

// void buildTree(Node*& root){
//     int data;
//     cin>>data;

//     while(data != -1){
//         root = insertIntoTree(root, data);
//         cin>>data;
//     }
// }

// void levelOrder(Node* root){
//     if(root == NULL){
//         return;
//     }

//     queue<Node*> q;
//     q.push(root);
//     q.push(NULL);

//     while(!q.empty()){
//         Node* curr = q.front();
//         q.pop();

//         if(curr == NULL){
//             cout<<endl;
//             if(!q.empty()){
//                 q.push(NULL);
//             }
//         }
//         else{
//             cout<<curr->data<<" ";
//             if(curr->left){
//                 q.push(curr->left);
//             }
//             if(curr->right){
//                 q.push(curr->right);
//             }
//         }
//     }
// }

// int findmin(Node* root){
//     if(root == NULL){
//         return 0;
//     }

//     while(root->left != NULL){
//         root = root->left;
//     }

//     return root->data;
// }

// int findmax(Node* root){
//     if(root == NULL){
//         return 0;
//     }

//         while(root->right != NULL){
//         root = root->right;
//     }

//     return root->data;
// }

// int main(){
//     Node* root = NULL;
//     buildTree(root);
//     levelOrder(root);

//     cout<<findmin(root);
//     cout<<findmax(root);
// }





// DELETION OF NODE

#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node* insertIntoBST(Node* root, int data) {
    if (root == NULL) {
        root = new Node(data);
        return root;
    }
    if (root->data > data) {
        root->left = insertIntoBST(root->left, data);
    }
    else {
        root->right = insertIntoBST(root->right, data);
    }
    return root;
}

void buildTree(Node* &root) {
    int data;
    cin >> data;

    while (data != -1) {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

Node* findNodeBST(Node* root, int target){
    if(root == NULL){
        return NULL;
    }
    if(root->data == target){
        return root;
    }
    if(root->data > target){
        return findNodeBST(root->left, target);
    }
    else{
        return findNodeBST(root->right, target);
    }
}

int maxVal(Node* root){
    Node* temp = root;
    if(temp == NULL){
        return 0;
    }

    while(temp->right!=NULL){
        temp = temp->right;
    }
    return temp->data;
}

Node* deleteNode(Node* root, int target){
    if(root == NULL){
        return NULL;
    }

    if(root->data == target){
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        else if(root->left != NULL && root->right == NULL){
            Node* child = root->left;
            delete root;
            return child;
        }

        else if(root->left == NULL && root->right != NULL){
            Node* child = root->right;
            delete root;
            return child;
        }

        else{
            int maxi = maxVal(root->left);
            root->data = maxi;
            root->left = deleteNode(root->left, maxi);
            return root;
        }
    }

    else if(root->data > target){
        root->left = deleteNode(root->left, target);
    }

    else if(root->data < target){
        root->right = deleteNode(root->right, target);
    }

    return root;
}

void LevelorderTraversal(Node* root) {
    if (root == NULL)
        return;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {

        Node* current = q.front();
        q.pop();

        if(current == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << current->data << " ";

            if (current->left) {
                q.push(current->left);
            }
            if (current->right) {
                q.push(current->right);
            }
        }
    }
}

int main() {
    Node* root = NULL;
    buildTree(root);

    deleteNode(root, 100);
    cout << "Level Order Traversal: "<<endl;
    LevelorderTraversal(root);

    return 0;
}