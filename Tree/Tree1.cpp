// LEVEL ORDER TRAVERSAL

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

// Node* buildTree(){
//     int data;
//     cin>>data;

//     if(data == -1){
//         return NULL;
//     }

//     Node* root = new Node(data);
//     root->left = buildTree();
//     root->right = buildTree();

//     return root;
// }

// void levelOrder(Node* root){
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
//     root = buildTree(); 
//     levelOrder(root);
// }




// INORDER

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* right;
//     Node* left;

//     Node(int data){
//         this->data = data;
//         left = NULL;
//         right = NULL;
//     }
// };

// Node* buildTree(){
//     int data;
//     cin>>data;

//     if(data == -1){
//         return NULL;
//     }

//     Node* root = new Node(data);
//     root->left = buildTree();
//     root->right = buildTree();

//     return root;
// }

// void Inorder(Node* root){
//     if(root == NULL){
//         return;
//     }

//     Inorder(root->left);
//     cout<<root->data<<" ";
//     Inorder(root->right);
// }

// int main(){
//     Node* root = NULL;
//     root = buildTree();
//     Inorder(root);
// }




// PREORDER

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* right;
//     Node* left;

//     Node(int data){
//         this->data = data;
//         left = NULL;
//         right = NULL;
//     }
// };

// Node* buildTree(){
//     int data;
//     cin>>data;

//     if(data == -1){
//         return NULL;
//     }

//     Node* root = new Node(data);
//     root->left = buildTree();
//     root->right = buildTree();

//     return root;
// }

// void PreOrder(Node* root){
//     if(root == NULL){
//         return;
//     }

//     cout<<root->data<<" ";
//     PreOrder(root->left);
//     PreOrder(root->right);
// }

// int main(){
//     Node* root = NULL;
//     root = buildTree();
//     PreOrder(root);
// }




// POSTORDER

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* right;
//     Node* left;

//     Node(int data){
//         this->data = data;
//         left = NULL;
//         right = NULL;
//     }
// };

// Node* buildTree(){
//     int data;
//     cin>>data;

//     if(data == -1){
//         return NULL;
//     }

//     Node* root = new Node(data);
//     root->left = buildTree();
//     root->right = buildTree();

//     return root;
// }

// void PostOrder(Node* root){
//     if(root == NULL){
//         return;
//     }

//     PostOrder(root->left);
//     PostOrder(root->right);
//     cout<<root->data<<" ";
// }

// int main(){
//     Node* root = NULL;
//     root = buildTree();
//     PostOrder(root);
// }




// Height of the Tree

// #include<iostream>
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

// Node* buildTree(){
//     int data;
//     cin>>data;

//     if(data == -1){
//         return NULL;
//     }

//     Node* root = new Node(data);
//     root->left = buildTree();
//     root->right = buildTree();

//     return root;
// }

// int height(Node* root){
//     if(root == NULL){
//         return 0;
//     }

//     int left = height(root->left);
//     int right = height(root->right);

//     int ans = max(left, right) + 1;
// }

// int main(){
//     Node* root = NULL;
//     root = buildTree();
//     int ans = height(root);
//     cout<<ans;
// }




// DIAMETER OF A TREE

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node* buildTree(){
    int data;
    cin>>data;

    if(data == -1){
        return NULL;
    }

    Node* root = new Node(data);
    root->left = buildTree();
    root->right = buildTree();

    return root;
}

int height(Node* root){
    if(root == NULL){
        return 0;
    }

    int left = height(root->left);
    int right = height(root->right);

    int ans = max(left, right) + 1;
    return ans;
}

int diameter(Node* root){
    if(root == NULL){
        return 0;
    }

    int left = diameter(root->left);
    int right = diameter(root->right);

    int ans = height(root->left) + height(root->right) + 1;

    return max(ans, max(left, right));
}

int main(){
    Node* root = NULL;
    root = buildTree();
    cout<<diameter(root);
}