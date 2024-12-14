#include<iostream>
#include<queue>
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

Node* bst(Node* root, int data) {
    if (root == NULL) {
        root = new Node(data);
        return root;
    }

    if (root->data > data) {
        root->left = bst(root->left, data);
    }
    if (root->data < data) {
        root->right = bst(root->right, data);
    }

    return root;
}

void takeInput(Node* &root) {
    int data;
    cout << "Enter data (enter -1 to stop): " << endl;
    cin >> data;

    while (data != -1) {
        root = bst(root, data);
        cin >> data;
    }
}

void level(Node* root) {
    if (root == NULL) {
        return;
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if (temp == NULL) {
            cout << endl;
            if (!q.empty()) {
                q.push(NULL);
            }
        } else {
            cout << temp->data << " ";
            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }
    }
}

void convertIntoSortedDLL(Node* root, Node* &head) {
    if (root == NULL) {
        return;
    }
    convertIntoSortedDLL(root->right, head);

    root->right = head;

    if (head != NULL) {
        head->left = root;
    }
    head = root;

    convertIntoSortedDLL(root->left, head);
}

void printLinkedList(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->right;
    }
    cout << endl;
}

int main() {
    Node* root = NULL;
    takeInput(root); // Input for BST
    cout << "BST Level Order: " << endl;
    level(root); // Display BST in level order

    Node* head = NULL;
    convertIntoSortedDLL(root, head);
    cout << "DLL: ";
    printLinkedList(head);

    return 0;
}
