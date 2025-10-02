#include <iostream>
#include <queue>   // required for BFS queue
using namespace std;

struct node {
    int value;
    node* right;
    node* left;

    node(int v) {
        value = v;
        left = NULL;
        right = NULL;
    }
};

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

void bfs(node* root) {
    if (!root) return;

    queue<node*> q;
    q.push(root);

    while (!q.empty()) {
        node* curr = q.front();
        q.pop();

        cout << curr->value << "->";  

        if (curr->left) q.push(curr->left);
        if (curr->right) q.push(curr->right);
    }
}

int main() {
    node* node1 = new node(3);
    node* node2 = new node(5);
    node* node3 = new node(8);
    node* node4 = new node(12);
    node* node5 = new node(32);
    node* node6 = new node(54);
    node* node7 = new node(67);

    node* root = node1;
    root->left = node2;
    root->right = node3;
    root->left->right = node4;
    root->left->left = node5;
    root->right->left = node6;
    root->left->right->right = node7;

    cout << "Preorder: ";
    preorder(root);
    cout << "\n";

    cout << "Inorder: ";
    inorder(root);
    cout << "\n";

    cout << "Postorder: ";
    postorder(root);
    cout << "\n";

    cout << "BFS: ";
    bfs(root);
    cout << "\n";

    return 0;
}
