// CONVERT BINARY TREE TO SUM TREE //

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

// int sumTree(Node* root){
//     if(root == NULL){
//         return 0;
//     }

//     int left = sumTree(root->left);
//     int right = sumTree(root->right);
//     int ans = left + right + root->data;

//     return ans;
// }

// int main(){
//     Node* root = NULL;
//     root = buildTree();
//     cout<<sumTree(root);
// }




// KTH ANCESTOR

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

bool kthancestor(Node* root, int& k, int p){
    if(root == NULL){
        return false;
    }

    if(root->data == p){
        return true;
    }

    bool left = kthancestor(root->left, k, p);
    bool right = kthancestor(root->right, k, p);

    if(left || right){
        k--;
    }

    if(k == 0){
        cout<<root->data<<" ";
        k = -1;
    }

    return left || right;
}

int main(){
    Node* root = NULL;
    root = buildTree();
    int k = 2;
    int p = 60;
    kthancestor(root, k, p);
}


// k = -1 isliye liya h jisse left ki call true aa jaye 
// aur right ki left to k = 0 ho jayega and cout krdega vo