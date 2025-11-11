#include <iostream>
using namespace std;

struct node {
    int value;
    node* left;
    node* right;

    node(int v) {
        value = v;
        left = right = NULL;
    }
};

node* insertNode(node* root, int val) {
    if (root == NULL) {
        return new node(val);
    }
    if (val < root->value)
        root->left = insertNode(root->left, val);
    else if (val > root->value)
        root->right = insertNode(root->right, val);
    return root;
}

// Traversals
void preorder(node* root) {
    if (root == NULL) return;
    cout << root->value << "->";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->value << "->";
    inorder(root->right);
}

void postorder(node* root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->value << "->";
}

int main() {
    node* root = NULL;

    
    root = insertNode(root, 32);
    root = insertNode(root, 12);
    root = insertNode(root, 54);
    root = insertNode(root, 3);
    root = insertNode(root, 8);
    root = insertNode(root, 5);
    root = insertNode(root, 67);

    cout << "Preorder: ";
    preorder(root);
    cout << "\n";

    cout << "Inorder: ";
    inorder(root);
    cout << "\n";

    cout << "Postorder: ";
    postorder(root);
    cout << "\n";

    return 0;
}
