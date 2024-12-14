// PREORDER AND INORDER SE TREE BNAO

// #include <iostream>
// #include<queue>
// #include<unordered_map>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int data) {
//         this->data = data;
//         this->left = NULL;     
//         this->right = NULL;  
//     }
// };

// int findPosition(int arr[], int n, int element) {
//     for(int i=0; i<n; i++) {
//         if(arr[i] == element) {
//             return i;
//         }
//     }
//     return -1;
// }


// Node* buildTreeFromPreOrderInOrder(int inorder[], int preorder[], int size, int &preIndex, int inorderStart, int inorderEnd) {

//         //base case
//         if(preIndex >= size || inorderStart > inorderEnd) {
//             return NULL;
//         }

//         //Step A:
//         int element = preorder[preIndex++];
//         Node* root = new Node(element);
//         int pos = findPosition(inorder, size, element);

//         //step B:
//         root->left = buildTreeFromPreOrderInOrder(inorder, preorder, size, preIndex, inorderStart, pos-1);

//         //Step C:
//         root->right = buildTreeFromPreOrderInOrder(inorder, preorder, size, preIndex, pos+1, inorderEnd);

//         return root;
// }  


// void levelOrderTraversal(Node* root ) {
// 	queue<Node*> q;
// 	//initially
// 	q.push(root);
// 	q.push(NULL);

// 	while(!q.empty()) {
// 		//A
// 		Node* temp = q.front();
// 		//B
// 		q.pop();
		
// 		if(temp == NULL) {
// 			cout << endl;
// 			if(!q.empty()) {
// 				q.push(NULL);
// 			}	
// 		}
// 		else {
// 			//C
// 			cout << temp->data << " ";
// 			//D
// 			if(temp -> left) {
// 				q.push(temp ->left);
// 			}
// 			if(temp ->right) {
// 				q.push(temp->right);
// 			}
// 		}
		
		
// 	}
// }

// int main() {
//     int inorder[] = {40,20,50,10,60,30,70};
//     int preorder[] = {10,20,40,50,30,60,70};
//     int size = 7;
//     int preIndex = 0;
//     int inorderStart = 0;
//     int inorderEnd = size-1;

//     cout << "Building Tree: " << endl;
//     Node* root = buildTreeFromPreOrderInOrder(inorder, preorder,size, preIndex, inorderStart, inorderEnd );

//     cout<< endl << "Printing level order traversal " << endl;
//     levelOrderTraversal(root);
// }





// INORDER AND POSTORDER SE TREE BANANA

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

int findPos(int arr[], int n, int element){
    for(int i=0; i<n; i++){
        if(arr[i] == element){
            return i;
        }
    }
    return -1;
}

Node* buildTreeFromPostOrderInOrder(int inorder[], int postOrder[], int size, int& index, int start, int end){
    if(index < 0 || start > end){
        return NULL;
    }

    int rootNode = postOrder[index--];
    Node* root = new Node(rootNode);
    int pos = findPos(inorder, size, rootNode);

    root->right = buildTreeFromPostOrderInOrder(inorder, postOrder, size, index, pos+1, end);
    root->left = buildTreeFromPostOrderInOrder(inorder, postOrder, size, index, start, pos-1);

    return root;
}

void levelOrder(Node* root){
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

int main(){
    int inorder[] = {40,20,10,50,30,60};
    int postOrder[] = {40,20,50,60,30,10};
    int size = 6;
    int index = size-1;
    int start = 0;
    int end = size-1;


    cout << "Building Tree: " << endl;
    Node* root = buildTreeFromPostOrderInOrder(inorder, postOrder, size, index, start, end);

    cout<< endl << "Printing level order traversal " << endl;
    levelOrder(root);
}