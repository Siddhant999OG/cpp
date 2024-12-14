// TOP VIEW //

// #include<iostream>
// #include<queue>
// #include<map>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left = NULL;
//     Node* right = NULL;

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

// void topview(Node* root){
//     if(root == NULL){
//         return;
//     }

//     map<int, int> mp;
//     queue<pair<Node*, int>> q;
//     q.push({root, 0});

//     while(!q.empty()){
//         auto curr = q.front();
//         q.pop();
//         Node* node = curr.first;
//         int dist = curr.second;

//         if(mp.find(dist) == mp.end()){
//             mp[dist] = node->data;
//         }

//         if(node->left){
//             q.push({node->left, dist-1});
//         }
//         if(node->right){
//             q.push({node->right, dist+1});
//         }
//     }

//     for(auto i : mp){
//         cout<<i.second<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     Node* root = NULL;
//     root = buildTree();
//     topview(root);
// }




// BOTTOM VIEW

// #include<iostream>
// #include<queue>
// #include<map>
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

// void bottomview(Node* root){
//     if(root == NULL){
//         return;
//     }

//     map<int, int> mp;
//     queue<pair<Node*, int>> q;
//     q.push({root, 0});

//     while(!q.empty()){
//         auto curr = q.front();
//         q.pop();
//         Node* node = curr.first;
//         int dist = curr.second;

//         mp[dist] = node->data;  //update hoti rhegi value phle 30 tha to uski jgh 60 store hoga etc..

//         if(node->left){
//             q.push({node->left, dist-1});
//         }
//         if(node->right){
//             q.push({node->right, dist+1});
//         }
//     }

//     for(auto i : mp){
//         cout<<i.second<<" ";
//     }
// }

// int main(){
//     Node* root = NULL;
//     root = buildTree();
//     bottomview(root);
// }




// LEFT VIEW


// #include<iostream>
// #include<vector>
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

// void leftview(Node* root, int level, vector<int>& ans){
//     if(root == NULL){
//         return;
//     }

//     if(level == ans.size()){
//         ans.push_back(root->data);
//     }

//     leftview(root->left, level+1, ans);
//     leftview(root->right, level+1, ans);
// }

// int main(){
//     Node* root = NULL;
//     root = buildTree();
//     vector<int> ans;
//     int level = 0;
//     leftview(root, level, ans);

//     for(auto i : ans){
//         cout<<i<<" ";
//     }
// }


// RIGHT VIEW


// #include<iostream>
// #include<queue>
// #include<map>
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

// void RightView(Node* root, vector<int>& ans, int level){
//     if(root == NULL){
//         return;
//     }

//     if(level == ans.size()){
//         ans.push_back(root->data);
//     }

//     RightView(root->right, ans, level+1);
//     RightView(root->left, ans, level+1);
// }

// int main(){
//     Node* root = buildTree();

//     vector<int> ans;
//     int level = 0;
//     RightView(root, ans, level);

//     cout<<"Printing The ans"<<endl;

//     for(auto i : ans){
//         cout<<i<<" ";
//     }
// }





// BOUNDARY TRAVERSAL


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

void left(Node* root){
    if(root == NULL){
        return;
    }

    if(root->left == NULL && root->right == NULL){
        return;
    }

    cout<<root->data<<" ";

    if(root->left){
        left(root->left);
    }
    else{
        left(root->right);
    }
}

void leaf(Node* root){
    if(root == NULL){
        return;
    }

    if(root->left == NULL && root->right == NULL){
        cout<<root->data<<" ";
    }
    leaf(root->left);
    leaf(root->right);
}

void right(Node* root){
    if(root == NULL){
        return;
    }

    if(root->left == NULL && root->right == NULL){
        return;
    }

    if(root->right){
        right(root->right);
    }
    else{
        right(root->left);
    }

    cout<<root->data<<" ";
}

void boundry(Node* root){
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";

    left(root->left);
    leaf(root);
    right(root->right);
}

int main(){
    Node* root = NULL;
    root = buildTree();
    boundry(root);
}