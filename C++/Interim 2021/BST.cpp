//Binary Search Tree
#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

//Searching the element in the Tree
bool search(Node* root, int x){
    if(root == NULL)
        return NULL;
    if(root->data == x)
        return root;
    if(x > root->data)
        return search(root->right, x);
    return search(root->left, x);
}

//Inserting the element to the correct position
Node* insert(Node* root, int d){
    if(root == NULL){
        return new Node(d);
    }
    if(d > root->data){
        root->right = insert(root->right, d);
    }
    else{
        root->left = insert(root->left, d);
    }
    return root;
}

//Traversing through the tree inorder
void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " --> ";
    inorder(root->right);
}

int main() {
    Node* root = NULL;
    root = insert(root, 20);
    insert(root,5);
    insert(root,1);
    insert(root,15);
    insert(root,9);
    insert(root,7);
    insert(root,14);
    insert(root,29);
    insert(root,50);
    insert(root,42);
    insert(root,49);
    insert(root,35);
    inorder(root);
    cout << endl;
    if (search(root, 14)){
        cout << "Element exists" << endl;
    }
    else{
        cout << "Element does not exists"<<endl;
    }
    insert(root, 10);
    inorder(root);
    cout << endl;
    return 0;
}