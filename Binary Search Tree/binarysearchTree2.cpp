#include<iostream>
#include<queue>
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

Node* insertIntoData(Node* root, int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }

    if(root->data > data){
        root->left = insertIntoData(root->left, data);
    }
    else{
        root->right = insertIntoData(root->right, data);
    }

    return root;
}

void buildTree(Node*& root){
    int data;
    cin>>data;

    while(data != -1){
        root = insertIntoData(root, data);
        cin>>data;
    }
}

void levelOrder(Node* root){
    if(root == NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* curr = q.front();
        q.pop();
        if(curr == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<curr->data<<" ";
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
    }
}

Node* maketree(int inorder[], int s, int e){
    if(s>e){
        return NULL;
    }

    int mid = (s+e)/2;
    Node* root = new Node(inorder[mid]);

    root->left = maketree(inorder, s, mid-1);
    root->right = maketree(inorder, mid+1, e);
    return root;
}

int main(){
    int inorder[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(inorder)/sizeof(inorder[0]);
    Node* root = maketree(inorder, 0, size);
    levelOrder(root);
}